// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_2_H
#define WINRT_Windows_Media_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.1.h"
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct MediaTimeRange
    {
        Windows::Foundation::TimeSpan Start;
        Windows::Foundation::TimeSpan End;
    };
    inline bool operator==(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return left.Start == right.Start && left.End == right.End;
    }
    inline bool operator!=(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AudioBuffer : Windows::Media::IAudioBuffer
    {
        AudioBuffer(std::nullptr_t) noexcept {}
        AudioBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAudioBuffer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFrame : Windows::Media::IAudioFrame
    {
        AudioFrame(std::nullptr_t) noexcept {}
        AudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAudioFrame(ptr, take_ownership_from_abi) {}
        explicit AudioFrame(uint32_t capacity);
    };
    struct __declspec(empty_bases) AutoRepeatModeChangeRequestedEventArgs : Windows::Media::IAutoRepeatModeChangeRequestedEventArgs
    {
        AutoRepeatModeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        AutoRepeatModeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAutoRepeatModeChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageDisplayProperties : Windows::Media::IImageDisplayProperties
    {
        ImageDisplayProperties(std::nullptr_t) noexcept {}
        ImageDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IImageDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct MediaControl
    {
        MediaControl() = delete;
        static auto SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using SoundLevelChanged_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_SoundLevelChanged>;
        [[nodiscard]] static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto SoundLevelChanged(winrt::event_token const& cookie);
        static auto PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PlayPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPressed>;
        [[nodiscard]] static PlayPressed_revoker PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PlayPressed(winrt::event_token const& cookie);
        static auto PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PausePressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PausePressed>;
        [[nodiscard]] static PausePressed_revoker PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PausePressed(winrt::event_token const& cookie);
        static auto StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using StopPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_StopPressed>;
        [[nodiscard]] static StopPressed_revoker StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto StopPressed(winrt::event_token const& cookie);
        static auto PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PlayPauseTogglePressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed>;
        [[nodiscard]] static PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PlayPauseTogglePressed(winrt::event_token const& cookie);
        static auto RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecordPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RecordPressed>;
        [[nodiscard]] static RecordPressed_revoker RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RecordPressed(winrt::event_token const& cookie);
        static auto NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using NextTrackPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_NextTrackPressed>;
        [[nodiscard]] static NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto NextTrackPressed(winrt::event_token const& cookie);
        static auto PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PreviousTrackPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PreviousTrackPressed>;
        [[nodiscard]] static PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PreviousTrackPressed(winrt::event_token const& cookie);
        static auto FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using FastForwardPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_FastForwardPressed>;
        [[nodiscard]] static FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto FastForwardPressed(winrt::event_token const& cookie);
        static auto RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RewindPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RewindPressed>;
        [[nodiscard]] static RewindPressed_revoker RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RewindPressed(winrt::event_token const& cookie);
        static auto ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ChannelUpPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelUpPressed>;
        [[nodiscard]] static ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto ChannelUpPressed(winrt::event_token const& cookie);
        static auto ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ChannelDownPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelDownPressed>;
        [[nodiscard]] static ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto ChannelDownPressed(winrt::event_token const& cookie);
        [[nodiscard]] static auto SoundLevel();
        static auto TrackName(param::hstring const& value);
        [[nodiscard]] static auto TrackName();
        static auto ArtistName(param::hstring const& value);
        [[nodiscard]] static auto ArtistName();
        static auto IsPlaying(bool value);
        [[nodiscard]] static auto IsPlaying();
        static auto AlbumArt(Windows::Foundation::Uri const& value);
        [[nodiscard]] static auto AlbumArt();
    };
    struct __declspec(empty_bases) MediaExtensionManager : Windows::Media::IMediaExtensionManager,
        impl::require<MediaExtensionManager, Windows::Media::IMediaExtensionManager2>
    {
        MediaExtensionManager(std::nullptr_t) noexcept {}
        MediaExtensionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaExtensionManager(ptr, take_ownership_from_abi) {}
        MediaExtensionManager();
    };
    struct MediaMarkerTypes
    {
        MediaMarkerTypes() = delete;
        [[nodiscard]] static auto Bookmark();
    };
    struct __declspec(empty_bases) MediaProcessingTriggerDetails : Windows::Media::IMediaProcessingTriggerDetails
    {
        MediaProcessingTriggerDetails(std::nullptr_t) noexcept {}
        MediaProcessingTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaProcessingTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaTimelineController : Windows::Media::IMediaTimelineController,
        impl::require<MediaTimelineController, Windows::Media::IMediaTimelineController2>
    {
        MediaTimelineController(std::nullptr_t) noexcept {}
        MediaTimelineController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaTimelineController(ptr, take_ownership_from_abi) {}
        MediaTimelineController();
    };
    struct __declspec(empty_bases) MediaTimelineControllerFailedEventArgs : Windows::Media::IMediaTimelineControllerFailedEventArgs
    {
        MediaTimelineControllerFailedEventArgs(std::nullptr_t) noexcept {}
        MediaTimelineControllerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaTimelineControllerFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MusicDisplayProperties : Windows::Media::IMusicDisplayProperties,
        impl::require<MusicDisplayProperties, Windows::Media::IMusicDisplayProperties2, Windows::Media::IMusicDisplayProperties3>
    {
        MusicDisplayProperties(std::nullptr_t) noexcept {}
        MusicDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMusicDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackPositionChangeRequestedEventArgs : Windows::Media::IPlaybackPositionChangeRequestedEventArgs
    {
        PlaybackPositionChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackPositionChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IPlaybackPositionChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackRateChangeRequestedEventArgs : Windows::Media::IPlaybackRateChangeRequestedEventArgs
    {
        PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IPlaybackRateChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShuffleEnabledChangeRequestedEventArgs : Windows::Media::IShuffleEnabledChangeRequestedEventArgs
    {
        ShuffleEnabledChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        ShuffleEnabledChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IShuffleEnabledChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControls : Windows::Media::ISystemMediaTransportControls,
        impl::require<SystemMediaTransportControls, Windows::Media::ISystemMediaTransportControls2>
    {
        SystemMediaTransportControls(std::nullptr_t) noexcept {}
        SystemMediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControls(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsButtonPressedEventArgs : Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs
    {
        SystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsButtonPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsDisplayUpdater : Windows::Media::ISystemMediaTransportControlsDisplayUpdater
    {
        SystemMediaTransportControlsDisplayUpdater(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsDisplayUpdater(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsDisplayUpdater(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsPropertyChangedEventArgs : Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs
    {
        SystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsTimelineProperties : Windows::Media::ISystemMediaTransportControlsTimelineProperties
    {
        SystemMediaTransportControlsTimelineProperties(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsTimelineProperties(ptr, take_ownership_from_abi) {}
        SystemMediaTransportControlsTimelineProperties();
    };
    struct __declspec(empty_bases) VideoDisplayProperties : Windows::Media::IVideoDisplayProperties,
        impl::require<VideoDisplayProperties, Windows::Media::IVideoDisplayProperties2>
    {
        VideoDisplayProperties(std::nullptr_t) noexcept {}
        VideoDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IVideoDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct VideoEffects
    {
        VideoEffects() = delete;
        [[nodiscard]] static auto VideoStabilization();
    };
    struct __declspec(empty_bases) VideoFrame : Windows::Media::IVideoFrame,
        impl::require<VideoFrame, Windows::Media::IVideoFrame2>
    {
        VideoFrame(std::nullptr_t) noexcept {}
        VideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IVideoFrame(ptr, take_ownership_from_abi) {}
        VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        using Windows::Media::IVideoFrame::CopyToAsync;
        using impl::consume_t<VideoFrame, Windows::Media::IVideoFrame2>::CopyToAsync;
        static auto CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height);
        static auto CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device);
        static auto CreateWithSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap);
        static auto CreateWithDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    };
}
#endif
