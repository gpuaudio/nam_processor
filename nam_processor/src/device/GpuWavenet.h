/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#pragma once

#include "gpu_primitives/Activation.h"
#include "gpu_primitives/GpuConv1x1.h"
#include "gpu_primitives/GpuRingbuffer.h"
#include "gpu_primitives/GpuMatrix.h"
#include "gpu_primitives/GpuVector.h"

#if !defined(GPU_AUDIO_MAC)
#include <cstdint>
#endif

namespace gpua {
namespace wavenet {
template <uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
struct DilatedConvolution {
    using Fragment = gpua::MatrixFragment<Threads, Channels, NumSamples, Type, gpua::col_major>;
    using ConvMat = gpua::MatrixShared<Channels, Channels, Type, gpua::row_major>;
    using Bias = gpua::Vector<Channels, Type>;

    struct Weights {
        ConvMat convMats[KernelSize];
        Bias bias;
        uint32_t dilation;
    };
    using Smem = Weights;

    Weights m_weights;

public:
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The DilatedConvolution processing function
     * @param context [in] a context that provides information for the thread block
     * @param ringbuffer [in] the layer ring-buffers; input data to the dilated convolution
     * @param smem [-] temporary shared memory required during processing
     * @param ringbuffer_cursor [in] current offset into the layer ring-buffers
     */
    template <class Context, class RingBuffer>
    __device_fct Fragment Process(__thread_addr Context& context,
        const __device_addr RingBuffer& ringbuffer,
        __threadgroup_addr Smem& smem,
        uint32_t ringbuffer_cursor) __device_addr {
        // smem load weights
        __threadgroup_addr uint32_t* smem_pointer = reinterpret_cast<__threadgroup_addr uint32_t*>(&smem);
        for (uint32_t i = context.threadId(); i < sizeof(Smem) / sizeof(uint32_t); i += Threads) {
            smem_pointer[i] = reinterpret_cast<__device_addr uint32_t*>(&m_weights)[i];
        }
        context.synchronize();

        // init frag from bias
        auto accumulator = Fragment::InitFromColVector(context, smem.bias);

#pragma unroll
        for (uint32_t k = 0; k < KernelSize; ++k) {
            uint32_t offset = smem.dilation * (KernelSize - 1 - k);
            auto input_fragment = ringbuffer.template LoadAsMatrixFragment<Fragment>(context, ringbuffer_cursor - offset);
            accumulator = Multiply(context, smem.convMats[k], input_fragment, accumulator);
        }
        return accumulator;
    }
#endif
};

template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t CHANNELS, uint32_t NumSamples, uint32_t Threads, typename Type>
struct Layer {
    static __program_scope constexpr uint32_t Channels = CHANNELS;

    using LayerDilatedConvolution = DilatedConvolution<KernelSize, Channels, NumSamples, Threads, Type>;
    using RingBuffer = gpua::MultiChannelRingBuffer<Channels, RingbufferSize, Type>;

    using InputMixin = gpua::Conv1x1<Channels, NumSamples, 1, Type, false>;
    using Output1x1 = gpua::Conv1x1<Channels, NumSamples, Channels, Type, true>;

    struct Smem {
        union {
            typename LayerDilatedConvolution::Smem dilation_temp;
            typename InputMixin::Smem input_temp;
            typename Output1x1::Smem output_temp;
        };
    };

    using Fragment = typename gpua::Matrix<Channels, NumSamples, Type>::template Fragment<Threads, gpua::col_major>;
    using InputCondition = typename gpua::Matrix<1, NumSamples, Type>::template Smem<gpua::row_major>;

    RingBuffer m_ringbuffer;
    LayerDilatedConvolution m_dilation_conv;
    InputMixin m_input_mixin;
    Output1x1 m_1x1;

public:
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The Layer processing function
     * @param context [in] a context that provides information for the thread block
     * @param data [in/out] layer input and output data, held in registers by the threads
     * @param condition [in] unaltered input samples in shared memory
     * @param head_input [in/out] head input data, held in registers by the threads
     * @param temp [-] temporary shared memory required during processing
     * @param ringbuffer_cursor [in] current offset into the layer ring-buffers
     */
    template <class Context>
    __device_fct void Process(__thread_addr Context& context,
        __thread_addr Fragment& data,
        __threadgroup_addr InputCondition const& condition,
        __thread_addr Fragment& head_input,
        __threadgroup_addr Smem& temp,
        uint32_t ringbuffer_cursor) __device_addr {
        // 3.3.0 store layer  input in ring buffer
        m_ringbuffer.Store(context, ringbuffer_cursor, data);

        // 3.3.1 compute dilation (using smem data and weights-1 loads from ring buffer) and store in smem
        auto z_frag = m_dilation_conv.Process(context, m_ringbuffer, temp.dilation_temp, ringbuffer_cursor);
        context.synchronize();

        // 3.3.2 add input mixin on top
        z_frag = m_input_mixin.Process(context, condition, temp.input_temp, z_frag);

        // 3.3.3 apply activation
        Activation activation {};
        z_frag.Visit(activation);

        // 3.3.4 add _z to head
        head_input += z_frag;
        context.synchronize();

        // 3.3.5 compute output as input + _1x1 with _z - overwrite input
        auto output_1x1 = m_1x1.Process(context, z_frag, temp.output_temp);
        data += output_1x1;
        context.synchronize();
    }
#endif
};

template <class LayerType,
    uint32_t InputChannels, uint32_t OutputChannels,
    uint32_t NumLayers, bool BiasWithHeadRechannel,
    uint32_t NumSamples, uint32_t Threads, typename Type>
struct LayerArray {
    using Rechannel = gpua::Conv1x1<LayerType::Channels, NumSamples, InputChannels, Type, false>;
    using HeadRechannel = gpua::Conv1x1<OutputChannels, NumSamples, LayerType::Channels, Type, BiasWithHeadRechannel>;

    struct Smem {
        union {
            typename LayerType::Smem layer_temp;
            typename Rechannel::Smem rechannel_temp;
            typename HeadRechannel::Smem head_rechannel_temp;
        };
    };

    using InputFragment = typename gpua::Matrix<InputChannels, NumSamples, Type>::template Fragment<Threads, gpua::col_major>;
    using DataFragment = typename gpua::Matrix<LayerType::Channels, NumSamples, Type>::template Fragment<Threads, gpua::col_major>;
    using HeadInputFragment = typename gpua::Matrix<LayerType::Channels, NumSamples, Type>::template Fragment<Threads, gpua::col_major>;
    using HeadOutputFragment = typename gpua::Matrix<OutputChannels, NumSamples, Type>::template Fragment<Threads, gpua::col_major>;

    LayerType m_layers[NumLayers];
    Rechannel m_rechannel;
    HeadRechannel m_head_rechannel;

public:
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The LayerArray processing function processes one layer per dilation
     * @param context [in] a context that provides information for the thread block
     * @param input [in] layer array input, held in registers by the threads
     * @param condition [in] unprocessed input samples in shared memory
     * @param head_input [in] head input data, held in registers by the threads
     * @param head_output [out] head output data, held in registers by the threads
     * @param temp [-] temporary shared memory required during processing
     * @param ringbuffer_cursor [in] current offset into the layer ring-buffers
     */
    template <class Context>
    __device_fct DataFragment Process(__thread_addr Context& context,
        __thread_addr const InputFragment& input,
        __threadgroup_addr typename gpua::Matrix<1, NumSamples, Type>::template Smem<gpua::row_major> const& condition,
        __thread_addr HeadInputFragment& head_input,
        __thread_addr HeadOutputFragment& head_output,
        __threadgroup_addr Smem& temp, uint32_t ringbuffer_cursor) __device_addr {
        // 3.1 compute rechanneled layer array input in smem
        DataFragment data = m_rechannel.Process(context, input, temp.rechannel_temp);
        context.synchronize();

// 3.2 go through layers and process each
#pragma unroll
        for (uint32_t i = 0; i < NumLayers; ++i) {
            m_layers[i].Process(context, data, condition, head_input, temp.layer_temp, ringbuffer_cursor);
        }

        // 3.4 update the head output
        // conv1x1 with bias
        head_output = m_head_rechannel.Process(context, head_input, temp.head_rechannel_temp);
        context.synchronize();
        return data;
    }
#endif
};

template <class LayerArray0, class LayerArray1, uint32_t NUM_SAMPLES, uint32_t THREADS, typename TYPE = float>
struct WavenetWith2LayerArrays {
    static __program_scope constexpr uint32_t Threads = THREADS;
    static __program_scope constexpr uint32_t NumSamples = NUM_SAMPLES;
    using Type = TYPE;

    using InputMatrix = gpua::Matrix<1, NumSamples, Type>;

    struct Smem {
        typename InputMatrix::template Smem<gpua::row_major> input;
        union {
            typename LayerArray0::Smem layer_array_0_temp;
            typename LayerArray1::Smem layer_array_1_temp;
        };
    };

    LayerArray0 m_layer_array0;
    LayerArray1 m_layer_array1;
    Type m_head_scale;

public:
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The Wavenet processing function processes samples using the wavenet model
     * @param context [in] an object that provides information for the thread block (dimensions, indices, shared memory, ...)
     * @param input [in] pointer to `num_elements` input samples
     * @param output [in/out] pointer to memroy location to write the `num_elements` output samples to
     * @param num_elements [in] the number of samples to process
     * @param ringbuffer_cursor [in] current offset into the layer ring-buffers
     */
    template <class Context>
    __device_fct void Process(__thread_addr Context& context,
        __device_addr float const* input,
        __device_addr float* output,
        uint32_t num_elements,
        uint32_t ringbuffer_cursor) __device_addr {
        ////////////////////////////////
        // BEGIN Overview
        // 1. load input to shared memory (2x one for condition and 1x for input)

        // 2. set head to zero (smem or fragments?)

        // 3. go through layer arrays
        // 3.1 compute rechanneled layer array input in smem

        // 3.2 go through layers
        // 3.3.0 store the rechanneled layer array input in ring buffer
        // 3.3.1 compute dilation (using smem data and weights-1 loads from ring buffer) and store in smem
        // 3.3.2 add input mixin on top
        // 3.3.3 apply activation
        // 3.3.4 add _z to head
        // 3.3.5 compute output as input + _1x1 with _z - overwrite input

        // 3.3 update the head output

        // 4. write the output
        // END Overview
        ////////////////
        // get the shared memory of the block
        __threadgroup_addr Smem& smem = *context.template smem_offset<Smem>(0u);

        for (uint32_t cursor = 0; cursor < num_elements; cursor += NUM_SAMPLES) {
            // 1. load input to shared memory (2x one for condition and 1x for input)
            smem.input.LoadLimited(context, input + cursor, num_elements - cursor);
            context.synchronize();
            auto input_data_fragment = LayerArray0::InputFragment::Load(context, smem.input);

            // 2. set head to zero (smem or fragments?)
            typename LayerArray0::HeadInputFragment head_input_0;

            // 3. go through layer arrays
            typename LayerArray0::HeadOutputFragment head_output_0;
            auto output_0 = m_layer_array0.Process(context, input_data_fragment, smem.input, head_input_0, head_output_0, smem.layer_array_0_temp, ringbuffer_cursor + cursor);

            typename LayerArray1::HeadOutputFragment head_output_1;
            typename LayerArray1::DataFragment data_fragment_1;
            m_layer_array1.Process(context, output_0, smem.input, head_output_0, head_output_1, smem.layer_array_1_temp, ringbuffer_cursor + cursor);

            // 4. write the output to smem
            head_output_1.Store(context, smem.input);
            context.synchronize();

            // 5. write the output
            smem.input.StoreLimited(context, output + cursor, num_elements, m_head_scale);
            if (cursor + NUM_SAMPLES < num_elements)
                context.synchronize();
        }
    }
#endif
};

template <typename ACTIVATION, uint32_t KERNEL_SIZE, uint32_t CHANNELS, uint32_t RING_BUFFER_SIZE = 64 * 1024>
struct LayerDesc {
    using Activation = ACTIVATION;
    static __program_scope constexpr uint32_t KernelSize = KERNEL_SIZE;
    static __program_scope constexpr uint32_t Channels = CHANNELS;
    static __program_scope constexpr uint32_t RingbufferSize = RING_BUFFER_SIZE;
};

template <uint32_t NUM_DILATIONS, typename LAYER_DESC>
struct LayerArrayDesc {
    static __program_scope constexpr uint32_t Dilations = NUM_DILATIONS;
    using LayerDesc = LAYER_DESC;
};

template <typename LayerArrayDesc0, typename LayerArrayDesc1, uint32_t NumSamples, uint32_t Threads, typename Type>
struct Wavenet2Builder {
    using LayerDesc0 = typename LayerArrayDesc0::LayerDesc;
    using LayerDesc1 = typename LayerArrayDesc1::LayerDesc;

    using Layer0 = Layer<LayerDesc0::RingbufferSize, typename LayerDesc0::Activation, LayerDesc0::KernelSize, LayerDesc0::Channels, NumSamples, Threads, Type>;
    using Layer1 = Layer<LayerDesc1::RingbufferSize, typename LayerDesc1::Activation, LayerDesc1::KernelSize, LayerDesc1::Channels, NumSamples, Threads, Type>;

    using LayerArray0 = LayerArray<Layer0, 1, LayerDesc1::Channels, LayerArrayDesc0::Dilations, false, NumSamples, Threads, Type>;
    using LayerArray1 = LayerArray<Layer1, LayerDesc0::Channels, 1, LayerArrayDesc1::Dilations, true, NumSamples, Threads, Type>;

    using Wavenet = WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>;
};
} // namespace wavenet
} // namespace gpua

#include "WavenetModelConfigs.h"
