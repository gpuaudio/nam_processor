/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "NamProcessor.h"
#include "device/GpuWavenetSetters.h"
#include "device/GpuLstmSetters.h"

#include <processor_api/GpuTaskData.h>
#include <processor_api/PortChangedFlags.h>
#include <processor_api/ProcessorSpecification.h>
#include <processor_api/MemoryManager.h>

#include <algorithm>
#include <float.h>
#include <iostream>
#include <map>
#include <stdio.h>

using namespace GPUA::processor::v2;

namespace {
ErrorCode get_entry_index(uint32_t& entry_index, NamConfig::Specification const* spec) {
    if (spec->type == NamConfig::NetType::eWaveNet) {
        if (spec->threads_per_block == 64u) {
            if (spec->max_buffer_samples == 64u) {
                entry_index = 0u;
                return ErrorCode::eSuccess;
            }
        }
        if (spec->threads_per_block == 128u) {
            if (spec->max_buffer_samples == 64) {
                entry_index = 1u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 128u) {
                entry_index = 2u;
                return ErrorCode::eSuccess;
            }
        }
        if (spec->threads_per_block == 256u) {
            if (spec->max_buffer_samples == 64u) {
                entry_index = 3u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 128u) {
                entry_index = 4u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 256u) {
                entry_index = 5u;
                return ErrorCode::eSuccess;
            }
        }
        if (spec->threads_per_block == 512u) {
            if (spec->max_buffer_samples == 64u) {
                entry_index = 6u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 128u) {
                entry_index = 7u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 256u) {
                entry_index = 8u;
                return ErrorCode::eSuccess;
            }
            if (spec->max_buffer_samples == 512u) {
                entry_index = 9u;
                return ErrorCode::eSuccess;
            }
        }
    }
    else if (spec->type == NamConfig::NetType::eLSTM) {
        if (spec->nlocal_samples == 32u) {
            if (spec->hidden_size == 2u) {
                entry_index = 10u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 4u) {
                entry_index = 11u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 8u) {
                entry_index = 12u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 12u) {
                entry_index = 13u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 16u) {
                entry_index = 14u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 20u) {
                entry_index = 15u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 24u) {
                entry_index = 16u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 28u) {
                entry_index = 17u;
                return ErrorCode::eSuccess;
            }
            if (spec->hidden_size == 32u) {
                entry_index = 18u;
                return ErrorCode::eSuccess;
            }
        }
    }
    return ErrorCode::eUnsupported;
}
} // namespace

Module& NamProcessor::GetModule() const noexcept {
    return m_module;
}

ErrorCode NamProcessor::SetData(void* data, uint32_t data_size) noexcept {
    return ErrorCode::eSuccess;
}

ErrorCode NamProcessor::GetData(void* data, uint32_t& data_size) const noexcept {
    return ErrorCode::eFail;
}

uint32_t NamProcessor::GetInputPortCount() const noexcept {
    return 1u;
}

ErrorCode NamProcessor::GetInputPort(uint32_t index, InputPort*& port) noexcept {
    if (index == 0) {
        port = m_input_port.get();
        return ErrorCode::eSuccess;
    }
    port = nullptr;
    return ErrorCode::eOutOfRange;
}

::ErrorCode NamProcessor::OnBlueprintRebuild(const ::ProcessorBlueprint*& blueprint) noexcept {
    m_changed = m_input_port->m_changed = false;
    blueprint = &m_proc_data;
    return ErrorCode::eSuccess;
}

::ErrorCode NamProcessor::PrepareForProcess(const ::LaunchData& data, uint32_t expected_chunks) noexcept {
    // not required right now; could potentially change configuration or similar in SetData
    // SetData(data.app_data, data.app_data_size);

    // if something changed that requires a blueprint re-build
    if (m_changed || m_input_port->m_changed) {
        return ErrorCode::eBlueprintUpdateNeeded;
    }
    return ErrorCode::eNoChangesNeeded;
}

::ErrorCode NamProcessor::PrepareChunk(void* proc_data, void** task_data, uint32_t chunk_id) noexcept {
    gpua::ProcessorParameter* proc_params = reinterpret_cast<gpua::ProcessorParameter*>(proc_data);
    // the processor requires a pointer to the allocated device memory holding the network data
    proc_params->p_dev_mem = reinterpret_cast<void*>(m_d_net->GetGpuPointer());

    // set the task parameter based on the chosen network type
    if (m_net_type == NamConfig::NetType::eWaveNet) {
        gpua::WavenetTaskParameter* task_params = reinterpret_cast<gpua::WavenetTaskParameter*>(task_data[0]);
        // the number of samples currently in the buffer; might not be full
        task_params->s_nsamples = m_input_port->m_current_buffer_size;
        // the current front of the ringbuffer
        task_params->s_ringbuffer_cursor = m_ring_buffer_cursor;
        // advancethe  cursor for the next call
        m_ring_buffer_cursor += m_input_port->m_current_buffer_size;
    }
    else if (m_net_type == NamConfig::NetType::eLSTM) {
        gpua::LstmTaskParameter* task_params = reinterpret_cast<gpua::LstmTaskParameter*>(task_data[0]);
        // the number of samples currently in the buffer; might not be full
        task_params->s_nsamples = m_input_port->m_current_buffer_size;
    }
    else {
        return ErrorCode::eUnsupported;
    }

    return ErrorCode::eSuccess;
}

void NamProcessor::OnProcessingEnd(bool after_fat_transfer) noexcept {
}

::ProcessorProfiler* NamProcessor::GetProcessorProfiler() noexcept {
    return nullptr;
}

template <typename NetworkType>
void NamProcessor::SetUpCommon(NamConfig::Specification const* spec) {
    uint32_t entry_fct_idx {};
    if (get_entry_index(entry_fct_idx, spec) != ErrorCode::eSuccess) {
        throw std::runtime_error("Unsupported buffer size / threads per block config");
    }

    // specify what type of output port the processor has and create it
    PortInfo output_port_info {};
    output_port_info.type = PortType::eRegularPort;
    output_port_info.data_type = PortDataType::eSample32;
    m_output_port = m_port_factory.CreateDataPort(0, output_port_info);

    // create the processor's input port
    m_input_port = std::make_unique<NamInputPort>(m_output_port.get());

    // the entry index depends on the network type (LSTM, Wavenet) and the configuration
    m_gpu_task.entry_idx = entry_fct_idx;
    // the processor always requires a single block
    m_gpu_task.block_count = 1u;
    // the number of threads per block depends on the network type (LSTM, Wavenet)
    // it is user-specified for Wavenet and based on the configuration for LSTM
    m_gpu_task.thread_count = NetworkType::Threads;
    // the amount of shared memory per block depends on the configuration
    m_gpu_task.shared_mem_size = sizeof(typename NetworkType::Smem);
    // the task parameters have different types/sizes for LSTM and Wavenet
    if (spec->type == NamConfig::NetType::eWaveNet) {
        m_gpu_task.task_param_size = sizeof(gpua::WavenetTaskParameter);
    }
    else if (spec->type == NamConfig::NetType::eLSTM) {
        m_gpu_task.task_param_size = sizeof(gpua::LstmTaskParameter);
    }
    // processor only has one task and one block per task - not dependent on anything
    m_gpu_task.processing_flags = ProcessingFlag::eProcessingFlagDefault;
}

template <typename NetworkType>
void NamProcessor::SetUpWavenet(NamConfig::Specification const* spec) {
    uint32_t entry_fct_idx {};
    if (get_entry_index(entry_fct_idx, spec) != ErrorCode::eSuccess) {
        throw std::runtime_error("NamProcessor::SetUpWavenet: Unsupported buffer size / threads per block config");
    }

    // Wavenet!
    m_net_type = spec->type;

    using namespace gpua::wavenet;

    // initialize the ring-buffer cursor
    m_ring_buffer_cursor = 0u;

    // allocate host memory required for the network parameters
    GPUA::processor::v2::MemoryManager::CpuMemoryPointer h_wavenet = m_memory_manager.AllocatePinnedCpuMemory(sizeof(NetworkType));

    ////////////////////////////////
    // setup CPU wavenet parameters
    NetworkType* host_wavenet = reinterpret_cast<NetworkType*>(h_wavenet.get()->Data());
    Init(*host_wavenet);

    SetHeadScale(*host_wavenet, *reinterpret_cast<typename NetworkType::Type const*>(spec->head_scale));

    auto weights = reinterpret_cast<typename NetworkType::Type const**>(spec->weights);
    uint32_t woff {0u};

    // the dilations for all layers
    uint32_t const* dilations = reinterpret_cast<uint32_t const*>(spec->dilations);
    uint32_t doff {0u};

    uint32_t nlayer_arrays = GetNumLayerArrays(*host_wavenet);
    for (uint32_t la_id {0u}; la_id < nlayer_arrays; ++la_id) {
        // re-channel 1x1 convolution weights
        SetLayerArrayRechannel(*host_wavenet, la_id, weights[woff], weights[woff + 1]);
        woff += 2u;

        uint32_t nlayers = GetLayerArrayNumLayers(*host_wavenet, la_id);
        for (uint32_t l_id {0u}; l_id < nlayers; ++l_id) {
            // dilated convolution kernel size and weights
            uint32_t ksize = GetLayerArrayLayerKernelSize(*host_wavenet, la_id, l_id);
            SetLayerArrayLayerDilatedConvolution(*host_wavenet, la_id, l_id, &weights[woff], weights[woff + ksize], dilations[doff]);
            woff += ksize + 1u;
            ++doff;

            // input mix-in 1x1 convolution weights
            SetLayerArrayLayerInputMixin(*host_wavenet, la_id, l_id, weights[woff], weights[woff + 1]);
            woff += 2u;

            // output 1x1 convolution weights
            SetLayerArrayLayerOutput1x1(*host_wavenet, la_id, l_id, weights[woff], weights[woff + 1]);
            woff += 2u;
        }
        // head re-channel 1x1 convolution weights
        SetLayerArrayHeadRechannel(*host_wavenet, la_id, weights[woff], weights[woff + 1]);
        woff += 2u;
    }
    // setup CPU wavenet parameters
    ////////////////////////////////

    // allocate the required device memory for the network parameters and copy the data from the set-up host params
    m_d_net = m_memory_manager.AllocateGpuMemory(sizeof(NetworkType));
    m_memory_manager.MemCpyCpuToGpu(*m_d_net.get(), 0u, *h_wavenet.get(), 0u, sizeof(NetworkType));

    // set up general things
    SetUpCommon<NetworkType>(spec);
}

template <typename NetworkType>
void NamProcessor::SetUpLstm(NamConfig::Specification const* spec) {
    uint32_t entry_fct_idx {};
    if (get_entry_index(entry_fct_idx, spec) != ErrorCode::eSuccess) {
        throw std::runtime_error("NamProcessor::SetUpLstm: Unsupported buffer size / threads per block config");
    }

    // LSTM!
    m_net_type = spec->type;

    using namespace gpua::lstm;

    // allocate host memory required for the network parameters
    GPUA::processor::v2::MemoryManager::CpuMemoryPointer h_lstm = m_memory_manager.AllocatePinnedCpuMemory(sizeof(NetworkType));

    ////////////////////////////////
    // setup CPU LSTM parameters
    NetworkType* host_lstm = reinterpret_cast<NetworkType*>(h_lstm.get()->Data());

    auto weights = reinterpret_cast<typename NetworkType::Type const**>(spec->weights);
    uint32_t woff {0u};

    if (spec->nlayers > NetworkType::MaxNumLayers) {
        throw std::runtime_error("NamProcessor::SetUpLstm: number of layers exceeds maximum");
    }
    SetLSTMNumLayers(*host_lstm, spec->nlayers);

    SetLSTMHeadBias(*host_lstm, *reinterpret_cast<typename NetworkType::Type const*>(spec->head_scale));

    SetLSTMHeadWeight(*host_lstm, weights[woff]);
    woff += 1;

    InitializeLSTMCell(host_lstm->m_first_layer, weights + woff);
    woff += 4;
    for (uint32_t lid {1u}; lid < host_lstm->m_nlayers; ++lid) {
        InitializeLSTMCell(host_lstm->m_rem_layers[lid - 1], weights + woff);
        woff += 4;
    }
    // setup CPU LSTM parameters
    ////////////////////////////////

    // allocate the required device memory for the network parameters and copy the data from the set-up host params
    m_d_net = m_memory_manager.AllocateGpuMemory(sizeof(NetworkType));
    m_memory_manager.MemCpyCpuToGpu(*m_d_net.get(), 0u, *h_lstm.get(), 0u, sizeof(NetworkType));

    // set up general things
    SetUpCommon<NetworkType>(spec);
}

NamProcessor::NamProcessor(::ProcessorSpecification& specification, ::Module& module) :
    m_module {module},
    m_proc_data {1u, sizeof(gpua::ProcessorParameter), ::ProcessorEndCallback::eNoCallback, 1u, &m_gpu_task},
    m_port_factory {specification.port_factory},
    m_memory_manager {specification.memory_manager} {
    const NamConfig::Specification* spec = reinterpret_cast<const NamConfig::Specification*>(specification.user_data);
    if (specification.data_size != sizeof(NamConfig::Specification) || spec->ThisMagic != spec->Magic) {
        throw std::runtime_error("Error in NamProcessor::NamProcessor: invalid specification provided");
    }

    // Call SetUpWavenet for the chosen configuration
    if (spec->type == NamConfig::NetType::eWaveNet) {
        if (spec->threads_per_block == 64u) {
            if (spec->max_buffer_samples == 64u) {
                SetUpWavenet<GenericWavenetConfig<64u, 64u>::Wavenet>(spec);
            }
        }
        if (spec->threads_per_block == 128u) {
            if (spec->max_buffer_samples == 64u) {
                SetUpWavenet<GenericWavenetConfig<64u, 128u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 128u) {
                SetUpWavenet<GenericWavenetConfig<128u, 128u>::Wavenet>(spec);
            }
        }
        if (spec->threads_per_block == 256u) {
            if (spec->max_buffer_samples == 64u) {
                SetUpWavenet<GenericWavenetConfig<64u, 256u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 128u) {
                SetUpWavenet<GenericWavenetConfig<128u, 256u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 256u) {
                SetUpWavenet<GenericWavenetConfig<256u, 256u>::Wavenet>(spec);
            }
        }
        if (spec->threads_per_block == 512u) {
            if (spec->max_buffer_samples == 64u) {
                SetUpWavenet<GenericWavenetConfig<64u, 512u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 128u) {
                SetUpWavenet<GenericWavenetConfig<128u, 512u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 256u) {
                SetUpWavenet<GenericWavenetConfig<256u, 512u>::Wavenet>(spec);
            }
            if (spec->max_buffer_samples == 512u) {
                SetUpWavenet<GenericWavenetConfig<512u, 512u>::Wavenet>(spec);
            }
        }
    }
    // Call GenericLSTMConfig for the chosen configuration
    else if (spec->type == NamConfig::NetType::eLSTM) {
        if (spec->nlocal_samples == 32u) {
            if (spec->hidden_size == 2u) {
                SetUpLstm<GenericLSTMConfig<2u, 32u, 32u>::LSTM>(spec);
            }
            if (spec->hidden_size == 4u) {
                SetUpLstm<GenericLSTMConfig<4u, 32u, 32u>::LSTM>(spec);
            }
            if (spec->hidden_size == 8u) {
                SetUpLstm<GenericLSTMConfig<8u, 32u, 32u>::LSTM>(spec);
            }
            if (spec->hidden_size == 12u) {
                SetUpLstm<GenericLSTMConfig<12u, 32u, 64u>::LSTM>(spec);
            }
            if (spec->hidden_size == 16u) {
                SetUpLstm<GenericLSTMConfig<16u, 32u, 64u>::LSTM>(spec);
            }
            if (spec->hidden_size == 20u) {
                SetUpLstm<GenericLSTMConfig<20u, 32u, 160u>::LSTM>(spec);
            }
            if (spec->hidden_size == 24u) {
                SetUpLstm<GenericLSTMConfig<24u, 32u, 192u>::LSTM>(spec);
            }
            if (spec->hidden_size == 28u) {
                SetUpLstm<GenericLSTMConfig<28u, 32u, 224u>::LSTM>(spec);
            }
            if (spec->hidden_size == 32u) {
                SetUpLstm<GenericLSTMConfig<32u, 32u, 256u>::LSTM>(spec);
            }
        }
    }
    else {
        throw std::runtime_error("Error in NamProcessor::NamProcessor: unsupported network type requested");
    }
}
