// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Audio_2_H
#define WINRT_Windows_Media_Audio_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Audio.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Audio
{
    struct __declspec(empty_bases) AudioDeviceInputNode : Windows::Media::Audio::IAudioDeviceInputNode,
        impl::require<AudioDeviceInputNode, Windows::Media::Audio::IAudioInputNode2>
    {
        AudioDeviceInputNode(std::nullptr_t) noexcept {}
        AudioDeviceInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioDeviceInputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceOutputNode : Windows::Media::Audio::IAudioDeviceOutputNode,
        impl::require<AudioDeviceOutputNode, Windows::Media::Audio::IAudioNodeWithListener>
    {
        AudioDeviceOutputNode(std::nullptr_t) noexcept {}
        AudioDeviceOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioDeviceOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFileInputNode : Windows::Media::Audio::IAudioFileInputNode,
        impl::require<AudioFileInputNode, Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFileInputNode(std::nullptr_t) noexcept {}
        AudioFileInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioFileInputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFileOutputNode : Windows::Media::Audio::IAudioFileOutputNode
    {
        AudioFileOutputNode(std::nullptr_t) noexcept {}
        AudioFileOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioFileOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFrameCompletedEventArgs : Windows::Media::Audio::IAudioFrameCompletedEventArgs
    {
        AudioFrameCompletedEventArgs(std::nullptr_t) noexcept {}
        AudioFrameCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioFrameCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFrameInputNode : Windows::Media::Audio::IAudioFrameInputNode,
        impl::require<AudioFrameInputNode, Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFrameInputNode(std::nullptr_t) noexcept {}
        AudioFrameInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioFrameInputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFrameOutputNode : Windows::Media::Audio::IAudioFrameOutputNode
    {
        AudioFrameOutputNode(std::nullptr_t) noexcept {}
        AudioFrameOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioFrameOutputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioGraph : Windows::Media::Audio::IAudioGraph,
        impl::require<AudioGraph, Windows::Media::Audio::IAudioGraph2, Windows::Media::Audio::IAudioGraph3>
    {
        AudioGraph(std::nullptr_t) noexcept {}
        AudioGraph(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioGraph(ptr, take_ownership_from_abi) {}
        using Windows::Media::Audio::IAudioGraph::CreateDeviceInputNodeAsync;
        using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateDeviceInputNodeAsync;
        using Windows::Media::Audio::IAudioGraph::CreateFileInputNodeAsync;
        using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateFileInputNodeAsync;
        using Windows::Media::Audio::IAudioGraph::CreateFrameInputNode;
        using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateFrameInputNode;
        using Windows::Media::Audio::IAudioGraph::CreateSubmixNode;
        using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateSubmixNode;
        static auto CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings);
    };
    struct __declspec(empty_bases) AudioGraphBatchUpdater : Windows::Foundation::IClosable
    {
        AudioGraphBatchUpdater(std::nullptr_t) noexcept {}
        AudioGraphBatchUpdater(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IClosable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioGraphConnection : Windows::Media::Audio::IAudioGraphConnection
    {
        AudioGraphConnection(std::nullptr_t) noexcept {}
        AudioGraphConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioGraphConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioGraphSettings : Windows::Media::Audio::IAudioGraphSettings,
        impl::require<AudioGraphSettings, Windows::Media::Audio::IAudioGraphSettings2>
    {
        AudioGraphSettings(std::nullptr_t) noexcept {}
        AudioGraphSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioGraphSettings(ptr, take_ownership_from_abi) {}
        explicit AudioGraphSettings(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory);
    };
    struct __declspec(empty_bases) AudioGraphUnrecoverableErrorOccurredEventArgs : Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs
    {
        AudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        AudioGraphUnrecoverableErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioNodeEmitter : Windows::Media::Audio::IAudioNodeEmitter,
        impl::require<AudioNodeEmitter, Windows::Media::Audio::IAudioNodeEmitter2>
    {
        AudioNodeEmitter(std::nullptr_t) noexcept {}
        AudioNodeEmitter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeEmitter(ptr, take_ownership_from_abi) {}
        AudioNodeEmitter();
        AudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings);
    };
    struct __declspec(empty_bases) AudioNodeEmitterConeProperties : Windows::Media::Audio::IAudioNodeEmitterConeProperties
    {
        AudioNodeEmitterConeProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterConeProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeEmitterConeProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioNodeEmitterDecayModel : Windows::Media::Audio::IAudioNodeEmitterDecayModel
    {
        AudioNodeEmitterDecayModel(std::nullptr_t) noexcept {}
        AudioNodeEmitterDecayModel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeEmitterDecayModel(ptr, take_ownership_from_abi) {}
        static auto CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance);
        static auto CreateCustom(double minGain, double maxGain);
    };
    struct __declspec(empty_bases) AudioNodeEmitterNaturalDecayModelProperties : Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties
    {
        AudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterNaturalDecayModelProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioNodeEmitterShape : Windows::Media::Audio::IAudioNodeEmitterShape
    {
        AudioNodeEmitterShape(std::nullptr_t) noexcept {}
        AudioNodeEmitterShape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeEmitterShape(ptr, take_ownership_from_abi) {}
        static auto CreateCone(double innerAngle, double outerAngle, double outerAngleGain);
        static auto CreateOmnidirectional();
    };
    struct __declspec(empty_bases) AudioNodeListener : Windows::Media::Audio::IAudioNodeListener
    {
        AudioNodeListener(std::nullptr_t) noexcept {}
        AudioNodeListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioNodeListener(ptr, take_ownership_from_abi) {}
        AudioNodeListener();
    };
    struct __declspec(empty_bases) AudioPlaybackConnection : Windows::Media::Audio::IAudioPlaybackConnection,
        impl::require<AudioPlaybackConnection, Windows::Foundation::IClosable>
    {
        AudioPlaybackConnection(std::nullptr_t) noexcept {}
        AudioPlaybackConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioPlaybackConnection(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto TryCreateFromId(param::hstring const& id);
    };
    struct __declspec(empty_bases) AudioPlaybackConnectionOpenResult : Windows::Media::Audio::IAudioPlaybackConnectionOpenResult
    {
        AudioPlaybackConnectionOpenResult(std::nullptr_t) noexcept {}
        AudioPlaybackConnectionOpenResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioPlaybackConnectionOpenResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioStateMonitor : Windows::Media::Audio::IAudioStateMonitor
    {
        AudioStateMonitor(std::nullptr_t) noexcept {}
        AudioStateMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioStateMonitor(ptr, take_ownership_from_abi) {}
        static auto CreateForRenderMonitoring();
        static auto CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category);
        static auto CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForRenderMonitoringWithCategoryAndDeviceId(Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId);
        static auto CreateForCaptureMonitoring();
        static auto CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category);
        static auto CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForCaptureMonitoringWithCategoryAndDeviceId(Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) AudioSubmixNode : Windows::Media::Audio::IAudioInputNode,
        impl::require<AudioSubmixNode, Windows::Media::Audio::IAudioInputNode2>
    {
        AudioSubmixNode(std::nullptr_t) noexcept {}
        AudioSubmixNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IAudioInputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateAudioDeviceInputNodeResult : Windows::Media::Audio::ICreateAudioDeviceInputNodeResult,
        impl::require<CreateAudioDeviceInputNodeResult, Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        CreateAudioDeviceInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateAudioDeviceInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateAudioDeviceOutputNodeResult : Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult,
        impl::require<CreateAudioDeviceOutputNodeResult, Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        CreateAudioDeviceOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateAudioFileInputNodeResult : Windows::Media::Audio::ICreateAudioFileInputNodeResult,
        impl::require<CreateAudioFileInputNodeResult, Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        CreateAudioFileInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateAudioFileInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateAudioFileOutputNodeResult : Windows::Media::Audio::ICreateAudioFileOutputNodeResult,
        impl::require<CreateAudioFileOutputNodeResult, Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        CreateAudioFileOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateAudioFileOutputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateAudioGraphResult : Windows::Media::Audio::ICreateAudioGraphResult,
        impl::require<CreateAudioGraphResult, Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        CreateAudioGraphResult(std::nullptr_t) noexcept {}
        CreateAudioGraphResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateAudioGraphResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CreateMediaSourceAudioInputNodeResult : Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult,
        impl::require<CreateMediaSourceAudioInputNodeResult, Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        CreateMediaSourceAudioInputNodeResult(std::nullptr_t) noexcept {}
        CreateMediaSourceAudioInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EchoEffectDefinition : Windows::Media::Audio::IEchoEffectDefinition
    {
        EchoEffectDefinition(std::nullptr_t) noexcept {}
        EchoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IEchoEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EchoEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct __declspec(empty_bases) EqualizerBand : Windows::Media::Audio::IEqualizerBand
    {
        EqualizerBand(std::nullptr_t) noexcept {}
        EqualizerBand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IEqualizerBand(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EqualizerEffectDefinition : Windows::Media::Audio::IEqualizerEffectDefinition
    {
        EqualizerEffectDefinition(std::nullptr_t) noexcept {}
        EqualizerEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IEqualizerEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EqualizerEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct __declspec(empty_bases) FrameInputNodeQuantumStartedEventArgs : Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs
    {
        FrameInputNodeQuantumStartedEventArgs(std::nullptr_t) noexcept {}
        FrameInputNodeQuantumStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LimiterEffectDefinition : Windows::Media::Audio::ILimiterEffectDefinition
    {
        LimiterEffectDefinition(std::nullptr_t) noexcept {}
        LimiterEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ILimiterEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit LimiterEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct __declspec(empty_bases) MediaSourceAudioInputNode : Windows::Media::Audio::IMediaSourceAudioInputNode
    {
        MediaSourceAudioInputNode(std::nullptr_t) noexcept {}
        MediaSourceAudioInputNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IMediaSourceAudioInputNode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ReverbEffectDefinition : Windows::Media::Audio::IReverbEffectDefinition
    {
        ReverbEffectDefinition(std::nullptr_t) noexcept {}
        ReverbEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::IReverbEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit ReverbEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
    };
    struct __declspec(empty_bases) SetDefaultSpatialAudioFormatResult : Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult
    {
        SetDefaultSpatialAudioFormatResult(std::nullptr_t) noexcept {}
        SetDefaultSpatialAudioFormatResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialAudioDeviceConfiguration : Windows::Media::Audio::ISpatialAudioDeviceConfiguration
    {
        SpatialAudioDeviceConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioDeviceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ISpatialAudioDeviceConfiguration(ptr, take_ownership_from_abi) {}
        static auto GetForDeviceId(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) SpatialAudioFormatConfiguration : Windows::Media::Audio::ISpatialAudioFormatConfiguration
    {
        SpatialAudioFormatConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioFormatConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Audio::ISpatialAudioFormatConfiguration(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct SpatialAudioFormatSubtype
    {
        SpatialAudioFormatSubtype() = delete;
        [[nodiscard]] static auto WindowsSonic();
        [[nodiscard]] static auto DolbyAtmosForHeadphones();
        [[nodiscard]] static auto DolbyAtmosForHomeTheater();
        [[nodiscard]] static auto DolbyAtmosForSpeakers();
        [[nodiscard]] static auto DTSHeadphoneX();
        [[nodiscard]] static auto DTSXUltra();
        [[nodiscard]] static auto DTSXForHomeTheater();
    };
}
#endif
