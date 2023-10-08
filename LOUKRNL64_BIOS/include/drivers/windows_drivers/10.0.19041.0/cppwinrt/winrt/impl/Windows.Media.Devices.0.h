// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Devices_0_H
#define WINRT_Windows_Media_Devices_0_H
namespace winrt::Windows::Devices::Enumeration
{
    enum class Panel : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Media::Capture
{
    enum class MediaStreamType : int32_t;
    enum class PowerlineFrequency : int32_t;
}
namespace winrt::Windows::Media::Devices::Core
{
    struct VariablePhotoSequenceController;
}
namespace winrt::Windows::Media::MediaProperties
{
    struct IMediaEncodingProperties;
    enum class MediaPixelFormat : int32_t;
    struct MediaRatio;
    enum class MediaThumbnailFormat : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Media::Devices
{
    enum class AdvancedPhotoMode : int32_t
    {
        Auto = 0,
        Standard = 1,
        Hdr = 2,
        LowLight = 3,
    };
    enum class AudioDeviceRole : int32_t
    {
        Default = 0,
        Communications = 1,
    };
    enum class AutoFocusRange : int32_t
    {
        FullRange = 0,
        Macro = 1,
        Normal = 2,
    };
    enum class CameraStreamState : int32_t
    {
        NotStreaming = 0,
        Streaming = 1,
        BlockedForPrivacy = 2,
        Shutdown = 3,
    };
    enum class CaptureSceneMode : int32_t
    {
        Auto = 0,
        Manual = 1,
        Macro = 2,
        Portrait = 3,
        Sport = 4,
        Snow = 5,
        Night = 6,
        Beach = 7,
        Sunset = 8,
        Candlelight = 9,
        Landscape = 10,
        NightPortrait = 11,
        Backlit = 12,
    };
    enum class CaptureUse : int32_t
    {
        None = 0,
        Photo = 1,
        Video = 2,
    };
    enum class ColorTemperaturePreset : int32_t
    {
        Auto = 0,
        Manual = 1,
        Cloudy = 2,
        Daylight = 3,
        Flash = 4,
        Fluorescent = 5,
        Tungsten = 6,
        Candlelight = 7,
    };
    enum class FocusMode : int32_t
    {
        Auto = 0,
        Single = 1,
        Continuous = 2,
        Manual = 3,
    };
    enum class FocusPreset : int32_t
    {
        Auto = 0,
        Manual = 1,
        AutoMacro = 2,
        AutoNormal = 3,
        AutoInfinity = 4,
        AutoHyperfocal = 5,
    };
    enum class HdrVideoMode : int32_t
    {
        Off = 0,
        On = 1,
        Auto = 2,
    };
    enum class InfraredTorchMode : int32_t
    {
        Off = 0,
        On = 1,
        AlternatingFrameIllumination = 2,
    };
    enum class IsoSpeedPreset : int32_t
    {
        Auto = 0,
        Iso50 = 1,
        Iso80 = 2,
        Iso100 = 3,
        Iso200 = 4,
        Iso400 = 5,
        Iso800 = 6,
        Iso1600 = 7,
        Iso3200 = 8,
        Iso6400 = 9,
        Iso12800 = 10,
        Iso25600 = 11,
    };
    enum class ManualFocusDistance : int32_t
    {
        Infinity = 0,
        Hyperfocal = 1,
        Nearest = 2,
    };
    enum class MediaCaptureFocusState : int32_t
    {
        Uninitialized = 0,
        Lost = 1,
        Searching = 2,
        Focused = 3,
        Failed = 4,
    };
    enum class MediaCaptureOptimization : int32_t
    {
        Default = 0,
        Quality = 1,
        Latency = 2,
        Power = 3,
        LatencyThenQuality = 4,
        LatencyThenPower = 5,
        PowerAndQuality = 6,
    };
    enum class MediaCapturePauseBehavior : int32_t
    {
        RetainHardwareResources = 0,
        ReleaseHardwareResources = 1,
    };
    enum class OpticalImageStabilizationMode : int32_t
    {
        Off = 0,
        On = 1,
        Auto = 2,
    };
    enum class RegionOfInterestType : int32_t
    {
        Unknown = 0,
        Face = 1,
    };
    enum class SendCommandStatus : int32_t
    {
        Success = 0,
        DeviceNotAvailable = 1,
    };
    enum class TelephonyKey : int32_t
    {
        D0 = 0,
        D1 = 1,
        D2 = 2,
        D3 = 3,
        D4 = 4,
        D5 = 5,
        D6 = 6,
        D7 = 7,
        D8 = 8,
        D9 = 9,
        Star = 10,
        Pound = 11,
        A = 12,
        B = 13,
        C = 14,
        D = 15,
    };
    enum class VideoDeviceControllerGetDevicePropertyStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        BufferTooSmall = 2,
        NotSupported = 3,
        DeviceNotAvailable = 4,
        MaxPropertyValueSizeTooSmall = 5,
        MaxPropertyValueSizeRequired = 6,
    };
    enum class VideoDeviceControllerSetDevicePropertyStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        NotSupported = 2,
        InvalidValue = 3,
        DeviceNotAvailable = 4,
        NotInControl = 5,
    };
    enum class VideoTemporalDenoisingMode : int32_t
    {
        Off = 0,
        On = 1,
        Auto = 2,
    };
    enum class ZoomTransitionMode : int32_t
    {
        Auto = 0,
        Direct = 1,
        Smooth = 2,
    };
    struct IAdvancedPhotoCaptureSettings;
    struct IAdvancedPhotoControl;
    struct IAdvancedVideoCaptureDeviceController;
    struct IAdvancedVideoCaptureDeviceController2;
    struct IAdvancedVideoCaptureDeviceController3;
    struct IAdvancedVideoCaptureDeviceController4;
    struct IAdvancedVideoCaptureDeviceController5;
    struct IAdvancedVideoCaptureDeviceController6;
    struct IAdvancedVideoCaptureDeviceController7;
    struct IAdvancedVideoCaptureDeviceController8;
    struct IAudioDeviceController;
    struct IAudioDeviceModule;
    struct IAudioDeviceModuleNotificationEventArgs;
    struct IAudioDeviceModulesManager;
    struct IAudioDeviceModulesManagerFactory;
    struct ICallControl;
    struct ICallControlStatics;
    struct IDefaultAudioDeviceChangedEventArgs;
    struct IDialRequestedEventArgs;
    struct IExposureCompensationControl;
    struct IExposureControl;
    struct IExposurePriorityVideoControl;
    struct IFlashControl;
    struct IFlashControl2;
    struct IFocusControl;
    struct IFocusControl2;
    struct IFocusSettings;
    struct IHdrVideoControl;
    struct IInfraredTorchControl;
    struct IIsoSpeedControl;
    struct IIsoSpeedControl2;
    struct IKeypadPressedEventArgs;
    struct ILowLagPhotoControl;
    struct ILowLagPhotoSequenceControl;
    struct IMediaDeviceControl;
    struct IMediaDeviceControlCapabilities;
    struct IMediaDeviceController;
    struct IMediaDeviceStatics;
    struct IModuleCommandResult;
    struct IOpticalImageStabilizationControl;
    struct IPanelBasedOptimizationControl;
    struct IPhotoConfirmationControl;
    struct IRedialRequestedEventArgs;
    struct IRegionOfInterest;
    struct IRegionOfInterest2;
    struct IRegionsOfInterestControl;
    struct ISceneModeControl;
    struct ITorchControl;
    struct IVideoDeviceController;
    struct IVideoDeviceControllerGetDevicePropertyResult;
    struct IVideoTemporalDenoisingControl;
    struct IWhiteBalanceControl;
    struct IZoomControl;
    struct IZoomControl2;
    struct IZoomSettings;
    struct AdvancedPhotoCaptureSettings;
    struct AdvancedPhotoControl;
    struct AudioDeviceController;
    struct AudioDeviceModule;
    struct AudioDeviceModuleNotificationEventArgs;
    struct AudioDeviceModulesManager;
    struct CallControl;
    struct DefaultAudioCaptureDeviceChangedEventArgs;
    struct DefaultAudioRenderDeviceChangedEventArgs;
    struct DialRequestedEventArgs;
    struct ExposureCompensationControl;
    struct ExposureControl;
    struct ExposurePriorityVideoControl;
    struct FlashControl;
    struct FocusControl;
    struct FocusSettings;
    struct HdrVideoControl;
    struct InfraredTorchControl;
    struct IsoSpeedControl;
    struct KeypadPressedEventArgs;
    struct LowLagPhotoControl;
    struct LowLagPhotoSequenceControl;
    struct MediaDevice;
    struct MediaDeviceControl;
    struct MediaDeviceControlCapabilities;
    struct ModuleCommandResult;
    struct OpticalImageStabilizationControl;
    struct PanelBasedOptimizationControl;
    struct PhotoConfirmationControl;
    struct RedialRequestedEventArgs;
    struct RegionOfInterest;
    struct RegionsOfInterestControl;
    struct SceneModeControl;
    struct TorchControl;
    struct VideoDeviceController;
    struct VideoDeviceControllerGetDevicePropertyResult;
    struct VideoTemporalDenoisingControl;
    struct WhiteBalanceControl;
    struct ZoomControl;
    struct ZoomSettings;
    struct CallControlEventHandler;
    struct DialRequestedEventHandler;
    struct KeypadPressedEventHandler;
    struct RedialRequestedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedPhotoControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAudioDeviceController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAudioDeviceModule>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ICallControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ICallControlStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IDialRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IExposureCompensationControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IExposureControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IFlashControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IFlashControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IFocusControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IFocusControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IFocusSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IHdrVideoControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IInfraredTorchControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IIsoSpeedControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IIsoSpeedControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ILowLagPhotoControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IMediaDeviceControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IMediaDeviceController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IMediaDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IModuleCommandResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IPhotoConfirmationControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IRegionOfInterest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IRegionOfInterest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IRegionsOfInterestControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ISceneModeControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::ITorchControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IVideoDeviceController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IWhiteBalanceControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IZoomControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IZoomControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::IZoomSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::AdvancedPhotoCaptureSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AdvancedPhotoControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AudioDeviceController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AudioDeviceModule>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AudioDeviceModulesManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::CallControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::DialRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ExposureCompensationControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ExposureControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ExposurePriorityVideoControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::FlashControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::FocusControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::FocusSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::HdrVideoControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::InfraredTorchControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::IsoSpeedControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::KeypadPressedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::LowLagPhotoControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::LowLagPhotoSequenceControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::MediaDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::MediaDeviceControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::MediaDeviceControlCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ModuleCommandResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::OpticalImageStabilizationControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::PanelBasedOptimizationControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::PhotoConfirmationControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::RedialRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::RegionOfInterest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::RegionsOfInterestControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::SceneModeControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::TorchControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::VideoDeviceController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::VideoTemporalDenoisingControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::WhiteBalanceControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ZoomControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::ZoomSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::AdvancedPhotoMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::AudioDeviceRole>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::AutoFocusRange>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::CameraStreamState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::CaptureSceneMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::CaptureUse>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::ColorTemperaturePreset>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::FocusMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::FocusPreset>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::HdrVideoMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::InfraredTorchMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::IsoSpeedPreset>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::ManualFocusDistance>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::MediaCaptureFocusState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::MediaCaptureOptimization>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::MediaCapturePauseBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::OpticalImageStabilizationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::RegionOfInterestType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::SendCommandStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::TelephonyKey>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::VideoTemporalDenoisingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::ZoomTransitionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Devices::CallControlEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Media::Devices::DialRequestedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Media::Devices::KeypadPressedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Media::Devices::RedialRequestedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedPhotoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedPhotoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedPhotoControl" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController6" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController7" };
    };
    template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController8" };
    };
    template <> struct name<Windows::Media::Devices::IAudioDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::IAudioDeviceModule>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModule" };
    };
    template <> struct name<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModulesManager" };
    };
    template <> struct name<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModulesManagerFactory" };
    };
    template <> struct name<Windows::Media::Devices::ICallControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ICallControl" };
    };
    template <> struct name<Windows::Media::Devices::ICallControlStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ICallControlStatics" };
    };
    template <> struct name<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::IDialRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IDialRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::IExposureCompensationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IExposureCompensationControl" };
    };
    template <> struct name<Windows::Media::Devices::IExposureControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IExposureControl" };
    };
    template <> struct name<Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IExposurePriorityVideoControl" };
    };
    template <> struct name<Windows::Media::Devices::IFlashControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IFlashControl" };
    };
    template <> struct name<Windows::Media::Devices::IFlashControl2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IFlashControl2" };
    };
    template <> struct name<Windows::Media::Devices::IFocusControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IFocusControl" };
    };
    template <> struct name<Windows::Media::Devices::IFocusControl2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IFocusControl2" };
    };
    template <> struct name<Windows::Media::Devices::IFocusSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IFocusSettings" };
    };
    template <> struct name<Windows::Media::Devices::IHdrVideoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IHdrVideoControl" };
    };
    template <> struct name<Windows::Media::Devices::IInfraredTorchControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IInfraredTorchControl" };
    };
    template <> struct name<Windows::Media::Devices::IIsoSpeedControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IIsoSpeedControl" };
    };
    template <> struct name<Windows::Media::Devices::IIsoSpeedControl2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IIsoSpeedControl2" };
    };
    template <> struct name<Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IKeypadPressedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::ILowLagPhotoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ILowLagPhotoControl" };
    };
    template <> struct name<Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ILowLagPhotoSequenceControl" };
    };
    template <> struct name<Windows::Media::Devices::IMediaDeviceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceControl" };
    };
    template <> struct name<Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceControlCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::IMediaDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::IMediaDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceStatics" };
    };
    template <> struct name<Windows::Media::Devices::IModuleCommandResult>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IModuleCommandResult" };
    };
    template <> struct name<Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IOpticalImageStabilizationControl" };
    };
    template <> struct name<Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IPanelBasedOptimizationControl" };
    };
    template <> struct name<Windows::Media::Devices::IPhotoConfirmationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IPhotoConfirmationControl" };
    };
    template <> struct name<Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IRedialRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::IRegionOfInterest>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IRegionOfInterest" };
    };
    template <> struct name<Windows::Media::Devices::IRegionOfInterest2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IRegionOfInterest2" };
    };
    template <> struct name<Windows::Media::Devices::IRegionsOfInterestControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IRegionsOfInterestControl" };
    };
    template <> struct name<Windows::Media::Devices::ISceneModeControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ISceneModeControl" };
    };
    template <> struct name<Windows::Media::Devices::ITorchControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ITorchControl" };
    };
    template <> struct name<Windows::Media::Devices::IVideoDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IVideoDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult" };
    };
    template <> struct name<Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IVideoTemporalDenoisingControl" };
    };
    template <> struct name<Windows::Media::Devices::IWhiteBalanceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IWhiteBalanceControl" };
    };
    template <> struct name<Windows::Media::Devices::IZoomControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IZoomControl" };
    };
    template <> struct name<Windows::Media::Devices::IZoomControl2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IZoomControl2" };
    };
    template <> struct name<Windows::Media::Devices::IZoomSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IZoomSettings" };
    };
    template <> struct name<Windows::Media::Devices::AdvancedPhotoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Devices::AdvancedPhotoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoControl" };
    };
    template <> struct name<Windows::Media::Devices::AudioDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::AudioDeviceModule>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModule" };
    };
    template <> struct name<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::AudioDeviceModulesManager>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModulesManager" };
    };
    template <> struct name<Windows::Media::Devices::CallControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.CallControl" };
    };
    template <> struct name<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::DialRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.DialRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::ExposureCompensationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ExposureCompensationControl" };
    };
    template <> struct name<Windows::Media::Devices::ExposureControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ExposureControl" };
    };
    template <> struct name<Windows::Media::Devices::ExposurePriorityVideoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ExposurePriorityVideoControl" };
    };
    template <> struct name<Windows::Media::Devices::FlashControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.FlashControl" };
    };
    template <> struct name<Windows::Media::Devices::FocusControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.FocusControl" };
    };
    template <> struct name<Windows::Media::Devices::FocusSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.FocusSettings" };
    };
    template <> struct name<Windows::Media::Devices::HdrVideoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.HdrVideoControl" };
    };
    template <> struct name<Windows::Media::Devices::InfraredTorchControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.InfraredTorchControl" };
    };
    template <> struct name<Windows::Media::Devices::IsoSpeedControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IsoSpeedControl" };
    };
    template <> struct name<Windows::Media::Devices::KeypadPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.KeypadPressedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::LowLagPhotoControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.LowLagPhotoControl" };
    };
    template <> struct name<Windows::Media::Devices::LowLagPhotoSequenceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.LowLagPhotoSequenceControl" };
    };
    template <> struct name<Windows::Media::Devices::MediaDevice>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaDevice" };
    };
    template <> struct name<Windows::Media::Devices::MediaDeviceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaDeviceControl" };
    };
    template <> struct name<Windows::Media::Devices::MediaDeviceControlCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaDeviceControlCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::ModuleCommandResult>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ModuleCommandResult" };
    };
    template <> struct name<Windows::Media::Devices::OpticalImageStabilizationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.OpticalImageStabilizationControl" };
    };
    template <> struct name<Windows::Media::Devices::PanelBasedOptimizationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.PanelBasedOptimizationControl" };
    };
    template <> struct name<Windows::Media::Devices::PhotoConfirmationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.PhotoConfirmationControl" };
    };
    template <> struct name<Windows::Media::Devices::RedialRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.RedialRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Devices::RegionOfInterest>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.RegionOfInterest" };
    };
    template <> struct name<Windows::Media::Devices::RegionsOfInterestControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.RegionsOfInterestControl" };
    };
    template <> struct name<Windows::Media::Devices::SceneModeControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.SceneModeControl" };
    };
    template <> struct name<Windows::Media::Devices::TorchControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.TorchControl" };
    };
    template <> struct name<Windows::Media::Devices::VideoDeviceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceController" };
    };
    template <> struct name<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult" };
    };
    template <> struct name<Windows::Media::Devices::VideoTemporalDenoisingControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoTemporalDenoisingControl" };
    };
    template <> struct name<Windows::Media::Devices::WhiteBalanceControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.WhiteBalanceControl" };
    };
    template <> struct name<Windows::Media::Devices::ZoomControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ZoomControl" };
    };
    template <> struct name<Windows::Media::Devices::ZoomSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ZoomSettings" };
    };
    template <> struct name<Windows::Media::Devices::AdvancedPhotoMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoMode" };
    };
    template <> struct name<Windows::Media::Devices::AudioDeviceRole>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceRole" };
    };
    template <> struct name<Windows::Media::Devices::AutoFocusRange>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.AutoFocusRange" };
    };
    template <> struct name<Windows::Media::Devices::CameraStreamState>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.CameraStreamState" };
    };
    template <> struct name<Windows::Media::Devices::CaptureSceneMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.CaptureSceneMode" };
    };
    template <> struct name<Windows::Media::Devices::CaptureUse>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.CaptureUse" };
    };
    template <> struct name<Windows::Media::Devices::ColorTemperaturePreset>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ColorTemperaturePreset" };
    };
    template <> struct name<Windows::Media::Devices::FocusMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.FocusMode" };
    };
    template <> struct name<Windows::Media::Devices::FocusPreset>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.FocusPreset" };
    };
    template <> struct name<Windows::Media::Devices::HdrVideoMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.HdrVideoMode" };
    };
    template <> struct name<Windows::Media::Devices::InfraredTorchMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.InfraredTorchMode" };
    };
    template <> struct name<Windows::Media::Devices::IsoSpeedPreset>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.IsoSpeedPreset" };
    };
    template <> struct name<Windows::Media::Devices::ManualFocusDistance>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ManualFocusDistance" };
    };
    template <> struct name<Windows::Media::Devices::MediaCaptureFocusState>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaCaptureFocusState" };
    };
    template <> struct name<Windows::Media::Devices::MediaCaptureOptimization>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaCaptureOptimization" };
    };
    template <> struct name<Windows::Media::Devices::MediaCapturePauseBehavior>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.MediaCapturePauseBehavior" };
    };
    template <> struct name<Windows::Media::Devices::OpticalImageStabilizationMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.OpticalImageStabilizationMode" };
    };
    template <> struct name<Windows::Media::Devices::RegionOfInterestType>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.RegionOfInterestType" };
    };
    template <> struct name<Windows::Media::Devices::SendCommandStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.SendCommandStatus" };
    };
    template <> struct name<Windows::Media::Devices::TelephonyKey>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.TelephonyKey" };
    };
    template <> struct name<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyStatus" };
    };
    template <> struct name<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerSetDevicePropertyStatus" };
    };
    template <> struct name<Windows::Media::Devices::VideoTemporalDenoisingMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.VideoTemporalDenoisingMode" };
    };
    template <> struct name<Windows::Media::Devices::ZoomTransitionMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.ZoomTransitionMode" };
    };
    template <> struct name<Windows::Media::Devices::CallControlEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.CallControlEventHandler" };
    };
    template <> struct name<Windows::Media::Devices::DialRequestedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.DialRequestedEventHandler" };
    };
    template <> struct name<Windows::Media::Devices::KeypadPressedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.KeypadPressedEventHandler" };
    };
    template <> struct name<Windows::Media::Devices::RedialRequestedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.RedialRequestedEventHandler" };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        static constexpr guid value{ 0x08F3863A,0x0018,0x445B,{ 0x93,0xD2,0x64,0x6D,0x1C,0x5E,0xD0,0x5C } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedPhotoControl>
    {
        static constexpr guid value{ 0xC5B15486,0x9001,0x4682,{ 0x93,0x09,0x68,0xEA,0xE0,0x08,0x0E,0xEC } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        static constexpr guid value{ 0xDE6FF4D3,0x2B96,0x4583,{ 0x80,0xAB,0xB5,0xB0,0x1D,0xC6,0xA8,0xD7 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        static constexpr guid value{ 0x8BB94F8F,0xF11A,0x43DB,{ 0xB4,0x02,0x11,0x93,0x0B,0x80,0xAE,0x56 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        static constexpr guid value{ 0xA98B8F34,0xEE0D,0x470C,{ 0xB9,0xF0,0x42,0x29,0xC4,0xBB,0xD0,0x89 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        static constexpr guid value{ 0xEA9FBFAF,0xD371,0x41C3,{ 0x9A,0x17,0x82,0x4A,0x87,0xEB,0xDF,0xD2 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        static constexpr guid value{ 0x33512B17,0xB9CB,0x4A23,{ 0xB8,0x75,0xF9,0xEA,0xAB,0x53,0x54,0x92 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        static constexpr guid value{ 0xB6563A53,0x68A1,0x44B7,{ 0x9F,0x89,0xB5,0xFA,0x97,0xAC,0x0C,0xBE } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        static constexpr guid value{ 0x8D2927F0,0xA054,0x50E7,{ 0xB7,0xDF,0x7C,0x04,0x23,0x4D,0x10,0xF0 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        static constexpr guid value{ 0xD843F010,0xE7FB,0x595B,{ 0x9A,0x78,0x0E,0x54,0xC4,0x53,0x2B,0x43 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAudioDeviceController>
    {
        static constexpr guid value{ 0xEDD4A388,0x79C7,0x4F7C,{ 0x90,0xE8,0xEF,0x93,0x4B,0x21,0x58,0x0A } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAudioDeviceModule>
    {
        static constexpr guid value{ 0x86CFAC36,0x47C1,0x4B33,{ 0x98,0x52,0x87,0x73,0xEC,0x4B,0xE1,0x23 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        static constexpr guid value{ 0xE3E3CCAF,0x224C,0x48BE,{ 0x95,0x6B,0x9A,0x13,0x13,0x4E,0x96,0xE8 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        static constexpr guid value{ 0x6AA40C4D,0x960A,0x4D1C,{ 0xB3,0x18,0x00,0x22,0x60,0x45,0x47,0xED } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        static constexpr guid value{ 0x8DB03670,0xE64D,0x4773,{ 0x96,0xC0,0xBC,0x7E,0xBF,0x0E,0x06,0x3F } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ICallControl>
    {
        static constexpr guid value{ 0xA520D0D6,0xAE8D,0x45DB,{ 0x80,0x11,0xCA,0x49,0xD3,0xB3,0xE5,0x78 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ICallControlStatics>
    {
        static constexpr guid value{ 0x03945AD5,0x85AB,0x40E1,{ 0xAF,0x19,0x56,0xC9,0x43,0x03,0xB0,0x19 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        static constexpr guid value{ 0x110F882F,0x1C05,0x4657,{ 0xA1,0x8E,0x47,0xC9,0xB6,0x9F,0x07,0xAB } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IDialRequestedEventArgs>
    {
        static constexpr guid value{ 0x037B929E,0x953C,0x4286,{ 0x88,0x66,0x4F,0x0F,0x37,0x6C,0x85,0x5A } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IExposureCompensationControl>
    {
        static constexpr guid value{ 0x81C8E834,0xDCEC,0x4011,{ 0xA6,0x10,0x1F,0x38,0x47,0xE6,0x4A,0xCA } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IExposureControl>
    {
        static constexpr guid value{ 0x09E8CBE2,0xAD96,0x4F28,{ 0xA0,0xE0,0x96,0xED,0x7E,0x1B,0x5F,0xD2 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        static constexpr guid value{ 0x2CB240A3,0x5168,0x4271,{ 0x9E,0xA5,0x47,0x62,0x1A,0x98,0xA3,0x52 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IFlashControl>
    {
        static constexpr guid value{ 0xDEF41DBE,0x7D68,0x45E3,{ 0x8C,0x0F,0xBE,0x7B,0xB3,0x28,0x37,0xD0 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IFlashControl2>
    {
        static constexpr guid value{ 0x7D29CC9E,0x75E1,0x4AF7,{ 0xBD,0x7D,0x4E,0x38,0xE1,0xC0,0x6C,0xD6 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IFocusControl>
    {
        static constexpr guid value{ 0xC0D889F6,0x5228,0x4453,{ 0xB1,0x53,0x85,0x60,0x65,0x92,0xB2,0x38 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IFocusControl2>
    {
        static constexpr guid value{ 0x3F7CFF48,0xC534,0x4E9E,{ 0x94,0xC3,0x52,0xEF,0x2A,0xFD,0x5D,0x07 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IFocusSettings>
    {
        static constexpr guid value{ 0x79958F6B,0x3263,0x4275,{ 0x85,0xD6,0xAE,0xAE,0x89,0x1C,0x96,0xEE } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IHdrVideoControl>
    {
        static constexpr guid value{ 0x55D8E2D0,0x30C0,0x43BF,{ 0x9B,0x9A,0x97,0x99,0xD7,0x0C,0xED,0x94 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IInfraredTorchControl>
    {
        static constexpr guid value{ 0x1CBA2C83,0x6CB6,0x5A04,{ 0xA6,0xFC,0x3B,0xE7,0xB3,0x3F,0xF0,0x56 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IIsoSpeedControl>
    {
        static constexpr guid value{ 0x27B6C322,0x25AD,0x4F1B,{ 0xAA,0xAB,0x52,0x4A,0xB3,0x76,0xCA,0x33 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IIsoSpeedControl2>
    {
        static constexpr guid value{ 0x6F1578F2,0x6D77,0x4F8A,{ 0x8C,0x2F,0x61,0x30,0xB6,0x39,0x50,0x53 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        static constexpr guid value{ 0xD3A43900,0xB4FA,0x49CD,{ 0x94,0x42,0x89,0xAF,0x65,0x68,0xF6,0x01 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ILowLagPhotoControl>
    {
        static constexpr guid value{ 0x6D5C4DD0,0xFADF,0x415D,{ 0xAE,0xE6,0x3B,0xAA,0x52,0x93,0x00,0xC9 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        static constexpr guid value{ 0x3DCF909D,0x6D16,0x409C,{ 0xBA,0xFE,0xB9,0xA5,0x94,0xC6,0xFD,0xE6 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IMediaDeviceControl>
    {
        static constexpr guid value{ 0xEFA8DFA9,0x6F75,0x4863,{ 0xBA,0x0B,0x58,0x3F,0x30,0x36,0xB4,0xDE } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        static constexpr guid value{ 0x23005816,0xEB85,0x43E2,{ 0xB9,0x2B,0x82,0x40,0xD5,0xEE,0x70,0xEC } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IMediaDeviceController>
    {
        static constexpr guid value{ 0xF6F8F5CE,0x209A,0x48FB,{ 0x86,0xFC,0xD4,0x45,0x78,0xF3,0x17,0xE6 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IMediaDeviceStatics>
    {
        static constexpr guid value{ 0xAA2D9A40,0x909F,0x4BBA,{ 0xBF,0x8B,0x0C,0x0D,0x29,0x6F,0x14,0xF0 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IModuleCommandResult>
    {
        static constexpr guid value{ 0x520D1EB4,0x1374,0x4C7D,{ 0xB1,0xE4,0x39,0xDC,0xDF,0x3E,0xAE,0x4E } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        static constexpr guid value{ 0xBFAD9C1D,0x00BC,0x423B,{ 0x8E,0xB2,0xA0,0x17,0x8C,0xA9,0x42,0x47 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        static constexpr guid value{ 0x33323223,0x6247,0x5419,{ 0xA5,0xA4,0x3D,0x80,0x86,0x45,0xD9,0x17 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IPhotoConfirmationControl>
    {
        static constexpr guid value{ 0xC8F3F363,0xFF5E,0x4582,{ 0xA9,0xA8,0x05,0x50,0xF8,0x5A,0x4A,0x76 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        static constexpr guid value{ 0x7EB55209,0x76AB,0x4C31,{ 0xB4,0x0E,0x4B,0x58,0x37,0x9D,0x58,0x0C } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IRegionOfInterest>
    {
        static constexpr guid value{ 0xE5ECC834,0xCE66,0x4E05,{ 0xA7,0x8F,0xCF,0x39,0x1A,0x5E,0xC2,0xD1 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IRegionOfInterest2>
    {
        static constexpr guid value{ 0x19FE2A91,0x73AA,0x4D51,{ 0x8A,0x9D,0x56,0xCC,0xF7,0xDB,0x7F,0x54 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IRegionsOfInterestControl>
    {
        static constexpr guid value{ 0xC323F527,0xAB0B,0x4558,{ 0x8B,0x5B,0xDF,0x56,0x93,0xDB,0x03,0x78 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ISceneModeControl>
    {
        static constexpr guid value{ 0xD48E5AF7,0x8D59,0x4854,{ 0x8C,0x62,0x12,0xC7,0x0B,0xA8,0x9B,0x7C } };
    };
    template <> struct guid_storage<Windows::Media::Devices::ITorchControl>
    {
        static constexpr guid value{ 0xA6053665,0x8250,0x416C,{ 0x91,0x9A,0x72,0x42,0x96,0xAF,0xA3,0x06 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IVideoDeviceController>
    {
        static constexpr guid value{ 0x99555575,0x2E2E,0x40B8,{ 0xB6,0xC7,0xF8,0x2D,0x10,0x01,0x32,0x10 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        static constexpr guid value{ 0xC5D88395,0x6ED5,0x4790,{ 0x8B,0x5D,0x0E,0xF1,0x39,0x35,0xD0,0xF8 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        static constexpr guid value{ 0x7AB34735,0x3E2A,0x4A32,{ 0xBA,0xFF,0x43,0x58,0xC4,0xFB,0xDD,0x57 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IWhiteBalanceControl>
    {
        static constexpr guid value{ 0x781F047E,0x7162,0x49C8,{ 0xA8,0xF9,0x94,0x81,0xC5,0x65,0x36,0x3E } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IZoomControl>
    {
        static constexpr guid value{ 0x3A1E0B12,0x32DA,0x4C17,{ 0xBF,0xD7,0x8D,0x0C,0x73,0xC8,0xF5,0xA5 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IZoomControl2>
    {
        static constexpr guid value{ 0x69843DB0,0x2E99,0x4641,{ 0x85,0x29,0x18,0x4F,0x31,0x9D,0x16,0x71 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::IZoomSettings>
    {
        static constexpr guid value{ 0x6AD66B24,0x14B4,0x4BFD,{ 0xB1,0x8F,0x88,0xFE,0x24,0x46,0x3B,0x52 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::CallControlEventHandler>
    {
        static constexpr guid value{ 0x596F759F,0x50DF,0x4454,{ 0xBC,0x63,0x4D,0x3D,0x01,0xB6,0x19,0x58 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::DialRequestedEventHandler>
    {
        static constexpr guid value{ 0x5ABBFFDB,0xC21F,0x4BC4,{ 0x89,0x1B,0x25,0x7E,0x28,0xC1,0xB1,0xA4 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::KeypadPressedEventHandler>
    {
        static constexpr guid value{ 0xE637A454,0xC527,0x422C,{ 0x89,0x26,0xC9,0xAF,0x83,0xB5,0x59,0xA0 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::RedialRequestedEventHandler>
    {
        static constexpr guid value{ 0xBAF257D1,0x4EBD,0x4B84,{ 0x9F,0x47,0x6E,0xC4,0x3D,0x75,0xD8,0xB1 } };
    };
    template <> struct default_interface<Windows::Media::Devices::AdvancedPhotoCaptureSettings>
    {
        using type = Windows::Media::Devices::IAdvancedPhotoCaptureSettings;
    };
    template <> struct default_interface<Windows::Media::Devices::AdvancedPhotoControl>
    {
        using type = Windows::Media::Devices::IAdvancedPhotoControl;
    };
    template <> struct default_interface<Windows::Media::Devices::AudioDeviceController>
    {
        using type = Windows::Media::Devices::IAudioDeviceController;
    };
    template <> struct default_interface<Windows::Media::Devices::AudioDeviceModule>
    {
        using type = Windows::Media::Devices::IAudioDeviceModule;
    };
    template <> struct default_interface<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>
    {
        using type = Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::AudioDeviceModulesManager>
    {
        using type = Windows::Media::Devices::IAudioDeviceModulesManager;
    };
    template <> struct default_interface<Windows::Media::Devices::CallControl>
    {
        using type = Windows::Media::Devices::ICallControl;
    };
    template <> struct default_interface<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>
    {
        using type = Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>
    {
        using type = Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::DialRequestedEventArgs>
    {
        using type = Windows::Media::Devices::IDialRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::ExposureCompensationControl>
    {
        using type = Windows::Media::Devices::IExposureCompensationControl;
    };
    template <> struct default_interface<Windows::Media::Devices::ExposureControl>
    {
        using type = Windows::Media::Devices::IExposureControl;
    };
    template <> struct default_interface<Windows::Media::Devices::ExposurePriorityVideoControl>
    {
        using type = Windows::Media::Devices::IExposurePriorityVideoControl;
    };
    template <> struct default_interface<Windows::Media::Devices::FlashControl>
    {
        using type = Windows::Media::Devices::IFlashControl;
    };
    template <> struct default_interface<Windows::Media::Devices::FocusControl>
    {
        using type = Windows::Media::Devices::IFocusControl;
    };
    template <> struct default_interface<Windows::Media::Devices::FocusSettings>
    {
        using type = Windows::Media::Devices::IFocusSettings;
    };
    template <> struct default_interface<Windows::Media::Devices::HdrVideoControl>
    {
        using type = Windows::Media::Devices::IHdrVideoControl;
    };
    template <> struct default_interface<Windows::Media::Devices::InfraredTorchControl>
    {
        using type = Windows::Media::Devices::IInfraredTorchControl;
    };
    template <> struct default_interface<Windows::Media::Devices::IsoSpeedControl>
    {
        using type = Windows::Media::Devices::IIsoSpeedControl;
    };
    template <> struct default_interface<Windows::Media::Devices::KeypadPressedEventArgs>
    {
        using type = Windows::Media::Devices::IKeypadPressedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::LowLagPhotoControl>
    {
        using type = Windows::Media::Devices::ILowLagPhotoControl;
    };
    template <> struct default_interface<Windows::Media::Devices::LowLagPhotoSequenceControl>
    {
        using type = Windows::Media::Devices::ILowLagPhotoSequenceControl;
    };
    template <> struct default_interface<Windows::Media::Devices::MediaDeviceControl>
    {
        using type = Windows::Media::Devices::IMediaDeviceControl;
    };
    template <> struct default_interface<Windows::Media::Devices::MediaDeviceControlCapabilities>
    {
        using type = Windows::Media::Devices::IMediaDeviceControlCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::ModuleCommandResult>
    {
        using type = Windows::Media::Devices::IModuleCommandResult;
    };
    template <> struct default_interface<Windows::Media::Devices::OpticalImageStabilizationControl>
    {
        using type = Windows::Media::Devices::IOpticalImageStabilizationControl;
    };
    template <> struct default_interface<Windows::Media::Devices::PanelBasedOptimizationControl>
    {
        using type = Windows::Media::Devices::IPanelBasedOptimizationControl;
    };
    template <> struct default_interface<Windows::Media::Devices::PhotoConfirmationControl>
    {
        using type = Windows::Media::Devices::IPhotoConfirmationControl;
    };
    template <> struct default_interface<Windows::Media::Devices::RedialRequestedEventArgs>
    {
        using type = Windows::Media::Devices::IRedialRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Devices::RegionOfInterest>
    {
        using type = Windows::Media::Devices::IRegionOfInterest;
    };
    template <> struct default_interface<Windows::Media::Devices::RegionsOfInterestControl>
    {
        using type = Windows::Media::Devices::IRegionsOfInterestControl;
    };
    template <> struct default_interface<Windows::Media::Devices::SceneModeControl>
    {
        using type = Windows::Media::Devices::ISceneModeControl;
    };
    template <> struct default_interface<Windows::Media::Devices::TorchControl>
    {
        using type = Windows::Media::Devices::ITorchControl;
    };
    template <> struct default_interface<Windows::Media::Devices::VideoDeviceController>
    {
        using type = Windows::Media::Devices::IVideoDeviceController;
    };
    template <> struct default_interface<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>
    {
        using type = Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult;
    };
    template <> struct default_interface<Windows::Media::Devices::VideoTemporalDenoisingControl>
    {
        using type = Windows::Media::Devices::IVideoTemporalDenoisingControl;
    };
    template <> struct default_interface<Windows::Media::Devices::WhiteBalanceControl>
    {
        using type = Windows::Media::Devices::IWhiteBalanceControl;
    };
    template <> struct default_interface<Windows::Media::Devices::ZoomControl>
    {
        using type = Windows::Media::Devices::IZoomControl;
    };
    template <> struct default_interface<Windows::Media::Devices::ZoomSettings>
    {
        using type = Windows::Media::Devices::IZoomSettings;
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedPhotoControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Configure(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDeviceProperty(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetDeviceProperty(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LowLagPhotoSequence(void**) noexcept = 0;
            virtual int32_t __stdcall get_LowLagPhoto(void**) noexcept = 0;
            virtual int32_t __stdcall get_SceneModeControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_TorchControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlashControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalanceControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensationControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoSpeedControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegionsOfInterestControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryUse(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PrimaryUse(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VariablePhotoSequenceController(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotoConfirmationControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExposurePriorityVideoControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesiredOptimization(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredOptimization(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HdrVideoControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpticalImageStabilizationControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdvancedPhotoControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall GetDevicePropertyById(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDevicePropertyById(void*, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDevicePropertyByExtendedId(uint32_t, uint8_t*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDevicePropertyByExtendedId(uint32_t, uint8_t*, uint32_t, uint8_t*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoTemporalDenoisingControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InfraredTorchControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PanelBasedOptimizationControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAudioDeviceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Muted(bool) noexcept = 0;
            virtual int32_t __stdcall get_Muted(bool*) noexcept = 0;
            virtual int32_t __stdcall put_VolumePercent(float) noexcept = 0;
            virtual int32_t __stdcall get_VolumePercent(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAudioDeviceModule>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClassId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstanceId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MajorVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinorVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SendCommandAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Module(void**) noexcept = 0;
            virtual int32_t __stdcall get_NotificationData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ModuleNotificationReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ModuleNotificationReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindAllById(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAll(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ICallControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IndicateNewIncomingCall(bool, void*, uint64_t*) noexcept = 0;
            virtual int32_t __stdcall IndicateNewOutgoingCall(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall IndicateActiveCall(uint64_t) noexcept = 0;
            virtual int32_t __stdcall EndCall(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_HasRinger(bool*) noexcept = 0;
            virtual int32_t __stdcall add_AnswerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AnswerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HangUpRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HangUpRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DialRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DialRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RedialRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RedialRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeypadPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeypadPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AudioTransferRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioTransferRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ICallControlStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Role(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IDialRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Handled() noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IExposureCompensationControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(float*) noexcept = 0;
            virtual int32_t __stdcall get_Max(float*) noexcept = 0;
            virtual int32_t __stdcall get_Step(float*) noexcept = 0;
            virtual int32_t __stdcall get_Value(float*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(float, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IExposureControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall SetAutoAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall get_Min(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IFlashControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PowerSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RedEyeReductionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Auto(bool) noexcept = 0;
            virtual int32_t __stdcall get_RedEyeReduction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RedEyeReduction(bool) noexcept = 0;
            virtual int32_t __stdcall get_PowerPercent(float*) noexcept = 0;
            virtual int32_t __stdcall put_PowerPercent(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IFlashControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AssistantLightSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AssistantLightEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AssistantLightEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IFocusControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPresets(void**) noexcept = 0;
            virtual int32_t __stdcall get_Preset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPresetAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetPresetWithCompletionOptionAsync(int32_t, bool, void**) noexcept = 0;
            virtual int32_t __stdcall get_Min(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FocusAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IFocusControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusChangedSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_WaitForFocusSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedFocusModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedFocusDistances(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedFocusRanges(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall UnlockAsync(void**) noexcept = 0;
            virtual int32_t __stdcall LockAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Configure(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IFocusSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AutoFocusRange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoFocusRange(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_Distance(void**) noexcept = 0;
            virtual int32_t __stdcall put_Distance(void*) noexcept = 0;
            virtual int32_t __stdcall get_WaitForFocus(bool*) noexcept = 0;
            virtual int32_t __stdcall put_WaitForFocus(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisableDriverFallback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DisableDriverFallback(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IHdrVideoControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IInfraredTorchControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CurrentMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MinPower(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPower(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PowerStep(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Power(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Power(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IIsoSpeedControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPresets(void**) noexcept = 0;
            virtual int32_t __stdcall get_Preset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPresetAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IIsoSpeedControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Min(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall SetAutoAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TelephonyKey(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ILowLagPhotoControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetHighestConcurrentFrameRate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentFrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ThumbnailEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ThumbnailEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ThumbnailFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ThumbnailFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredThumbnailSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredThumbnailSize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPastPhotos(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPhotosPerSecond(float*) noexcept = 0;
            virtual int32_t __stdcall get_PastPhotoLimit(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PastPhotoLimit(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PhotosPerSecondLimit(float*) noexcept = 0;
            virtual int32_t __stdcall put_PhotosPerSecondLimit(float) noexcept = 0;
            virtual int32_t __stdcall GetHighestConcurrentFrameRate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentFrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ThumbnailEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ThumbnailEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ThumbnailFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ThumbnailFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredThumbnailSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredThumbnailSize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IMediaDeviceControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetValue(double*, bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetValue(double, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetAuto(bool*, bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetAuto(bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(double*) noexcept = 0;
            virtual int32_t __stdcall get_Max(double*) noexcept = 0;
            virtual int32_t __stdcall get_Step(double*) noexcept = 0;
            virtual int32_t __stdcall get_Default(double*) noexcept = 0;
            virtual int32_t __stdcall get_AutoModeSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IMediaDeviceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAvailableMediaStreamProperties(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetMediaStreamProperties(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetMediaStreamPropertiesAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IMediaDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAudioCaptureSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetVideoCaptureSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAudioCaptureId(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAudioRenderId(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_DefaultAudioCaptureDeviceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DefaultAudioCaptureDeviceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DefaultAudioRenderDeviceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DefaultAudioRenderDeviceChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IModuleCommandResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Panel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Panel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IPhotoConfirmationControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PixelFormat(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Handled() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IRegionOfInterest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoFocusEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoFocusEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoWhiteBalanceEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoWhiteBalanceEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoExposureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoExposureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_Bounds(Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IRegionOfInterest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BoundsNormalized(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BoundsNormalized(bool) noexcept = 0;
            virtual int32_t __stdcall get_Weight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Weight(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IRegionsOfInterestControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxRegions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetRegionsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetRegionsWithLockAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall ClearRegionsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoFocusSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AutoWhiteBalanceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AutoExposureSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ISceneModeControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::ITorchControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PowerSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PowerPercent(float*) noexcept = 0;
            virtual int32_t __stdcall put_PowerPercent(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IVideoDeviceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Brightness(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contrast(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hue(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalance(void**) noexcept = 0;
            virtual int32_t __stdcall get_BacklightCompensation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pan(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tilt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Zoom(void**) noexcept = 0;
            virtual int32_t __stdcall get_Roll(void**) noexcept = 0;
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_Focus(void**) noexcept = 0;
            virtual int32_t __stdcall TrySetPowerlineFrequency(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetPowerlineFrequency(int32_t*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IWhiteBalanceControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Preset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPresetAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Min(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetValueAsync(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IZoomControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(float*) noexcept = 0;
            virtual int32_t __stdcall get_Max(float*) noexcept = 0;
            virtual int32_t __stdcall get_Step(float*) noexcept = 0;
            virtual int32_t __stdcall get_Value(float*) noexcept = 0;
            virtual int32_t __stdcall put_Value(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IZoomControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedModes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Configure(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::IZoomSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(float*) noexcept = 0;
            virtual int32_t __stdcall put_Value(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::CallControlEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::DialRequestedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::KeypadPressedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::RedialRequestedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::AdvancedPhotoMode const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedPhotoControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Mode() const;
        auto Configure(Windows::Media::Devices::AdvancedPhotoCaptureSettings const& settings) const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedPhotoControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedPhotoControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController
    {
        auto SetDeviceProperty(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
        auto GetDeviceProperty(param::hstring const& propertyId) const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2
    {
        [[nodiscard]] auto LowLagPhotoSequence() const;
        [[nodiscard]] auto LowLagPhoto() const;
        [[nodiscard]] auto SceneModeControl() const;
        [[nodiscard]] auto TorchControl() const;
        [[nodiscard]] auto FlashControl() const;
        [[nodiscard]] auto WhiteBalanceControl() const;
        [[nodiscard]] auto ExposureControl() const;
        [[nodiscard]] auto FocusControl() const;
        [[nodiscard]] auto ExposureCompensationControl() const;
        [[nodiscard]] auto IsoSpeedControl() const;
        [[nodiscard]] auto RegionsOfInterestControl() const;
        [[nodiscard]] auto PrimaryUse() const;
        auto PrimaryUse(Windows::Media::Devices::CaptureUse const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3
    {
        [[nodiscard]] auto VariablePhotoSequenceController() const;
        [[nodiscard]] auto PhotoConfirmationControl() const;
        [[nodiscard]] auto ZoomControl() const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4
    {
        [[nodiscard]] auto ExposurePriorityVideoControl() const;
        [[nodiscard]] auto DesiredOptimization() const;
        auto DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization const& value) const;
        [[nodiscard]] auto HdrVideoControl() const;
        [[nodiscard]] auto OpticalImageStabilizationControl() const;
        [[nodiscard]] auto AdvancedPhotoControl() const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5
    {
        [[nodiscard]] auto Id() const;
        auto GetDevicePropertyById(param::hstring const& propertyId, Windows::Foundation::IReference<uint32_t> const& maxPropertyValueSize) const;
        auto SetDevicePropertyById(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
        auto GetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, Windows::Foundation::IReference<uint32_t> const& maxPropertyValueSize) const;
        auto SetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController6
    {
        [[nodiscard]] auto VideoTemporalDenoisingControl() const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController7
    {
        [[nodiscard]] auto InfraredTorchControl() const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController8
    {
        [[nodiscard]] auto PanelBasedOptimizationControl() const;
    };
    template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController8<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAudioDeviceController
    {
        auto Muted(bool value) const;
        [[nodiscard]] auto Muted() const;
        auto VolumePercent(float value) const;
        [[nodiscard]] auto VolumePercent() const;
    };
    template <> struct consume<Windows::Media::Devices::IAudioDeviceController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAudioDeviceModule
    {
        [[nodiscard]] auto ClassId() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto InstanceId() const;
        [[nodiscard]] auto MajorVersion() const;
        [[nodiscard]] auto MinorVersion() const;
        auto SendCommandAsync(Windows::Storage::Streams::IBuffer const& Command) const;
    };
    template <> struct consume<Windows::Media::Devices::IAudioDeviceModule>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModule<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs
    {
        [[nodiscard]] auto Module() const;
        [[nodiscard]] auto NotificationData() const;
    };
    template <> struct consume<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAudioDeviceModulesManager
    {
        auto ModuleNotificationReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const;
        using ModuleNotificationReceived_revoker = impl::event_revoker<Windows::Media::Devices::IAudioDeviceModulesManager, &impl::abi_t<Windows::Media::Devices::IAudioDeviceModulesManager>::remove_ModuleNotificationReceived>;
        ModuleNotificationReceived_revoker ModuleNotificationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const;
        auto ModuleNotificationReceived(winrt::event_token const& token) const noexcept;
        auto FindAllById(param::hstring const& moduleId) const;
        auto FindAll() const;
    };
    template <> struct consume<Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory
    {
        auto Create(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ICallControl
    {
        auto IndicateNewIncomingCall(bool enableRinger, param::hstring const& callerId) const;
        auto IndicateNewOutgoingCall() const;
        auto IndicateActiveCall(uint64_t callToken) const;
        auto EndCall(uint64_t callToken) const;
        [[nodiscard]] auto HasRinger() const;
        auto AnswerRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
        using AnswerRequested_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_AnswerRequested>;
        AnswerRequested_revoker AnswerRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
        auto AnswerRequested(winrt::event_token const& token) const noexcept;
        auto HangUpRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
        using HangUpRequested_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_HangUpRequested>;
        HangUpRequested_revoker HangUpRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
        auto HangUpRequested(winrt::event_token const& token) const noexcept;
        auto DialRequested(Windows::Media::Devices::DialRequestedEventHandler const& handler) const;
        using DialRequested_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_DialRequested>;
        DialRequested_revoker DialRequested(auto_revoke_t, Windows::Media::Devices::DialRequestedEventHandler const& handler) const;
        auto DialRequested(winrt::event_token const& token) const noexcept;
        auto RedialRequested(Windows::Media::Devices::RedialRequestedEventHandler const& handler) const;
        using RedialRequested_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_RedialRequested>;
        RedialRequested_revoker RedialRequested(auto_revoke_t, Windows::Media::Devices::RedialRequestedEventHandler const& handler) const;
        auto RedialRequested(winrt::event_token const& token) const noexcept;
        auto KeypadPressed(Windows::Media::Devices::KeypadPressedEventHandler const& handler) const;
        using KeypadPressed_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_KeypadPressed>;
        KeypadPressed_revoker KeypadPressed(auto_revoke_t, Windows::Media::Devices::KeypadPressedEventHandler const& handler) const;
        auto KeypadPressed(winrt::event_token const& token) const noexcept;
        auto AudioTransferRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
        using AudioTransferRequested_revoker = impl::event_revoker<Windows::Media::Devices::ICallControl, &impl::abi_t<Windows::Media::Devices::ICallControl>::remove_AudioTransferRequested>;
        AudioTransferRequested_revoker AudioTransferRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
        auto AudioTransferRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Devices::ICallControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ICallControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ICallControlStatics
    {
        auto GetDefault() const;
        auto FromId(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Media::Devices::ICallControlStatics>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ICallControlStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Role() const;
    };
    template <> struct consume<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IDialRequestedEventArgs
    {
        auto Handled() const;
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::Media::Devices::IDialRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IDialRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IExposureCompensationControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::IExposureCompensationControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IExposureCompensationControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IExposureControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Auto() const;
        auto SetAutoAsync(bool value) const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(Windows::Foundation::TimeSpan const& shutterDuration) const;
    };
    template <> struct consume<Windows::Media::Devices::IExposureControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IExposureControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IExposurePriorityVideoControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Enabled() const;
        auto Enabled(bool value) const;
    };
    template <> struct consume<Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IFlashControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto PowerSupported() const;
        [[nodiscard]] auto RedEyeReductionSupported() const;
        [[nodiscard]] auto Enabled() const;
        auto Enabled(bool value) const;
        [[nodiscard]] auto Auto() const;
        auto Auto(bool value) const;
        [[nodiscard]] auto RedEyeReduction() const;
        auto RedEyeReduction(bool value) const;
        [[nodiscard]] auto PowerPercent() const;
        auto PowerPercent(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::IFlashControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IFlashControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IFlashControl2
    {
        [[nodiscard]] auto AssistantLightSupported() const;
        [[nodiscard]] auto AssistantLightEnabled() const;
        auto AssistantLightEnabled(bool value) const;
    };
    template <> struct consume<Windows::Media::Devices::IFlashControl2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IFlashControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IFocusControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedPresets() const;
        [[nodiscard]] auto Preset() const;
        auto SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset) const;
        auto SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset, bool completeBeforeFocus) const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(uint32_t focus) const;
        auto FocusAsync() const;
    };
    template <> struct consume<Windows::Media::Devices::IFocusControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IFocusControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IFocusControl2
    {
        [[nodiscard]] auto FocusChangedSupported() const;
        [[nodiscard]] auto WaitForFocusSupported() const;
        [[nodiscard]] auto SupportedFocusModes() const;
        [[nodiscard]] auto SupportedFocusDistances() const;
        [[nodiscard]] auto SupportedFocusRanges() const;
        [[nodiscard]] auto Mode() const;
        [[nodiscard]] auto FocusState() const;
        auto UnlockAsync() const;
        auto LockAsync() const;
        auto Configure(Windows::Media::Devices::FocusSettings const& settings) const;
    };
    template <> struct consume<Windows::Media::Devices::IFocusControl2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IFocusControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IFocusSettings
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::FocusMode const& value) const;
        [[nodiscard]] auto AutoFocusRange() const;
        auto AutoFocusRange(Windows::Media::Devices::AutoFocusRange const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto Distance() const;
        auto Distance(Windows::Foundation::IReference<Windows::Media::Devices::ManualFocusDistance> const& value) const;
        [[nodiscard]] auto WaitForFocus() const;
        auto WaitForFocus(bool value) const;
        [[nodiscard]] auto DisableDriverFallback() const;
        auto DisableDriverFallback(bool value) const;
    };
    template <> struct consume<Windows::Media::Devices::IFocusSettings>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IFocusSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IHdrVideoControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::HdrVideoMode const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IHdrVideoControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IHdrVideoControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IInfraredTorchControl
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto CurrentMode() const;
        auto CurrentMode(Windows::Media::Devices::InfraredTorchMode const& value) const;
        [[nodiscard]] auto MinPower() const;
        [[nodiscard]] auto MaxPower() const;
        [[nodiscard]] auto PowerStep() const;
        [[nodiscard]] auto Power() const;
        auto Power(int32_t value) const;
    };
    template <> struct consume<Windows::Media::Devices::IInfraredTorchControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IInfraredTorchControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IIsoSpeedControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedPresets() const;
        [[nodiscard]] auto Preset() const;
        auto SetPresetAsync(Windows::Media::Devices::IsoSpeedPreset const& preset) const;
    };
    template <> struct consume<Windows::Media::Devices::IIsoSpeedControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IIsoSpeedControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IIsoSpeedControl2
    {
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(uint32_t isoSpeed) const;
        [[nodiscard]] auto Auto() const;
        auto SetAutoAsync() const;
    };
    template <> struct consume<Windows::Media::Devices::IIsoSpeedControl2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IIsoSpeedControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IKeypadPressedEventArgs
    {
        [[nodiscard]] auto TelephonyKey() const;
    };
    template <> struct consume<Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IKeypadPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ILowLagPhotoControl
    {
        auto GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const;
        auto GetCurrentFrameRate() const;
        [[nodiscard]] auto ThumbnailEnabled() const;
        auto ThumbnailEnabled(bool value) const;
        [[nodiscard]] auto ThumbnailFormat() const;
        auto ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const;
        [[nodiscard]] auto DesiredThumbnailSize() const;
        auto DesiredThumbnailSize(uint32_t value) const;
        [[nodiscard]] auto HardwareAcceleratedThumbnailSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::ILowLagPhotoControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ILowLagPhotoControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ILowLagPhotoSequenceControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto MaxPastPhotos() const;
        [[nodiscard]] auto MaxPhotosPerSecond() const;
        [[nodiscard]] auto PastPhotoLimit() const;
        auto PastPhotoLimit(uint32_t value) const;
        [[nodiscard]] auto PhotosPerSecondLimit() const;
        auto PhotosPerSecondLimit(float value) const;
        auto GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const;
        auto GetCurrentFrameRate() const;
        [[nodiscard]] auto ThumbnailEnabled() const;
        auto ThumbnailEnabled(bool value) const;
        [[nodiscard]] auto ThumbnailFormat() const;
        auto ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const;
        [[nodiscard]] auto DesiredThumbnailSize() const;
        auto DesiredThumbnailSize(uint32_t value) const;
        [[nodiscard]] auto HardwareAcceleratedThumbnailSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IMediaDeviceControl
    {
        [[nodiscard]] auto Capabilities() const;
        auto TryGetValue(double& value) const;
        auto TrySetValue(double value) const;
        auto TryGetAuto(bool& value) const;
        auto TrySetAuto(bool value) const;
    };
    template <> struct consume<Windows::Media::Devices::IMediaDeviceControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IMediaDeviceControlCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Default() const;
        [[nodiscard]] auto AutoModeSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IMediaDeviceController
    {
        auto GetAvailableMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        auto GetMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        auto SetMediaStreamPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties) const;
    };
    template <> struct consume<Windows::Media::Devices::IMediaDeviceController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IMediaDeviceStatics
    {
        auto GetAudioCaptureSelector() const;
        auto GetAudioRenderSelector() const;
        auto GetVideoCaptureSelector() const;
        auto GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role) const;
        auto GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role) const;
        auto DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const;
        using DefaultAudioCaptureDeviceChanged_revoker = impl::event_revoker<Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioCaptureDeviceChanged>;
        DefaultAudioCaptureDeviceChanged_revoker DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const;
        auto DefaultAudioCaptureDeviceChanged(winrt::event_token const& cookie) const noexcept;
        auto DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const;
        using DefaultAudioRenderDeviceChanged_revoker = impl::event_revoker<Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioRenderDeviceChanged>;
        DefaultAudioRenderDeviceChanged_revoker DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const;
        auto DefaultAudioRenderDeviceChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Media::Devices::IMediaDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IModuleCommandResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Result() const;
    };
    template <> struct consume<Windows::Media::Devices::IModuleCommandResult>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IModuleCommandResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IOpticalImageStabilizationControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::OpticalImageStabilizationMode const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IPanelBasedOptimizationControl
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto Panel() const;
        auto Panel(Windows::Devices::Enumeration::Panel const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IPanelBasedOptimizationControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IPhotoConfirmationControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Enabled() const;
        auto Enabled(bool value) const;
        [[nodiscard]] auto PixelFormat() const;
        auto PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat const& format) const;
    };
    template <> struct consume<Windows::Media::Devices::IPhotoConfirmationControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IPhotoConfirmationControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IRedialRequestedEventArgs
    {
        auto Handled() const;
    };
    template <> struct consume<Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IRedialRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IRegionOfInterest
    {
        [[nodiscard]] auto AutoFocusEnabled() const;
        auto AutoFocusEnabled(bool value) const;
        [[nodiscard]] auto AutoWhiteBalanceEnabled() const;
        auto AutoWhiteBalanceEnabled(bool value) const;
        [[nodiscard]] auto AutoExposureEnabled() const;
        auto AutoExposureEnabled(bool value) const;
        [[nodiscard]] auto Bounds() const;
        auto Bounds(Windows::Foundation::Rect const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IRegionOfInterest>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IRegionOfInterest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IRegionOfInterest2
    {
        [[nodiscard]] auto Type() const;
        auto Type(Windows::Media::Devices::RegionOfInterestType const& value) const;
        [[nodiscard]] auto BoundsNormalized() const;
        auto BoundsNormalized(bool value) const;
        [[nodiscard]] auto Weight() const;
        auto Weight(uint32_t value) const;
    };
    template <> struct consume<Windows::Media::Devices::IRegionOfInterest2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IRegionOfInterest2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IRegionsOfInterestControl
    {
        [[nodiscard]] auto MaxRegions() const;
        auto SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions) const;
        auto SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions, bool lockValues) const;
        auto ClearRegionsAsync() const;
        [[nodiscard]] auto AutoFocusSupported() const;
        [[nodiscard]] auto AutoWhiteBalanceSupported() const;
        [[nodiscard]] auto AutoExposureSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::IRegionsOfInterestControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IRegionsOfInterestControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ISceneModeControl
    {
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(Windows::Media::Devices::CaptureSceneMode const& sceneMode) const;
    };
    template <> struct consume<Windows::Media::Devices::ISceneModeControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ISceneModeControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_ITorchControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto PowerSupported() const;
        [[nodiscard]] auto Enabled() const;
        auto Enabled(bool value) const;
        [[nodiscard]] auto PowerPercent() const;
        auto PowerPercent(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::ITorchControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_ITorchControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IVideoDeviceController
    {
        [[nodiscard]] auto Brightness() const;
        [[nodiscard]] auto Contrast() const;
        [[nodiscard]] auto Hue() const;
        [[nodiscard]] auto WhiteBalance() const;
        [[nodiscard]] auto BacklightCompensation() const;
        [[nodiscard]] auto Pan() const;
        [[nodiscard]] auto Tilt() const;
        [[nodiscard]] auto Zoom() const;
        [[nodiscard]] auto Roll() const;
        [[nodiscard]] auto Exposure() const;
        [[nodiscard]] auto Focus() const;
        auto TrySetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency const& value) const;
        auto TryGetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IVideoDeviceController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IVideoDeviceController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IVideoTemporalDenoisingControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::VideoTemporalDenoisingMode const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IVideoTemporalDenoisingControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IWhiteBalanceControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Preset() const;
        auto SetPresetAsync(Windows::Media::Devices::ColorTemperaturePreset const& preset) const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto SetValueAsync(uint32_t temperature) const;
    };
    template <> struct consume<Windows::Media::Devices::IWhiteBalanceControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IWhiteBalanceControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IZoomControl
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
        [[nodiscard]] auto Value() const;
        auto Value(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::IZoomControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IZoomControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IZoomControl2
    {
        [[nodiscard]] auto SupportedModes() const;
        [[nodiscard]] auto Mode() const;
        auto Configure(Windows::Media::Devices::ZoomSettings const& settings) const;
    };
    template <> struct consume<Windows::Media::Devices::IZoomControl2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IZoomControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_IZoomSettings
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::ZoomTransitionMode const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::IZoomSettings>
    {
        template <typename D> using type = consume_Windows_Media_Devices_IZoomSettings<D>;
    };
}
#endif
