/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_PROPERTIES_H
#define NAM_PROPERTIES_H

#include "ScrambledNames.h"
#include "GpuWavenet.h"

namespace gpua {
// parameter struct passed to each task independent of network type
struct ProcessorParameter {
    __device_addr void* p_dev_mem {};
};
// parameter struct for Wavenet tasks
struct WavenetTaskParameter {
    uint32_t s_nsamples {};
    uint32_t s_ringbuffer_cursor {};
};
// parameter struct for LSTM tasks
struct LstmTaskParameter {
    uint32_t s_nsamples {};
};
} // namespace gpua

#endif // NAM_PROPERTIES_H
