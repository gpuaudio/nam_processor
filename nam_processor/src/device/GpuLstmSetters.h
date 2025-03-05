/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#pragma once

#include "GpuLstm.h"

/**
 * This file contains setters that initialize LSTM network parameters on the CPU
 * such that we can initialize the GPU data from the host with a single copy of the memory block.
 */
namespace gpua {
namespace lstm {
template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
void SetLSTMCellW(LSTMCell<InputSize, HiddenSize, Threads, Type>& lstm_cell, Type const* weights) {
    constexpr uint32_t SectionSize = HiddenSize * (InputSize + HiddenSize);
    decltype(lstm_cell.m_w) temp;
    temp.Set(weights);
    lstm_cell.m_w.SetPartial(temp.Data(), 0, 0, HiddenSize, InputSize + HiddenSize, row_major);
    lstm_cell.m_w.SetPartial(temp.Data() + SectionSize, HiddenSize, 0, HiddenSize, InputSize + HiddenSize, row_major);
    lstm_cell.m_w.SetPartial(temp.Data() + 2 * SectionSize, 3 * HiddenSize, 0, HiddenSize, InputSize + HiddenSize, row_major);
    lstm_cell.m_w.SetPartial(temp.Data() + 3 * SectionSize, 2 * HiddenSize, 0, HiddenSize, InputSize + HiddenSize, row_major);
}
template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
void SetLSTMCellB(LSTMCell<InputSize, HiddenSize, Threads, Type>& lstm_cell, Type const* weights) {
    lstm_cell.m_comb.b.SetPartial(weights, 0, HiddenSize);
    lstm_cell.m_comb.b.SetPartial(weights + HiddenSize, HiddenSize, HiddenSize);
    lstm_cell.m_comb.b.SetPartial(weights + 2 * HiddenSize, 3 * HiddenSize, HiddenSize);
    lstm_cell.m_comb.b.SetPartial(weights + 3 * HiddenSize, 2 * HiddenSize, HiddenSize);
}

template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
void SetLSTMCellXH(LSTMCell<InputSize, HiddenSize, Threads, Type>& lstm_cell, Type const* weights) {
    lstm_cell.m_comb.h.Set(weights + InputSize);
}

template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
void SetLSTMCellC(LSTMCell<InputSize, HiddenSize, Threads, Type>& lstm_cell, Type const* weights) {
    lstm_cell.m_comb.c.Set(weights);
}

template <uint32_t MAX_NUM_LAYERS, uint32_t INPUT_SIZE, uint32_t HIDDEN_SIZE, uint32_t NUM_SAMPLES, uint32_t THREADS, typename TYPE = float>
void SetLSTMNumLayers(LongShortTermMemory<MAX_NUM_LAYERS, INPUT_SIZE, HIDDEN_SIZE, NUM_SAMPLES, THREADS, TYPE>& lstm, uint32_t nlayers) {
    lstm.m_nlayers = nlayers;
}

template <uint32_t MAX_NUM_LAYERS, uint32_t INPUT_SIZE, uint32_t HIDDEN_SIZE, uint32_t NUM_SAMPLES, uint32_t THREADS, typename TYPE = float>
void SetLSTMHeadBias(LongShortTermMemory<MAX_NUM_LAYERS, INPUT_SIZE, HIDDEN_SIZE, NUM_SAMPLES, THREADS, TYPE>& lstm, TYPE head_bias) {
    lstm.m_head_data.m_head_bias = head_bias;
}

template <uint32_t MAX_NUM_LAYERS, uint32_t INPUT_SIZE, uint32_t HIDDEN_SIZE, uint32_t NUM_SAMPLES, uint32_t THREADS, typename TYPE = float>
void SetLSTMHeadWeight(LongShortTermMemory<MAX_NUM_LAYERS, INPUT_SIZE, HIDDEN_SIZE, NUM_SAMPLES, THREADS, TYPE>& lstm, TYPE const* weights) {
    lstm.m_head_data.m_head_weight.Set(weights);
}

template <uint32_t InputSize, uint32_t HiddenSize, uint32_t Threads, typename Type>
void InitializeLSTMCell(LSTMCell<InputSize, HiddenSize, Threads, Type>& lstm_cell, Type const** weights) {
    uint32_t woff {0u};
    SetLSTMCellW(lstm_cell, weights[woff]);
    woff += 1;
    SetLSTMCellB(lstm_cell, weights[woff]);
    woff += 1;
    SetLSTMCellXH(lstm_cell, weights[woff]);
    woff += 1;
    SetLSTMCellC(lstm_cell, weights[woff]);
    woff += 1;
}

} // namespace lstm
} // namespace gpua
