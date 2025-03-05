/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "NamProcessor.cuh"
#include <scheduler/device/processor.cuh>

#if defined(GPU_AUDIO_AMD)
#pragma clang diagnostic ignored "-Wpass-failed"
#endif

// - `DeclareProcessorStep` must come before `DeclareProcessor`
// - `DeclareProcessorStep` parameters are:
//    - full processor name (with namespace and template parameters)
//    - an increasing integer to mark the tasks 0, 1, 2... (this integer is used to extract the actual task)
//    - the name of the method (currently no additional template parameters are supported)
//    - the processor parameter type (must match the function definition and has to be the same for all tasks)
//    - the task parameter type (must match the function definition and can be different for each task)
// - `DeclareProcessor` parameters are:
//    - full processor name (with namespace and template parameters)
//    - the number of tasks (must match the increasing integer from DeclareProcessorStep)

DeclareProcessorStep(gpua::NamDevice, 0, process_wavenet_64_64, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);

DeclareProcessorStep(gpua::NamDevice, 1, process_wavenet_64_128, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 2, process_wavenet_128_128, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);

DeclareProcessorStep(gpua::NamDevice, 3, process_wavenet_64_256, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 4, process_wavenet_128_256, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 5, process_wavenet_256_256, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);

DeclareProcessorStep(gpua::NamDevice, 6, process_wavenet_64_512, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 7, process_wavenet_128_512, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 8, process_wavenet_256_512, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 9, process_wavenet_512_512, float, gpua::ProcessorParameter, gpua::WavenetTaskParameter);

DeclareProcessorStep(gpua::NamDevice, 10, process_lstm_2_32_32, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 11, process_lstm_4_32_32, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 12, process_lstm_8_32_32, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 13, process_lstm_12_32_64, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 14, process_lstm_16_32_64, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 15, process_lstm_20_32_160, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 16, process_lstm_24_32_192, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 17, process_lstm_28_32_224, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);
DeclareProcessorStep(gpua::NamDevice, 18, process_lstm_32_32_256, float, gpua::ProcessorParameter, gpua::LstmTaskParameter);

DeclareProcessor(gpua::NamDevice, 19);
