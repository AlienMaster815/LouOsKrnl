// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_0_H
#define WINRT_Windows_Media_Capture_0_H
namespace winrt::Windows::Devices::Enumeration
{
    enum class Panel : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    struct IPropertySet;
}
namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
}
namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    enum class BitmapPixelFormat : int32_t;
    struct BitmapPropertySet;
    struct BitmapSize;
    struct SoftwareBitmap;
}
namespace winrt::Windows::Media
{
    enum class AudioProcessing : int32_t;
    struct IMediaExtension;
    struct VideoFrame;
}
namespace winrt::Windows::Media::Capture::Frames
{
    struct MediaFrameSource;
    struct MediaFrameSourceGroup;
}
namespace winrt::Windows::Media::Core
{
    struct IMediaSource;
}
namespace winrt::Windows::Media::Devices
{
    enum class AdvancedPhotoMode : int32_t;
    struct AudioDeviceController;
    enum class CameraStreamState : int32_t;
    enum class MediaCaptureFocusState : int32_t;
    enum class MediaCapturePauseBehavior : int32_t;
    struct VideoDeviceController;
}
namespace winrt::Windows::Media::Effects
{
    struct IAudioEffectDefinition;
    struct IVideoEffectDefinition;
}
namespace winrt::Windows::Media::MediaProperties
{
    struct IMediaEncodingProperties;
    struct ImageEncodingProperties;
    struct MediaEncodingProfile;
    struct MediaPropertySet;
    struct MediaRatio;
    struct VideoEncodingProperties;
}
namespace winrt::Windows::Security::Authentication::Web
{
    struct WebAuthenticationResult;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
    struct StorageFolder;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStream;
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::System
{
    struct User;
    enum class VirtualKey : int32_t;
    enum class VirtualKeyModifiers : uint32_t;
}
namespace winrt::Windows::UI::WindowManagement
{
    struct DisplayRegion;
}
namespace winrt::Windows::Media::Capture
{
    enum class AppBroadcastCameraCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppBroadcastCameraOverlayLocation : int32_t
    {
        TopLeft = 0,
        TopCenter = 1,
        TopRight = 2,
        MiddleLeft = 3,
        MiddleCenter = 4,
        MiddleRight = 5,
        BottomLeft = 6,
        BottomCenter = 7,
        BottomRight = 8,
    };
    enum class AppBroadcastCameraOverlaySize : int32_t
    {
        Small = 0,
        Medium = 1,
        Large = 2,
    };
    enum class AppBroadcastCaptureTargetType : int32_t
    {
        AppView = 0,
        EntireDisplay = 1,
    };
    enum class AppBroadcastExitBroadcastModeReason : int32_t
    {
        NormalExit = 0,
        UserCanceled = 1,
        AuthorizationFail = 2,
        ForegroundAppActivated = 3,
    };
    enum class AppBroadcastMicrophoneCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppBroadcastPlugInState : int32_t
    {
        Unknown = 0,
        Initialized = 1,
        MicrosoftSignInRequired = 2,
        OAuthSignInRequired = 3,
        ProviderSignInRequired = 4,
        InBandwidthTest = 5,
        ReadyToBroadcast = 6,
    };
    enum class AppBroadcastPreviewState : int32_t
    {
        Started = 0,
        Stopped = 1,
        Failed = 2,
    };
    enum class AppBroadcastSignInResult : int32_t
    {
        Success = 0,
        AuthenticationFailed = 1,
        Unauthorized = 2,
        ServiceUnavailable = 3,
        Unknown = 4,
    };
    enum class AppBroadcastSignInState : int32_t
    {
        NotSignedIn = 0,
        MicrosoftSignInInProgress = 1,
        MicrosoftSignInComplete = 2,
        OAuthSignInInProgress = 3,
        OAuthSignInComplete = 4,
    };
    enum class AppBroadcastStreamState : int32_t
    {
        Initializing = 0,
        StreamReady = 1,
        Started = 2,
        Paused = 3,
        Terminated = 4,
    };
    enum class AppBroadcastTerminationReason : int32_t
    {
        NormalTermination = 0,
        LostConnectionToService = 1,
        NoNetworkConnectivity = 2,
        ServiceAbort = 3,
        ServiceError = 4,
        ServiceUnavailable = 5,
        InternalError = 6,
        UnsupportedFormat = 7,
        BackgroundTaskTerminated = 8,
        BackgroundTaskUnresponsive = 9,
    };
    enum class AppBroadcastVideoEncodingBitrateMode : int32_t
    {
        Custom = 0,
        Auto = 1,
    };
    enum class AppBroadcastVideoEncodingResolutionMode : int32_t
    {
        Custom = 0,
        Auto = 1,
    };
    enum class AppCaptureHistoricalBufferLengthUnit : int32_t
    {
        Megabytes = 0,
        Seconds = 1,
    };
    enum class AppCaptureMetadataPriority : int32_t
    {
        Informational = 0,
        Important = 1,
    };
    enum class AppCaptureMicrophoneCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppCaptureRecordingState : int32_t
    {
        InProgress = 0,
        Completed = 1,
        Failed = 2,
    };
    enum class AppCaptureVideoEncodingBitrateMode : int32_t
    {
        Custom = 0,
        High = 1,
        Standard = 2,
    };
    enum class AppCaptureVideoEncodingFrameRateMode : int32_t
    {
        Standard = 0,
        High = 1,
    };
    enum class AppCaptureVideoEncodingResolutionMode : int32_t
    {
        Custom = 0,
        High = 1,
        Standard = 2,
    };
    enum class CameraCaptureUIMaxPhotoResolution : int32_t
    {
        HighestAvailable = 0,
        VerySmallQvga = 1,
        SmallVga = 2,
        MediumXga = 3,
        Large3M = 4,
        VeryLarge5M = 5,
    };
    enum class CameraCaptureUIMaxVideoResolution : int32_t
    {
        HighestAvailable = 0,
        LowDefinition = 1,
        StandardDefinition = 2,
        HighDefinition = 3,
    };
    enum class CameraCaptureUIMode : int32_t
    {
        PhotoOrVideo = 0,
        Photo = 1,
        Video = 2,
    };
    enum class CameraCaptureUIPhotoFormat : int32_t
    {
        Jpeg = 0,
        Png = 1,
        JpegXR = 2,
    };
    enum class CameraCaptureUIVideoFormat : int32_t
    {
        Mp4 = 0,
        Wmv = 1,
    };
    enum class ForegroundActivationArgument : int32_t
    {
        SignInRequired = 0,
        MoreSettings = 1,
    };
    enum class GameBarCommand : int32_t
    {
        OpenGameBar = 0,
        RecordHistoricalBuffer = 1,
        ToggleStartStopRecord = 2,
        StartRecord = 3,
        StopRecord = 4,
        TakeScreenshot = 5,
        StartBroadcast = 6,
        StopBroadcast = 7,
        PauseBroadcast = 8,
        ResumeBroadcast = 9,
        ToggleStartStopBroadcast = 10,
        ToggleMicrophoneCapture = 11,
        ToggleCameraCapture = 12,
        ToggleRecordingIndicator = 13,
    };
    enum class GameBarCommandOrigin : int32_t
    {
        ShortcutKey = 0,
        Cortana = 1,
        AppCommand = 2,
    };
    enum class GameBarServicesDisplayMode : int32_t
    {
        Windowed = 0,
        FullScreenExclusive = 1,
    };
    enum class GameBarTargetCapturePolicy : int32_t
    {
        EnabledBySystem = 0,
        EnabledByUser = 1,
        NotEnabled = 2,
        ProhibitedBySystem = 3,
        ProhibitedByPublisher = 4,
    };
    enum class KnownVideoProfile : int32_t
    {
        VideoRecording = 0,
        HighQualityPhoto = 1,
        BalancedVideoAndPhoto = 2,
        VideoConferencing = 3,
        PhotoSequence = 4,
        HighFrameRate = 5,
        VariablePhotoSequence = 6,
        HdrWithWcgVideo = 7,
        HdrWithWcgPhoto = 8,
        VideoHdr8 = 9,
    };
    enum class MediaCaptureDeviceExclusiveControlStatus : int32_t
    {
        ExclusiveControlAvailable = 0,
        SharedReadOnlyAvailable = 1,
    };
    enum class MediaCaptureMemoryPreference : int32_t
    {
        Auto = 0,
        Cpu = 1,
    };
    enum class MediaCaptureSharingMode : int32_t
    {
        ExclusiveControl = 0,
        SharedReadOnly = 1,
    };
    enum class MediaCaptureThermalStatus : int32_t
    {
        Normal = 0,
        Overheated = 1,
    };
    enum class MediaCategory : int32_t
    {
        Other = 0,
        Communications = 1,
        Media = 2,
        GameChat = 3,
        Speech = 4,
    };
    enum class MediaStreamType : int32_t
    {
        VideoPreview = 0,
        VideoRecord = 1,
        Audio = 2,
        Photo = 3,
    };
    enum class PhotoCaptureSource : int32_t
    {
        Auto = 0,
        VideoPreview = 1,
        Photo = 2,
    };
    enum class PowerlineFrequency : int32_t
    {
        Disabled = 0,
        FiftyHertz = 1,
        SixtyHertz = 2,
        Auto = 3,
    };
    enum class StreamingCaptureMode : int32_t
    {
        AudioAndVideo = 0,
        Audio = 1,
        Video = 2,
    };
    enum class VideoDeviceCharacteristic : int32_t
    {
        AllStreamsIndependent = 0,
        PreviewRecordStreamsIdentical = 1,
        PreviewPhotoStreamsIdentical = 2,
        RecordPhotoStreamsIdentical = 3,
        AllStreamsIdentical = 4,
    };
    enum class VideoRotation : int32_t
    {
        None = 0,
        Clockwise90Degrees = 1,
        Clockwise180Degrees = 2,
        Clockwise270Degrees = 3,
    };
    struct IAdvancedCapturedPhoto;
    struct IAdvancedCapturedPhoto2;
    struct IAdvancedPhotoCapture;
    struct IAppBroadcastBackgroundService;
    struct IAppBroadcastBackgroundService2;
    struct IAppBroadcastBackgroundServiceSignInInfo;
    struct IAppBroadcastBackgroundServiceSignInInfo2;
    struct IAppBroadcastBackgroundServiceStreamInfo;
    struct IAppBroadcastBackgroundServiceStreamInfo2;
    struct IAppBroadcastCameraCaptureStateChangedEventArgs;
    struct IAppBroadcastGlobalSettings;
    struct IAppBroadcastHeartbeatRequestedEventArgs;
    struct IAppBroadcastManagerStatics;
    struct IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
    struct IAppBroadcastPlugIn;
    struct IAppBroadcastPlugInManager;
    struct IAppBroadcastPlugInManagerStatics;
    struct IAppBroadcastPlugInStateChangedEventArgs;
    struct IAppBroadcastPreview;
    struct IAppBroadcastPreviewStateChangedEventArgs;
    struct IAppBroadcastPreviewStreamReader;
    struct IAppBroadcastPreviewStreamVideoFrame;
    struct IAppBroadcastPreviewStreamVideoHeader;
    struct IAppBroadcastProviderSettings;
    struct IAppBroadcastServices;
    struct IAppBroadcastSignInStateChangedEventArgs;
    struct IAppBroadcastState;
    struct IAppBroadcastStreamAudioFrame;
    struct IAppBroadcastStreamAudioHeader;
    struct IAppBroadcastStreamReader;
    struct IAppBroadcastStreamStateChangedEventArgs;
    struct IAppBroadcastStreamVideoFrame;
    struct IAppBroadcastStreamVideoHeader;
    struct IAppBroadcastTriggerDetails;
    struct IAppBroadcastViewerCountChangedEventArgs;
    struct IAppCapture;
    struct IAppCaptureAlternateShortcutKeys;
    struct IAppCaptureAlternateShortcutKeys2;
    struct IAppCaptureAlternateShortcutKeys3;
    struct IAppCaptureDurationGeneratedEventArgs;
    struct IAppCaptureFileGeneratedEventArgs;
    struct IAppCaptureManagerStatics;
    struct IAppCaptureMetadataWriter;
    struct IAppCaptureMicrophoneCaptureStateChangedEventArgs;
    struct IAppCaptureRecordOperation;
    struct IAppCaptureRecordingStateChangedEventArgs;
    struct IAppCaptureServices;
    struct IAppCaptureSettings;
    struct IAppCaptureSettings2;
    struct IAppCaptureSettings3;
    struct IAppCaptureSettings4;
    struct IAppCaptureSettings5;
    struct IAppCaptureState;
    struct IAppCaptureStatics;
    struct IAppCaptureStatics2;
    struct ICameraCaptureUI;
    struct ICameraCaptureUIPhotoCaptureSettings;
    struct ICameraCaptureUIVideoCaptureSettings;
    struct ICameraOptionsUIStatics;
    struct ICapturedFrame;
    struct ICapturedFrame2;
    struct ICapturedFrameControlValues;
    struct ICapturedFrameControlValues2;
    struct ICapturedFrameWithSoftwareBitmap;
    struct ICapturedPhoto;
    struct IGameBarServices;
    struct IGameBarServicesCommandEventArgs;
    struct IGameBarServicesManager;
    struct IGameBarServicesManagerGameBarServicesCreatedEventArgs;
    struct IGameBarServicesManagerStatics;
    struct IGameBarServicesTargetInfo;
    struct ILowLagMediaRecording;
    struct ILowLagMediaRecording2;
    struct ILowLagMediaRecording3;
    struct ILowLagPhotoCapture;
    struct ILowLagPhotoSequenceCapture;
    struct IMediaCapture;
    struct IMediaCapture2;
    struct IMediaCapture3;
    struct IMediaCapture4;
    struct IMediaCapture5;
    struct IMediaCapture6;
    struct IMediaCapture7;
    struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    struct IMediaCaptureFailedEventArgs;
    struct IMediaCaptureFocusChangedEventArgs;
    struct IMediaCaptureInitializationSettings;
    struct IMediaCaptureInitializationSettings2;
    struct IMediaCaptureInitializationSettings3;
    struct IMediaCaptureInitializationSettings4;
    struct IMediaCaptureInitializationSettings5;
    struct IMediaCaptureInitializationSettings6;
    struct IMediaCaptureInitializationSettings7;
    struct IMediaCapturePauseResult;
    struct IMediaCaptureRelativePanelWatcher;
    struct IMediaCaptureSettings;
    struct IMediaCaptureSettings2;
    struct IMediaCaptureSettings3;
    struct IMediaCaptureStatics;
    struct IMediaCaptureStopResult;
    struct IMediaCaptureVideoPreview;
    struct IMediaCaptureVideoProfile;
    struct IMediaCaptureVideoProfile2;
    struct IMediaCaptureVideoProfileMediaDescription;
    struct IMediaCaptureVideoProfileMediaDescription2;
    struct IOptionalReferencePhotoCapturedEventArgs;
    struct IPhotoCapturedEventArgs;
    struct IPhotoConfirmationCapturedEventArgs;
    struct IVideoStreamConfiguration;
    struct AdvancedCapturedPhoto;
    struct AdvancedPhotoCapture;
    struct AppBroadcastBackgroundService;
    struct AppBroadcastBackgroundServiceSignInInfo;
    struct AppBroadcastBackgroundServiceStreamInfo;
    struct AppBroadcastCameraCaptureStateChangedEventArgs;
    struct AppBroadcastGlobalSettings;
    struct AppBroadcastHeartbeatRequestedEventArgs;
    struct AppBroadcastManager;
    struct AppBroadcastMicrophoneCaptureStateChangedEventArgs;
    struct AppBroadcastPlugIn;
    struct AppBroadcastPlugInManager;
    struct AppBroadcastPlugInStateChangedEventArgs;
    struct AppBroadcastPreview;
    struct AppBroadcastPreviewStateChangedEventArgs;
    struct AppBroadcastPreviewStreamReader;
    struct AppBroadcastPreviewStreamVideoFrame;
    struct AppBroadcastPreviewStreamVideoHeader;
    struct AppBroadcastProviderSettings;
    struct AppBroadcastServices;
    struct AppBroadcastSignInStateChangedEventArgs;
    struct AppBroadcastState;
    struct AppBroadcastStreamAudioFrame;
    struct AppBroadcastStreamAudioHeader;
    struct AppBroadcastStreamReader;
    struct AppBroadcastStreamStateChangedEventArgs;
    struct AppBroadcastStreamVideoFrame;
    struct AppBroadcastStreamVideoHeader;
    struct AppBroadcastTriggerDetails;
    struct AppBroadcastViewerCountChangedEventArgs;
    struct AppCapture;
    struct AppCaptureAlternateShortcutKeys;
    struct AppCaptureDurationGeneratedEventArgs;
    struct AppCaptureFileGeneratedEventArgs;
    struct AppCaptureManager;
    struct AppCaptureMetadataWriter;
    struct AppCaptureMicrophoneCaptureStateChangedEventArgs;
    struct AppCaptureRecordOperation;
    struct AppCaptureRecordingStateChangedEventArgs;
    struct AppCaptureServices;
    struct AppCaptureSettings;
    struct AppCaptureState;
    struct CameraCaptureUI;
    struct CameraCaptureUIPhotoCaptureSettings;
    struct CameraCaptureUIVideoCaptureSettings;
    struct CameraOptionsUI;
    struct CapturedFrame;
    struct CapturedFrameControlValues;
    struct CapturedPhoto;
    struct GameBarServices;
    struct GameBarServicesCommandEventArgs;
    struct GameBarServicesManager;
    struct GameBarServicesManagerGameBarServicesCreatedEventArgs;
    struct GameBarServicesTargetInfo;
    struct LowLagMediaRecording;
    struct LowLagPhotoCapture;
    struct LowLagPhotoSequenceCapture;
    struct MediaCapture;
    struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    struct MediaCaptureFailedEventArgs;
    struct MediaCaptureFocusChangedEventArgs;
    struct MediaCaptureInitializationSettings;
    struct MediaCapturePauseResult;
    struct MediaCaptureRelativePanelWatcher;
    struct MediaCaptureSettings;
    struct MediaCaptureStopResult;
    struct MediaCaptureVideoProfile;
    struct MediaCaptureVideoProfileMediaDescription;
    struct OptionalReferencePhotoCapturedEventArgs;
    struct PhotoCapturedEventArgs;
    struct PhotoConfirmationCapturedEventArgs;
    struct VideoStreamConfiguration;
    struct WhiteBalanceGain;
    struct MediaCaptureFailedEventHandler;
    struct RecordLimitationExceededEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastServices>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastState>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureServices>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureState>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IAppCaptureStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedFrame2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ICapturedPhoto>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServices>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapture7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Capture::AdvancedCapturedPhoto>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AdvancedPhotoCapture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastGlobalSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugIn>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastProviderSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastServices>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastState>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioHeader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoHeader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCapture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureMetadataWriter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureServices>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureState>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CameraOptionsUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CapturedFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CapturedFrameControlValues>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::CapturedPhoto>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServices>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServicesCommandEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServicesManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServicesTargetInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::LowLagMediaRecording>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::LowLagPhotoCapture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::LowLagPhotoSequenceCapture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCapture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureInitializationSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCapturePauseResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureRelativePanelWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureStopResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::PhotoCapturedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::VideoStreamConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlaySize>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastCaptureTargetType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastTerminationReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureMetadataPriority>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordingState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::ForegroundActivationArgument>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarCommand>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarCommandOrigin>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarServicesDisplayMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::GameBarTargetCapturePolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::KnownVideoProfile>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureMemoryPreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureSharingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureThermalStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::MediaStreamType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::PhotoCaptureSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::PowerlineFrequency>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::StreamingCaptureMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::VideoDeviceCharacteristic>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::VideoRotation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Capture::WhiteBalanceGain>
    {
        using type = struct_category<double, double, double>;
    };
    template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto" };
    };
    template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto2" };
    };
    template <> struct name<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedPhotoCapture" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundService" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundService2" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo2" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo2" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastCameraCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastGlobalSettings" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastHeartbeatRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastManagerStatics" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastMicrophoneCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugIn" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInManager" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInManagerStatics" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPreview>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreview" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamReader" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoFrame" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoHeader" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastProviderSettings" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastServices" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastSignInStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastState" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamAudioFrame" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamAudioHeader" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamReader" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamVideoFrame" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamVideoHeader" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastTriggerDetails" };
    };
    template <> struct name<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastViewerCountChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCapture" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys2" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys3" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureDurationGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureFileGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureManagerStatics" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureMetadataWriter" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureMicrophoneCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureRecordOperation" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureRecordingStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureServices" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureSettings2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings2" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureSettings3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings3" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureSettings4>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings4" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureSettings5>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings5" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureState" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureStatics" };
    };
    template <> struct name<Windows::Media::Capture::IAppCaptureStatics2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureStatics2" };
    };
    template <> struct name<Windows::Media::Capture::ICameraCaptureUI>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUI" };
    };
    template <> struct name<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIPhotoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIVideoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICameraOptionsUIStatics" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrame" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedFrame2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrame2" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues2" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameWithSoftwareBitmap" };
    };
    template <> struct name<Windows::Media::Capture::ICapturedPhoto>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ICapturedPhoto" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServices" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesCommandEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServicesManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManager" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManagerGameBarServicesCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManagerStatics" };
    };
    template <> struct name<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesTargetInfo" };
    };
    template <> struct name<Windows::Media::Capture::ILowLagMediaRecording>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording" };
    };
    template <> struct name<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording2" };
    };
    template <> struct name<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording3" };
    };
    template <> struct name<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoCapture" };
    };
    template <> struct name<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoSequenceCapture" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture2" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture3" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture4>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture4" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture5>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture5" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture6>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture6" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapture7>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture7" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFailedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFocusChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings2" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings3" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings4" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings5" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings6" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings7" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapturePauseResult" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureRelativePanelWatcher" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings2" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings3" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStatics" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStopResult" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoPreview" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfile" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfile2" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription" };
    };
    template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription2" };
    };
    template <> struct name<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IOptionalReferencePhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IPhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IPhotoConfirmationCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.IVideoStreamConfiguration" };
    };
    template <> struct name<Windows::Media::Capture::AdvancedCapturedPhoto>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AdvancedCapturedPhoto" };
    };
    template <> struct name<Windows::Media::Capture::AdvancedPhotoCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AdvancedPhotoCapture" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundService>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundService" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundServiceSignInInfo" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundServiceStreamInfo" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastGlobalSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastGlobalSettings" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastHeartbeatRequestedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastManager" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPlugIn>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugIn" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPlugInManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInManager" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreview>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreview" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamReader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamReader" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoFrame" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoHeader" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastProviderSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastProviderSettings" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastServices" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamAudioFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamAudioFrame" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamAudioHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamAudioHeader" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamReader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamReader" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamVideoFrame" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamVideoHeader>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamVideoHeader" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastTriggerDetails" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastViewerCountChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCapture" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureAlternateShortcutKeys" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureDurationGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureFileGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureManager" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureMetadataWriter>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMetadataWriter" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMicrophoneCaptureStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureRecordOperation>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordOperation" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordingStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureServices" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureState" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUI>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUI" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::CameraOptionsUI>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraOptionsUI" };
    };
    template <> struct name<Windows::Media::Capture::CapturedFrame>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrame" };
    };
    template <> struct name<Windows::Media::Capture::CapturedFrameControlValues>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrameControlValues" };
    };
    template <> struct name<Windows::Media::Capture::CapturedPhoto>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CapturedPhoto" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServices>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServices" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServicesCommandEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesCommandEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServicesManager>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesManager" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesManagerGameBarServicesCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServicesTargetInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesTargetInfo" };
    };
    template <> struct name<Windows::Media::Capture::LowLagMediaRecording>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.LowLagMediaRecording" };
    };
    template <> struct name<Windows::Media::Capture::LowLagPhotoCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoCapture" };
    };
    template <> struct name<Windows::Media::Capture::LowLagPhotoSequenceCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoSequenceCapture" };
    };
    template <> struct name<Windows::Media::Capture::MediaCapture>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCapture" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureInitializationSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureInitializationSettings" };
    };
    template <> struct name<Windows::Media::Capture::MediaCapturePauseResult>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCapturePauseResult" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureRelativePanelWatcher>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureRelativePanelWatcher" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSettings" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureStopResult>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureStopResult" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfile>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfile" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription" };
    };
    template <> struct name<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::PhotoCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.PhotoCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs" };
    };
    template <> struct name<Windows::Media::Capture::VideoStreamConfiguration>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.VideoStreamConfiguration" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastCameraCaptureState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraCaptureState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraOverlayLocation" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastCameraOverlaySize>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraOverlaySize" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastCaptureTargetType>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCaptureTargetType" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastExitBroadcastModeReason" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPlugInState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastPreviewState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastSignInResult>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInResult" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastSignInState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastStreamState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamState" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastTerminationReason>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastTerminationReason" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastVideoEncodingBitrateMode" };
    };
    template <> struct name<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastVideoEncodingResolutionMode" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureHistoricalBufferLengthUnit" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureMetadataPriority>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMetadataPriority" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMicrophoneCaptureState" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureRecordingState>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordingState" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingBitrateMode" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingFrameRateMode" };
    };
    template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingResolutionMode" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxPhotoResolution" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxVideoResolution" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMode" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoFormat>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoFormat" };
    };
    template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoFormat>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoFormat" };
    };
    template <> struct name<Windows::Media::Capture::ForegroundActivationArgument>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.ForegroundActivationArgument" };
    };
    template <> struct name<Windows::Media::Capture::GameBarCommand>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarCommand" };
    };
    template <> struct name<Windows::Media::Capture::GameBarCommandOrigin>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarCommandOrigin" };
    };
    template <> struct name<Windows::Media::Capture::GameBarServicesDisplayMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesDisplayMode" };
    };
    template <> struct name<Windows::Media::Capture::GameBarTargetCapturePolicy>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.GameBarTargetCapturePolicy" };
    };
    template <> struct name<Windows::Media::Capture::KnownVideoProfile>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.KnownVideoProfile" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatus" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureMemoryPreference>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureMemoryPreference" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureSharingMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSharingMode" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureThermalStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureThermalStatus" };
    };
    template <> struct name<Windows::Media::Capture::MediaCategory>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCategory" };
    };
    template <> struct name<Windows::Media::Capture::MediaStreamType>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaStreamType" };
    };
    template <> struct name<Windows::Media::Capture::PhotoCaptureSource>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.PhotoCaptureSource" };
    };
    template <> struct name<Windows::Media::Capture::PowerlineFrequency>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.PowerlineFrequency" };
    };
    template <> struct name<Windows::Media::Capture::StreamingCaptureMode>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.StreamingCaptureMode" };
    };
    template <> struct name<Windows::Media::Capture::VideoDeviceCharacteristic>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.VideoDeviceCharacteristic" };
    };
    template <> struct name<Windows::Media::Capture::VideoRotation>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.VideoRotation" };
    };
    template <> struct name<Windows::Media::Capture::WhiteBalanceGain>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.WhiteBalanceGain" };
    };
    template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventHandler" };
    };
    template <> struct name<Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        static constexpr auto & value{ L"Windows.Media.Capture.RecordLimitationExceededEventHandler" };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        static constexpr guid value{ 0xF072728B,0xB292,0x4491,{ 0x9D,0x41,0x99,0x80,0x7A,0x55,0x0B,0xBF } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        static constexpr guid value{ 0x18CF6CD8,0xCFFE,0x42D8,{ 0x81,0x04,0x01,0x7B,0xB3,0x18,0xF4,0xA1 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        static constexpr guid value{ 0x83FFAAFA,0x6667,0x44DC,{ 0x97,0x3C,0xA6,0xBC,0xE5,0x96,0xAA,0x0F } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        static constexpr guid value{ 0xBAD1E72A,0xFA94,0x46F9,{ 0x95,0xFC,0xD7,0x15,0x11,0xCD,0xA7,0x0B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        static constexpr guid value{ 0xFC8CCBBF,0x5549,0x4B87,{ 0x95,0x9F,0x23,0xCA,0x40,0x1F,0xD4,0x73 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        static constexpr guid value{ 0x5E735275,0x88C8,0x4ECA,{ 0x89,0xBA,0x48,0x25,0x98,0x5D,0xB8,0x80 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        static constexpr guid value{ 0x9104285C,0x62CF,0x4A3C,{ 0xA7,0xEE,0xAE,0xB5,0x07,0x40,0x46,0x45 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        static constexpr guid value{ 0x31DC02BC,0x990A,0x4904,{ 0xAA,0x96,0xFE,0x36,0x43,0x81,0xF1,0x36 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        static constexpr guid value{ 0xBD1E9F6D,0x94DC,0x4FCE,{ 0x95,0x41,0xA9,0xF1,0x29,0x59,0x63,0x34 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        static constexpr guid value{ 0x1E334CD0,0xB882,0x4B88,{ 0x86,0x92,0x05,0x99,0x9A,0xCE,0xB7,0x0F } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        static constexpr guid value{ 0xB2CB27A5,0x70FC,0x4E17,{ 0x80,0xBD,0x6B,0xA0,0xFD,0x3F,0xF3,0xA0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        static constexpr guid value{ 0xCEA54283,0xEE51,0x4DBF,{ 0x94,0x72,0x79,0xA9,0xED,0x4E,0x21,0x65 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        static constexpr guid value{ 0x364E018B,0x1E4E,0x411F,{ 0xAB,0x3E,0x92,0x95,0x98,0x44,0xC1,0x56 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr guid value{ 0xA86AD5E9,0x9440,0x4908,{ 0x9D,0x09,0x65,0xB7,0xE3,0x15,0xD7,0x95 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        static constexpr guid value{ 0x520C1E66,0x6513,0x4574,{ 0xAC,0x54,0x23,0xB7,0x97,0x29,0x61,0x5B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        static constexpr guid value{ 0xE550D979,0x27A1,0x49A7,{ 0xBB,0xF4,0xD7,0xA9,0xE9,0xD0,0x76,0x68 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        static constexpr guid value{ 0xF2645C20,0x5C76,0x4CDC,{ 0x93,0x64,0x82,0xFE,0x9E,0xB6,0x53,0x4D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        static constexpr guid value{ 0x4881D0F2,0xABC5,0x4FC6,{ 0x84,0xB0,0x89,0x37,0x0B,0xB4,0x72,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPreview>
    {
        static constexpr guid value{ 0x14B60F5A,0x6E4A,0x4B80,{ 0xA1,0x4F,0x67,0xEE,0x77,0xD1,0x53,0xE7 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        static constexpr guid value{ 0x5A57F2DE,0x8DEA,0x4E86,{ 0x90,0xAD,0x03,0xFC,0x26,0xB9,0x65,0x3C } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        static constexpr guid value{ 0x92228D50,0xDB3F,0x40A8,{ 0x8C,0xD4,0xF4,0xE3,0x71,0xDD,0xAB,0x37 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        static constexpr guid value{ 0x010FBEA1,0x94FE,0x4499,{ 0xB8,0xC0,0x8D,0x24,0x42,0x79,0xFB,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        static constexpr guid value{ 0x8BEF6113,0xDA84,0x4499,{ 0xA7,0xAB,0x87,0x11,0x8C,0xB4,0xA1,0x57 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        static constexpr guid value{ 0xC30BDF62,0x9948,0x458F,{ 0xAD,0x50,0xAA,0x06,0xEC,0x03,0xDA,0x08 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastServices>
    {
        static constexpr guid value{ 0x8660B4D6,0x969B,0x4E3C,{ 0xAC,0x3A,0x8B,0x04,0x2E,0xE4,0xEE,0x63 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        static constexpr guid value{ 0x02B692A4,0x5919,0x4A9E,{ 0x8D,0x5E,0xC9,0xBB,0x0D,0xD3,0x37,0x7A } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastState>
    {
        static constexpr guid value{ 0xEE08056D,0x8099,0x4DDD,{ 0x92,0x2E,0xC5,0x6D,0xAC,0x58,0xAB,0xFB } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        static constexpr guid value{ 0xEFAB4AC8,0x21BA,0x453F,{ 0x8B,0xB7,0x5E,0x93,0x8A,0x2E,0x9A,0x74 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        static constexpr guid value{ 0xBF21A570,0x6B78,0x4216,{ 0x9F,0x07,0x5A,0xFF,0x52,0x56,0xF1,0xB7 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        static constexpr guid value{ 0xB338BCF9,0x3364,0x4460,{ 0xB5,0xF1,0x3C,0xC2,0x79,0x6A,0x8A,0xA2 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        static constexpr guid value{ 0x5108A733,0xD008,0x4A89,{ 0x93,0xBE,0x58,0xAE,0xD9,0x61,0x37,0x4E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        static constexpr guid value{ 0x0F97CF2B,0xC9E4,0x4E88,{ 0x81,0x94,0xD8,0x14,0xCB,0xD5,0x85,0xD8 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        static constexpr guid value{ 0x0B9EBECE,0x7E32,0x432D,{ 0x8C,0xA2,0x36,0xBF,0x10,0xB9,0xF4,0x62 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        static constexpr guid value{ 0xDEEBAB35,0xEC5E,0x4D8F,{ 0xB1,0xC0,0x5D,0xA6,0xE8,0xC7,0x56,0x38 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        static constexpr guid value{ 0xE6E11825,0x5401,0x4ADE,{ 0x8B,0xD2,0xC1,0x4E,0xCE,0xE6,0x80,0x7D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCapture>
    {
        static constexpr guid value{ 0x9749D453,0xA29A,0x45ED,{ 0x8F,0x29,0x22,0xD0,0x99,0x42,0xCF,0xF7 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        static constexpr guid value{ 0x19E8E0EF,0x236C,0x40F9,{ 0xB3,0x8F,0x9B,0x7D,0xD6,0x5D,0x1C,0xCC } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        static constexpr guid value{ 0xC3669090,0xDD17,0x47F0,{ 0x95,0xE5,0xCE,0x42,0x28,0x6C,0xF3,0x38 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        static constexpr guid value{ 0x7B81448C,0x418E,0x469C,{ 0xA4,0x9A,0x45,0xB5,0x97,0xC8,0x26,0xB6 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        static constexpr guid value{ 0xC1F5563B,0xFFA1,0x44C9,{ 0x97,0x5F,0x27,0xFB,0xEB,0x55,0x3B,0x35 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        static constexpr guid value{ 0x4189FBF4,0x465E,0x45BF,{ 0x90,0x7F,0x16,0x5B,0x3F,0xB2,0x37,0x58 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        static constexpr guid value{ 0x7D9E3EA7,0x6282,0x4735,{ 0x8D,0x4E,0xAA,0x45,0xF9,0x0F,0x67,0x23 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        static constexpr guid value{ 0xE0CE4877,0x9AAF,0x46B4,{ 0xAD,0x31,0x6A,0x60,0xB4,0x41,0xC7,0x80 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        static constexpr guid value{ 0x324D249E,0x45BC,0x4C35,{ 0xBC,0x35,0xE4,0x69,0xFC,0x7A,0x69,0xE0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        static constexpr guid value{ 0xC66020A9,0x1538,0x495C,{ 0x9B,0xBB,0x2B,0xA8,0x70,0xEC,0x58,0x61 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        static constexpr guid value{ 0x24FC8712,0xE305,0x490D,{ 0xB4,0x15,0x6B,0x1C,0x90,0x49,0x73,0x6B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureServices>
    {
        static constexpr guid value{ 0x44FEC0B5,0x34F5,0x4F18,{ 0xAE,0x8C,0xB9,0x12,0x3A,0xBB,0xFC,0x0D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureSettings>
    {
        static constexpr guid value{ 0x14683A86,0x8807,0x48D3,{ 0x88,0x3A,0x97,0x0E,0xE4,0x53,0x2A,0x39 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureSettings2>
    {
        static constexpr guid value{ 0xFCB8CEE7,0xE26B,0x476F,{ 0x9B,0x1A,0xEC,0x34,0x2D,0x2A,0x8F,0xDE } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureSettings3>
    {
        static constexpr guid value{ 0xA93502FE,0x88C2,0x42D6,{ 0xAA,0xAA,0x40,0xFE,0xFF,0xD7,0x5A,0xEC } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureSettings4>
    {
        static constexpr guid value{ 0x07C2774C,0x1A81,0x482F,{ 0xA2,0x44,0x04,0x9D,0x95,0xF2,0x5B,0x0B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureSettings5>
    {
        static constexpr guid value{ 0x18894522,0xB0E8,0x4BA0,{ 0x8F,0x13,0x3E,0xAA,0x5F,0xA4,0x01,0x3B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureState>
    {
        static constexpr guid value{ 0x73134372,0xD4EB,0x44CE,{ 0x95,0x38,0x46,0x5F,0x50,0x6A,0xC4,0xEA } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureStatics>
    {
        static constexpr guid value{ 0xF922DD6C,0x0A7E,0x4E74,{ 0x8B,0x20,0x9C,0x1F,0x90,0x2D,0x08,0xA1 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IAppCaptureStatics2>
    {
        static constexpr guid value{ 0xB2D881D4,0x836C,0x4DA4,{ 0xAF,0xD7,0xFA,0xCC,0x04,0x1E,0x1C,0xF3 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICameraCaptureUI>
    {
        static constexpr guid value{ 0x48587540,0x6F93,0x4BB4,{ 0xB8,0xF3,0xE8,0x9E,0x48,0x94,0x8C,0x91 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        static constexpr guid value{ 0xB9F5BE97,0x3472,0x46A8,{ 0x8A,0x9E,0x04,0xCE,0x42,0xCC,0xC9,0x7D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        static constexpr guid value{ 0x64E92D1F,0xA28D,0x425A,{ 0xB8,0x4F,0xE5,0x68,0x33,0x5F,0xF2,0x4E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        static constexpr guid value{ 0x3B0D5E34,0x3906,0x4B7D,{ 0x94,0x6C,0x7B,0xDE,0x84,0x44,0x99,0xAE } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedFrame>
    {
        static constexpr guid value{ 0x1DD2DE1F,0x571B,0x44D8,{ 0x8E,0x80,0xA0,0x8A,0x15,0x78,0x76,0x6E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedFrame2>
    {
        static constexpr guid value{ 0x543FA6D1,0xBD78,0x4866,{ 0xAD,0xDA,0x24,0x31,0x4B,0xC6,0x5D,0xEA } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        static constexpr guid value{ 0x90C65B7F,0x4E0D,0x4CA4,{ 0x88,0x2D,0x7A,0x14,0x4F,0xED,0x0A,0x90 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        static constexpr guid value{ 0x500B2B88,0x06D2,0x4AA7,{ 0xA7,0xDB,0xD3,0x7A,0xF7,0x33,0x21,0xD8 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        static constexpr guid value{ 0xB58E8B6E,0x8503,0x49B5,{ 0x9E,0x86,0x89,0x7D,0x26,0xA3,0xFF,0x3D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ICapturedPhoto>
    {
        static constexpr guid value{ 0xB0CE7E5A,0xCFCC,0x4D6C,{ 0x8A,0xD1,0x08,0x69,0x20,0x8A,0xCA,0x16 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServices>
    {
        static constexpr guid value{ 0x2DBEAD57,0x50A6,0x499E,{ 0x8C,0x6C,0xD3,0x30,0xA7,0x31,0x17,0x96 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        static constexpr guid value{ 0xA74226B2,0xF176,0x4FCF,{ 0x8F,0xBB,0xCF,0x69,0x8B,0x2E,0xB8,0xE0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServicesManager>
    {
        static constexpr guid value{ 0x3A4B9CFA,0x7F8B,0x4C60,{ 0x9D,0xBB,0x0B,0xCD,0x26,0x2D,0xFF,0xC6 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        static constexpr guid value{ 0xEDEDBD9C,0x143E,0x49A3,{ 0xA5,0xEA,0x0B,0x19,0x95,0xC8,0xD4,0x6E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        static constexpr guid value{ 0x34C1B616,0xFF25,0x4792,{ 0x98,0xF2,0xD3,0x75,0x3F,0x15,0xAC,0x13 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        static constexpr guid value{ 0xB4202F92,0x1611,0x4E05,{ 0xB6,0xEF,0xDF,0xD7,0x37,0xAE,0x33,0xB0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ILowLagMediaRecording>
    {
        static constexpr guid value{ 0x41C8BAF7,0xFF3F,0x49F0,{ 0xA4,0x77,0xF1,0x95,0xE3,0xCE,0x51,0x08 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        static constexpr guid value{ 0x6369C758,0x5644,0x41E2,{ 0x97,0xAF,0x8E,0xF5,0x6A,0x25,0xE2,0x25 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        static constexpr guid value{ 0x5C33AB12,0x48F7,0x47DA,{ 0xB4,0x1E,0x90,0x88,0x0A,0x5F,0xE0,0xEC } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        static constexpr guid value{ 0xA37251B7,0x6B44,0x473D,{ 0x8F,0x24,0xF7,0x03,0xD6,0xC0,0xEC,0x44 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        static constexpr guid value{ 0x7CC346BB,0xB9A9,0x4C91,{ 0x8F,0xFA,0x28,0x7E,0x9C,0x66,0x86,0x69 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture>
    {
        static constexpr guid value{ 0xC61AFBB4,0xFB10,0x4A34,{ 0xAC,0x18,0xCA,0x80,0xD9,0xC8,0xE7,0xEE } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture2>
    {
        static constexpr guid value{ 0x9CC68260,0x7DA1,0x4043,{ 0xB6,0x52,0x21,0xB8,0x87,0x8D,0xAF,0xF9 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture3>
    {
        static constexpr guid value{ 0xD4136F30,0x1564,0x466E,{ 0xBC,0x0A,0xAF,0x94,0xE0,0x2A,0xB0,0x16 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture4>
    {
        static constexpr guid value{ 0xBACD6FD6,0xFB08,0x4947,{ 0xAE,0xA2,0xCE,0x14,0xEF,0xF0,0xCE,0x13 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture5>
    {
        static constexpr guid value{ 0xDA787C22,0x3A9B,0x4720,{ 0xA7,0x1E,0x97,0x90,0x0A,0x31,0x6E,0x5A } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture6>
    {
        static constexpr guid value{ 0x228948BD,0x4B20,0x4BB1,{ 0x9F,0xD6,0xA5,0x83,0x21,0x2A,0x10,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapture7>
    {
        static constexpr guid value{ 0x9169F102,0x8888,0x541A,{ 0x95,0xBC,0x24,0xE4,0xD4,0x62,0x54,0x2A } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        static constexpr guid value{ 0x9D2F920D,0xA588,0x43C6,{ 0x89,0xD6,0x5A,0xD3,0x22,0xAF,0x00,0x6A } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        static constexpr guid value{ 0x80FDE3F4,0x54C4,0x42C0,{ 0x8D,0x19,0xCE,0xA1,0xA8,0x7C,0xA1,0x8B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        static constexpr guid value{ 0x81E1BC7F,0x2277,0x493E,{ 0xAB,0xEE,0xD3,0xF4,0x4F,0xF9,0x8C,0x04 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        static constexpr guid value{ 0x9782BA70,0xEA65,0x4900,{ 0x93,0x56,0x8C,0xA8,0x87,0x72,0x68,0x84 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        static constexpr guid value{ 0x404E0626,0xC9DC,0x43E9,{ 0xAE,0xE4,0xE6,0xBF,0x1B,0x57,0xB4,0x4C } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        static constexpr guid value{ 0x4160519D,0xBE48,0x4730,{ 0x81,0x04,0x0C,0xF6,0xE9,0xE9,0x79,0x48 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        static constexpr guid value{ 0xF502A537,0x4CB7,0x4D28,{ 0x95,0xED,0x4F,0x9F,0x01,0x2E,0x05,0x18 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        static constexpr guid value{ 0xD5A2E3B8,0x2626,0x4E94,{ 0xB7,0xB3,0x53,0x08,0xA0,0xF6,0x4B,0x1A } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        static constexpr guid value{ 0xB2E26B47,0x3DB1,0x4D33,{ 0xAB,0x63,0x0F,0xFA,0x09,0x05,0x65,0x85 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        static constexpr guid value{ 0x41546967,0xF58A,0x5D82,{ 0x9E,0xF4,0xED,0x57,0x2F,0xB5,0xE3,0x4E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        static constexpr guid value{ 0xAEC47CA3,0x4477,0x4B04,{ 0xA0,0x6F,0x2C,0x1C,0x51,0x82,0xFE,0x9D } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        static constexpr guid value{ 0x7D896566,0x04BE,0x5B89,{ 0xB3,0x0E,0xBD,0x34,0xA9,0xF1,0x2D,0xB0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureSettings>
    {
        static constexpr guid value{ 0x1D83AAFE,0x6D45,0x4477,{ 0x8D,0xC4,0xAC,0x5B,0xC0,0x1C,0x40,0x91 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        static constexpr guid value{ 0x6F9E7CFB,0xFA9F,0x4B13,{ 0x9C,0xBE,0x5A,0xB9,0x4F,0x1F,0x34,0x93 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        static constexpr guid value{ 0x303C67C2,0x8058,0x4B1B,{ 0xB8,0x77,0x8C,0x2E,0xF3,0x52,0x84,0x40 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureStatics>
    {
        static constexpr guid value{ 0xACEF81FF,0x99ED,0x4645,{ 0x96,0x5E,0x19,0x25,0xCF,0xC6,0x38,0x34 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        static constexpr guid value{ 0xF9DB6A2A,0xA092,0x4AD1,{ 0x97,0xD4,0xF2,0x01,0xF9,0xD0,0x82,0xDB } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        static constexpr guid value{ 0x27727073,0x549E,0x447F,{ 0xA2,0x0A,0x4F,0x03,0xC4,0x79,0xD8,0xC0 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        static constexpr guid value{ 0x21A073BF,0xA3EE,0x4ECF,{ 0x9E,0xF6,0x50,0xB0,0xBC,0x4E,0x13,0x05 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        static constexpr guid value{ 0x97DDC95F,0x94CE,0x468F,{ 0x93,0x16,0xFC,0x5B,0xC2,0x63,0x8F,0x6B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        static constexpr guid value{ 0x8012AFEF,0xB691,0x49FF,{ 0x83,0xF2,0xC1,0xE7,0x6E,0xAA,0xEA,0x1B } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        static constexpr guid value{ 0xC6A6EF13,0x322D,0x413A,{ 0xB8,0x5A,0x68,0xA8,0x8E,0x02,0xF4,0xE9 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        static constexpr guid value{ 0x470F88B3,0x1E6D,0x4051,{ 0x9C,0x8B,0xF1,0xD8,0x5A,0xF0,0x47,0xB7 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        static constexpr guid value{ 0x373BFBC1,0x984E,0x4FF0,{ 0xBF,0x85,0x1C,0x00,0xAA,0xBC,0x5A,0x45 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        static constexpr guid value{ 0xAB473672,0xC28A,0x4827,{ 0x8F,0x8D,0x36,0x36,0xD3,0xBE,0xB5,0x1E } };
    };
    template <> struct guid_storage<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        static constexpr guid value{ 0xD8770A6F,0x4390,0x4B5E,{ 0xAD,0x3E,0x0F,0x8A,0xF0,0x96,0x34,0x90 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        static constexpr guid value{ 0x2014EFFB,0x5CD8,0x4F08,{ 0xA3,0x14,0x0D,0x36,0x0D,0xA5,0x9F,0x14 } };
    };
    template <> struct guid_storage<Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        static constexpr guid value{ 0x3FAE8F2E,0x4FE1,0x4FFD,{ 0xAA,0xBA,0xE1,0xF1,0x33,0x7D,0x4E,0x53 } };
    };
    template <> struct default_interface<Windows::Media::Capture::AdvancedCapturedPhoto>
    {
        using type = Windows::Media::Capture::IAdvancedCapturedPhoto;
    };
    template <> struct default_interface<Windows::Media::Capture::AdvancedPhotoCapture>
    {
        using type = Windows::Media::Capture::IAdvancedPhotoCapture;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundService>
    {
        using type = Windows::Media::Capture::IAppBroadcastBackgroundService;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
    {
        using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
    {
        using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastGlobalSettings>
    {
        using type = Windows::Media::Capture::IAppBroadcastGlobalSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugIn>
    {
        using type = Windows::Media::Capture::IAppBroadcastPlugIn;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInManager>
    {
        using type = Windows::Media::Capture::IAppBroadcastPlugInManager;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreview>
    {
        using type = Windows::Media::Capture::IAppBroadcastPreview;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamReader>
    {
        using type = Windows::Media::Capture::IAppBroadcastPreviewStreamReader;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
    {
        using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
    {
        using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastProviderSettings>
    {
        using type = Windows::Media::Capture::IAppBroadcastProviderSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastServices>
    {
        using type = Windows::Media::Capture::IAppBroadcastServices;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastState>
    {
        using type = Windows::Media::Capture::IAppBroadcastState;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioFrame>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamAudioFrame;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioHeader>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamAudioHeader;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamReader>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamReader;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoFrame>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamVideoFrame;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoHeader>
    {
        using type = Windows::Media::Capture::IAppBroadcastStreamVideoHeader;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastTriggerDetails>
    {
        using type = Windows::Media::Capture::IAppBroadcastTriggerDetails;
    };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCapture>
    {
        using type = Windows::Media::Capture::IAppCapture;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
    {
        using type = Windows::Media::Capture::IAppCaptureAlternateShortcutKeys;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
    {
        using type = Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
    {
        using type = Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureMetadataWriter>
    {
        using type = Windows::Media::Capture::IAppCaptureMetadataWriter;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordOperation>
    {
        using type = Windows::Media::Capture::IAppCaptureRecordOperation;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
    {
        using type = Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureServices>
    {
        using type = Windows::Media::Capture::IAppCaptureServices;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureSettings>
    {
        using type = Windows::Media::Capture::IAppCaptureSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureState>
    {
        using type = Windows::Media::Capture::IAppCaptureState;
    };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUI>
    {
        using type = Windows::Media::Capture::ICameraCaptureUI;
    };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
    {
        using type = Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
    {
        using type = Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::CapturedFrame>
    {
        using type = Windows::Media::Capture::ICapturedFrame;
    };
    template <> struct default_interface<Windows::Media::Capture::CapturedFrameControlValues>
    {
        using type = Windows::Media::Capture::ICapturedFrameControlValues;
    };
    template <> struct default_interface<Windows::Media::Capture::CapturedPhoto>
    {
        using type = Windows::Media::Capture::ICapturedPhoto;
    };
    template <> struct default_interface<Windows::Media::Capture::GameBarServices>
    {
        using type = Windows::Media::Capture::IGameBarServices;
    };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesCommandEventArgs>
    {
        using type = Windows::Media::Capture::IGameBarServicesCommandEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesManager>
    {
        using type = Windows::Media::Capture::IGameBarServicesManager;
    };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        using type = Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesTargetInfo>
    {
        using type = Windows::Media::Capture::IGameBarServicesTargetInfo;
    };
    template <> struct default_interface<Windows::Media::Capture::LowLagMediaRecording>
    {
        using type = Windows::Media::Capture::ILowLagMediaRecording;
    };
    template <> struct default_interface<Windows::Media::Capture::LowLagPhotoCapture>
    {
        using type = Windows::Media::Capture::ILowLagPhotoCapture;
    };
    template <> struct default_interface<Windows::Media::Capture::LowLagPhotoSequenceCapture>
    {
        using type = Windows::Media::Capture::ILowLagPhotoSequenceCapture;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCapture>
    {
        using type = Windows::Media::Capture::IMediaCapture;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        using type = Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureFailedEventArgs>
    {
        using type = Windows::Media::Capture::IMediaCaptureFailedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
    {
        using type = Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureInitializationSettings>
    {
        using type = Windows::Media::Capture::IMediaCaptureInitializationSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCapturePauseResult>
    {
        using type = Windows::Media::Capture::IMediaCapturePauseResult;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureRelativePanelWatcher>
    {
        using type = Windows::Media::Capture::IMediaCaptureRelativePanelWatcher;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureSettings>
    {
        using type = Windows::Media::Capture::IMediaCaptureSettings;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureStopResult>
    {
        using type = Windows::Media::Capture::IMediaCaptureStopResult;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfile>
    {
        using type = Windows::Media::Capture::IMediaCaptureVideoProfile;
    };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
    {
        using type = Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription;
    };
    template <> struct default_interface<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
    {
        using type = Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::PhotoCapturedEventArgs>
    {
        using type = Windows::Media::Capture::IPhotoCapturedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
    {
        using type = Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Capture::VideoStreamConfiguration>
    {
        using type = Windows::Media::Capture::IVideoStreamConfiguration;
    };
    template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameBoundsRelativeToReferencePhoto(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CaptureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CaptureWithContextAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_OptionalReferencePhotoCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OptionalReferencePhotoCaptured(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AllPhotosCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AllPhotosCaptured(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlugInState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignInInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignInInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreamInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_StreamInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_ViewerCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TerminateBroadcast(int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_HeartbeatRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HeartbeatRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_BroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastLanguage(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastChannel(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastChannel(void*) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastTitleChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastTitleChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastLanguageChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastLanguageChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastChannelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastChannelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OAuthRequestUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthRequestUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_OAuthCallbackUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationResult(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall add_SignInStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SignInStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UserNameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserNameChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredVideoEncodingBitrate(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredVideoEncodingBitrate(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BandwidthTestBitrate(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_BandwidthTestBitrate(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioCodec(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioCodec(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastStreamReader(void**) noexcept = 0;
            virtual int32_t __stdcall add_StreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoEncodingResolutionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoEncodingResolutionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoEncodingBitrateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoEncodingBitrateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportProblemWithStream() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBroadcastEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledByPolicy(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasHardwareEncoder(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAudioCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAudioCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEchoCancellationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEchoCancellationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SystemAudioGain(double) noexcept = 0;
            virtual int32_t __stdcall get_SystemAudioGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_MicrophoneGain(double) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_IsCameraCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCameraCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedCameraId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedCameraId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraOverlayLocation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CameraOverlayLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CameraOverlaySize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CameraOverlaySize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsCursorImageCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCursorImageCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetGlobalSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyGlobalSettings(void*) noexcept = 0;
            virtual int32_t __stdcall GetProviderSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyProviderSettings(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBroadcastProviderAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PlugInList(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultPlugIn(void**) noexcept = 0;
            virtual int32_t __stdcall put_DefaultPlugIn(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StopPreview() noexcept = 0;
            virtual int32_t __stdcall get_PreviewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(void**) noexcept = 0;
            virtual int32_t __stdcall add_PreviewStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviewStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_PreviewStreamReader(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoStride(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextVideoFrame(void**) noexcept = 0;
            virtual int32_t __stdcall add_VideoFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoFrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DefaultBroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultBroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudioEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingBitrateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingBitrateMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingResolutionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingResolutionMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CaptureTargetType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CaptureTargetType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastLanguage(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCapture(bool*) noexcept = 0;
            virtual int32_t __stdcall EnterBroadcastModeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ExitBroadcastMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall StartBroadcast() noexcept = 0;
            virtual int32_t __stdcall PauseBroadcast() noexcept = 0;
            virtual int32_t __stdcall ResumeBroadcast() noexcept = 0;
            virtual int32_t __stdcall StartPreview(Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Result(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCaptureTargetRunning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureMicrophone(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureMicrophone(bool) noexcept = 0;
            virtual int32_t __stdcall RestartMicrophoneCapture() noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureCamera(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureCamera(bool) noexcept = 0;
            virtual int32_t __stdcall RestartCameraCapture() noexcept = 0;
            virtual int32_t __stdcall get_EncodedVideoSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CameraCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CameraCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthRequestUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_OAuthCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationResult(void**) noexcept = 0;
            virtual int32_t __stdcall put_AuthenticationResult(void*) noexcept = 0;
            virtual int32_t __stdcall put_SignInState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TerminationReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TerminationReasonPlugInSpecific(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ViewerCountChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ViewerCountChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MicrophoneCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MicrophoneCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlugInStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlugInStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CaptureTargetClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureTargetClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasDiscontinuity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioChannels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioSampleRate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioAacSequence(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextAudioFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextVideoFrame(void**) noexcept = 0;
            virtual int32_t __stdcall add_AudioFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioFrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoFrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsKeyFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasDiscontinuity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundService(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCapturingAudio(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCapturingVideo(bool*) noexcept = 0;
            virtual int32_t __stdcall add_CapturingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CapturingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleGameBarKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleGameBarKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleGameBarKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleGameBarKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SaveHistoricalVideoKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SaveHistoricalVideoKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SaveHistoricalVideoKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SaveHistoricalVideoKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TakeScreenshotKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TakeScreenshotKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TakeScreenshotKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TakeScreenshotKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingIndicatorKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingIndicatorKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingIndicatorKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingIndicatorKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleMicrophoneCaptureKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleMicrophoneCaptureKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleMicrophoneCaptureKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleMicrophoneCaptureKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleCameraCaptureKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleCameraCaptureKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleCameraCaptureKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleCameraCaptureKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleBroadcastKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleBroadcastKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleBroadcastKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleBroadcastKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplySettings(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddStringEvent(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32Event(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDoubleEvent(void*, double, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartStringState(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartInt32State(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartDoubleState(void*, double, int32_t) noexcept = 0;
            virtual int32_t __stdcall StopState(void*) noexcept = 0;
            virtual int32_t __stdcall StopAllStates() noexcept = 0;
            virtual int32_t __stdcall get_RemainingStorageBytesAvailable(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_MetadataPurged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MetadataPurged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StopRecording() noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFileTruncated(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DurationGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DurationGenerated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FileGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileGenerated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Record(void**) noexcept = 0;
            virtual int32_t __stdcall RecordTimeSpan(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCapture(bool*) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AppCaptureDestinationFolder(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppCaptureDestinationFolder(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudioEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsAudioCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAudioCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HistoricalBufferLength(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalBufferLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HistoricalBufferLengthUnit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalBufferLengthUnit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MaximumRecordLength(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MaximumRecordLength(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScreenshotDestinationFolder(void*) noexcept = 0;
            virtual int32_t __stdcall get_ScreenshotDestinationFolder(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingBitrateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingBitrateMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingResolutionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingResolutionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsAppCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAppCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledByPolicy(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMemoryConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasHardwareEncoder(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsGpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AlternateShortcutKeys(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SystemAudioGain(double) noexcept = 0;
            virtual int32_t __stdcall get_SystemAudioGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_MicrophoneGain(double) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingFrameRateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingFrameRateMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsEchoCancellationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEchoCancellationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCursorImageCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCursorImageCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTargetRunning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureMicrophone(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureMicrophone(bool) noexcept = 0;
            virtual int32_t __stdcall RestartMicrophoneCapture() noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_MicrophoneCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MicrophoneCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CaptureTargetClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureTargetClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAllowedAsync(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PhotoSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoSettings(void**) noexcept = 0;
            virtual int32_t __stdcall CaptureFileAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxResolution(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxResolution(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_CroppedAspectRatio(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_CroppedAspectRatio(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_AllowCropping(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCropping(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxResolution(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxResolution(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxDurationInSeconds(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDurationInSeconds(float) noexcept = 0;
            virtual int32_t __stdcall get_AllowTrimming(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowTrimming(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Show(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlValues(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensation(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoSpeed(void**) noexcept = 0;
            virtual int32_t __stdcall get_Focus(void**) noexcept = 0;
            virtual int32_t __stdcall get_SceneMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Flashed(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlashPowerPercent(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalance(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomFactor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusState(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoDigitalGain(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoAnalogGain(void**) noexcept = 0;
            virtual int32_t __stdcall get_SensorFrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalanceGain(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedPhoto>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetCapturePolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall EnableCapture() noexcept = 0;
            virtual int32_t __stdcall DisableCapture() noexcept = 0;
            virtual int32_t __stdcall get_TargetInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppBroadcastServices(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppCaptureServices(void**) noexcept = 0;
            virtual int32_t __stdcall add_CommandReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Command(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Origin(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_GameBarServicesCreated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameBarServicesCreated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GameBarServices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PauseAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ResumeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PauseWithResultAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopWithResultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CaptureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_PhotoCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PhotoCaptured(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InitializeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall InitializeWithSettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CapturePhotoToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CapturePhotoToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddEffectAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearEffectsAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetEncoderProperty(int32_t, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall GetEncoderProperty(int32_t, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall add_Failed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Failed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecordLimitationExceeded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecordLimitationExceeded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MediaCaptureSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioDeviceController(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceController(void**) noexcept = 0;
            virtual int32_t __stdcall SetPreviewMirroring(bool) noexcept = 0;
            virtual int32_t __stdcall GetPreviewMirroring(bool*) noexcept = 0;
            virtual int32_t __stdcall SetPreviewRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetPreviewRotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetRecordRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetRecordRotation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PrepareLowLagRecordToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagPhotoCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagPhotoSequenceCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetEncodingPropertiesAsync(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PrepareVariablePhotoSequenceCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_FocusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FocusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PhotoConfirmationCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PhotoConfirmationCaptured(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAudioEffectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddVideoEffectAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall PauseRecordAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ResumeRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_CameraStreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraStreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CameraStreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPreviewFrameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPreviewFrameCopyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ThermalStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ThermalStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ThermalStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PrepareAdvancedPhotoCaptureAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RemoveEffectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PauseRecordWithResultAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopRecordWithResultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameSources(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithSubtypeAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(void*, void*, struct struct_Windows_Graphics_Imaging_BitmapSize, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CaptureDeviceExclusiveControlStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateMultiSourceFrameReaderAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRelativePanelWatcher(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Code(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AudioDeviceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoDeviceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreamingCaptureMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StreamingCaptureMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PhotoCaptureSource(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PhotoCaptureSource(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MediaCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioProcessing(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioProcessing(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AudioSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_VideoSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoProfile(void*) noexcept = 0;
            virtual int32_t __stdcall get_PreviewMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreviewMediaDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_RecordMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecordMediaDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_PhotoMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_PhotoMediaDescription(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceGroup(void*) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MemoryPreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MemoryPreference(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlwaysPlaySystemShutterSound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysPlaySystemShutterSound(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceUriPasswordCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeviceUriPasswordCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeviceUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecordDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativePanel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreamingCaptureMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhotoCaptureSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceCharacteristic(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConcurrentRecordAndPhotoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CameraSoundRequiredForRegion(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Horizontal35mmEquivalentFocalLength(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchOffsetDegrees(void**) noexcept = 0;
            virtual int32_t __stdcall get_Vertical35mmEquivalentFocalLength(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioProcessing(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsVideoProfileSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall FindAllVideoProfiles(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConcurrentProfiles(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindKnownVideoProfiles(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecordDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartPreviewAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartPreviewToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartPreviewToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopPreviewAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPreviewMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedRecordMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPhotoMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall GetConcurrency(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSourceInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameRate(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsVariablePhotoSequenceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHdrVideoSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subtype(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_CaptureTimeOffset(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_CaptureTimeOffset(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto Mode() const;
        [[nodiscard]] auto Context() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto2
    {
        [[nodiscard]] auto FrameBoundsRelativeToReferencePhoto() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedPhotoCapture
    {
        auto CaptureAsync() const;
        auto CaptureAsync(Windows::Foundation::IInspectable const& context) const;
        auto OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
        using OptionalReferencePhotoCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture, &impl::abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_OptionalReferencePhotoCaptured>;
        OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
        auto OptionalReferencePhotoCaptured(winrt::event_token const& token) const noexcept;
        auto AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
        using AllPhotosCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture, &impl::abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_AllPhotosCaptured>;
        AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
        auto AllPhotosCaptured(winrt::event_token const& token) const noexcept;
        auto FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundService
    {
        auto PlugInState(Windows::Media::Capture::AppBroadcastPlugInState const& value) const;
        [[nodiscard]] auto PlugInState() const;
        auto SignInInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo const& value) const;
        [[nodiscard]] auto SignInInfo() const;
        auto StreamInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo const& value) const;
        [[nodiscard]] auto StreamInfo() const;
        [[nodiscard]] auto AppId() const;
        [[nodiscard]] auto BroadcastTitle() const;
        auto ViewerCount(uint32_t value) const;
        [[nodiscard]] auto ViewerCount() const;
        auto TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason const& reason, uint32_t providerSpecificReason) const;
        auto HeartbeatRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
        using HeartbeatRequested_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService>::remove_HeartbeatRequested>;
        HeartbeatRequested_revoker HeartbeatRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
        auto HeartbeatRequested(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto TitleId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundService2
    {
        auto BroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] auto BroadcastLanguage() const;
        auto BroadcastLanguage(param::hstring const& value) const;
        [[nodiscard]] auto BroadcastChannel() const;
        auto BroadcastChannel(param::hstring const& value) const;
        auto BroadcastTitleChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastTitleChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastTitleChanged>;
        BroadcastTitleChanged_revoker BroadcastTitleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        auto BroadcastTitleChanged(winrt::event_token const& token) const noexcept;
        auto BroadcastLanguageChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastLanguageChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastLanguageChanged>;
        BroadcastLanguageChanged_revoker BroadcastLanguageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        auto BroadcastLanguageChanged(winrt::event_token const& token) const noexcept;
        auto BroadcastChannelChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastChannelChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastChannelChanged>;
        BroadcastChannelChanged_revoker BroadcastChannelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        auto BroadcastChannelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo
    {
        [[nodiscard]] auto SignInState() const;
        auto OAuthRequestUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto OAuthRequestUri() const;
        auto OAuthCallbackUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto OAuthCallbackUri() const;
        [[nodiscard]] auto AuthenticationResult() const;
        auto UserName(param::hstring const& value) const;
        [[nodiscard]] auto UserName() const;
        auto SignInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
        using SignInStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>::remove_SignInStateChanged>;
        SignInStateChanged_revoker SignInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
        auto SignInStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2
    {
        auto UserNameChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const;
        using UserNameChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>::remove_UserNameChanged>;
        UserNameChanged_revoker UserNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto UserNameChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo
    {
        [[nodiscard]] auto StreamState() const;
        auto DesiredVideoEncodingBitrate(uint64_t value) const;
        [[nodiscard]] auto DesiredVideoEncodingBitrate() const;
        auto BandwidthTestBitrate(uint64_t value) const;
        [[nodiscard]] auto BandwidthTestBitrate() const;
        auto AudioCodec(param::hstring const& value) const;
        [[nodiscard]] auto AudioCodec() const;
        [[nodiscard]] auto BroadcastStreamReader() const;
        auto StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        using StreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_StreamStateChanged>;
        StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        auto StreamStateChanged(winrt::event_token const& token) const noexcept;
        auto VideoEncodingResolutionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        using VideoEncodingResolutionChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingResolutionChanged>;
        VideoEncodingResolutionChanged_revoker VideoEncodingResolutionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto VideoEncodingResolutionChanged(winrt::event_token const& token) const noexcept;
        auto VideoEncodingBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        using VideoEncodingBitrateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingBitrateChanged>;
        VideoEncodingBitrateChanged_revoker VideoEncodingBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto VideoEncodingBitrateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2
    {
        auto ReportProblemWithStream() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastGlobalSettings
    {
        [[nodiscard]] auto IsBroadcastEnabled() const;
        [[nodiscard]] auto IsDisabledByPolicy() const;
        [[nodiscard]] auto IsGpuConstrained() const;
        [[nodiscard]] auto HasHardwareEncoder() const;
        auto IsAudioCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsAudioCaptureEnabled() const;
        auto IsMicrophoneCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] auto IsMicrophoneCaptureEnabledByDefault() const;
        auto IsEchoCancellationEnabled(bool value) const;
        [[nodiscard]] auto IsEchoCancellationEnabled() const;
        auto SystemAudioGain(double value) const;
        [[nodiscard]] auto SystemAudioGain() const;
        auto MicrophoneGain(double value) const;
        [[nodiscard]] auto MicrophoneGain() const;
        auto IsCameraCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] auto IsCameraCaptureEnabledByDefault() const;
        auto SelectedCameraId(param::hstring const& value) const;
        [[nodiscard]] auto SelectedCameraId() const;
        auto CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation const& value) const;
        [[nodiscard]] auto CameraOverlayLocation() const;
        auto CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize const& value) const;
        [[nodiscard]] auto CameraOverlaySize() const;
        auto IsCursorImageCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsCursorImageCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs
    {
        auto Handled(bool value) const;
        [[nodiscard]] auto Handled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastManagerStatics
    {
        auto GetGlobalSettings() const;
        auto ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value) const;
        auto GetProviderSettings() const;
        auto ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugIn
    {
        [[nodiscard]] auto AppId() const;
        [[nodiscard]] auto ProviderSettings() const;
        [[nodiscard]] auto Logo() const;
        [[nodiscard]] auto DisplayName() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInManager
    {
        [[nodiscard]] auto IsBroadcastProviderAvailable() const;
        [[nodiscard]] auto PlugInList() const;
        [[nodiscard]] auto DefaultPlugIn() const;
        auto DefaultPlugIn(Windows::Media::Capture::AppBroadcastPlugIn const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics
    {
        auto GetDefault() const;
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs
    {
        [[nodiscard]] auto PlugInState() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreview
    {
        auto StopPreview() const;
        [[nodiscard]] auto PreviewState() const;
        [[nodiscard]] auto ErrorCode() const;
        auto PreviewStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
        using PreviewStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastPreview, &impl::abi_t<Windows::Media::Capture::IAppBroadcastPreview>::remove_PreviewStateChanged>;
        PreviewStateChanged_revoker PreviewStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
        auto PreviewStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto PreviewStreamReader() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreview>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreview<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs
    {
        [[nodiscard]] auto PreviewState() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader
    {
        [[nodiscard]] auto VideoWidth() const;
        [[nodiscard]] auto VideoHeight() const;
        [[nodiscard]] auto VideoStride() const;
        [[nodiscard]] auto VideoBitmapPixelFormat() const;
        [[nodiscard]] auto VideoBitmapAlphaMode() const;
        auto TryGetNextVideoFrame() const;
        auto VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using VideoFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastPreviewStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>::remove_VideoFrameArrived>;
        VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
        auto VideoFrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame
    {
        [[nodiscard]] auto VideoHeader() const;
        [[nodiscard]] auto VideoBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader
    {
        [[nodiscard]] auto AbsoluteTimestamp() const;
        [[nodiscard]] auto RelativeTimestamp() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastProviderSettings
    {
        auto DefaultBroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] auto DefaultBroadcastTitle() const;
        auto AudioEncodingBitrate(uint32_t value) const;
        [[nodiscard]] auto AudioEncodingBitrate() const;
        auto CustomVideoEncodingBitrate(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingBitrate() const;
        auto CustomVideoEncodingHeight(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingHeight() const;
        auto CustomVideoEncodingWidth(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingWidth() const;
        auto VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode const& value) const;
        [[nodiscard]] auto VideoEncodingBitrateMode() const;
        auto VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode const& value) const;
        [[nodiscard]] auto VideoEncodingResolutionMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastServices
    {
        [[nodiscard]] auto CaptureTargetType() const;
        auto CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType const& value) const;
        [[nodiscard]] auto BroadcastTitle() const;
        auto BroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] auto BroadcastLanguage() const;
        auto BroadcastLanguage(param::hstring const& value) const;
        [[nodiscard]] auto UserName() const;
        [[nodiscard]] auto CanCapture() const;
        auto EnterBroadcastModeAsync(Windows::Media::Capture::AppBroadcastPlugIn const& plugIn) const;
        auto ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason const& reason) const;
        auto StartBroadcast() const;
        auto PauseBroadcast() const;
        auto ResumeBroadcast() const;
        auto StartPreview(Windows::Foundation::Size const& desiredSize) const;
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs
    {
        [[nodiscard]] auto SignInState() const;
        [[nodiscard]] auto Result() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastState
    {
        [[nodiscard]] auto IsCaptureTargetRunning() const;
        [[nodiscard]] auto ViewerCount() const;
        [[nodiscard]] auto ShouldCaptureMicrophone() const;
        auto ShouldCaptureMicrophone(bool value) const;
        auto RestartMicrophoneCapture() const;
        [[nodiscard]] auto ShouldCaptureCamera() const;
        auto ShouldCaptureCamera(bool value) const;
        auto RestartCameraCapture() const;
        [[nodiscard]] auto EncodedVideoSize() const;
        [[nodiscard]] auto MicrophoneCaptureState() const;
        [[nodiscard]] auto MicrophoneCaptureError() const;
        [[nodiscard]] auto CameraCaptureState() const;
        [[nodiscard]] auto CameraCaptureError() const;
        [[nodiscard]] auto StreamState() const;
        [[nodiscard]] auto PlugInState() const;
        [[nodiscard]] auto OAuthRequestUri() const;
        [[nodiscard]] auto OAuthCallbackUri() const;
        [[nodiscard]] auto AuthenticationResult() const;
        auto AuthenticationResult(Windows::Security::Authentication::Web::WebAuthenticationResult const& value) const;
        auto SignInState(Windows::Media::Capture::AppBroadcastSignInState const& value) const;
        [[nodiscard]] auto SignInState() const;
        [[nodiscard]] auto TerminationReason() const;
        [[nodiscard]] auto TerminationReasonPlugInSpecific() const;
        auto ViewerCountChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
        using ViewerCountChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_ViewerCountChanged>;
        ViewerCountChanged_revoker ViewerCountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
        auto ViewerCountChanged(winrt::event_token const& token) const noexcept;
        auto MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
        using MicrophoneCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_MicrophoneCaptureStateChanged>;
        MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
        auto MicrophoneCaptureStateChanged(winrt::event_token const& token) const noexcept;
        auto CameraCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
        using CameraCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CameraCaptureStateChanged>;
        CameraCaptureStateChanged_revoker CameraCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
        auto CameraCaptureStateChanged(winrt::event_token const& token) const noexcept;
        auto PlugInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
        using PlugInStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_PlugInStateChanged>;
        PlugInStateChanged_revoker PlugInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
        auto PlugInStateChanged(winrt::event_token const& token) const noexcept;
        auto StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        using StreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_StreamStateChanged>;
        StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        auto StreamStateChanged(winrt::event_token const& token) const noexcept;
        auto CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
        using CaptureTargetClosed_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CaptureTargetClosed>;
        CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
        auto CaptureTargetClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastState>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastState<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame
    {
        [[nodiscard]] auto AudioHeader() const;
        [[nodiscard]] auto AudioBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader
    {
        [[nodiscard]] auto AbsoluteTimestamp() const;
        [[nodiscard]] auto RelativeTimestamp() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto HasDiscontinuity() const;
        [[nodiscard]] auto FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamReader
    {
        [[nodiscard]] auto AudioChannels() const;
        [[nodiscard]] auto AudioSampleRate() const;
        [[nodiscard]] auto AudioAacSequence() const;
        [[nodiscard]] auto AudioBitrate() const;
        auto TryGetNextAudioFrame() const;
        [[nodiscard]] auto VideoWidth() const;
        [[nodiscard]] auto VideoHeight() const;
        [[nodiscard]] auto VideoBitrate() const;
        auto TryGetNextVideoFrame() const;
        auto AudioFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using AudioFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_AudioFrameArrived>;
        AudioFrameArrived_revoker AudioFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        auto AudioFrameArrived(winrt::event_token const& token) const noexcept;
        auto VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using VideoFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_VideoFrameArrived>;
        VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        auto VideoFrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs
    {
        [[nodiscard]] auto StreamState() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame
    {
        [[nodiscard]] auto VideoHeader() const;
        [[nodiscard]] auto VideoBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader
    {
        [[nodiscard]] auto AbsoluteTimestamp() const;
        [[nodiscard]] auto RelativeTimestamp() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto IsKeyFrame() const;
        [[nodiscard]] auto HasDiscontinuity() const;
        [[nodiscard]] auto FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastTriggerDetails
    {
        [[nodiscard]] auto BackgroundService() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs
    {
        [[nodiscard]] auto ViewerCount() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCapture
    {
        [[nodiscard]] auto IsCapturingAudio() const;
        [[nodiscard]] auto IsCapturingVideo() const;
        auto CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
        using CapturingChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCapture, &impl::abi_t<Windows::Media::Capture::IAppCapture>::remove_CapturingChanged>;
        CapturingChanged_revoker CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
        auto CapturingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys
    {
        auto ToggleGameBarKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleGameBarKey() const;
        auto ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleGameBarKeyModifiers() const;
        auto SaveHistoricalVideoKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto SaveHistoricalVideoKey() const;
        auto SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto SaveHistoricalVideoKeyModifiers() const;
        auto ToggleRecordingKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleRecordingKey() const;
        auto ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleRecordingKeyModifiers() const;
        auto TakeScreenshotKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto TakeScreenshotKey() const;
        auto TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto TakeScreenshotKeyModifiers() const;
        auto ToggleRecordingIndicatorKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleRecordingIndicatorKey() const;
        auto ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleRecordingIndicatorKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2
    {
        auto ToggleMicrophoneCaptureKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleMicrophoneCaptureKey() const;
        auto ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleMicrophoneCaptureKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3
    {
        auto ToggleCameraCaptureKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleCameraCaptureKey() const;
        auto ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleCameraCaptureKeyModifiers() const;
        auto ToggleBroadcastKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] auto ToggleBroadcastKey() const;
        auto ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] auto ToggleBroadcastKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs
    {
        [[nodiscard]] auto Duration() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs
    {
        [[nodiscard]] auto File() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureManagerStatics
    {
        auto GetCurrentSettings() const;
        auto ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureMetadataWriter
    {
        auto AddStringEvent(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto AddInt32Event(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto AddDoubleEvent(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto StartStringState(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto StartInt32State(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto StartDoubleState(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        auto StopState(param::hstring const& name) const;
        auto StopAllStates() const;
        [[nodiscard]] auto RemainingStorageBytesAvailable() const;
        auto MetadataPurged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const;
        using MetadataPurged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureMetadataWriter, &impl::abi_t<Windows::Media::Capture::IAppCaptureMetadataWriter>::remove_MetadataPurged>;
        MetadataPurged_revoker MetadataPurged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const;
        auto MetadataPurged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureRecordOperation
    {
        auto StopRecording() const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorCode() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto IsFileTruncated() const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
        auto DurationGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
        using DurationGenerated_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_DurationGenerated>;
        DurationGenerated_revoker DurationGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
        auto DurationGenerated(winrt::event_token const& token) const noexcept;
        auto FileGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
        using FileGenerated_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_FileGenerated>;
        FileGenerated_revoker FileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
        auto FileGenerated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureServices
    {
        auto Record() const;
        auto RecordTimeSpan(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
        [[nodiscard]] auto CanCapture() const;
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings
    {
        auto AppCaptureDestinationFolder(Windows::Storage::StorageFolder const& value) const;
        [[nodiscard]] auto AppCaptureDestinationFolder() const;
        auto AudioEncodingBitrate(uint32_t value) const;
        [[nodiscard]] auto AudioEncodingBitrate() const;
        auto IsAudioCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsAudioCaptureEnabled() const;
        auto CustomVideoEncodingBitrate(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingBitrate() const;
        auto CustomVideoEncodingHeight(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingHeight() const;
        auto CustomVideoEncodingWidth(uint32_t value) const;
        [[nodiscard]] auto CustomVideoEncodingWidth() const;
        auto HistoricalBufferLength(uint32_t value) const;
        [[nodiscard]] auto HistoricalBufferLength() const;
        auto HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit const& value) const;
        [[nodiscard]] auto HistoricalBufferLengthUnit() const;
        auto IsHistoricalCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsHistoricalCaptureEnabled() const;
        auto IsHistoricalCaptureOnBatteryAllowed(bool value) const;
        [[nodiscard]] auto IsHistoricalCaptureOnBatteryAllowed() const;
        auto IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const;
        [[nodiscard]] auto IsHistoricalCaptureOnWirelessDisplayAllowed() const;
        auto MaximumRecordLength(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto MaximumRecordLength() const;
        auto ScreenshotDestinationFolder(Windows::Storage::StorageFolder const& value) const;
        [[nodiscard]] auto ScreenshotDestinationFolder() const;
        auto VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode const& value) const;
        [[nodiscard]] auto VideoEncodingBitrateMode() const;
        auto VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode const& value) const;
        [[nodiscard]] auto VideoEncodingResolutionMode() const;
        auto IsAppCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsAppCaptureEnabled() const;
        [[nodiscard]] auto IsCpuConstrained() const;
        [[nodiscard]] auto IsDisabledByPolicy() const;
        [[nodiscard]] auto IsMemoryConstrained() const;
        [[nodiscard]] auto HasHardwareEncoder() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings2
    {
        [[nodiscard]] auto IsGpuConstrained() const;
        [[nodiscard]] auto AlternateShortcutKeys() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings3
    {
        auto IsMicrophoneCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsMicrophoneCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings4
    {
        auto IsMicrophoneCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] auto IsMicrophoneCaptureEnabledByDefault() const;
        auto SystemAudioGain(double value) const;
        [[nodiscard]] auto SystemAudioGain() const;
        auto MicrophoneGain(double value) const;
        [[nodiscard]] auto MicrophoneGain() const;
        auto VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode const& value) const;
        [[nodiscard]] auto VideoEncodingFrameRateMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings5
    {
        auto IsEchoCancellationEnabled(bool value) const;
        [[nodiscard]] auto IsEchoCancellationEnabled() const;
        auto IsCursorImageCaptureEnabled(bool value) const;
        [[nodiscard]] auto IsCursorImageCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureState
    {
        [[nodiscard]] auto IsTargetRunning() const;
        [[nodiscard]] auto IsHistoricalCaptureEnabled() const;
        [[nodiscard]] auto ShouldCaptureMicrophone() const;
        auto ShouldCaptureMicrophone(bool value) const;
        auto RestartMicrophoneCapture() const;
        [[nodiscard]] auto MicrophoneCaptureState() const;
        [[nodiscard]] auto MicrophoneCaptureError() const;
        auto MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
        using MicrophoneCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureState, &impl::abi_t<Windows::Media::Capture::IAppCaptureState>::remove_MicrophoneCaptureStateChanged>;
        MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
        auto MicrophoneCaptureStateChanged(winrt::event_token const& token) const noexcept;
        auto CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
        using CaptureTargetClosed_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureState, &impl::abi_t<Windows::Media::Capture::IAppCaptureState>::remove_CaptureTargetClosed>;
        CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
        auto CaptureTargetClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureState>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureState<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureStatics2
    {
        auto SetAllowedAsync(bool allowed) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUI
    {
        [[nodiscard]] auto PhotoSettings() const;
        [[nodiscard]] auto VideoSettings() const;
        auto CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUI>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUI<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings
    {
        [[nodiscard]] auto Format() const;
        auto Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const;
        [[nodiscard]] auto MaxResolution() const;
        auto MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const;
        [[nodiscard]] auto CroppedSizeInPixels() const;
        auto CroppedSizeInPixels(Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto CroppedAspectRatio() const;
        auto CroppedAspectRatio(Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto AllowCropping() const;
        auto AllowCropping(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings
    {
        [[nodiscard]] auto Format() const;
        auto Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const;
        [[nodiscard]] auto MaxResolution() const;
        auto MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const;
        [[nodiscard]] auto MaxDurationInSeconds() const;
        auto MaxDurationInSeconds(float value) const;
        [[nodiscard]] auto AllowTrimming() const;
        auto AllowTrimming(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraOptionsUIStatics
    {
        auto Show(Windows::Media::Capture::MediaCapture const& mediaCapture) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraOptionsUIStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrame
    {
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrame2
    {
        [[nodiscard]] auto ControlValues() const;
        [[nodiscard]] auto BitmapProperties() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrame2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameControlValues
    {
        [[nodiscard]] auto Exposure() const;
        [[nodiscard]] auto ExposureCompensation() const;
        [[nodiscard]] auto IsoSpeed() const;
        [[nodiscard]] auto Focus() const;
        [[nodiscard]] auto SceneMode() const;
        [[nodiscard]] auto Flashed() const;
        [[nodiscard]] auto FlashPowerPercent() const;
        [[nodiscard]] auto WhiteBalance() const;
        [[nodiscard]] auto ZoomFactor() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameControlValues2
    {
        [[nodiscard]] auto FocusState() const;
        [[nodiscard]] auto IsoDigitalGain() const;
        [[nodiscard]] auto IsoAnalogGain() const;
        [[nodiscard]] auto SensorFrameRate() const;
        [[nodiscard]] auto WhiteBalanceGain() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap
    {
        [[nodiscard]] auto SoftwareBitmap() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedPhoto
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto Thumbnail() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedPhoto>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedPhoto<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServices
    {
        [[nodiscard]] auto TargetCapturePolicy() const;
        auto EnableCapture() const;
        auto DisableCapture() const;
        [[nodiscard]] auto TargetInfo() const;
        [[nodiscard]] auto SessionId() const;
        [[nodiscard]] auto AppBroadcastServices() const;
        [[nodiscard]] auto AppCaptureServices() const;
        auto CommandReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
        using CommandReceived_revoker = impl::event_revoker<Windows::Media::Capture::IGameBarServices, &impl::abi_t<Windows::Media::Capture::IGameBarServices>::remove_CommandReceived>;
        CommandReceived_revoker CommandReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
        auto CommandReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs
    {
        [[nodiscard]] auto Command() const;
        [[nodiscard]] auto Origin() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManager
    {
        auto GameBarServicesCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
        using GameBarServicesCreated_revoker = impl::event_revoker<Windows::Media::Capture::IGameBarServicesManager, &impl::abi_t<Windows::Media::Capture::IGameBarServicesManager>::remove_GameBarServicesCreated>;
        GameBarServicesCreated_revoker GameBarServicesCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
        auto GameBarServicesCreated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManager>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs
    {
        [[nodiscard]] auto GameBarServices() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesTargetInfo
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto AppId() const;
        [[nodiscard]] auto TitleId() const;
        [[nodiscard]] auto DisplayMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording
    {
        auto StartAsync() const;
        auto StopAsync() const;
        auto FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording2
    {
        auto PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        auto ResumeAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording3
    {
        auto PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        auto StopWithResultAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagPhotoCapture
    {
        auto CaptureAsync() const;
        auto FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture
    {
        auto StartAsync() const;
        auto StopAsync() const;
        auto FinishAsync() const;
        auto PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
        using PhotoCaptured_revoker = impl::event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture, &impl::abi_t<Windows::Media::Capture::ILowLagPhotoSequenceCapture>::remove_PhotoCaptured>;
        PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
        auto PhotoCaptured(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture
    {
        auto InitializeAsync() const;
        auto InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const;
        auto StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
        auto StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        auto StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        auto StopRecordAsync() const;
        auto CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const;
        auto CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const;
        auto ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        auto SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, winrt::guid const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
        auto GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, winrt::guid const& propertyId) const;
        auto Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
        using Failed_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture, &impl::abi_t<Windows::Media::Capture::IMediaCapture>::remove_Failed>;
        Failed_revoker Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
        auto Failed(winrt::event_token const& eventCookie) const noexcept;
        auto RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
        using RecordLimitationExceeded_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture, &impl::abi_t<Windows::Media::Capture::IMediaCapture>::remove_RecordLimitationExceeded>;
        RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
        auto RecordLimitationExceeded(winrt::event_token const& eventCookie) const noexcept;
        [[nodiscard]] auto MediaCaptureSettings() const;
        [[nodiscard]] auto AudioDeviceController() const;
        [[nodiscard]] auto VideoDeviceController() const;
        auto SetPreviewMirroring(bool value) const;
        auto GetPreviewMirroring() const;
        auto SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const;
        auto GetPreviewRotation() const;
        auto SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const;
        auto GetRecordRotation() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture2
    {
        auto PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
        auto PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        auto PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        auto PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        auto PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        auto SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture3
    {
        auto PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        auto FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
        using FocusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture3, &impl::abi_t<Windows::Media::Capture::IMediaCapture3>::remove_FocusChanged>;
        FocusChanged_revoker FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
        auto FocusChanged(winrt::event_token const& token) const noexcept;
        auto PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
        using PhotoConfirmationCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture3, &impl::abi_t<Windows::Media::Capture::IMediaCapture3>::remove_PhotoConfirmationCaptured>;
        PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
        auto PhotoConfirmationCaptured(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture4
    {
        auto AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
        auto AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        auto PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        auto ResumeRecordAsync() const;
        auto CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        using CameraStreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture4, &impl::abi_t<Windows::Media::Capture::IMediaCapture4>::remove_CameraStreamStateChanged>;
        CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        auto CameraStreamStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CameraStreamState() const;
        auto GetPreviewFrameAsync() const;
        auto GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const;
        auto ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        using ThermalStatusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture4, &impl::abi_t<Windows::Media::Capture::IMediaCapture4>::remove_ThermalStatusChanged>;
        ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        auto ThermalStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto ThermalStatus() const;
        auto PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture5
    {
        auto RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const;
        auto PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        auto StopRecordWithResultAsync() const;
        [[nodiscard]] auto FrameSources() const;
        auto CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const;
        auto CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const;
        auto CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture6
    {
        auto CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
        using CaptureDeviceExclusiveControlStatusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture6, &impl::abi_t<Windows::Media::Capture::IMediaCapture6>::remove_CaptureDeviceExclusiveControlStatusChanged>;
        CaptureDeviceExclusiveControlStatusChanged_revoker CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
        auto CaptureDeviceExclusiveControlStatusChanged(winrt::event_token const& token) const noexcept;
        auto CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture6>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture7
    {
        auto CreateRelativePanelWatcher(Windows::Media::Capture::StreamingCaptureMode const& captureMode, Windows::UI::WindowManagement::DisplayRegion const& displayRegion) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture7>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs
    {
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Code() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs
    {
        [[nodiscard]] auto FocusState() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings
    {
        auto AudioDeviceId(param::hstring const& value) const;
        [[nodiscard]] auto AudioDeviceId() const;
        auto VideoDeviceId(param::hstring const& value) const;
        [[nodiscard]] auto VideoDeviceId() const;
        auto StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const;
        [[nodiscard]] auto StreamingCaptureMode() const;
        auto PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const;
        [[nodiscard]] auto PhotoCaptureSource() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2
    {
        auto MediaCategory(Windows::Media::Capture::MediaCategory const& value) const;
        [[nodiscard]] auto MediaCategory() const;
        auto AudioProcessing(Windows::Media::AudioProcessing const& value) const;
        [[nodiscard]] auto AudioProcessing() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3
    {
        auto AudioSource(Windows::Media::Core::IMediaSource const& value) const;
        [[nodiscard]] auto AudioSource() const;
        auto VideoSource(Windows::Media::Core::IMediaSource const& value) const;
        [[nodiscard]] auto VideoSource() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4
    {
        [[nodiscard]] auto VideoProfile() const;
        auto VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const;
        [[nodiscard]] auto PreviewMediaDescription() const;
        auto PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
        [[nodiscard]] auto RecordMediaDescription() const;
        auto RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
        [[nodiscard]] auto PhotoMediaDescription() const;
        auto PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5
    {
        [[nodiscard]] auto SourceGroup() const;
        auto SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const;
        [[nodiscard]] auto SharingMode() const;
        auto SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const;
        [[nodiscard]] auto MemoryPreference() const;
        auto MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6
    {
        [[nodiscard]] auto AlwaysPlaySystemShutterSound() const;
        auto AlwaysPlaySystemShutterSound(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings7
    {
        [[nodiscard]] auto DeviceUriPasswordCredential() const;
        auto DeviceUriPasswordCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto DeviceUri() const;
        auto DeviceUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapturePauseResult
    {
        [[nodiscard]] auto LastFrame() const;
        [[nodiscard]] auto RecordDuration() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapturePauseResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureRelativePanelWatcher
    {
        [[nodiscard]] auto RelativePanel() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCaptureRelativePanelWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher, &impl::abi_t<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCaptureRelativePanelWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureRelativePanelWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings
    {
        [[nodiscard]] auto AudioDeviceId() const;
        [[nodiscard]] auto VideoDeviceId() const;
        [[nodiscard]] auto StreamingCaptureMode() const;
        [[nodiscard]] auto PhotoCaptureSource() const;
        [[nodiscard]] auto VideoDeviceCharacteristic() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings2
    {
        [[nodiscard]] auto ConcurrentRecordAndPhotoSupported() const;
        [[nodiscard]] auto ConcurrentRecordAndPhotoSequenceSupported() const;
        [[nodiscard]] auto CameraSoundRequiredForRegion() const;
        [[nodiscard]] auto Horizontal35mmEquivalentFocalLength() const;
        [[nodiscard]] auto PitchOffsetDegrees() const;
        [[nodiscard]] auto Vertical35mmEquivalentFocalLength() const;
        [[nodiscard]] auto MediaCategory() const;
        [[nodiscard]] auto AudioProcessing() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings3
    {
        [[nodiscard]] auto Direct3D11Device() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureStatics
    {
        auto IsVideoProfileSupported(param::hstring const& videoDeviceId) const;
        auto FindAllVideoProfiles(param::hstring const& videoDeviceId) const;
        auto FindConcurrentProfiles(param::hstring const& videoDeviceId) const;
        auto FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureStopResult
    {
        [[nodiscard]] auto LastFrame() const;
        [[nodiscard]] auto RecordDuration() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStopResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoPreview
    {
        auto StartPreviewAsync() const;
        auto StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        auto StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        auto StopPreviewAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto VideoDeviceId() const;
        [[nodiscard]] auto SupportedPreviewMediaDescription() const;
        [[nodiscard]] auto SupportedRecordMediaDescription() const;
        [[nodiscard]] auto SupportedPhotoMediaDescription() const;
        auto GetConcurrency() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile2
    {
        [[nodiscard]] auto FrameSourceInfos() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription
    {
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto FrameRate() const;
        [[nodiscard]] auto IsVariablePhotoSequenceSupported() const;
        [[nodiscard]] auto IsHdrVideoSupported() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2
    {
        [[nodiscard]] auto Subtype() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto Context() const;
    };
    template <> struct consume<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IPhotoCapturedEventArgs
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto Thumbnail() const;
        [[nodiscard]] auto CaptureTimeOffset() const;
    };
    template <> struct consume<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs
    {
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto CaptureTimeOffset() const;
    };
    template <> struct consume<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IVideoStreamConfiguration
    {
        [[nodiscard]] auto InputProperties() const;
        [[nodiscard]] auto OutputProperties() const;
    };
    template <> struct consume<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IVideoStreamConfiguration<D>;
    };
    struct struct_Windows_Media_Capture_WhiteBalanceGain
    {
        double R;
        double G;
        double B;
    };
    template <> struct abi<Windows::Media::Capture::WhiteBalanceGain>
    {
        using type = struct_Windows_Media_Capture_WhiteBalanceGain;
    };
}
#endif
