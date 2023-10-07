// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Control_0_H
#define WINRT_Windows_Media_Control_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Media
{
    enum class MediaPlaybackAutoRepeatMode : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Media::Control
{
    enum class GlobalSystemMediaTransportControlsSessionPlaybackStatus : int32_t
    {
        Closed = 0,
        Opened = 1,
        Changing = 2,
        Stopped = 3,
        Playing = 4,
        Paused = 5,
    };
    struct ICurrentSessionChangedEventArgs;
    struct IGlobalSystemMediaTransportControlsSession;
    struct IGlobalSystemMediaTransportControlsSessionManager;
    struct IGlobalSystemMediaTransportControlsSessionManagerStatics;
    struct IGlobalSystemMediaTransportControlsSessionMediaProperties;
    struct IGlobalSystemMediaTransportControlsSessionPlaybackControls;
    struct IGlobalSystemMediaTransportControlsSessionPlaybackInfo;
    struct IGlobalSystemMediaTransportControlsSessionTimelineProperties;
    struct IMediaPropertiesChangedEventArgs;
    struct IPlaybackInfoChangedEventArgs;
    struct ISessionsChangedEventArgs;
    struct ITimelinePropertiesChangedEventArgs;
    struct CurrentSessionChangedEventArgs;
    struct GlobalSystemMediaTransportControlsSession;
    struct GlobalSystemMediaTransportControlsSessionManager;
    struct GlobalSystemMediaTransportControlsSessionMediaProperties;
    struct GlobalSystemMediaTransportControlsSessionPlaybackControls;
    struct GlobalSystemMediaTransportControlsSessionPlaybackInfo;
    struct GlobalSystemMediaTransportControlsSessionTimelineProperties;
    struct MediaPropertiesChangedEventArgs;
    struct PlaybackInfoChangedEventArgs;
    struct SessionsChangedEventArgs;
    struct TimelinePropertiesChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::ISessionsChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Control::CurrentSessionChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::MediaPropertiesChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::PlaybackInfoChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::SessionsChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::TimelinePropertiesChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.ICurrentSessionChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSession" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManager" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManagerStatics" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionMediaProperties" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackControls" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackInfo" };
    };
    template <> struct name<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionTimelineProperties" };
    };
    template <> struct name<Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IMediaPropertiesChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.IPlaybackInfoChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::ISessionsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.ISessionsChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.ITimelinePropertiesChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::CurrentSessionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.CurrentSessionChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSession>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSession" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionManager" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionMediaProperties" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackControls" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackInfo" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionTimelineProperties" };
    };
    template <> struct name<Windows::Media::Control::MediaPropertiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.MediaPropertiesChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::PlaybackInfoChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.PlaybackInfoChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::SessionsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.SessionsChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::TimelinePropertiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Control.TimelinePropertiesChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackStatus" };
    };
    template <> struct guid_storage<Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        static constexpr guid value{ 0x6969CB39,0x0BFA,0x5FE0,{ 0x8D,0x73,0x09,0xCC,0x5E,0x54,0x08,0xE1 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        static constexpr guid value{ 0x7148C835,0x9B14,0x5AE2,{ 0xAB,0x85,0xDC,0x9B,0x1C,0x14,0xE1,0xA8 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        static constexpr guid value{ 0xCACE8EAC,0xE86E,0x504A,{ 0xAB,0x31,0x5F,0xF8,0xFF,0x1B,0xCE,0x49 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        static constexpr guid value{ 0x2050C4EE,0x11A0,0x57DE,{ 0xAE,0xD7,0xC9,0x7C,0x70,0x33,0x82,0x45 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        static constexpr guid value{ 0x68856CF6,0xADB4,0x54B2,{ 0xAC,0x16,0x05,0x83,0x79,0x07,0xAC,0xB6 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        static constexpr guid value{ 0x6501A3E6,0xBC7A,0x503A,{ 0xBB,0x1B,0x68,0xF1,0x58,0xF3,0xFB,0x03 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        static constexpr guid value{ 0x94B4B6CF,0xE8BA,0x51AD,{ 0x87,0xA7,0xC1,0x0A,0xDE,0x10,0x61,0x27 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        static constexpr guid value{ 0xEDE34136,0x6F25,0x588D,{ 0x8E,0xCF,0xEA,0x5B,0x67,0x35,0xAA,0xA5 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        static constexpr guid value{ 0x7D3741CB,0xADF0,0x5CEF,{ 0x91,0xBA,0xCF,0xAB,0xCD,0xD7,0x76,0x78 } };
    };
    template <> struct guid_storage<Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        static constexpr guid value{ 0x786756C2,0xBC0D,0x50A5,{ 0x88,0x07,0x05,0x42,0x91,0xFE,0xF1,0x39 } };
    };
    template <> struct guid_storage<Windows::Media::Control::ISessionsChangedEventArgs>
    {
        static constexpr guid value{ 0xBBF0CD32,0x42C4,0x5A58,{ 0xB3,0x17,0xF3,0x4B,0xBF,0xBD,0x26,0xE0 } };
    };
    template <> struct guid_storage<Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        static constexpr guid value{ 0x29033A2F,0xC923,0x5A77,{ 0xBC,0xAF,0x05,0x5F,0xF4,0x15,0xAD,0x32 } };
    };
    template <> struct default_interface<Windows::Media::Control::CurrentSessionChangedEventArgs>
    {
        using type = Windows::Media::Control::ICurrentSessionChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSession>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSession;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo;
    };
    template <> struct default_interface<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        using type = Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties;
    };
    template <> struct default_interface<Windows::Media::Control::MediaPropertiesChangedEventArgs>
    {
        using type = Windows::Media::Control::IMediaPropertiesChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Control::PlaybackInfoChangedEventArgs>
    {
        using type = Windows::Media::Control::IPlaybackInfoChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Control::SessionsChangedEventArgs>
    {
        using type = Windows::Media::Control::ISessionsChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Control::TimelinePropertiesChangedEventArgs>
    {
        using type = Windows::Media::Control::ITimelinePropertiesChangedEventArgs;
    };
    template <> struct abi<Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetMediaPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetTimelineProperties(void**) noexcept = 0;
            virtual int32_t __stdcall GetPlaybackInfo(void**) noexcept = 0;
            virtual int32_t __stdcall TryPlayAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryPauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryStopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryFastForwardAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryRewindAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TrySkipNextAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TrySkipPreviousAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeChannelUpAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeChannelDownAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryTogglePlayPauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeAutoRepeatModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangePlaybackRateAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeShuffleActiveAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangePlaybackPositionAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_TimelinePropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TimelinePropertiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackInfoChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaPropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaPropertiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSession(void**) noexcept = 0;
            virtual int32_t __stdcall GetSessions(void**) noexcept = 0;
            virtual int32_t __stdcall add_CurrentSessionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentSessionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SessionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumTrackCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPlayEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPauseEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStopEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRecordEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsFastForwardEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRewindEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsNextEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPreviousEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelUpEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelDownEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlayPauseToggleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsShuffleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRepeatEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaybackRateEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaybackPositionEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Controls(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackType(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRepeatMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsShuffleActive(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdatedTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::Control::ISessionsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_Media_Control_ICurrentSessionChangedEventArgs
    {
    };
    template <> struct consume<Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ICurrentSessionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSession
    {
        [[nodiscard]] auto SourceAppUserModelId() const;
        auto TryGetMediaPropertiesAsync() const;
        auto GetTimelineProperties() const;
        auto GetPlaybackInfo() const;
        auto TryPlayAsync() const;
        auto TryPauseAsync() const;
        auto TryStopAsync() const;
        auto TryRecordAsync() const;
        auto TryFastForwardAsync() const;
        auto TryRewindAsync() const;
        auto TrySkipNextAsync() const;
        auto TrySkipPreviousAsync() const;
        auto TryChangeChannelUpAsync() const;
        auto TryChangeChannelDownAsync() const;
        auto TryTogglePlayPauseAsync() const;
        auto TryChangeAutoRepeatModeAsync(Windows::Media::MediaPlaybackAutoRepeatMode const& requestedAutoRepeatMode) const;
        auto TryChangePlaybackRateAsync(double requestedPlaybackRate) const;
        auto TryChangeShuffleActiveAsync(bool requestedShuffleState) const;
        auto TryChangePlaybackPositionAsync(int64_t requestedPlaybackPosition) const;
        auto TimelinePropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::TimelinePropertiesChangedEventArgs> const& handler) const;
        using TimelinePropertiesChanged_revoker = impl::event_revoker<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_TimelinePropertiesChanged>;
        TimelinePropertiesChanged_revoker TimelinePropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::TimelinePropertiesChangedEventArgs> const& handler) const;
        auto TimelinePropertiesChanged(winrt::event_token const& token) const noexcept;
        auto PlaybackInfoChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::PlaybackInfoChangedEventArgs> const& handler) const;
        using PlaybackInfoChanged_revoker = impl::event_revoker<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_PlaybackInfoChanged>;
        PlaybackInfoChanged_revoker PlaybackInfoChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::PlaybackInfoChangedEventArgs> const& handler) const;
        auto PlaybackInfoChanged(winrt::event_token const& token) const noexcept;
        auto MediaPropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::MediaPropertiesChangedEventArgs> const& handler) const;
        using MediaPropertiesChanged_revoker = impl::event_revoker<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_MediaPropertiesChanged>;
        MediaPropertiesChanged_revoker MediaPropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSession, Windows::Media::Control::MediaPropertiesChangedEventArgs> const& handler) const;
        auto MediaPropertiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManager
    {
        auto GetCurrentSession() const;
        auto GetSessions() const;
        auto CurrentSessionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, Windows::Media::Control::CurrentSessionChangedEventArgs> const& handler) const;
        using CurrentSessionChanged_revoker = impl::event_revoker<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager, &impl::abi_t<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>::remove_CurrentSessionChanged>;
        CurrentSessionChanged_revoker CurrentSessionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, Windows::Media::Control::CurrentSessionChangedEventArgs> const& handler) const;
        auto CurrentSessionChanged(winrt::event_token const& token) const noexcept;
        auto SessionsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, Windows::Media::Control::SessionsChangedEventArgs> const& handler) const;
        using SessionsChanged_revoker = impl::event_revoker<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager, &impl::abi_t<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>::remove_SessionsChanged>;
        SessionsChanged_revoker SessionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, Windows::Media::Control::SessionsChangedEventArgs> const& handler) const;
        auto SessionsChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManagerStatics
    {
        auto RequestAsync() const;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionMediaProperties
    {
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Subtitle() const;
        [[nodiscard]] auto AlbumArtist() const;
        [[nodiscard]] auto Artist() const;
        [[nodiscard]] auto AlbumTitle() const;
        [[nodiscard]] auto TrackNumber() const;
        [[nodiscard]] auto Genres() const;
        [[nodiscard]] auto AlbumTrackCount() const;
        [[nodiscard]] auto PlaybackType() const;
        [[nodiscard]] auto Thumbnail() const;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionMediaProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackControls
    {
        [[nodiscard]] auto IsPlayEnabled() const;
        [[nodiscard]] auto IsPauseEnabled() const;
        [[nodiscard]] auto IsStopEnabled() const;
        [[nodiscard]] auto IsRecordEnabled() const;
        [[nodiscard]] auto IsFastForwardEnabled() const;
        [[nodiscard]] auto IsRewindEnabled() const;
        [[nodiscard]] auto IsNextEnabled() const;
        [[nodiscard]] auto IsPreviousEnabled() const;
        [[nodiscard]] auto IsChannelUpEnabled() const;
        [[nodiscard]] auto IsChannelDownEnabled() const;
        [[nodiscard]] auto IsPlayPauseToggleEnabled() const;
        [[nodiscard]] auto IsShuffleEnabled() const;
        [[nodiscard]] auto IsRepeatEnabled() const;
        [[nodiscard]] auto IsPlaybackRateEnabled() const;
        [[nodiscard]] auto IsPlaybackPositionEnabled() const;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackControls<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackInfo
    {
        [[nodiscard]] auto Controls() const;
        [[nodiscard]] auto PlaybackStatus() const;
        [[nodiscard]] auto PlaybackType() const;
        [[nodiscard]] auto AutoRepeatMode() const;
        [[nodiscard]] auto PlaybackRate() const;
        [[nodiscard]] auto IsShuffleActive() const;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionTimelineProperties
    {
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto EndTime() const;
        [[nodiscard]] auto MinSeekTime() const;
        [[nodiscard]] auto MaxSeekTime() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto LastUpdatedTime() const;
    };
    template <> struct consume<Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionTimelineProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IMediaPropertiesChangedEventArgs
    {
    };
    template <> struct consume<Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_IMediaPropertiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IPlaybackInfoChangedEventArgs
    {
    };
    template <> struct consume<Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_IPlaybackInfoChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_ISessionsChangedEventArgs
    {
    };
    template <> struct consume<Windows::Media::Control::ISessionsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ISessionsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_ITimelinePropertiesChangedEventArgs
    {
    };
    template <> struct consume<Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ITimelinePropertiesChangedEventArgs<D>;
    };
}
#endif
