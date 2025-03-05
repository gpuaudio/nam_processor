/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_PROCESSOR_H
#define NAM_NAM_PROCESSOR_H

#include "NamInputPort.h"
#include "Properties.h"

#include <nam_processor/NamSpecification.h>
#include <processor_api/GpuTaskData.h>
#include <processor_api/MemoryManager.h>
#include <processor_api/ModuleBase.h>
#include <processor_api/LaunchData.h>
#include <processor_api/Processor.h>
#include <processor_api/ProcessorBlueprint.h>
#include <processor_api/ProcessorProfiler.h>
#include <processor_api/PortFactory.h>

#include <cstdint>
#include <fstream>

class NamProcessor : public GPUA::processor::v2::Processor {
public:
    explicit NamProcessor(GPUA::processor::v2::ProcessorSpecification& specification, GPUA::processor::v2::Module& module);
    ~NamProcessor() = default;

    // Copy ctor and copy assignment are deleted along with move assignment operator deletion
    NamProcessor& operator=(NamProcessor&&) = delete;

    ////////////////////////////////
    // GPUA::processor::v2::Processor methods
    GPUA::processor::v2::Module& GetModule() const noexcept override;

    GPUA::processor::v2::ErrorCode SetData(void* data, uint32_t data_size) noexcept override;
    GPUA::processor::v2::ErrorCode GetData(void* data, uint32_t& data_size) const noexcept override;

    uint32_t GetInputPortCount() const noexcept override;
    GPUA::processor::v2::ErrorCode GetInputPort(uint32_t index, GPUA::processor::v2::InputPort*& port) noexcept override;

    GPUA::processor::v2::ErrorCode OnBlueprintRebuild(const GPUA::processor::v2::ProcessorBlueprint*& blueprint) noexcept override;
    GPUA::processor::v2::ErrorCode PrepareForProcess(const GPUA::processor::v2::LaunchData& data, uint32_t expected_chunks) noexcept override;
    GPUA::processor::v2::ErrorCode PrepareChunk(void* proc_data, void** task_data, uint32_t chunk_id) noexcept override;
    void OnProcessingEnd(bool after_fat_transfer) noexcept override;

    GPUA::processor::v2::ProcessorProfiler* GetProcessorProfiler() noexcept override;
    // GPUA::processor::v2::Processor methods
    ////////////////////////////////

private:
    /**
     * @brief Initialize common data of both Wavenet and LSTM; Shared part of the setup
     * @param spec [in/out] processor specification
     */
    template <typename NetworkType>
    void SetUpCommon(const NamConfig::Specification* spec);

    /**
     * @brief Initialize Wavenet data; Wavenet specific part of the setup
     * @param spec [in/out] processor specification
     */
    template <typename NetworkType>
    void SetUpWavenet(const NamConfig::Specification* spec);

    /**
     * @brief Initialize LSTM data; LSTM specific part of the setup
     * @param spec [in/out] processor specification
     */
    template <typename NetworkType>
    void SetUpLstm(const NamConfig::Specification* spec);

    GPUA::processor::v2::Module& m_module;
    GPUA::processor::v2::MemoryManager& m_memory_manager;
    GPUA::processor::v2::PortFactory& m_port_factory;

    GPUA::processor::v2::GpuTaskData m_gpu_task {};
    GPUA::processor::v2::ProcessorBlueprint m_proc_data;

    std::unique_ptr<NamInputPort> m_input_port;
    GPUA::processor::v2::OutputPortPointer m_output_port {0, 0};

    NamConfig::NetType m_net_type {NamConfig::NetType::eUnsupported};
    GPUA::processor::v2::MemoryManager::GpuMemoryPointer m_d_net {0, 0};

    uint32_t m_ring_buffer_cursor {};

    bool m_changed {true};
};

#endif // NAM_NAM_PROCESSOR_H
