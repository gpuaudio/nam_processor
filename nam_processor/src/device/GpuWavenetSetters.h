/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#pragma once

#include "GpuWavenet.h"

/**
 * This file contains setters that initialize Wavenet network parameters on the CPU
 * such that we can initialize the GPU data from the host with a single copy of the memory block.
 */
namespace gpua {
namespace wavenet {

template <uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
void Set(DilatedConvolution<KernelSize, Channels, NumSamples, Threads, Type>& dilated_convolution, Type const** weights, Type const* bias, uint32_t dilation) {
    for (uint32_t k {0u}; k < KernelSize; ++k) {
        dilated_convolution.m_weights.convMats[k].Set(weights[k]);
    }
    dilated_convolution.m_weights.bias.Set(bias);
    dilated_convolution.m_weights.dilation = dilation;
}

template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
void Init(Layer<RingbufferSize, Activation, KernelSize, Channels, NumSamples, Threads, Type>& layer) {
    layer.m_ringbuffer.Init();
}
template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetDilatedConvolution(Layer<RingbufferSize, Activation, KernelSize, Channels, NumSamples, Threads, Type>& layer, Type const** weights, Type const* bias, uint32_t dilation) {
    Set(layer.m_dilation_conv, weights, bias, dilation);
}
template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetInputMixin(Layer<RingbufferSize, Activation, KernelSize, Channels, NumSamples, Threads, Type>& layer, Type const* weights, Type const* bias) {
    layer.m_input_mixin.Set(weights, bias);
}
template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetOutput1x1(Layer<RingbufferSize, Activation, KernelSize, Channels, NumSamples, Threads, Type>& layer, Type const* weights, Type const* bias) {
    layer.m_1x1.Set(weights, bias);
}
template <uint32_t RingbufferSize, class Activation, uint32_t KernelSize, uint32_t Channels, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetKernelSize(Layer<RingbufferSize, Activation, KernelSize, Channels, NumSamples, Threads, Type> const& layer) {
    return KernelSize;
}

template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void Init(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array) {
    for (auto& layer : layer_array.m_layers) {
        Init(layer);
    }
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetLayerKernelSize(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, uint32_t layer_id) {
    if (layer_id >= NumLayers) {
        return 0u;
    }
    return GetKernelSize(layer_array.m_layers[layer_id]);
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetNumLayers(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array) {
    return NumLayers;
}

template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetRechannel(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, Type const* weights, Type const* bias) {
    layer_array.m_rechannel.Set(weights, bias);
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetHeadRechannel(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, Type const* weights, Type const* bias) {
    layer_array.m_head_rechannel.Set(weights, bias);
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerDilatedConvolution(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, uint32_t layer_id, Type const** weights, Type const* bias, uint32_t dilation) {
    if (layer_id >= NumLayers) {
        return;
    }
    SetDilatedConvolution(layer_array.m_layers[layer_id], weights, bias, dilation);
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerInputMixin(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, uint32_t layer_id, Type const* weights, Type const* bias) {
    if (layer_id >= NumLayers) {
        return;
    }
    SetInputMixin(layer_array.m_layers[layer_id], weights, bias);
}
template <class LayerType, uint32_t InputChannels, uint32_t OutputChannels, uint32_t NumLayers, bool BiasWithHeadRechannel, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerOutput1x1(LayerArray<LayerType, InputChannels, OutputChannels, NumLayers, BiasWithHeadRechannel, NumSamples, Threads, Type>& layer_array, uint32_t layer_id, Type const* weights, Type const* bias) {
    if (layer_id >= NumLayers) {
        return;
    }
    SetOutput1x1(layer_array.m_layers[layer_id], weights, bias);
}

template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void Init(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet) {
    Init(wavenet.m_layer_array0);
    Init(wavenet.m_layer_array1);
}

template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetNumLayerArrays(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet) {
    return 2u;
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetLayerArrayNumLayers(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id) {
    if (layer_array_id == 0) {
        return GetNumLayers(wavenet.m_layer_array0);
    }
    else if (layer_array_id == 1) {
        return GetNumLayers(wavenet.m_layer_array1);
    }
    return 0u;
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
uint32_t GetLayerArrayLayerKernelSize(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, uint32_t layer_id) {
    if (layer_array_id == 0) {
        return GetLayerKernelSize(wavenet.m_layer_array0, layer_id);
    }
    else if (layer_array_id == 1) {
        return GetLayerKernelSize(wavenet.m_layer_array1, layer_id);
    }
    return 0u;
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetHeadScale(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, Type head_scale) {
    wavenet.m_head_scale = head_scale;
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerArrayRechannel(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, Type const* weights, Type const* bias) {
    if (layer_array_id == 0) {
        SetRechannel(wavenet.m_layer_array0, weights, bias);
    }
    else if (layer_array_id == 1) {
        SetRechannel(wavenet.m_layer_array1, weights, bias);
    }
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerArrayHeadRechannel(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, Type const* weights, Type const* bias) {
    if (layer_array_id == 0) {
        SetHeadRechannel(wavenet.m_layer_array0, weights, bias);
    }
    else if (layer_array_id == 1) {
        SetHeadRechannel(wavenet.m_layer_array1, weights, bias);
    }
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerArrayLayerDilatedConvolution(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, uint32_t layer_id, Type const** weights, Type const* bias, uint32_t dilation) {
    if (layer_array_id == 0) {
        SetLayerDilatedConvolution(wavenet.m_layer_array0, layer_id, weights, bias, dilation);
    }
    else if (layer_array_id == 1) {
        SetLayerDilatedConvolution(wavenet.m_layer_array1, layer_id, weights, bias, dilation);
    }
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerArrayLayerInputMixin(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, uint32_t layer_id, Type const* weights, Type const* bias) {
    if (layer_array_id == 0) {
        SetLayerInputMixin(wavenet.m_layer_array0, layer_id, weights, bias);
    }
    else if (layer_array_id == 1) {
        SetLayerInputMixin(wavenet.m_layer_array1, layer_id, weights, bias);
    }
}
template <class LayerArray0, class LayerArray1, uint32_t NumSamples, uint32_t Threads, typename Type>
void SetLayerArrayLayerOutput1x1(WavenetWith2LayerArrays<LayerArray0, LayerArray1, NumSamples, Threads, Type>& wavenet, uint32_t layer_array_id, uint32_t layer_id, Type const* weights, Type const* bias) {
    if (layer_array_id == 0) {
        SetLayerOutput1x1(wavenet.m_layer_array0, layer_id, weights, bias);
    }
    else if (layer_array_id == 1) {
        SetLayerOutput1x1(wavenet.m_layer_array1, layer_id, weights, bias);
    }
}

} // namespace wavenet
} // namespace gpua
