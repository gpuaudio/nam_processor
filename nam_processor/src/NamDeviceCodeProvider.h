/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_DEVICE_CODE_PROVIDER_H
#define NAM_NAM_DEVICE_CODE_PROVIDER_H

#include <os_utilities/IMemStream.h>
#include <processor_api/DeviceCodeProvider.h>
#include <processor_api/DeviceCodeSpecification.h>
#include <processor_api/InputStream.h>

#include <istream>
#include <memory>
#include <string>

class NamDeviceCodeProvider : public GPUA::processor::v2::DeviceCodeProvider {
public:
    NamDeviceCodeProvider(const GPUA::processor::v2::DeviceCodeSpecification& specification);
    ~NamDeviceCodeProvider() override = default;

    // Copy ctor and copy assignment are deleted along with move assignment operator deletion
    NamDeviceCodeProvider& operator=(NamDeviceCodeProvider&&) noexcept = delete;

    // GPUA::processor::v2::DeviceCodeProvider method
    GPUA::processor::v2::ErrorCode GetDeviceCode(GPUA::processor::v2::InputStream*& input_stream) noexcept override;

private:
    class StreamAdapter : public GPUA::processor::v2::InputStream {
        IMemStream m_stream;

    public:
        StreamAdapter(const char* mem, uint64_t size) :
            m_stream {mem, size} {}
        GPUA::processor::v2::ErrorCode Read(void* data, uint32_t& data_size) override {
            if (!m_stream.good()) {
                data_size = 0;
                return GPUA::processor::v2::ErrorCode::eOutOfRange;
            }
            m_stream.read(reinterpret_cast<char*>(data), data_size);
            data_size = static_cast<uint32_t>(m_stream.gcount());
            return GPUA::processor::v2::ErrorCode::eSuccess;
        }
    };
    std::unique_ptr<StreamAdapter> m_stream = nullptr;
    std::wstring m_platform;
};

#endif // NAM_NAM_DEVICE_CODE_PROVIDER_H
