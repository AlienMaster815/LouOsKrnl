// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Audio_0_H
#define WINRT_Windows_Media_Audio_0_H
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    struct IClosable;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Media
{
    struct AudioFrame;
    enum class AudioProcessing : int32_t;
    enum class SoundLevel : int32_t;
}
namespace winrt::Windows::Media::Capture
{
    enum class MediaCategory : int32_t;
}
namespace winrt::Windows::Media::Core
{
    struct MediaSource;
}
namespace winrt::Windows::Media::Devices
{
    enum class AudioDeviceRole : int32_t;
}
namespace winrt::Windows::Media::Effects
{
    struct IAudioEffectDefinition;
}
namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct MediaEncodingProfile;
}
namespace winrt::Windows::Media::Render
{
    enum class AudioRenderCategory : int32_t;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
namespace winrt::Windows::Media::Audio
{
    enum class AudioDeviceNodeCreationStatus : int32_t
    {
        Success = 0,
        DeviceNotAvailable = 1,
        FormatNotSupported = 2,
        UnknownFailure = 3,
        AccessDenied = 4,
    };
    enum class AudioFileNodeCreationStatus : int32_t
    {
        Success = 0,
        FileNotFound = 1,
        InvalidFileType = 2,
        FormatNotSupported = 3,
        UnknownFailure = 4,
    };
    enum class AudioGraphCreationStatus : int32_t
    {
        Success = 0,
        DeviceNotAvailable = 1,
        FormatNotSupported = 2,
        UnknownFailure = 3,
    };
    enum class AudioGraphUnrecoverableError : int32_t
    {
        None = 0,
        AudioDeviceLost = 1,
        AudioSessionDisconnected = 2,
        UnknownFailure = 3,
    };
    enum class AudioNodeEmitterDecayKind : int32_t
    {
        Natural = 0,
        Custom = 1,
    };
    enum class AudioNodeEmitterSettings : uint32_t
    {
        None = 0,
        DisableDoppler = 0x1,
    };
    enum class AudioNodeEmitterShapeKind : int32_t
    {
        Omnidirectional = 0,
        Cone = 1,
    };
    enum class AudioPlaybackConnectionOpenResultStatus : int32_t
    {
        Success = 0,
        RequestTimedOut = 1,
        DeniedBySystem = 2,
        UnknownFailure = 3,
    };
    enum class AudioPlaybackConnectionState : int32_t
    {
        Closed = 0,
        Opened = 1,
    };
    enum class MediaSourceAudioInputNodeCreationStatus : int32_t
    {
        Success = 0,
        FormatNotSupported = 1,
        NetworkError = 2,
        UnknownFailure = 3,
    };
    enum class MixedRealitySpatialAudioFormatPolicy : int32_t
    {
        UseMixedRealityDefaultSpatialAudioFormat = 0,
        UseDeviceConfigurationDefaultSpatialAudioFormat = 1,
    };
    enum class QuantumSizeSelectionMode : int32_t
    {
        SystemDefault = 0,
        LowestLatency = 1,
        ClosestToDesired = 2,
    };
    enum class SetDefaultSpatialAudioFormatStatus : int32_t
    {
        Succeeded = 0,
        AccessDenied = 1,
        LicenseExpired = 2,
        LicenseNotValidForAudioEndpoint = 3,
        NotSupportedOnAudioEndpoint = 4,
        UnknownError = 5,
    };
    enum class SpatialAudioModel : int32_t
    {
        ObjectBased = 0,
        FoldDown = 1,
    };
    struct IAudioDeviceInputNode;
    struct IAudioDeviceOutputNode;
    struct IAudioFileInputNode;
    struct IAudioFileOutputNode;
    struct IAudioFrameCompletedEventArgs;
    struct IAudioFrameInputNode;
    struct IAudioFrameOutputNode;
    struct IAudioGraph;
    struct IAudioGraph2;
    struct IAudioGraph3;
    struct IAudioGraphConnection;
    struct IAudioGraphSettings;
    struct IAudioGraphSettings2;
    struct IAudioGraphSettingsFactory;
    struct IAudioGraphStatics;
    struct IAudioGraphUnrecoverableErrorOccurredEventArgs;
    struct IAudioInputNode;
    struct IAudioInputNode2;
    struct IAudioNode;
    struct IAudioNodeEmitter;
    struct IAudioNodeEmitter2;
    struct IAudioNodeEmitterConeProperties;
    struct IAudioNodeEmitterDecayModel;
    struct IAudioNodeEmitterDecayModelStatics;
    struct IAudioNodeEmitterFactory;
    struct IAudioNodeEmitterNaturalDecayModelProperties;
    struct IAudioNodeEmitterShape;
    struct IAudioNodeEmitterShapeStatics;
    struct IAudioNodeListener;
    struct IAudioNodeWithListener;
    struct IAudioPlaybackConnection;
    struct IAudioPlaybackConnectionOpenResult;
    struct IAudioPlaybackConnectionStatics;
    struct IAudioStateMonitor;
    struct IAudioStateMonitorStatics;
    struct ICreateAudioDeviceInputNodeResult;
    struct ICreateAudioDeviceInputNodeResult2;
    struct ICreateAudioDeviceOutputNodeResult;
    struct ICreateAudioDeviceOutputNodeResult2;
    struct ICreateAudioFileInputNodeResult;
    struct ICreateAudioFileInputNodeResult2;
    struct ICreateAudioFileOutputNodeResult;
    struct ICreateAudioFileOutputNodeResult2;
    struct ICreateAudioGraphResult;
    struct ICreateAudioGraphResult2;
    struct ICreateMediaSourceAudioInputNodeResult;
    struct ICreateMediaSourceAudioInputNodeResult2;
    struct IEchoEffectDefinition;
    struct IEchoEffectDefinitionFactory;
    struct IEqualizerBand;
    struct IEqualizerEffectDefinition;
    struct IEqualizerEffectDefinitionFactory;
    struct IFrameInputNodeQuantumStartedEventArgs;
    struct ILimiterEffectDefinition;
    struct ILimiterEffectDefinitionFactory;
    struct IMediaSourceAudioInputNode;
    struct IReverbEffectDefinition;
    struct IReverbEffectDefinitionFactory;
    struct ISetDefaultSpatialAudioFormatResult;
    struct ISpatialAudioDeviceConfiguration;
    struct ISpatialAudioDeviceConfigurationStatics;
    struct ISpatialAudioFormatConfiguration;
    struct ISpatialAudioFormatConfigurationStatics;
    struct ISpatialAudioFormatSubtypeStatics;
    struct AudioDeviceInputNode;
    struct AudioDeviceOutputNode;
    struct AudioFileInputNode;
    struct AudioFileOutputNode;
    struct AudioFrameCompletedEventArgs;
    struct AudioFrameInputNode;
    struct AudioFrameOutputNode;
    struct AudioGraph;
    struct AudioGraphBatchUpdater;
    struct AudioGraphConnection;
    struct AudioGraphSettings;
    struct AudioGraphUnrecoverableErrorOccurredEventArgs;
    struct AudioNodeEmitter;
    struct AudioNodeEmitterConeProperties;
    struct AudioNodeEmitterDecayModel;
    struct AudioNodeEmitterNaturalDecayModelProperties;
    struct AudioNodeEmitterShape;
    struct AudioNodeListener;
    struct AudioPlaybackConnection;
    struct AudioPlaybackConnectionOpenResult;
    struct AudioStateMonitor;
    struct AudioSubmixNode;
    struct CreateAudioDeviceInputNodeResult;
    struct CreateAudioDeviceOutputNodeResult;
    struct CreateAudioFileInputNodeResult;
    struct CreateAudioFileOutputNodeResult;
    struct CreateAudioGraphResult;
    struct CreateMediaSourceAudioInputNodeResult;
    struct EchoEffectDefinition;
    struct EqualizerBand;
    struct EqualizerEffectDefinition;
    struct FrameInputNodeQuantumStartedEventArgs;
    struct LimiterEffectDefinition;
    struct MediaSourceAudioInputNode;
    struct ReverbEffectDefinition;
    struct SetDefaultSpatialAudioFormatResult;
    struct SpatialAudioDeviceConfiguration;
    struct SpatialAudioFormatConfiguration;
    struct SpatialAudioFormatSubtype;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Audio::IAudioDeviceInputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioDeviceOutputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioFileInputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioFileOutputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioFrameInputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioFrameOutputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraph>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraph2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraph3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphSettingsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioInputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioInputNode2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterShape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeListener>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioNodeWithListener>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioPlaybackConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioStateMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IAudioStateMonitorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioGraphResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IEchoEffectDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IEchoEffectDefinitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IEqualizerBand>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IEqualizerEffectDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ILimiterEffectDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IMediaSourceAudioInputNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IReverbEffectDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::IReverbEffectDefinitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Audio::AudioDeviceInputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioDeviceOutputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFileInputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFileOutputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFrameCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFrameInputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFrameOutputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraph>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphBatchUpdater>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterConeProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterDecayModel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterShape>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeListener>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioPlaybackConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioPlaybackConnectionOpenResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioStateMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioSubmixNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateAudioFileInputNodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateAudioFileOutputNodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateAudioGraphResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::EchoEffectDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::EqualizerBand>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::EqualizerEffectDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::LimiterEffectDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::MediaSourceAudioInputNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::ReverbEffectDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::SetDefaultSpatialAudioFormatResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::SpatialAudioDeviceConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::SpatialAudioFormatConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::SpatialAudioFormatSubtype>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Audio::AudioDeviceNodeCreationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioFileNodeCreationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphCreationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioGraphUnrecoverableError>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterDecayKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterSettings>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioNodeEmitterShapeKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioPlaybackConnectionOpenResultStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::AudioPlaybackConnectionState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::QuantumSizeSelectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::SetDefaultSpatialAudioFormatStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Audio::SpatialAudioModel>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Audio::IAudioDeviceInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioDeviceInputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioDeviceOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioDeviceOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioFileInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioFileInputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioFileOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioFileOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioFrameCompletedEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::IAudioFrameInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioFrameInputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioFrameOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioFrameOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraph>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraph" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraph2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraph2" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraph3>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraph3" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphConnection" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphSettings" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphSettings2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphSettings2" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphSettingsFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphSettingsFactory" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphStatics" };
    };
    template <> struct name<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::IAudioInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioInputNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioInputNode2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioInputNode2" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNode" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitter>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitter" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitter2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitter2" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterConeProperties" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterDecayModel" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterFactory" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterShape>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterShape" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeEmitterShapeStatics" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeListener>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeListener" };
    };
    template <> struct name<Windows::Media::Audio::IAudioNodeWithListener>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioNodeWithListener" };
    };
    template <> struct name<Windows::Media::Audio::IAudioPlaybackConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioPlaybackConnection" };
    };
    template <> struct name<Windows::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioPlaybackConnectionOpenResult" };
    };
    template <> struct name<Windows::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioPlaybackConnectionStatics" };
    };
    template <> struct name<Windows::Media::Audio::IAudioStateMonitor>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioStateMonitor" };
    };
    template <> struct name<Windows::Media::Audio::IAudioStateMonitorStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IAudioStateMonitorStatics" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult2" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult2" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioFileInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioFileInputNodeResult2" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult2" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioGraphResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioGraphResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateAudioGraphResult2" };
    };
    template <> struct name<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult2" };
    };
    template <> struct name<Windows::Media::Audio::IEchoEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IEchoEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::IEchoEffectDefinitionFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IEchoEffectDefinitionFactory" };
    };
    template <> struct name<Windows::Media::Audio::IEqualizerBand>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IEqualizerBand" };
    };
    template <> struct name<Windows::Media::Audio::IEqualizerEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IEqualizerEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IEqualizerEffectDefinitionFactory" };
    };
    template <> struct name<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::ILimiterEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ILimiterEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ILimiterEffectDefinitionFactory" };
    };
    template <> struct name<Windows::Media::Audio::IMediaSourceAudioInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IMediaSourceAudioInputNode" };
    };
    template <> struct name<Windows::Media::Audio::IReverbEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IReverbEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::IReverbEffectDefinitionFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.IReverbEffectDefinitionFactory" };
    };
    template <> struct name<Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISetDefaultSpatialAudioFormatResult" };
    };
    template <> struct name<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISpatialAudioDeviceConfiguration" };
    };
    template <> struct name<Windows::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISpatialAudioDeviceConfigurationStatics" };
    };
    template <> struct name<Windows::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISpatialAudioFormatConfiguration" };
    };
    template <> struct name<Windows::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISpatialAudioFormatConfigurationStatics" };
    };
    template <> struct name<Windows::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ISpatialAudioFormatSubtypeStatics" };
    };
    template <> struct name<Windows::Media::Audio::AudioDeviceInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioDeviceInputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioDeviceOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioDeviceOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioFileInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFileInputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioFileOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFileOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioFrameCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFrameCompletedEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::AudioFrameInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFrameInputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioFrameOutputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFrameOutputNode" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraph>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraph" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphBatchUpdater>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphBatchUpdater" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphConnection" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphSettings" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitter>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitter" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterConeProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterConeProperties" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterDecayModel>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterDecayModel" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterShape>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterShape" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeListener>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeListener" };
    };
    template <> struct name<Windows::Media::Audio::AudioPlaybackConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioPlaybackConnection" };
    };
    template <> struct name<Windows::Media::Audio::AudioPlaybackConnectionOpenResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioPlaybackConnectionOpenResult" };
    };
    template <> struct name<Windows::Media::Audio::AudioStateMonitor>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioStateMonitor" };
    };
    template <> struct name<Windows::Media::Audio::AudioSubmixNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioSubmixNode" };
    };
    template <> struct name<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::CreateAudioFileInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateAudioFileInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::CreateAudioFileOutputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateAudioFileOutputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::CreateAudioGraphResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateAudioGraphResult" };
    };
    template <> struct name<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.CreateMediaSourceAudioInputNodeResult" };
    };
    template <> struct name<Windows::Media::Audio::EchoEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.EchoEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::EqualizerBand>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.EqualizerBand" };
    };
    template <> struct name<Windows::Media::Audio::EqualizerEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.EqualizerEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs" };
    };
    template <> struct name<Windows::Media::Audio::LimiterEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.LimiterEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::MediaSourceAudioInputNode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.MediaSourceAudioInputNode" };
    };
    template <> struct name<Windows::Media::Audio::ReverbEffectDefinition>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.ReverbEffectDefinition" };
    };
    template <> struct name<Windows::Media::Audio::SetDefaultSpatialAudioFormatResult>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SetDefaultSpatialAudioFormatResult" };
    };
    template <> struct name<Windows::Media::Audio::SpatialAudioDeviceConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SpatialAudioDeviceConfiguration" };
    };
    template <> struct name<Windows::Media::Audio::SpatialAudioFormatConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SpatialAudioFormatConfiguration" };
    };
    template <> struct name<Windows::Media::Audio::SpatialAudioFormatSubtype>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SpatialAudioFormatSubtype" };
    };
    template <> struct name<Windows::Media::Audio::AudioDeviceNodeCreationStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioDeviceNodeCreationStatus" };
    };
    template <> struct name<Windows::Media::Audio::AudioFileNodeCreationStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioFileNodeCreationStatus" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphCreationStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphCreationStatus" };
    };
    template <> struct name<Windows::Media::Audio::AudioGraphUnrecoverableError>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioGraphUnrecoverableError" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterDecayKind>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterDecayKind" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterSettings" };
    };
    template <> struct name<Windows::Media::Audio::AudioNodeEmitterShapeKind>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioNodeEmitterShapeKind" };
    };
    template <> struct name<Windows::Media::Audio::AudioPlaybackConnectionOpenResultStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioPlaybackConnectionOpenResultStatus" };
    };
    template <> struct name<Windows::Media::Audio::AudioPlaybackConnectionState>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.AudioPlaybackConnectionState" };
    };
    template <> struct name<Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.MediaSourceAudioInputNodeCreationStatus" };
    };
    template <> struct name<Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.MixedRealitySpatialAudioFormatPolicy" };
    };
    template <> struct name<Windows::Media::Audio::QuantumSizeSelectionMode>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.QuantumSizeSelectionMode" };
    };
    template <> struct name<Windows::Media::Audio::SetDefaultSpatialAudioFormatStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SetDefaultSpatialAudioFormatStatus" };
    };
    template <> struct name<Windows::Media::Audio::SpatialAudioModel>
    {
        static constexpr auto & value{ L"Windows.Media.Audio.SpatialAudioModel" };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioDeviceInputNode>
    {
        static constexpr guid value{ 0xB01B6BE1,0x6F4E,0x49E2,{ 0xAC,0x01,0x55,0x9D,0x62,0xBE,0xB3,0xA9 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioDeviceOutputNode>
    {
        static constexpr guid value{ 0x362EDBFF,0xFF1C,0x4434,{ 0x9E,0x0F,0xBD,0x2E,0xF5,0x22,0xAC,0x82 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioFileInputNode>
    {
        static constexpr guid value{ 0x905B67C8,0x6F65,0x4CD4,{ 0x88,0x90,0x46,0x94,0x84,0x3C,0x27,0x6D } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioFileOutputNode>
    {
        static constexpr guid value{ 0x50E01980,0x5166,0x4093,{ 0x80,0xF8,0xAD,0xA0,0x00,0x89,0xE9,0xCF } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        static constexpr guid value{ 0xDC7C829E,0x0208,0x4504,{ 0xA5,0xA8,0xF0,0xF2,0x68,0x92,0x0A,0x65 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioFrameInputNode>
    {
        static constexpr guid value{ 0x01B266C7,0xFD96,0x4FF5,{ 0xA3,0xC5,0xD2,0x7A,0x9B,0xF4,0x42,0x37 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioFrameOutputNode>
    {
        static constexpr guid value{ 0xB847371B,0x3299,0x45F5,{ 0x88,0xB3,0xC9,0xD1,0x2A,0x3F,0x1C,0xC8 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraph>
    {
        static constexpr guid value{ 0x1AD46EED,0xE48C,0x4E14,{ 0x96,0x60,0x2C,0x4F,0x83,0xE9,0xCD,0xD8 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraph2>
    {
        static constexpr guid value{ 0x4E4C3BD5,0x4FC1,0x45F6,{ 0xA9,0x47,0x3C,0xD3,0x8F,0x4F,0xD8,0x39 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraph3>
    {
        static constexpr guid value{ 0xDDCD25AE,0x1185,0x42A7,{ 0x83,0x1D,0x6A,0x9B,0x0F,0xC8,0x68,0x20 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphConnection>
    {
        static constexpr guid value{ 0x763070ED,0xD04E,0x4FAC,{ 0xB2,0x33,0x60,0x0B,0x42,0xED,0xD4,0x69 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphSettings>
    {
        static constexpr guid value{ 0x1D59647F,0xE6FE,0x4628,{ 0x84,0xF8,0x9D,0x8B,0xDB,0xA2,0x57,0x85 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphSettings2>
    {
        static constexpr guid value{ 0x72919787,0x4DAB,0x46E3,{ 0xB4,0xC9,0xD8,0xE1,0xA2,0x63,0x60,0x62 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphSettingsFactory>
    {
        static constexpr guid value{ 0xA5D91CC6,0xC2EB,0x4A61,{ 0xA2,0x14,0x1D,0x66,0xD7,0x5F,0x83,0xDA } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphStatics>
    {
        static constexpr guid value{ 0x76EC3132,0xE159,0x4AB7,{ 0xA8,0x2A,0x17,0xBE,0xB4,0xB3,0x1E,0x94 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        static constexpr guid value{ 0xC3D9CBE0,0x3FF6,0x4FB3,{ 0xB2,0x62,0x50,0xD4,0x35,0xC5,0x54,0x23 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioInputNode>
    {
        static constexpr guid value{ 0xD148005C,0x8428,0x4784,{ 0xB7,0xFD,0xA9,0x9D,0x46,0x8C,0x5D,0x20 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioInputNode2>
    {
        static constexpr guid value{ 0x905156B7,0xCA68,0x4C6D,{ 0xA8,0xBC,0xE3,0xEE,0x17,0xFE,0x3F,0xD2 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNode>
    {
        static constexpr guid value{ 0x15389D7F,0xDBD8,0x4819,{ 0xBF,0x03,0x66,0x8E,0x93,0x57,0xCD,0x6D } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitter>
    {
        static constexpr guid value{ 0x3676971D,0x880A,0x47B8,{ 0xAD,0xF7,0x13,0x23,0xA9,0xD9,0x65,0xBE } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitter2>
    {
        static constexpr guid value{ 0x4AB6EECB,0xEC29,0x47F8,{ 0x81,0x8C,0xB6,0xB6,0x60,0xA5,0xAE,0xB1 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        static constexpr guid value{ 0xE99B2CEE,0x02CA,0x4375,{ 0x93,0x26,0x0C,0x6A,0xE4,0xBC,0xDF,0xB5 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        static constexpr guid value{ 0x1D1D5AF7,0x0D53,0x4FA9,{ 0xBD,0x84,0xD5,0x81,0x6A,0x86,0xF3,0xFF } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        static constexpr guid value{ 0xC7787CA8,0xF178,0x462F,{ 0xBC,0x81,0x8D,0xD5,0xCB,0xE5,0xDA,0xE8 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterFactory>
    {
        static constexpr guid value{ 0xFDC8489A,0x6AD6,0x4CE4,{ 0xB7,0xF7,0xA9,0x93,0x70,0xDF,0x7E,0xE9 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        static constexpr guid value{ 0x48934BCF,0xCF2C,0x4EFC,{ 0x93,0x31,0x75,0xBD,0x22,0xDF,0x1F,0x0C } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterShape>
    {
        static constexpr guid value{ 0xEA0311C5,0xE73D,0x44BC,{ 0x85,0x9C,0x45,0x55,0x3B,0xBC,0x48,0x28 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        static constexpr guid value{ 0x57BB2771,0xFFA5,0x4B86,{ 0xA7,0x79,0xE2,0x64,0xAE,0xB9,0x14,0x5F } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeListener>
    {
        static constexpr guid value{ 0xD9722E16,0x0C0A,0x41DA,{ 0xB7,0x55,0x6C,0x77,0x83,0x5F,0xB1,0xEB } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioNodeWithListener>
    {
        static constexpr guid value{ 0x0E0F907C,0x79FF,0x4544,{ 0x9E,0xEB,0x01,0x25,0x7B,0x15,0x10,0x5A } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioPlaybackConnection>
    {
        static constexpr guid value{ 0x1A4C1DEA,0xCAFC,0x50E7,{ 0x87,0x18,0xEA,0x3F,0x81,0xCB,0xFA,0x51 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        static constexpr guid value{ 0x4E656AEF,0x39F9,0x5FC9,{ 0xA5,0x19,0xA5,0xBB,0xFD,0x9F,0xE9,0x21 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        static constexpr guid value{ 0xE60963A2,0x69E6,0x5FFC,{ 0x9E,0x13,0x82,0x4A,0x85,0x21,0x3D,0xAF } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioStateMonitor>
    {
        static constexpr guid value{ 0x1D13D136,0x0199,0x4CDC,{ 0xB8,0x4E,0xE7,0x2C,0x2B,0x58,0x1E,0xCE } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IAudioStateMonitorStatics>
    {
        static constexpr guid value{ 0x6374EA4C,0x1B3B,0x4001,{ 0x94,0xD9,0xDD,0x22,0x53,0x30,0xFA,0x40 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        static constexpr guid value{ 0x16EEC7A8,0x1CA7,0x40EF,{ 0x91,0xA4,0xD3,0x46,0xE0,0xAA,0x1B,0xBA } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        static constexpr guid value{ 0x921C69CE,0x3F35,0x41C7,{ 0x96,0x22,0x79,0xF6,0x08,0xBA,0xED,0xC2 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        static constexpr guid value{ 0xF7776D27,0x1D9A,0x47F7,{ 0x9C,0xD4,0x28,0x59,0xCC,0x1B,0x7B,0xFF } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        static constexpr guid value{ 0x4864269F,0xBDCE,0x4AB1,{ 0xBD,0x38,0xFB,0xAE,0x93,0xAE,0xDA,0xCA } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        static constexpr guid value{ 0xCE83D61C,0xE297,0x4C50,{ 0x9C,0xE7,0x1C,0x7A,0x69,0xD6,0xBD,0x09 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        static constexpr guid value{ 0xF9082020,0x3D80,0x4FE0,{ 0x81,0xC1,0x76,0x8F,0xEA,0x7C,0xA7,0xE0 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        static constexpr guid value{ 0x47D6BA7B,0xE909,0x453F,{ 0x86,0x6E,0x55,0x40,0xCD,0xA7,0x34,0xFF } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        static constexpr guid value{ 0x9F01B50D,0x3318,0x47B3,{ 0xA6,0x0A,0x1B,0x49,0x2B,0xE7,0xFC,0x0D } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioGraphResult>
    {
        static constexpr guid value{ 0x5453EF7E,0x7BDE,0x4B76,{ 0xBB,0x5D,0x48,0xF7,0x9C,0xFC,0x8C,0x0B } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        static constexpr guid value{ 0x6D738DFC,0x88C6,0x4FCB,{ 0xA5,0x34,0x85,0xCE,0xDD,0x40,0x50,0xA1 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        static constexpr guid value{ 0x46A658A3,0x53C0,0x4D59,{ 0x9E,0x51,0xCC,0x1D,0x10,0x44,0xA4,0xC4 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        static constexpr guid value{ 0x63514CE8,0x6A1A,0x49E3,{ 0x97,0xEC,0x28,0xFD,0x5B,0xE1,0x14,0xE5 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IEchoEffectDefinition>
    {
        static constexpr guid value{ 0x0E4D3FAA,0x36B8,0x4C91,{ 0xB9,0xDA,0x11,0xF4,0x4A,0x8A,0x66,0x10 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IEchoEffectDefinitionFactory>
    {
        static constexpr guid value{ 0x0D4E2257,0xAAF2,0x4E86,{ 0xA5,0x4C,0xFB,0x79,0xDB,0x8F,0x6C,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IEqualizerBand>
    {
        static constexpr guid value{ 0xC00A5A6A,0x262D,0x4B85,{ 0x9B,0xB7,0x43,0x28,0x0B,0x62,0xED,0x0C } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IEqualizerEffectDefinition>
    {
        static constexpr guid value{ 0x023F6F1F,0x83FE,0x449A,{ 0xA8,0x22,0xC6,0x96,0x44,0x2D,0x16,0xB0 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        static constexpr guid value{ 0xD2876FC4,0xD410,0x4EB5,{ 0x9E,0x69,0xC9,0xAA,0x12,0x77,0xEA,0xF0 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        static constexpr guid value{ 0x3D9BD498,0xA306,0x4F06,{ 0xBD,0x9F,0xE9,0xEF,0xC8,0x22,0x63,0x04 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ILimiterEffectDefinition>
    {
        static constexpr guid value{ 0x6B755D19,0x2603,0x47BA,{ 0xBD,0xEB,0x39,0x05,0x5E,0x34,0x86,0xDC } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        static constexpr guid value{ 0xECBAE6F1,0x61FF,0x45EF,{ 0xB8,0xF5,0x48,0x65,0x9A,0x57,0xC7,0x2D } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IMediaSourceAudioInputNode>
    {
        static constexpr guid value{ 0x99D8983B,0xA88A,0x4041,{ 0x8E,0x4F,0xDD,0xBA,0xC0,0xC9,0x1F,0xD3 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IReverbEffectDefinition>
    {
        static constexpr guid value{ 0x4606AA89,0xF563,0x4D0A,{ 0x8F,0x6E,0xF0,0xCD,0xDF,0xF3,0x5D,0x84 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::IReverbEffectDefinitionFactory>
    {
        static constexpr guid value{ 0xA7D5CBFE,0x100B,0x4FF0,{ 0x9D,0xA6,0xDC,0x4E,0x05,0xA7,0x59,0xF0 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        static constexpr guid value{ 0x1C2AA511,0x1400,0x5E70,{ 0x9E,0xA9,0xAE,0x15,0x12,0x41,0xE8,0xEA } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        static constexpr guid value{ 0xEE830034,0x61CF,0x5749,{ 0x9D,0xA4,0x10,0xF0,0xFE,0x02,0x81,0x99 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        static constexpr guid value{ 0x3EC37F7B,0x936D,0x4E04,{ 0x97,0x28,0x28,0x27,0xD9,0xF7,0x58,0xC4 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        static constexpr guid value{ 0x32DF09A8,0x50F0,0x5395,{ 0x99,0x23,0x7D,0x44,0xCA,0x71,0xED,0x6D } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        static constexpr guid value{ 0x2B5FEF71,0x67C9,0x4E5F,{ 0xA3,0x5B,0x41,0x68,0x07,0x11,0xF8,0xC7 } };
    };
    template <> struct guid_storage<Windows::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        static constexpr guid value{ 0xB3DE8A47,0x83EE,0x4266,{ 0xA9,0x45,0xBE,0xDF,0x50,0x7A,0xFE,0xED } };
    };
    template <> struct default_interface<Windows::Media::Audio::AudioDeviceInputNode>
    {
        using type = Windows::Media::Audio::IAudioDeviceInputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioDeviceOutputNode>
    {
        using type = Windows::Media::Audio::IAudioDeviceOutputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioFileInputNode>
    {
        using type = Windows::Media::Audio::IAudioFileInputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioFileOutputNode>
    {
        using type = Windows::Media::Audio::IAudioFileOutputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioFrameCompletedEventArgs>
    {
        using type = Windows::Media::Audio::IAudioFrameCompletedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioFrameInputNode>
    {
        using type = Windows::Media::Audio::IAudioFrameInputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioFrameOutputNode>
    {
        using type = Windows::Media::Audio::IAudioFrameOutputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioGraph>
    {
        using type = Windows::Media::Audio::IAudioGraph;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioGraphBatchUpdater>
    {
        using type = Windows::Foundation::IClosable;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioGraphConnection>
    {
        using type = Windows::Media::Audio::IAudioGraphConnection;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioGraphSettings>
    {
        using type = Windows::Media::Audio::IAudioGraphSettings;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        using type = Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeEmitter>
    {
        using type = Windows::Media::Audio::IAudioNodeEmitter;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeEmitterConeProperties>
    {
        using type = Windows::Media::Audio::IAudioNodeEmitterConeProperties;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeEmitterDecayModel>
    {
        using type = Windows::Media::Audio::IAudioNodeEmitterDecayModel;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>
    {
        using type = Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeEmitterShape>
    {
        using type = Windows::Media::Audio::IAudioNodeEmitterShape;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioNodeListener>
    {
        using type = Windows::Media::Audio::IAudioNodeListener;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioPlaybackConnection>
    {
        using type = Windows::Media::Audio::IAudioPlaybackConnection;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioPlaybackConnectionOpenResult>
    {
        using type = Windows::Media::Audio::IAudioPlaybackConnectionOpenResult;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioStateMonitor>
    {
        using type = Windows::Media::Audio::IAudioStateMonitor;
    };
    template <> struct default_interface<Windows::Media::Audio::AudioSubmixNode>
    {
        using type = Windows::Media::Audio::IAudioInputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>
    {
        using type = Windows::Media::Audio::ICreateAudioDeviceInputNodeResult;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>
    {
        using type = Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateAudioFileInputNodeResult>
    {
        using type = Windows::Media::Audio::ICreateAudioFileInputNodeResult;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateAudioFileOutputNodeResult>
    {
        using type = Windows::Media::Audio::ICreateAudioFileOutputNodeResult;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateAudioGraphResult>
    {
        using type = Windows::Media::Audio::ICreateAudioGraphResult;
    };
    template <> struct default_interface<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>
    {
        using type = Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult;
    };
    template <> struct default_interface<Windows::Media::Audio::EchoEffectDefinition>
    {
        using type = Windows::Media::Audio::IEchoEffectDefinition;
    };
    template <> struct default_interface<Windows::Media::Audio::EqualizerBand>
    {
        using type = Windows::Media::Audio::IEqualizerBand;
    };
    template <> struct default_interface<Windows::Media::Audio::EqualizerEffectDefinition>
    {
        using type = Windows::Media::Audio::IEqualizerEffectDefinition;
    };
    template <> struct default_interface<Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>
    {
        using type = Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Audio::LimiterEffectDefinition>
    {
        using type = Windows::Media::Audio::ILimiterEffectDefinition;
    };
    template <> struct default_interface<Windows::Media::Audio::MediaSourceAudioInputNode>
    {
        using type = Windows::Media::Audio::IMediaSourceAudioInputNode;
    };
    template <> struct default_interface<Windows::Media::Audio::ReverbEffectDefinition>
    {
        using type = Windows::Media::Audio::IReverbEffectDefinition;
    };
    template <> struct default_interface<Windows::Media::Audio::SetDefaultSpatialAudioFormatResult>
    {
        using type = Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult;
    };
    template <> struct default_interface<Windows::Media::Audio::SpatialAudioDeviceConfiguration>
    {
        using type = Windows::Media::Audio::ISpatialAudioDeviceConfiguration;
    };
    template <> struct default_interface<Windows::Media::Audio::SpatialAudioFormatConfiguration>
    {
        using type = Windows::Media::Audio::ISpatialAudioFormatConfiguration;
    };
    template <> struct abi<Windows::Media::Audio::IAudioDeviceInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioDeviceOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioFileInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall Seek(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_LoopCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_LoopCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceFile(void**) noexcept = 0;
            virtual int32_t __stdcall add_FileCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioFileOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileEncodingProfile(void**) noexcept = 0;
            virtual int32_t __stdcall FinalizeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioFrameInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall AddFrame(void*) noexcept = 0;
            virtual int32_t __stdcall DiscardQueuedFrames() noexcept = 0;
            virtual int32_t __stdcall get_QueuedSampleCount(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_AudioFrameCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioFrameCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuantumStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumStarted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioFrameOutputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraph>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameInputNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameInputNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatOnDeviceAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameOutputNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameOutputNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceOutputNodeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileOutputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileOutputNodeWithFileProfileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNode(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNodeWithFormat(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall ResetAllNodes() noexcept = 0;
            virtual int32_t __stdcall add_QuantumStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuantumProcessed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuantumProcessed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UnrecoverableErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnrecoverableErrorOccurred(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CompletedQuantumCount(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_LatencyInSamples(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryRenderDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_RenderDeviceAudioProcessing(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SamplesPerQuantum(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraph2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameInputNodeWithFormatAndEmitter(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(int32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileInputNodeWithEmitterAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSubmixNodeWithFormatAndEmitter(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBatchUpdater(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraph3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMediaSourceAudioInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMediaSourceAudioInputNodeWithEmitterAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Destination(void**) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_EncodingProperties(void*) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryRenderDevice(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrimaryRenderDevice(void*) noexcept = 0;
            virtual int32_t __stdcall get_QuantumSizeSelectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_QuantumSizeSelectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredSamplesPerQuantum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredSamplesPerQuantum(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioRenderCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioRenderCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredRenderDeviceAudioProcessing(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredRenderDeviceAudioProcessing(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MaxPlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_MaxPlaybackSpeedFactor(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphSettingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutgoingConnections(void**) noexcept = 0;
            virtual int32_t __stdcall AddOutgoingConnection(void*) noexcept = 0;
            virtual int32_t __stdcall AddOutgoingConnectionWithGain(void*, double) noexcept = 0;
            virtual int32_t __stdcall RemoveOutgoingConnection(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioInputNode2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Emitter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutgoingGain(double) noexcept = 0;
            virtual int32_t __stdcall get_OutgoingGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConsumeInput(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ConsumeInput(bool) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
            virtual int32_t __stdcall DisableEffectsByDefinition(void*) noexcept = 0;
            virtual int32_t __stdcall EnableEffectsByDefinition(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Position(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Direction(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
            virtual int32_t __stdcall get_DecayModel(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
            virtual int32_t __stdcall get_DistanceScale(double*) noexcept = 0;
            virtual int32_t __stdcall put_DistanceScale(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerScale(double*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerScale(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_IsDopplerDisabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpatialAudioModel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpatialAudioModel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InnerAngle(double*) noexcept = 0;
            virtual int32_t __stdcall get_OuterAngle(double*) noexcept = 0;
            virtual int32_t __stdcall get_OuterAngleGain(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxGain(double*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNatural(double, double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCustom(double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAudioNodeEmitter(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnityGainDistance(double*) noexcept = 0;
            virtual int32_t __stdcall get_CutoffDistance(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ConeProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCone(double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOmnidirectional(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Position(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall get_SpeedOfSound(double*) noexcept = 0;
            virtual int32_t __stdcall put_SpeedOfSound(double) noexcept = 0;
            virtual int32_t __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioNodeWithListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Listener(void*) noexcept = 0;
            virtual int32_t __stdcall get_Listener(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioPlaybackConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Open(void**) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateFromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioStateMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SoundLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IAudioStateMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForRenderMonitoring(void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategory(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategoryAndDeviceRole(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForRenderMonitoringWithCategoryAndDeviceId(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoring(void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategory(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceRole(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceId(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceOutputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FileInputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FileOutputNode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioGraphResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Graph(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Node(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IEchoEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WetDryMix(double) noexcept = 0;
            virtual int32_t __stdcall get_WetDryMix(double*) noexcept = 0;
            virtual int32_t __stdcall put_Feedback(double) noexcept = 0;
            virtual int32_t __stdcall get_Feedback(double*) noexcept = 0;
            virtual int32_t __stdcall put_Delay(double) noexcept = 0;
            virtual int32_t __stdcall get_Delay(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IEchoEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IEqualizerBand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bandwidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_Bandwidth(double) noexcept = 0;
            virtual int32_t __stdcall get_FrequencyCenter(double*) noexcept = 0;
            virtual int32_t __stdcall put_FrequencyCenter(double) noexcept = 0;
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IEqualizerEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bands(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequiredSamples(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ILimiterEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Release(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Release(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Loudness(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Loudness(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IMediaSourceAudioInputNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaybackSpeedFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSpeedFactor(double*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall Seek(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_LoopCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_LoopCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSource(void**) noexcept = 0;
            virtual int32_t __stdcall add_MediaSourceCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaSourceCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IReverbEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WetDryMix(double) noexcept = 0;
            virtual int32_t __stdcall get_WetDryMix(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectionsDelay(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReflectionsDelay(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReverbDelay(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_ReverbDelay(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_RearDelay(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_RearDelay(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionLeft(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionLeft(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionRight(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionRight(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionMatrixLeft(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionMatrixLeft(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionMatrixRight(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionMatrixRight(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_EarlyDiffusion(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_EarlyDiffusion(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LateDiffusion(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LateDiffusion(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LowEQGain(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LowEQGain(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_LowEQCutoff(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_LowEQCutoff(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighEQGain(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_HighEQGain(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighEQCutoff(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_HighEQCutoff(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterFreq(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterFreq(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterMain(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterMain(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomFilterHF(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomFilterHF(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectionsGain(double) noexcept = 0;
            virtual int32_t __stdcall get_ReflectionsGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReverbGain(double) noexcept = 0;
            virtual int32_t __stdcall get_ReverbGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_DecayTime(double) noexcept = 0;
            virtual int32_t __stdcall get_DecayTime(double*) noexcept = 0;
            virtual int32_t __stdcall put_Density(double) noexcept = 0;
            virtual int32_t __stdcall get_Density(double*) noexcept = 0;
            virtual int32_t __stdcall put_RoomSize(double) noexcept = 0;
            virtual int32_t __stdcall get_RoomSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisableLateField(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisableLateField(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::IReverbEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSpatialAudioSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsSpatialAudioFormatSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSpatialAudioFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultSpatialAudioFormat(void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultSpatialAudioFormatAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ConfigurationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConfigurationChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForDeviceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportLicenseChangedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportConfigurationChangedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MixedRealityExclusiveModePolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MixedRealityExclusiveModePolicy(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowsSonic(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForHeadphones(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForHomeTheater(void**) noexcept = 0;
            virtual int32_t __stdcall get_DolbyAtmosForSpeakers(void**) noexcept = 0;
            virtual int32_t __stdcall get_DTSHeadphoneX(void**) noexcept = 0;
            virtual int32_t __stdcall get_DTSXUltra(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioDeviceInputNode
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioDeviceInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioDeviceInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioDeviceOutputNode
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioDeviceOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioDeviceOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFileInputNode
    {
        auto PlaybackSpeedFactor(double value) const;
        [[nodiscard]] auto PlaybackSpeedFactor() const;
        [[nodiscard]] auto Position() const;
        auto Seek(Windows::Foundation::TimeSpan const& position) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto EndTime() const;
        auto EndTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto LoopCount() const;
        auto LoopCount(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto SourceFile() const;
        auto FileCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const;
        using FileCompleted_revoker = impl::event_revoker<Windows::Media::Audio::IAudioFileInputNode, &impl::abi_t<Windows::Media::Audio::IAudioFileInputNode>::remove_FileCompleted>;
        FileCompleted_revoker FileCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const;
        auto FileCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Audio::IAudioFileInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFileInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFileOutputNode
    {
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto FileEncodingProfile() const;
        auto FinalizeAsync() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioFileOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFileOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs
    {
        [[nodiscard]] auto Frame() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameInputNode
    {
        auto PlaybackSpeedFactor(double value) const;
        [[nodiscard]] auto PlaybackSpeedFactor() const;
        auto AddFrame(Windows::Media::AudioFrame const& frame) const;
        auto DiscardQueuedFrames() const;
        [[nodiscard]] auto QueuedSampleCount() const;
        auto AudioFrameCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const;
        using AudioFrameCompleted_revoker = impl::event_revoker<Windows::Media::Audio::IAudioFrameInputNode, &impl::abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_AudioFrameCompleted>;
        AudioFrameCompleted_revoker AudioFrameCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const;
        auto AudioFrameCompleted(winrt::event_token const& token) const noexcept;
        auto QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const;
        using QuantumStarted_revoker = impl::event_revoker<Windows::Media::Audio::IAudioFrameInputNode, &impl::abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_QuantumStarted>;
        QuantumStarted_revoker QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const;
        auto QuantumStarted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Audio::IAudioFrameInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioFrameOutputNode
    {
        auto GetFrame() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioFrameOutputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioFrameOutputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph
    {
        auto CreateFrameInputNode() const;
        auto CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        auto CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category) const;
        auto CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        auto CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device) const;
        auto CreateFrameOutputNode() const;
        auto CreateFrameOutputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        auto CreateDeviceOutputNodeAsync() const;
        auto CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file) const;
        auto CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file) const;
        auto CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::MediaProperties::MediaEncodingProfile const& fileEncodingProfile) const;
        auto CreateSubmixNode() const;
        auto CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        auto Start() const;
        auto Stop() const;
        auto ResetAllNodes() const;
        auto QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const;
        using QuantumStarted_revoker = impl::event_revoker<Windows::Media::Audio::IAudioGraph, &impl::abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumStarted>;
        QuantumStarted_revoker QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const;
        auto QuantumStarted(winrt::event_token const& token) const noexcept;
        auto QuantumProcessed(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const;
        using QuantumProcessed_revoker = impl::event_revoker<Windows::Media::Audio::IAudioGraph, &impl::abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumProcessed>;
        QuantumProcessed_revoker QuantumProcessed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const;
        auto QuantumProcessed(winrt::event_token const& token) const noexcept;
        auto UnrecoverableErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const;
        using UnrecoverableErrorOccurred_revoker = impl::event_revoker<Windows::Media::Audio::IAudioGraph, &impl::abi_t<Windows::Media::Audio::IAudioGraph>::remove_UnrecoverableErrorOccurred>;
        UnrecoverableErrorOccurred_revoker UnrecoverableErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const;
        auto UnrecoverableErrorOccurred(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CompletedQuantumCount() const;
        [[nodiscard]] auto EncodingProperties() const;
        [[nodiscard]] auto LatencyInSamples() const;
        [[nodiscard]] auto PrimaryRenderDevice() const;
        [[nodiscard]] auto RenderDeviceAudioProcessing() const;
        [[nodiscard]] auto SamplesPerQuantum() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraph>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph2
    {
        auto CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const;
        auto CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device, Windows::Media::Audio::AudioNodeEmitter const& emitter) const;
        auto CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::Audio::AudioNodeEmitter const& emitter) const;
        auto CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const;
        auto CreateBatchUpdater() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraph2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraph3
    {
        auto CreateMediaSourceAudioInputNodeAsync(Windows::Media::Core::MediaSource const& mediaSource) const;
        auto CreateMediaSourceAudioInputNodeAsync(Windows::Media::Core::MediaSource const& mediaSource, Windows::Media::Audio::AudioNodeEmitter const& emitter) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraph3>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraph3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphConnection
    {
        [[nodiscard]] auto Destination() const;
        auto Gain(double value) const;
        [[nodiscard]] auto Gain() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphConnection>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettings
    {
        [[nodiscard]] auto EncodingProperties() const;
        auto EncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& value) const;
        [[nodiscard]] auto PrimaryRenderDevice() const;
        auto PrimaryRenderDevice(Windows::Devices::Enumeration::DeviceInformation const& value) const;
        [[nodiscard]] auto QuantumSizeSelectionMode() const;
        auto QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode const& value) const;
        [[nodiscard]] auto DesiredSamplesPerQuantum() const;
        auto DesiredSamplesPerQuantum(int32_t value) const;
        [[nodiscard]] auto AudioRenderCategory() const;
        auto AudioRenderCategory(Windows::Media::Render::AudioRenderCategory const& value) const;
        [[nodiscard]] auto DesiredRenderDeviceAudioProcessing() const;
        auto DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing const& value) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphSettings>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettings2
    {
        auto MaxPlaybackSpeedFactor(double value) const;
        [[nodiscard]] auto MaxPlaybackSpeedFactor() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphSettingsFactory
    {
        auto Create(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphStatics
    {
        auto CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs
    {
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioInputNode
    {
        [[nodiscard]] auto OutgoingConnections() const;
        auto AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const;
        auto AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination, double gain) const;
        auto RemoveOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioInputNode2
    {
        [[nodiscard]] auto Emitter() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioInputNode2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioInputNode2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNode
    {
        [[nodiscard]] auto EffectDefinitions() const;
        auto OutgoingGain(double value) const;
        [[nodiscard]] auto OutgoingGain() const;
        [[nodiscard]] auto EncodingProperties() const;
        [[nodiscard]] auto ConsumeInput() const;
        auto ConsumeInput(bool value) const;
        auto Start() const;
        auto Stop() const;
        auto Reset() const;
        auto DisableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
        auto EnableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitter
    {
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Direction() const;
        auto Direction(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Shape() const;
        [[nodiscard]] auto DecayModel() const;
        [[nodiscard]] auto Gain() const;
        auto Gain(double value) const;
        [[nodiscard]] auto DistanceScale() const;
        auto DistanceScale(double value) const;
        [[nodiscard]] auto DopplerScale() const;
        auto DopplerScale(double value) const;
        [[nodiscard]] auto DopplerVelocity() const;
        auto DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto IsDopplerDisabled() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitter>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitter2
    {
        [[nodiscard]] auto SpatialAudioModel() const;
        auto SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel const& value) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitter2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitter2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties
    {
        [[nodiscard]] auto InnerAngle() const;
        [[nodiscard]] auto OuterAngle() const;
        [[nodiscard]] auto OuterAngleGain() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto MinGain() const;
        [[nodiscard]] auto MaxGain() const;
        [[nodiscard]] auto NaturalProperties() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics
    {
        auto CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance) const;
        auto CreateCustom(double minGain, double maxGain) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterFactory
    {
        auto CreateAudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties
    {
        [[nodiscard]] auto UnityGainDistance() const;
        [[nodiscard]] auto CutoffDistance() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterShape
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto ConeProperties() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterShape>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics
    {
        auto CreateCone(double innerAngle, double outerAngle, double outerAngleGain) const;
        auto CreateOmnidirectional() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeListener
    {
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Orientation() const;
        auto Orientation(Windows::Foundation::Numerics::quaternion const& value) const;
        [[nodiscard]] auto SpeedOfSound() const;
        auto SpeedOfSound(double value) const;
        [[nodiscard]] auto DopplerVelocity() const;
        auto DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeListener>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeListener<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioNodeWithListener
    {
        auto Listener(Windows::Media::Audio::AudioNodeListener const& value) const;
        [[nodiscard]] auto Listener() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioNodeWithListener>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioNodeWithListener<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnection
    {
        auto Start() const;
        auto StartAsync() const;
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto State() const;
        auto Open() const;
        auto OpenAsync() const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioPlaybackConnection, Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::Audio::IAudioPlaybackConnection, &impl::abi_t<Windows::Media::Audio::IAudioPlaybackConnection>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioPlaybackConnection, Windows::Foundation::IInspectable> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Audio::IAudioPlaybackConnection>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnectionOpenResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioPlaybackConnectionOpenResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnectionOpenResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioPlaybackConnectionStatics
    {
        auto GetDeviceSelector() const;
        auto TryCreateFromId(param::hstring const& id) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioPlaybackConnectionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioPlaybackConnectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioStateMonitor
    {
        auto SoundLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioStateMonitor, Windows::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<Windows::Media::Audio::IAudioStateMonitor, &impl::abi_t<Windows::Media::Audio::IAudioStateMonitor>::remove_SoundLevelChanged>;
        SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioStateMonitor, Windows::Foundation::IInspectable> const& handler) const;
        auto SoundLevelChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto SoundLevel() const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioStateMonitor>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioStateMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IAudioStateMonitorStatics
    {
        auto CreateForRenderMonitoring() const;
        auto CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category) const;
        auto CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role) const;
        auto CreateForRenderMonitoringWithCategoryAndDeviceId(Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId) const;
        auto CreateForCaptureMonitoring() const;
        auto CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category) const;
        auto CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role) const;
        auto CreateForCaptureMonitoringWithCategoryAndDeviceId(Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Media::Audio::IAudioStateMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto DeviceInputNode() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto DeviceOutputNode() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto FileInputNode() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto FileOutputNode() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioGraphResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Graph() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioGraphResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioGraphResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateAudioGraphResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateAudioGraphResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Node() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEchoEffectDefinition
    {
        auto WetDryMix(double value) const;
        [[nodiscard]] auto WetDryMix() const;
        auto Feedback(double value) const;
        [[nodiscard]] auto Feedback() const;
        auto Delay(double value) const;
        [[nodiscard]] auto Delay() const;
    };
    template <> struct consume<Windows::Media::Audio::IEchoEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEchoEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEchoEffectDefinitionFactory
    {
        auto Create(Windows::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<Windows::Media::Audio::IEchoEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEchoEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerBand
    {
        [[nodiscard]] auto Bandwidth() const;
        auto Bandwidth(double value) const;
        [[nodiscard]] auto FrequencyCenter() const;
        auto FrequencyCenter(double value) const;
        [[nodiscard]] auto Gain() const;
        auto Gain(double value) const;
    };
    template <> struct consume<Windows::Media::Audio::IEqualizerBand>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerBand<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerEffectDefinition
    {
        [[nodiscard]] auto Bands() const;
    };
    template <> struct consume<Windows::Media::Audio::IEqualizerEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory
    {
        auto Create(Windows::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs
    {
        [[nodiscard]] auto RequiredSamples() const;
    };
    template <> struct consume<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ILimiterEffectDefinition
    {
        auto Release(uint32_t value) const;
        [[nodiscard]] auto Release() const;
        auto Loudness(uint32_t value) const;
        [[nodiscard]] auto Loudness() const;
    };
    template <> struct consume<Windows::Media::Audio::ILimiterEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ILimiterEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory
    {
        auto Create(Windows::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IMediaSourceAudioInputNode
    {
        auto PlaybackSpeedFactor(double value) const;
        [[nodiscard]] auto PlaybackSpeedFactor() const;
        [[nodiscard]] auto Position() const;
        auto Seek(Windows::Foundation::TimeSpan const& position) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto EndTime() const;
        auto EndTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto LoopCount() const;
        auto LoopCount(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto MediaSource() const;
        auto MediaSourceCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::MediaSourceAudioInputNode, Windows::Foundation::IInspectable> const& handler) const;
        using MediaSourceCompleted_revoker = impl::event_revoker<Windows::Media::Audio::IMediaSourceAudioInputNode, &impl::abi_t<Windows::Media::Audio::IMediaSourceAudioInputNode>::remove_MediaSourceCompleted>;
        MediaSourceCompleted_revoker MediaSourceCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::MediaSourceAudioInputNode, Windows::Foundation::IInspectable> const& handler) const;
        auto MediaSourceCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Audio::IMediaSourceAudioInputNode>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IReverbEffectDefinition
    {
        auto WetDryMix(double value) const;
        [[nodiscard]] auto WetDryMix() const;
        auto ReflectionsDelay(uint32_t value) const;
        [[nodiscard]] auto ReflectionsDelay() const;
        auto ReverbDelay(uint8_t value) const;
        [[nodiscard]] auto ReverbDelay() const;
        auto RearDelay(uint8_t value) const;
        [[nodiscard]] auto RearDelay() const;
        auto PositionLeft(uint8_t value) const;
        [[nodiscard]] auto PositionLeft() const;
        auto PositionRight(uint8_t value) const;
        [[nodiscard]] auto PositionRight() const;
        auto PositionMatrixLeft(uint8_t value) const;
        [[nodiscard]] auto PositionMatrixLeft() const;
        auto PositionMatrixRight(uint8_t value) const;
        [[nodiscard]] auto PositionMatrixRight() const;
        auto EarlyDiffusion(uint8_t value) const;
        [[nodiscard]] auto EarlyDiffusion() const;
        auto LateDiffusion(uint8_t value) const;
        [[nodiscard]] auto LateDiffusion() const;
        auto LowEQGain(uint8_t value) const;
        [[nodiscard]] auto LowEQGain() const;
        auto LowEQCutoff(uint8_t value) const;
        [[nodiscard]] auto LowEQCutoff() const;
        auto HighEQGain(uint8_t value) const;
        [[nodiscard]] auto HighEQGain() const;
        auto HighEQCutoff(uint8_t value) const;
        [[nodiscard]] auto HighEQCutoff() const;
        auto RoomFilterFreq(double value) const;
        [[nodiscard]] auto RoomFilterFreq() const;
        auto RoomFilterMain(double value) const;
        [[nodiscard]] auto RoomFilterMain() const;
        auto RoomFilterHF(double value) const;
        [[nodiscard]] auto RoomFilterHF() const;
        auto ReflectionsGain(double value) const;
        [[nodiscard]] auto ReflectionsGain() const;
        auto ReverbGain(double value) const;
        [[nodiscard]] auto ReverbGain() const;
        auto DecayTime(double value) const;
        [[nodiscard]] auto DecayTime() const;
        auto Density(double value) const;
        [[nodiscard]] auto Density() const;
        auto RoomSize(double value) const;
        [[nodiscard]] auto RoomSize() const;
        auto DisableLateField(bool value) const;
        [[nodiscard]] auto DisableLateField() const;
    };
    template <> struct consume<Windows::Media::Audio::IReverbEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IReverbEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_IReverbEffectDefinitionFactory
    {
        auto Create(Windows::Media::Audio::AudioGraph const& audioGraph) const;
    };
    template <> struct consume<Windows::Media::Audio::IReverbEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Audio_IReverbEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISetDefaultSpatialAudioFormatResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISetDefaultSpatialAudioFormatResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioDeviceConfiguration
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsSpatialAudioSupported() const;
        auto IsSpatialAudioFormatSupported(param::hstring const& subtype) const;
        [[nodiscard]] auto ActiveSpatialAudioFormat() const;
        [[nodiscard]] auto DefaultSpatialAudioFormat() const;
        auto SetDefaultSpatialAudioFormatAsync(param::hstring const& subtype) const;
        auto ConfigurationChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::SpatialAudioDeviceConfiguration, Windows::Foundation::IInspectable> const& handler) const;
        using ConfigurationChanged_revoker = impl::event_revoker<Windows::Media::Audio::ISpatialAudioDeviceConfiguration, &impl::abi_t<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>::remove_ConfigurationChanged>;
        ConfigurationChanged_revoker ConfigurationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::SpatialAudioDeviceConfiguration, Windows::Foundation::IInspectable> const& handler) const;
        auto ConfigurationChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Audio::ISpatialAudioDeviceConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioDeviceConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioDeviceConfigurationStatics
    {
        auto GetForDeviceId(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Media::Audio::ISpatialAudioDeviceConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioDeviceConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatConfiguration
    {
        auto ReportLicenseChangedAsync(param::hstring const& subtype) const;
        auto ReportConfigurationChangedAsync(param::hstring const& subtype) const;
        [[nodiscard]] auto MixedRealityExclusiveModePolicy() const;
        auto MixedRealityExclusiveModePolicy(Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy const& value) const;
    };
    template <> struct consume<Windows::Media::Audio::ISpatialAudioFormatConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatConfigurationStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Media::Audio::ISpatialAudioFormatConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics
    {
        [[nodiscard]] auto WindowsSonic() const;
        [[nodiscard]] auto DolbyAtmosForHeadphones() const;
        [[nodiscard]] auto DolbyAtmosForHomeTheater() const;
        [[nodiscard]] auto DolbyAtmosForSpeakers() const;
        [[nodiscard]] auto DTSHeadphoneX() const;
        [[nodiscard]] auto DTSXUltra() const;
    };
    template <> struct consume<Windows::Media::Audio::ISpatialAudioFormatSubtypeStatics>
    {
        template <typename D> using type = consume_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics<D>;
    };
}
#endif
