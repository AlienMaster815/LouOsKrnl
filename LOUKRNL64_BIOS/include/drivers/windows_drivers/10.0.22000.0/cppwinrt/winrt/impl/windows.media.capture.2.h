// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_2_H
#define WINRT_Windows_Media_Capture_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    struct MediaCaptureFailedEventHandler : Windows::Foundation::IUnknown
    {
        MediaCaptureFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        MediaCaptureFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> MediaCaptureFailedEventHandler(L lambda);
        template <typename F> MediaCaptureFailedEventHandler(F* function);
        template <typename O, typename M> MediaCaptureFailedEventHandler(O* object, M method);
        template <typename O, typename M> MediaCaptureFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> MediaCaptureFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const;
    };
    struct RecordLimitationExceededEventHandler : Windows::Foundation::IUnknown
    {
        RecordLimitationExceededEventHandler(std::nullptr_t = nullptr) noexcept {}
        RecordLimitationExceededEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RecordLimitationExceededEventHandler(L lambda);
        template <typename F> RecordLimitationExceededEventHandler(F* function);
        template <typename O, typename M> RecordLimitationExceededEventHandler(O* object, M method);
        template <typename O, typename M> RecordLimitationExceededEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RecordLimitationExceededEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Capture::MediaCapture const& sender) const;
    };
    struct WhiteBalanceGain
    {
        double R;
        double G;
        double B;
    };
    inline bool operator==(WhiteBalanceGain const& left, WhiteBalanceGain const& right) noexcept
    {
        return left.R == right.R && left.G == right.G && left.B == right.B;
    }
    inline bool operator!=(WhiteBalanceGain const& left, WhiteBalanceGain const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AdvancedCapturedPhoto : Windows::Media::Capture::IAdvancedCapturedPhoto,
        impl::require<AdvancedCapturedPhoto, Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        AdvancedCapturedPhoto(std::nullptr_t) noexcept {}
        AdvancedCapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAdvancedCapturedPhoto(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdvancedPhotoCapture : Windows::Media::Capture::IAdvancedPhotoCapture
    {
        AdvancedPhotoCapture(std::nullptr_t) noexcept {}
        AdvancedPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAdvancedPhotoCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastBackgroundService : Windows::Media::Capture::IAppBroadcastBackgroundService,
        impl::require<AppBroadcastBackgroundService, Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        AppBroadcastBackgroundService(std::nullptr_t) noexcept {}
        AppBroadcastBackgroundService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastBackgroundService(ptr, take_ownership_from_abi) {}
        using Windows::Media::Capture::IAppBroadcastBackgroundService::BroadcastTitle;
        using impl::consume_t<AppBroadcastBackgroundService, Windows::Media::Capture::IAppBroadcastBackgroundService2>::BroadcastTitle;
    };
    struct __declspec(empty_bases) AppBroadcastBackgroundServiceSignInInfo : Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo,
        impl::require<AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        AppBroadcastBackgroundServiceSignInInfo(std::nullptr_t) noexcept {}
        AppBroadcastBackgroundServiceSignInInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastBackgroundServiceStreamInfo : Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo,
        impl::require<AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        AppBroadcastBackgroundServiceStreamInfo(std::nullptr_t) noexcept {}
        AppBroadcastBackgroundServiceStreamInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastCameraCaptureStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs
    {
        AppBroadcastCameraCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastCameraCaptureStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastGlobalSettings : Windows::Media::Capture::IAppBroadcastGlobalSettings
    {
        AppBroadcastGlobalSettings(std::nullptr_t) noexcept {}
        AppBroadcastGlobalSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastGlobalSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastHeartbeatRequestedEventArgs : Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs
    {
        AppBroadcastHeartbeatRequestedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastHeartbeatRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct AppBroadcastManager
    {
        AppBroadcastManager() = delete;
        static auto GetGlobalSettings();
        static auto ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value);
        static auto GetProviderSettings();
        static auto ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value);
    };
    struct __declspec(empty_bases) AppBroadcastMicrophoneCaptureStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs
    {
        AppBroadcastMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastMicrophoneCaptureStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPlugIn : Windows::Media::Capture::IAppBroadcastPlugIn
    {
        AppBroadcastPlugIn(std::nullptr_t) noexcept {}
        AppBroadcastPlugIn(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPlugIn(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPlugInManager : Windows::Media::Capture::IAppBroadcastPlugInManager
    {
        AppBroadcastPlugInManager(std::nullptr_t) noexcept {}
        AppBroadcastPlugInManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPlugInManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) AppBroadcastPlugInStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs
    {
        AppBroadcastPlugInStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastPlugInStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPreview : Windows::Media::Capture::IAppBroadcastPreview
    {
        AppBroadcastPreview(std::nullptr_t) noexcept {}
        AppBroadcastPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPreviewStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs
    {
        AppBroadcastPreviewStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastPreviewStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPreviewStreamReader : Windows::Media::Capture::IAppBroadcastPreviewStreamReader
    {
        AppBroadcastPreviewStreamReader(std::nullptr_t) noexcept {}
        AppBroadcastPreviewStreamReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPreviewStreamReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPreviewStreamVideoFrame : Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame
    {
        AppBroadcastPreviewStreamVideoFrame(std::nullptr_t) noexcept {}
        AppBroadcastPreviewStreamVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastPreviewStreamVideoHeader : Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader
    {
        AppBroadcastPreviewStreamVideoHeader(std::nullptr_t) noexcept {}
        AppBroadcastPreviewStreamVideoHeader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastProviderSettings : Windows::Media::Capture::IAppBroadcastProviderSettings
    {
        AppBroadcastProviderSettings(std::nullptr_t) noexcept {}
        AppBroadcastProviderSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastProviderSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastServices : Windows::Media::Capture::IAppBroadcastServices
    {
        AppBroadcastServices(std::nullptr_t) noexcept {}
        AppBroadcastServices(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastServices(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastSignInStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs
    {
        AppBroadcastSignInStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastSignInStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastState : Windows::Media::Capture::IAppBroadcastState
    {
        AppBroadcastState(std::nullptr_t) noexcept {}
        AppBroadcastState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamAudioFrame : Windows::Media::Capture::IAppBroadcastStreamAudioFrame
    {
        AppBroadcastStreamAudioFrame(std::nullptr_t) noexcept {}
        AppBroadcastStreamAudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamAudioFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamAudioHeader : Windows::Media::Capture::IAppBroadcastStreamAudioHeader
    {
        AppBroadcastStreamAudioHeader(std::nullptr_t) noexcept {}
        AppBroadcastStreamAudioHeader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamAudioHeader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamReader : Windows::Media::Capture::IAppBroadcastStreamReader
    {
        AppBroadcastStreamReader(std::nullptr_t) noexcept {}
        AppBroadcastStreamReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamStateChangedEventArgs : Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs
    {
        AppBroadcastStreamStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastStreamStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamVideoFrame : Windows::Media::Capture::IAppBroadcastStreamVideoFrame
    {
        AppBroadcastStreamVideoFrame(std::nullptr_t) noexcept {}
        AppBroadcastStreamVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamVideoFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastStreamVideoHeader : Windows::Media::Capture::IAppBroadcastStreamVideoHeader
    {
        AppBroadcastStreamVideoHeader(std::nullptr_t) noexcept {}
        AppBroadcastStreamVideoHeader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastStreamVideoHeader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastTriggerDetails : Windows::Media::Capture::IAppBroadcastTriggerDetails
    {
        AppBroadcastTriggerDetails(std::nullptr_t) noexcept {}
        AppBroadcastTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBroadcastViewerCountChangedEventArgs : Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs
    {
        AppBroadcastViewerCountChangedEventArgs(std::nullptr_t) noexcept {}
        AppBroadcastViewerCountChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCapture : Windows::Media::Capture::IAppCapture
    {
        AppCapture(std::nullptr_t) noexcept {}
        AppCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCapture(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto SetAllowedAsync(bool allowed);
    };
    struct __declspec(empty_bases) AppCaptureAlternateShortcutKeys : Windows::Media::Capture::IAppCaptureAlternateShortcutKeys,
        impl::require<AppCaptureAlternateShortcutKeys, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        AppCaptureAlternateShortcutKeys(std::nullptr_t) noexcept {}
        AppCaptureAlternateShortcutKeys(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureAlternateShortcutKeys(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureDurationGeneratedEventArgs : Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs
    {
        AppCaptureDurationGeneratedEventArgs(std::nullptr_t) noexcept {}
        AppCaptureDurationGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureFileGeneratedEventArgs : Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs
    {
        AppCaptureFileGeneratedEventArgs(std::nullptr_t) noexcept {}
        AppCaptureFileGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct AppCaptureManager
    {
        AppCaptureManager() = delete;
        static auto GetCurrentSettings();
        static auto ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings);
    };
    struct __declspec(empty_bases) AppCaptureMetadataWriter : Windows::Media::Capture::IAppCaptureMetadataWriter,
        impl::require<AppCaptureMetadataWriter, Windows::Foundation::IClosable>
    {
        AppCaptureMetadataWriter(std::nullptr_t) noexcept {}
        AppCaptureMetadataWriter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureMetadataWriter(ptr, take_ownership_from_abi) {}
        AppCaptureMetadataWriter();
    };
    struct __declspec(empty_bases) AppCaptureMicrophoneCaptureStateChangedEventArgs : Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs
    {
        AppCaptureMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppCaptureMicrophoneCaptureStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureRecordOperation : Windows::Media::Capture::IAppCaptureRecordOperation
    {
        AppCaptureRecordOperation(std::nullptr_t) noexcept {}
        AppCaptureRecordOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureRecordOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureRecordingStateChangedEventArgs : Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs
    {
        AppCaptureRecordingStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppCaptureRecordingStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureServices : Windows::Media::Capture::IAppCaptureServices
    {
        AppCaptureServices(std::nullptr_t) noexcept {}
        AppCaptureServices(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureServices(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureSettings : Windows::Media::Capture::IAppCaptureSettings,
        impl::require<AppCaptureSettings, Windows::Media::Capture::IAppCaptureSettings2, Windows::Media::Capture::IAppCaptureSettings3, Windows::Media::Capture::IAppCaptureSettings4, Windows::Media::Capture::IAppCaptureSettings5>
    {
        AppCaptureSettings(std::nullptr_t) noexcept {}
        AppCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCaptureState : Windows::Media::Capture::IAppCaptureState
    {
        AppCaptureState(std::nullptr_t) noexcept {}
        AppCaptureState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCaptureState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CameraCaptureUI : Windows::Media::Capture::ICameraCaptureUI
    {
        CameraCaptureUI(std::nullptr_t) noexcept {}
        CameraCaptureUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUI(ptr, take_ownership_from_abi) {}
        CameraCaptureUI();
    };
    struct __declspec(empty_bases) CameraCaptureUIPhotoCaptureSettings : Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings
    {
        CameraCaptureUIPhotoCaptureSettings(std::nullptr_t) noexcept {}
        CameraCaptureUIPhotoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CameraCaptureUIVideoCaptureSettings : Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings
    {
        CameraCaptureUIVideoCaptureSettings(std::nullptr_t) noexcept {}
        CameraCaptureUIVideoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct CameraOptionsUI
    {
        CameraOptionsUI() = delete;
        static auto Show(Windows::Media::Capture::MediaCapture const& mediaCapture);
    };
    struct __declspec(empty_bases) CapturedFrame : Windows::Media::Capture::ICapturedFrame,
        impl::require<CapturedFrame, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap, Windows::Media::Capture::ICapturedFrame2>
    {
        CapturedFrame(std::nullptr_t) noexcept {}
        CapturedFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CapturedFrameControlValues : Windows::Media::Capture::ICapturedFrameControlValues,
        impl::require<CapturedFrameControlValues, Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        CapturedFrameControlValues(std::nullptr_t) noexcept {}
        CapturedFrameControlValues(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedFrameControlValues(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CapturedPhoto : Windows::Media::Capture::ICapturedPhoto
    {
        CapturedPhoto(std::nullptr_t) noexcept {}
        CapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedPhoto(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameBarServices : Windows::Media::Capture::IGameBarServices
    {
        GameBarServices(std::nullptr_t) noexcept {}
        GameBarServices(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IGameBarServices(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameBarServicesCommandEventArgs : Windows::Media::Capture::IGameBarServicesCommandEventArgs
    {
        GameBarServicesCommandEventArgs(std::nullptr_t) noexcept {}
        GameBarServicesCommandEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IGameBarServicesCommandEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameBarServicesManager : Windows::Media::Capture::IGameBarServicesManager
    {
        GameBarServicesManager(std::nullptr_t) noexcept {}
        GameBarServicesManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IGameBarServicesManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) GameBarServicesManagerGameBarServicesCreatedEventArgs : Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs
    {
        GameBarServicesManagerGameBarServicesCreatedEventArgs(std::nullptr_t) noexcept {}
        GameBarServicesManagerGameBarServicesCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameBarServicesTargetInfo : Windows::Media::Capture::IGameBarServicesTargetInfo
    {
        GameBarServicesTargetInfo(std::nullptr_t) noexcept {}
        GameBarServicesTargetInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IGameBarServicesTargetInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagMediaRecording : Windows::Media::Capture::ILowLagMediaRecording,
        impl::require<LowLagMediaRecording, Windows::Media::Capture::ILowLagMediaRecording2, Windows::Media::Capture::ILowLagMediaRecording3>
    {
        LowLagMediaRecording(std::nullptr_t) noexcept {}
        LowLagMediaRecording(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagMediaRecording(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoCapture : Windows::Media::Capture::ILowLagPhotoCapture
    {
        LowLagPhotoCapture(std::nullptr_t) noexcept {}
        LowLagPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagPhotoCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoSequenceCapture : Windows::Media::Capture::ILowLagPhotoSequenceCapture
    {
        LowLagPhotoSequenceCapture(std::nullptr_t) noexcept {}
        LowLagPhotoSequenceCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagPhotoSequenceCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCapture : Windows::Media::Capture::IMediaCapture,
        impl::require<MediaCapture, Windows::Media::Capture::IMediaCaptureVideoPreview, Windows::Media::Capture::IMediaCapture2, Windows::Foundation::IClosable, Windows::Media::Capture::IMediaCapture3, Windows::Media::Capture::IMediaCapture4, Windows::Media::Capture::IMediaCapture5, Windows::Media::Capture::IMediaCapture6, Windows::Media::Capture::IMediaCapture7>
    {
        MediaCapture(std::nullptr_t) noexcept {}
        MediaCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCapture(ptr, take_ownership_from_abi) {}
        MediaCapture();
        static auto IsVideoProfileSupported(param::hstring const& videoDeviceId);
        static auto FindAllVideoProfiles(param::hstring const& videoDeviceId);
        static auto FindConcurrentProfiles(param::hstring const& videoDeviceId);
        static auto FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name);
    };
    struct __declspec(empty_bases) MediaCaptureDeviceExclusiveControlStatusChangedEventArgs : Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
    {
        MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureFailedEventArgs : Windows::Media::Capture::IMediaCaptureFailedEventArgs
    {
        MediaCaptureFailedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureFocusChangedEventArgs : Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs
    {
        MediaCaptureFocusChangedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureFocusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureInitializationSettings : Windows::Media::Capture::IMediaCaptureInitializationSettings,
        impl::require<MediaCaptureInitializationSettings, Windows::Media::Capture::IMediaCaptureInitializationSettings2, Windows::Media::Capture::IMediaCaptureInitializationSettings3, Windows::Media::Capture::IMediaCaptureInitializationSettings4, Windows::Media::Capture::IMediaCaptureInitializationSettings5, Windows::Media::Capture::IMediaCaptureInitializationSettings6, Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        MediaCaptureInitializationSettings(std::nullptr_t) noexcept {}
        MediaCaptureInitializationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureInitializationSettings(ptr, take_ownership_from_abi) {}
        MediaCaptureInitializationSettings();
    };
    struct __declspec(empty_bases) MediaCapturePauseResult : Windows::Media::Capture::IMediaCapturePauseResult,
        impl::require<MediaCapturePauseResult, Windows::Foundation::IClosable>
    {
        MediaCapturePauseResult(std::nullptr_t) noexcept {}
        MediaCapturePauseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCapturePauseResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureRelativePanelWatcher : Windows::Media::Capture::IMediaCaptureRelativePanelWatcher,
        impl::require<MediaCaptureRelativePanelWatcher, Windows::Foundation::IClosable>
    {
        MediaCaptureRelativePanelWatcher(std::nullptr_t) noexcept {}
        MediaCaptureRelativePanelWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureRelativePanelWatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureSettings : Windows::Media::Capture::IMediaCaptureSettings,
        impl::require<MediaCaptureSettings, Windows::Media::Capture::IMediaCaptureSettings2, Windows::Media::Capture::IMediaCaptureSettings3>
    {
        MediaCaptureSettings(std::nullptr_t) noexcept {}
        MediaCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureStopResult : Windows::Media::Capture::IMediaCaptureStopResult,
        impl::require<MediaCaptureStopResult, Windows::Foundation::IClosable>
    {
        MediaCaptureStopResult(std::nullptr_t) noexcept {}
        MediaCaptureStopResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureStopResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureVideoProfile : Windows::Media::Capture::IMediaCaptureVideoProfile,
        impl::require<MediaCaptureVideoProfile, Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        MediaCaptureVideoProfile(std::nullptr_t) noexcept {}
        MediaCaptureVideoProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureVideoProfile(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureVideoProfileMediaDescription : Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription,
        impl::require<MediaCaptureVideoProfileMediaDescription, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        MediaCaptureVideoProfileMediaDescription(std::nullptr_t) noexcept {}
        MediaCaptureVideoProfileMediaDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OptionalReferencePhotoCapturedEventArgs : Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs
    {
        OptionalReferencePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
        OptionalReferencePhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoCapturedEventArgs : Windows::Media::Capture::IPhotoCapturedEventArgs
    {
        PhotoCapturedEventArgs(std::nullptr_t) noexcept {}
        PhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IPhotoCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoConfirmationCapturedEventArgs : Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs
    {
        PhotoConfirmationCapturedEventArgs(std::nullptr_t) noexcept {}
        PhotoConfirmationCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoStreamConfiguration : Windows::Media::Capture::IVideoStreamConfiguration
    {
        VideoStreamConfiguration(std::nullptr_t) noexcept {}
        VideoStreamConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IVideoStreamConfiguration(ptr, take_ownership_from_abi) {}
    };
}
#endif
