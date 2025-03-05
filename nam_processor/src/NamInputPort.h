/*
 * Copyright (c) 2024 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_INPUT_PORT_H
#define NAM_NAM_INPUT_PORT_H

#include <processor_api/InputPort.h>
#include <processor_api/OutputPort.h>

class NamInputPort : public GPUA::processor::v2::InputPort {
public:
    explicit NamInputPort(GPUA::processor::v2::OutputPort* output_port);

    ~NamInputPort() = default;

    // Copy ctor and copy assignment are deleted along with move assignment operator deletion
    NamInputPort& operator=(NamInputPort&&) = delete;

    ////////////////////////////////
    // GPUA::processor::v2::InputPort methods
    GPUA::processor::v2::PortId GetPortId() noexcept override;

    GPUA::processor::v2::ErrorCode Connect(const GPUA::processor::v2::OutputPort& data_port) noexcept override;
    GPUA::processor::v2::ErrorCode Disconnect() noexcept override;
    GPUA::processor::v2::ErrorCode InputPortUpdated(GPUA::processor::v2::PortChangedFlags flags, const GPUA::processor::v2::OutputPort& data_port) noexcept override;

    uint32_t GetInputGrain() const noexcept override;

    GPUA::processor::v2::ErrorCode GetPortDescription(const GPUA::processor::v2::PortDescription*& description) const noexcept override;
    // GPUA::processor::v2::InputPort methods
    ////////////////////////////////

    uint32_t m_current_buffer_size {};

    bool m_changed {false};

private:
    GPUA::processor::v2::OutputPort* m_output_port;
};

#endif // NAM_NAM_INPUT_PORT_H
