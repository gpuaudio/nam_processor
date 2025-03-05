/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#pragma once

#include <platform/Abstraction.h>

namespace gpua {

/*!
 * @brief SimplifiedContext is a simplified version of the BlockContext that is used
 * to provide a simplified interface to the block context for the processor while
 * providing the number of threads in the block as a template parameter
 *
 * @tparam Context is the type of the context that is used to create the simplified context
 * @tparam NumThreads is the number of threads in the block used for compile time optimization
 */

template <typename Context, uint32_t NumThreads>
struct SimplifiedContext {
    static __program_scope constexpr uint32_t Threads = NumThreads;

    __thread_addr Context& m_ctx;

    __device_fct __forceinline_fct SimplifiedContext(__thread_addr Context& ctx) :
        m_ctx {ctx} {};

    /*!
     * @brief returns the block Id of the context
     */
    __device_fct __forceinline_fct unsigned int blockId() const {
        return m_ctx.blockId();
    }

    /*!
     * @brief returns the threadId within the block
     */
    __device_fct __forceinline_fct auto threadId() {
        return m_ctx.threadId();
    }

    /*!
     * @brief synchronizes the entire block
     */
    __device_fct __forceinline_fct void synchronize() {
        m_ctx.synchronize();
    }
    /*!
     *@brief returns the current call index as specified by the processor
     */
    __device_fct __forceinline_fct unsigned int call() const {
        return m_ctx.call;
    }

    /*!
     * @brief returns the block dimension (number of threads in the block/context)
     */
    __device_fct __forceinline_fct unsigned int blockDim() const {
        return Threads;
    }

    /*!
     * @brief returns a pointer to the shared memory of this block
     */
    __device_fct __forceinline_fct __threadgroup_addr void* smem() {
        return m_ctx.smem();
    }

    __device_fct __forceinline_fct __threadgroup_addr const void* smem() const {
        return m_ctx.smem();
    }

    /*!
     * @brief return a pointer to a specific subpart of the block's shared memory and
     * casts it to the specified type
     */
    template <typename T>
    __device_fct __forceinline_fct __threadgroup_addr T* smem_offset(unsigned int byteoffset) {
        return m_ctx.template smem_offset<T>(byteoffset);
    }

    template <typename T>
    __device_fct __forceinline_fct __threadgroup_addr const T* smem_offset(unsigned int byteoffset) const {
        return m_ctx.template smem_offset<T>(byteoffset);
    }

    /*!
     * @brief slices a BlockContext from the BlockContext
     *
     * @param GROUPSIZE is the number of threads in each subgroup
     * @param SMEMOFFSET is the offset from the current block context smem to where the
     * smem of the subgroups is placed
     * @param SMEMSLICE indicated whether all subgroups should get the same shared
     * memory (0) or if each should get its own slice of sliceSmemSize size starting
     * from smemOffset
     */
    template <unsigned int NEWGROUPSIZE, unsigned int NEWSMEMOFFSET = 0, unsigned int NEWSMEMSLICE = 0>
    __device_fct __forceinline_fct auto sliceBlock() {
        return m_ctx.template sliceBlock<NEWGROUPSIZE, NEWSMEMOFFSET>();
    }

    /*!
     * @brief slices a WarpContext from the BlockContext
     *
     * @param GROUPSIZE is the number of threads in each subgroup
     * @param SMEMOFFSET is the offset from the current block context smem to where
     * the smem of the subgroups is placed
     * @param SMEMSLICE indicated whether all subgroups should get the same
     * shared memory (0) or if each should get its own slice of sliceSmemSize size
     * starting from smemOffset
     */

    template <unsigned int SLICED_GROUPSIZE, unsigned int SLICED_SMEMOFFSET = 0, unsigned int SLICED_SMEMSLICE = 0>
    __device_fct __forceinline_fct auto slice() {
        return m_ctx.template slice<SLICED_GROUPSIZE, SLICED_SMEMOFFSET, SLICED_SMEMSLICE>();
    }
};
} // namespace gpua
