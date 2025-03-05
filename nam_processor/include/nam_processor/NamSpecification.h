/*
 * Copyright (c) 2024 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_SPECIFICATION_H
#define NAM_NAM_SPECIFICATION_H

#include <cstdint>

namespace NamConfig {
enum class NetType {
    eWaveNet,
    eLSTM,
    eUnsupported
};
struct Specification {
    static constexpr uint32_t Magic = 0xC5EE71A2;
    uint32_t ThisMagic {Magic};

    uint32_t max_buffer_samples {};
    uint32_t threads_per_block {};

    NetType type {NetType::eUnsupported};

    // processor params
    void const* head_scale {};
    uint32_t const* dilations {};
    void const** weights {};

    // LSTM specific
    uint32_t nlayers;
    uint32_t hidden_size;
    uint32_t nlocal_samples;
};
} // namespace NamConfig

#endif // NAM_NAM_SPECIFICATION_H
