/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_PROCESSOR_CUH
#define NAM_NAM_PROCESSOR_CUH

#include "GpuLstm.h"
#include "GpuWavenet.h"
#include "Properties.h"
#include "SimplifiedContext.h"

#include <platform/Abstraction.h>

/*
 * Macros to generate the Wavenet processor task functions based on the number of samples (NS) and the number of threads (NT)
 */
#define ProcessWavenetFuncName(NS, NT) process_wavenet_##NS##_##NT
#define ProcessWavenetFunc(NS, NT)                                                                                                                                                                      \
    template <typename Context>                                                                                                                                                                         \
    __device_fct void ProcessWavenetFuncName(NS, NT)(Context context, __device_addr ProcessorParameter * processor_param, __device_addr WavenetTaskParameter * task_param,                              \
        __device_addr float* __device_addr* input, __device_addr float* __device_addr* output) __device_addr {                                                                                          \
        /* Wrap the real context into a simplified one that offers only the required functionality (see `SimplifiedContext.h`) */                                                                       \
        SimplifiedContext<Context, GenericWavenetConfig<NS, NT>::Wavenet::Threads> ctx(context);                                                                                                        \
        /* Call the `Process` function on the device Wavenet */                                                                                                                                         \
        reinterpret_cast<__device_addr GenericWavenetConfig<NS, NT>::Wavenet*>(processor_param->p_dev_mem)->Process(ctx, input[0], output[0], task_param->s_nsamples, task_param->s_ringbuffer_cursor); \
    }

/*
 * Macros to generate the LSTM processor task functions based on the hidden size (HS), the number of samples (NS) and the number of threads (NT)
 */
#define ProcessLstmFuncName(HS, NS, NT) process_lstm_##HS##_##NS##_##NT
#define ProcessLstmFunc(HS, NS, NT)                                                                                                                                      \
    template <typename Context>                                                                                                                                          \
    __device_fct void ProcessLstmFuncName(HS, NS, NT)(Context context, __device_addr ProcessorParameter * processor_param, __device_addr LstmTaskParameter * task_param, \
        __device_addr float* __device_addr* input, __device_addr float* __device_addr* output) __device_addr {                                                           \
        /* Wrap the real context into a simplified one that offers only the required functionality (see `SimplifiedContext.h`) */                                        \
        SimplifiedContext<Context, GenericLSTMConfig<HS, NS, NT>::LSTM::Threads> ctx(context);                                                                           \
        /* Call the `Process` function on the device LSTM */                                                                                                             \
        reinterpret_cast<__device_addr GenericLSTMConfig<HS, NS, NT>::LSTM*>(processor_param->p_dev_mem)->Process(ctx, input[0], output[0], task_param->s_nsamples);     \
    }
namespace gpua {
class NamDevice {
public:
    // mandatory explicit defined constructor
    __device_fct NamDevice() __device_addr {
    }

    // mandatory explicitly defined destructor
    __device_fct ~NamDevice() __device_addr {
    }

    // mandatory init function; can be used to initialize processor data members
    template <class Context>
    __device_fct void init(Context context, unsigned int maxBufferLength) __device_addr {
    }

    // Every task of the processor must match the following interface:
    // ```
    // template <class Context>
    // __device_fct void process(Context context, __device_addr gain::ProcessorParameter* processor_param, __device_addr gain::TaskParameter* task_param,
    //                           __device_addr float* __device_addr* input, __device_addr float* __device_addr* output) __device_addr;
    // ```
    //
    // - `Context` provides all the call specific information, like `threadId`, `blockId`, `callId`, shared memory, synchronization ...
    //    - Depending on the scheduling environment and the task type, we specialize the `Context` as needed this is why it is a template parameter
    //
    // - `ProcessorParameter* processor_param` is a parameter that can be set per call of the processor
    //
    // - `TaskParameter* task_param` is a parameter specific to the task and is set for every task individually
    //    - All tasks get the same `ProcessorParameter` and individual `TaskParameters`
    //    - The host interface has to provide the sizes required for the parameters (see GainProcessor::m_proc_data and GainProcessor::m_gpu_task)
    //
    // - `float** input` points to the input. input[p][s] is sample s of port p.
    //    Layout: all samples of the first channel, all samples of the second channel, ...
    // - `float** output` points to allocated device memory for the output. output[p][s] is sample s of port p.
    //    Layout: all samples of the first channel, all samples of the second channel, ...
    //
    // ================================
    // Basic functionalities of `Context` are:
    //    - `call()` to get the call id : [0, GainProcessor::m_proc_data::num_calls - 1]
    //    - `blockId()` to get the blockId : [0, GainProcessor::m_gpu_task::block_count - 1]
    //    - `threadId()` to get the threadId : [0, GainProcessor::m_gpu_task::thread_count - 1]
    //    - `blockDim()` to get the blockSize : GainProcessor::m_gpu_task::thread_count
    //    - `smem()` to get the registered shared memory : GainProcessor::m_gpu_task::shared_mem_size bytes
    //    - `synchronize()` to synchronize all threads in the block
    //
    // Note:
    //  - exclusively use `context.synchronize()` for synchronization of a block. Platform specific sync operations might hang
    //  - use `context.blockId()`, `context.threadId()`, `context.blockDim()` instead of platform specific alternatives, which might be wrong
    //  - you can use multiple blocks,e.g., one or multiple per channel - Make sure in the host processor that enough blocks are requested (GainProcessor::m_gpu_task::block_count)
    //  - you can use multiple calls to split the processing of a longer buffer into smaller grain-sized portions. You can also do that with a loop inside the task.
    //    However, when you use multiple calls execution can parallelize better if there are multiple processors in the chain, as we can already execute the next processor
    //    when parts of its input, i.e., the current processors output, are available. It will guarantee that, within a processor, a grain-sized portion of the input
    //    will only be processed when the previous portion has been processed.

    ProcessWavenetFunc(64, 64);
    ProcessWavenetFunc(64, 128);
    ProcessWavenetFunc(128, 128);
    ProcessWavenetFunc(64, 256);
    ProcessWavenetFunc(128, 256);
    ProcessWavenetFunc(256, 256);
    ProcessWavenetFunc(64, 512);
    ProcessWavenetFunc(128, 512);
    ProcessWavenetFunc(256, 512);
    ProcessWavenetFunc(512, 512);

    ProcessLstmFunc(2, 32, 32);
    ProcessLstmFunc(4, 32, 32);
    ProcessLstmFunc(8, 32, 32);
    ProcessLstmFunc(12, 32, 64);
    ProcessLstmFunc(16, 32, 64);
    ProcessLstmFunc(20, 32, 160);
    ProcessLstmFunc(24, 32, 192);
    ProcessLstmFunc(28, 32, 224);
    ProcessLstmFunc(32, 32, 256);
};

} // namespace gpua

#endif // NAM_NAM_PROCESSOR_CUH
