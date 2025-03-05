/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#pragma once

#include "gpu_primitives/Activation.h"
#include "gpu_primitives/GpuMatrix.h"
#include "gpu_primitives/GpuVector.h"

#if !defined(GPU_AUDIO_MAC)
#include <cstdint>
#endif

namespace gpua {
#if defined(GPU_AUDIO_DEVICE) && !defined(GPU_AUDIO_MAC)
template <class Context, uint32_t ELEMENTS, typename TYPE = float>
__device_fct __forceinline_fct void printVector(__thread_addr Context& context, __device_addr Vector<ELEMENTS, TYPE> const& vec) {
    if (context.threadId() == 0) {
        printf("== == == == vec %u == == == ==\n", ELEMENTS);

        for (uint32_t eid = 0; eid < ELEMENTS; ++eid) {
            printf("%.3f ", vec[eid]);
        }
        printf("\n\n");
    }
}
template <class Context, uint32_t ROWS, uint32_t COLS, typename TYPE, MatrixStorage STORAGE>
__device_fct __forceinline_fct void printMatrix(__thread_addr Context& context, __device_addr Matrix<ROWS, COLS, TYPE, STORAGE> const& mat) {
    if (context.threadId() == 0) {
        printf("== == == == vec %u x %u == == == ==\n", ROWS, COLS);

        for (uint32_t r = 0; r < ROWS; ++r) {
            for (uint32_t c = 0; c < COLS; ++c) {
                printf("%.3f ", mat(r, c));
            }
            printf("\n");
        }
        printf("\n");
    }
}
#endif

namespace lstm {
template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
struct LSTMCell {
    static_assert((Threads & 31u) == 0u, "thread count must be a multiple of the warp size");

    using HiddenWeightFragment = gpua::MatrixFragment<Threads, HiddenSize * 4, HiddenSize, Type, gpua::MatrixStorage::row_major, true, false>;
    using InputWeightFragment = gpua::MatrixFragment<Threads, HiddenSize * 4, InputSize, Type, gpua::MatrixStorage::row_major, true, false, HiddenWeightFragment::ThreadsPerMajor>;

    using WeightMat = gpua::Matrix<HiddenSize * 4, InputSize + HiddenSize, Type, gpua::MatrixStorage::row_major>;
    struct CombInfo {
        gpua::Vector<HiddenSize * 4, Type> b;
        struct {
            gpua::Vector<HiddenSize, Type> h;
            gpua::Vector<HiddenSize, Type> c;
        };
    };
    struct CombInfoPart2 {
        gpua::Vector<HiddenSize, Type> h;
        gpua::Vector<HiddenSize, Type> c;
    };

    WeightMat m_w;
    CombInfo m_comb;

public:
    struct Smem {
        // TODO: union to overlap ifgo with h and c?
        gpua::Vector<HiddenSize * 4, Type> ifgo;
        CombInfo vectors;
    };
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The LSTMCell processing function
     * @param context [in] A context that provides information for the thread block (dimensions, indices, shared memory, ...)
     * @param smem [-] temporary shared memory required during processing
     * @param state [in/out] the state between cells
     * @param nsamples [in] the number of samples to process
     */
    template <class Context, typename StateMat>
    __device_fct void Process(__thread_addr Context& context,
        __threadgroup_addr Smem& smem,
        __threadgroup_addr StateMat& state,
        uint32_t nsamples) __device_addr {
        constexpr bool AllThreadsActive = HiddenWeightFragment::ThreadsPerMajor * HiddenSize * 4 == Threads;
        uint32_t tid = context.threadId();

        // load the state to smem in parallel
        for (uint32_t i = tid; i < sizeof(CombInfo) / sizeof(Type); i += Threads) {
            reinterpret_cast<__threadgroup_addr Type*>(&smem.vectors)[i] = reinterpret_cast<__device_addr Type*>(&m_comb)[i];
        }

        InputWeightFragment input_fragment = InputWeightFragment::template LoadFromLarger<0, 0>(context, m_w);
        HiddenWeightFragment hidden_fragment = HiddenWeightFragment::template LoadFromLarger<0, InputSize>(context, m_w);
        uint32_t row_id = hidden_fragment.GetMinorId(context);
        uint32_t row_el_id = hidden_fragment.GetMajorId(context);

        context.synchronize();
        // load an entry of c to a register for each thread
        Type c = 0;
        if (tid < HiddenSize)
            c = smem.vectors.c[tid];

        // loop over the input samples
        for (uint32_t sid = 0; sid < nsamples; ++sid) {
            // compute ifgo = w * xh + b
            Type val = DualMultiply(context, hidden_fragment, smem.vectors.h, input_fragment, state.template GetPartialCol<0, InputSize>(sid));

            if ((HiddenWeightFragment::ThreadsPerMajor == 1 || row_el_id == 0) && (AllThreadsActive || row_id < 4 * HiddenSize)) {
                Type myval = val + smem.vectors.b[row_id];

                bool sigm = row_id < 3 * HiddenSize;
                if (sigm) {
                    // sigmoid adjustment
                    myval = myval * 0.5f;
                }
                myval = gpua::ActivationFuncFastTanH::Eval(myval);
                if (sigm) {
                    // sigmoid adjustment
                    myval = 0.5f * (myval + 1.0f);
                }
                smem.ifgo[row_id] = myval;
            }
            context.synchronize();
            // apply activations to update c and h
            if (tid < HiddenSize) {
                Type sigm_i = smem.ifgo[tid];
                Type sigm_f = smem.ifgo[tid + HiddenSize];
                Type sigm_o = smem.ifgo[tid + 2 * HiddenSize];
                Type tanh_g = smem.ifgo[tid + 3 * HiddenSize];

                c = sigm_f * c + sigm_i * tanh_g;
                // smem.vectors.c[ttid] = c;
                Type tanh_c = gpua::ActivationFuncFastTanH::Eval(c);
                Type h = sigm_o * tanh_c;
                state(tid, sid) = h;
                smem.vectors.h[tid] = h;
            }
            context.synchronize();
        }
        // store updated c in shared memory
        if (tid < HiddenSize) {
            smem.vectors.c[tid] = c;
        }
        context.synchronize();
        // write h and c back to device memory for the next chunk of the input
        if (tid < sizeof(CombInfoPart2) / sizeof(float)) {
            (&m_comb.h[0])[tid] = (&smem.vectors.h[0])[tid];
        }
        context.synchronize();
    }
#endif
};

template <uint32_t MAX_NUM_LAYERS, uint32_t INPUT_SIZE, uint32_t HIDDEN_SIZE, uint32_t NUM_SAMPLES, uint32_t THREADS, typename TYPE = float>
struct LongShortTermMemory {
    static_assert(INPUT_SIZE == 1, "");
    static_assert(HIDDEN_SIZE <= THREADS, "");
    static_assert(NUM_SAMPLES <= THREADS, "");

    static __program_scope constexpr uint32_t MaxNumLayers = MAX_NUM_LAYERS;
    static __program_scope constexpr uint32_t InputSize = INPUT_SIZE;
    static __program_scope constexpr uint32_t HiddenSize = HIDDEN_SIZE;
    static __program_scope constexpr uint32_t NumSamples = NUM_SAMPLES;
    static __program_scope constexpr uint32_t Threads = THREADS;

    using Type = TYPE;
    using StateMat = gpua::MatrixShared<HiddenSize, NumSamples, Type, gpua::MatrixStorage::col_major>;

    using FirstLayerType = LSTMCell<InputSize, HiddenSize, Threads, Type>;
    using RemLayersType = LSTMCell<HiddenSize, HiddenSize, Threads, Type>;

    struct HeadWeights {
        gpua::Vector<HIDDEN_SIZE, Type> m_head_weight;
        Type m_head_bias;
    };
    HeadWeights m_head_data;
    uint32_t m_nlayers {MaxNumLayers};

    FirstLayerType m_first_layer;
    RemLayersType m_rem_layers[MaxNumLayers - 1];

    struct Smem {
        StateMat in_out_state;
        union {
            typename FirstLayerType::Smem first_layer_smem;
            typename RemLayersType::Smem rem_layer_smem;
        };
        union {
            HeadWeights head_data;
            float _[32];
        };
    };

public:
#if defined(GPU_AUDIO_DEVICE)
    /**
     * @brief The LSTM processing function processes samples using the LSTM model
     * @param context [in] A context that provides information for the thread block (dimensions, indices, shared memory, ...)
     * @param input [in] pointer to `num_elements` input samples
     * @param output [in/out] pointer to memory location to write the `num_elements` output samples to
     * @param num_elements [in] the number of samples to process
     */
    template <class Context>
    __device_fct void Process(__thread_addr Context& context,
        __device_addr float const* input,
        __device_addr float* output,
        uint32_t num_elements) __device_addr {
        uint32_t tid = context.threadId();
        // get the block's shared memory
        __threadgroup_addr Smem& smem = *context.template smem_offset<Smem>(0u);

        // load head weights to shared memory
        if (tid < sizeof(HeadWeights) / sizeof(float)) {
            reinterpret_cast<__threadgroup_addr float*>(&smem.head_data)[tid] = reinterpret_cast<__device_addr float*>(&m_head_data)[tid];
        }

        // loop over `num_elements` samples and process `this_samples` <= `NumSamples` samples in each iteration
        for (uint32_t cursor {0u}; cursor < num_elements; cursor += NumSamples) {
            uint32_t this_samples = min(num_elements - cursor, NumSamples);

            // load the input from device memory to the state in shared memory
            if (tid < this_samples) {
                smem.in_out_state(0, tid) = input[cursor + tid];
            }
            context.synchronize();

            // process the first layer
            m_first_layer.template Process<Context, StateMat>(context, smem.first_layer_smem, smem.in_out_state, this_samples);
            // process the remaining layers
            for (uint32_t lid = 1; lid < m_nlayers; ++lid) {
                m_rem_layers[lid - 1].template Process<Context, StateMat>(context, smem.rem_layer_smem, smem.in_out_state, this_samples);
            }

            // dot product of last layer's hidden state with head weight; head bias added to result
            constexpr uint32_t ThreadsPerRow = HiddenSize <= 4 ? 1 : HiddenSize <= 8 ? 2 :
                                                                                       4;
            constexpr uint32_t ElementsPerThread = HiddenSize / ThreadsPerRow;
            constexpr uint32_t Groups = Threads / ThreadsPerRow;
            const uint32_t group_id = tid / ThreadsPerRow;
            const uint32_t within_group_tid = tid % ThreadsPerRow;

            for (uint32_t sid = group_id; sid < this_samples; sid += Groups) {
                Type val = 0;
                // accumulate elements per thread
#pragma unroll
                for (uint32_t r = 0; r < ElementsPerThread; ++r) {
                    val += smem.in_out_state(r * ThreadsPerRow + within_group_tid, sid) * smem.head_data.m_head_weight[r * ThreadsPerRow + within_group_tid];
                }
                // accumulate elements of threads in the same row, add bias and store result to shared
                if (ThreadsPerRow > 1) {
                    val = subwarp_sum<ThreadsPerRow>(context, val);
                    if (within_group_tid == 0) {
                        smem.in_out_state(0, sid) = val + smem.head_data.m_head_bias;
                    }
                }
                else {
                    smem.in_out_state(0, sid) = val + smem.head_data.m_head_bias;
                }
            }
            context.synchronize();

            // write the output from shared memory to the device memory
            if (tid < this_samples) {
                output[cursor + tid] = smem.in_out_state(0, tid);
            }
        }
    }
#endif
}; // namespace lstm
} // namespace lstm

} // namespace gpua

template <uint32_t HiddenSize, uint32_t NumSamples, uint32_t Threads>
struct GenericLSTMConfig {
    using LSTM = gpua::lstm::LongShortTermMemory<4u, 1u, HiddenSize, NumSamples, Threads, float>;
};
