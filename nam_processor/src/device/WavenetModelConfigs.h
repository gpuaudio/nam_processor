/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef GPU_AUDIO_CONFIGS_H
#define GPU_AUDIO_CONFIGS_H

template <uint32_t NumSamples, uint32_t Threads>
struct GenericWavenetConfig {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};

template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongchan260sbrsw2L {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongKKCh260ssolo80s {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongchan270sbothbrswL {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongChannel160smode {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongChannel280smodebothbrswR {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongNAMCaptureBognerBlueChaseToneSecretPreDeco {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongNAMCaptureBoostedpeacekeeperChaseToneSecretPreDecov2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongNAMCaptureBroadcastChaseToneSecretPreDeco {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongNAMCaptureProteinChaseToneSecretPreDeco {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBCeriatoneKingKongNAMCaptureTurboNonnaChaseToneSecretPreDeco {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct GeorgeBV4Countess300eps {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB5150BlockLetterBoosted {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB5150BlockLetterNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505GreenchMXRDrive {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505GreenchNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505RedchMXRDriveV2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505RedchMXRDrive {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505RedChNoBoostrock {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6505RedchNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6534MXRM77HelgaBehrens {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6534MXRM77 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6534NoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaB6534OD808 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBBossOS2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBGCIJugendstil {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBIIIBlueM77Boost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBIIIBlueNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBIIIRed805Boost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBIIIRedNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBIIIRedNoBoostBALLS {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXUltraM77FIXED {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXUltraM77GROUNDHUM {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXUltraNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXUltraOD808 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXCrunchM77ESR0007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXCrunchNoBoost0004 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBJSXCrunchOD808ESR0007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBPPRotMidBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBPPRotMidScoop {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBPPWendigo {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXX6L6M77ESR0015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXX6L6OD808ESR0015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXX6L6PPRotMidBoostESR056 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXX6L6PPRotMidScoopESR061 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXX6L6WendigoESR0016 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXXKT77M77 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXXKT77NoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct HelgaBXXXKT77OD808 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZBossHM2v1kindabassheavywithmediumdistortionpureeverythingturnedallthewayuptone {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZBossHM2BTFOheavydistortionmeanttobestandalonelessbassmorehonk {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZBossHM2EQlightdistortionwithdimedEQknobsusebeforeanamp {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZKSRCERESlightbluechannelallnoonEQ {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZKSRCERESpurplechannelallnoonEQ {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZKSRVESTAlightbluechannelallnoonEQ {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZKSRVESTApurplechannelallnoonEQ {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZLine6UBERMETALINSANEdroommetalatitsbest {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZSoldanoSuperLeadOverdrivepedalnicecrunchyrhythmtone {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct JasonZTech21dUgDP3Xbasspreamppedalalldimednoshift {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBDS1g6t5 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBDS1maxgt5 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBkloneg6t6o5 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBklonemaxGt6o5 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBKloneplusBBhighGain {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBKloneplusBBlowgain {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBKloneplusBBmedGain {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBPlumesClonemaxGt5switch1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct KeithBPlumesClonemaxGt5switch3 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct LuisRdriftwoodpurplenightmareTSengaged {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct MikhailKSovtekMIG50 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct MikhailKSovtekMIG50DODFX56B {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct MikhailKSovtekMIG50Klone {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct MikhailKSovtekMIG50SparkleDrive {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct MikhailKSovtekMIG50ThroneTorcher {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDT33V7FeatherESR00001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDT33V7LiteESR00001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDT33V7StdESR00001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDTTCV7L3H7FeatherESR00001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDTTCV7L3H7LiteESR00001v1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNDirtyTreeDTTCV7L3H7StdESR00001v1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2SWEDEFeatherESR00097 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2SWEDELiteESR00057 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2SWEDEStdESR00034 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H10D0FeatherESR00015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H10D0liteESR00007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H10D0StdESR00004 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H8D2FeatherESR00025 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H8D2LiteESR00014 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L10H8D2StdESR00008 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L8H4D0FeatherESR00025 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L8H4D0LiteESR00015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PeterNHM2V5L8H4D0StdESR00015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBOSSSD1FeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug1990LeadNoDriveCabESR0011 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug1990LeadNoDriveESR0004 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CleanCabESR0007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CleanESR0002 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CrunchDTCabESR0014 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CrunchDTESR00133 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CrunchNoDriveCabESR0005 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333CrunchNoDriveESR0002 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333LeadNoDriveCabESR0007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug333LeadNoDriveESR0004 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBug6262CrunchNoDriveCabESR0004 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBugera6262CrunchNoDriveESR0002 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBugera6262LeadM77ESR0020 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBugera6262LeadM77Gain15ESR0017 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBugera6262LeadNoDriveCabESR0009 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePBugera6262LeadNoDriveESR0009 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePDirtyTreeFeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMCLGRNoDriveCabESR0007 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMCLGRNoDriveESR0005 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMCRORNoDriveESR0017 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMCRORSD1ESR0018 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMOD1GRM77ESR0018 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMOD1GRNoDriveESR0015 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMOD2RDNoDriveCabESR0006 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePJVMOD2RDNoDriveESR0003 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePLaneyGH100SHiHiNoonESR0024 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePLaneyGH100SHiMidGainESR0003 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePLaneyGH100SLoAfterBreakUpESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePLaneyGH100SLoCrunchGainESR0024 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePMaxonOD808FeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePMXRM77FeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePPrecisionDriveAtt4FeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePPrecisionDriveFeatherESR0001 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePVOXAC15JonAr1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePVOXAC15JonAr2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePVOXAC15JonAr3 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePVOXAC15JonAr4 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct PhillipePVOXAC15TopBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct RomanABUGERA333 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct RomanABUGERA333BOOSTED {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct RomanALTMESAMARKIV1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct RomanAYERASOVMESHUGGAH {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct RomanAYERASOVMESHUGGAHBOOSTED {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyCrunchG4BuxBoostTight {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMiniCleanB1M6T7MV10G4 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinicrunchB4M55T6MV6G4GShigh {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinicrunchG6 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinicrunchG6PreQ {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinicrunchG8 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinilowDriveG6GainStrucLow {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSDirtyShirleyMinilowGainMV10G35klonboost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSFriedmanDSMPowerAmpEL84MV10feather {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct SaschaSFriedmanDSMPowerAmpEL84MV6feather {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 4u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimR5152Cleanish {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimR5152CrunchTS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimR5152CrunchNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimR5152LeadTS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimR5152LeadNoBoost {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRFenderTwinVerbNormBright {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRFenderTwinVerbVibratoBright {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000Clean {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000Crunch805d {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000Crunch {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000L2G6805d {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000L2G6 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000L2G8805d {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM2000L2G8 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbchAG10 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChAG4 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbCHAG6 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChAG8 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChBG12 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChBG16 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChBG20 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJCM90050WDualVerbChBG8 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJetCityG2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJetCityG4 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJetCityG5 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJetCityG6 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRJetCityG9Boosted {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MKiiTS9OnFull {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MKiiBridgedBlend {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiBridgedBRBias {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MKiiBridgedDriven {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiBridgedKloned {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiCh1Br {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiCh1Norm {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiCh2Br {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiCh2Norm {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiMaxdTS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiMaxd {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiPushedTS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRMagnatoneSuper59MkiiPushed {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSeymourDuncan805 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProMod1stGearG12 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProMod2ndGearG12 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProMod3rdGearG12 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear1OD2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear1 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear2OD2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear3OD2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG10Gear3 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG12Gear2OD2TS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRSplawnProModG12Gear3OD2TS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRTS9Driven {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TimRTS9 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TomCAxeFX2EnglSavage {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TomCAxeFX2OrangeRockerverb {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TomCEngle530preamp840powerampwithBossDS1Overdrive {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNCeriatoneMolecular50 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDemonfxDualBoostFortin33sideKnob5ESR00017lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDemonfxDualBoostXoticEPboostsideKnob5SW1downSW2downESR00013lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDemonfxDualBoostXoticEPboostsideKnob5SW1downSW2upESR00026lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDemonfxDualBoostXoticEPboostsideKnob5SW1upSW2downESR00016lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDemonfxDualBoostXoticEPboostsideKnob5SW1upSW2upESR00023lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDriftwoodNightmareHighGainHM2 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDriftwoodNightmareLowGainTS {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNDriftwoodNightmareLowGain {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNFortinGrindMiniKnob5ESR00012lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNFortinGrindMiniKnob5ESR00017standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone10Level10Overdrive0ESR00006lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone10Level10Overdrive0ESR00007standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone5Level5Overdrive5ESR00005lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone5Level5Overdrive5ESR00008standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone8Level8Overdrive0ESR00004lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNIbanezTubeScreamerMiniTone8Level8Overdrive0ESR00005standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone10Output10Gain0100HZ2BumpoffESR00008 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone10Output10Gain0100HZ2BumpoffESR00008lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone10Output10Gain0100HZ2BumponESR00014lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone10Output10Gain0100HZ2BumponESR00016 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone5Output10Gain0100HZ2BumpoffESR00018lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone5Output10Gain0100HZ2BumpoffESR00019standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone5Output10Gain0100HZ2BumponESR00026lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone5Output10Gain0100HZ2BumponESR00029standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain0100HZ2BumpoffESR00010lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain0100HZ2BumpoffESR00010standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain0100HZ2BumponESR00018lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain0100HZ2BumponESR00018standard {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain1100HZ2BumponESR00018 {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 16u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMXRM77CustomBadassModifiedODTone65Output10Gain1100HZ2BumponESR00018lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNPrecisionDrivepedalPCBVol6Drv0Brgt55Atk4ESR00004lite {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<7u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 6u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<13u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNMesa2x12InputHIDep6Gir65Pres85Bas65Mid5Tre10Mas5Gain10CHARmidERAlftEDGmidFELupESR00146normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep4Gir2Pres5Bas65Mid5Tre10Mas5Gain10CHARmidERAlftEDGmidFELupESR00097normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 28u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 14u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas10Mid10Tre10Mas10Gain10CHARmidERAlftEDGmidFELupESR00151normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 32u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas10Mid10Tre10Mas10Gain10CHARmidERAmidEDGmidFELupESR00265normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 22u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas10Mid10Tre10Mas10Gain10CHARmidERArgtEDGmidFELupESR00119normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 26u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas5Mid5Tre5Mas5Gain5CHARmidERAlftEDGmidFELupESR00097normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas5Mid5Tre5Mas5Gain5CHARmidERAmidEDGmidFELupESR00048normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep5Gir5Pres5Bas5Mid5Tre5Mas5Gain5CHARmidERArgtEDGmidFELupESR00142normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid4Tre10Mas5Gain10CHARmidERAlftEDGmidFELupESR00124normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 21u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid4Tre10Mas8Gain10CHARmidERArgtEDGmidFELupESR00161normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid4Tre10Mas8Gain5CHARmidERAlftEDGmidFELupESR00106normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid4Tre10Mas8Gain5CHARmidERArgtEDGmidFELupESR00109normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid5Tre10Mas5Gain10CHARmidERAlftEDGmidFELupESR00115normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 21u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid5Tre10Mas8Gain10CHARmidERArgtEDGmidFELupESR00131normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 32u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid5Tre10Mas8Gain5CHARmidERAlftEDGmidFELupESR00104normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres85Bas65Mid5Tre10Mas8Gain5CHARmidERArgtEDGmidFELupESR00135normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 18u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres8Bas65Mid6Tre10Mas5Gain8CHARmidERAlftEDGmidFELupESR00192normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres8Bas65Mid6Tre10Mas5Gain8CHARmidERAmidEDGmidFELupESR00076normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 22u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep6Gir65Pres8Bas65Mid6Tre10Mas5Gain8CHARmidERArgtEDGmidFELupESR00190normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 22u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLInputHIDep8Gir65Pres8Bas65Mid45Tre9Mas5Gain10CHARmidERAlftEDGmidFELupESR00125normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 24u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 12u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLPowerampDep10Gir10Pres10Mas10ESR00135normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLPowerampDep10Gir10Pres10Mas5ESR00137normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 22u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLPowerampDep5Gir5Pres5Mas10ESR00144normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 18u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLPowerampDep5Gir5Pres5Mas5ESR00114normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
template <uint32_t NumSamples, uint32_t Threads>
struct TudorNSuhrRLPowerampDep8Gir5Pres8Mas5ESR00128normalized6dB {
    using LayerDesc0 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 20u>;
    using LayerArrayDesc0 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc0>;
    using LayerDesc1 = gpua::wavenet::LayerDesc<gpua::ActivationFuncFastTanH, 3u, 8u>;
    using LayerArrayDesc1 = gpua::wavenet::LayerArrayDesc<10u, LayerDesc1>;
    using WavenetBuilder = gpua::wavenet::Wavenet2Builder<LayerArrayDesc0, LayerArrayDesc1, NumSamples, Threads, float>;
    using Wavenet = typename WavenetBuilder::Wavenet;
};
#endif // GPU_AUDIO_CONFIGS_H
