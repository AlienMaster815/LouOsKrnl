// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Control_2_H
#define WINRT_Windows_Media_Control_2_H
#include "winrt/impl/Windows.Media.Control.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Control
{
    struct __declspec(empty_bases) CurrentSessionChangedEventArgs : Windows::Media::Control::ICurrentSessionChangedEventArgs
    {
        CurrentSessionChangedEventArgs(std::nullptr_t) noexcept {}
        CurrentSessionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::ICurrentSessionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSession : Windows::Media::Control::IGlobalSystemMediaTransportControlsSession
    {
        GlobalSystemMediaTransportControlsSession(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSessionManager : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager
    {
        GlobalSystemMediaTransportControlsSessionManager(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSessionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager(ptr, take_ownership_from_abi) {}
        static auto RequestAsync();
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSessionMediaProperties : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties
    {
        GlobalSystemMediaTransportControlsSessionMediaProperties(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSessionMediaProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSessionPlaybackControls : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls
    {
        GlobalSystemMediaTransportControlsSessionPlaybackControls(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSessionPlaybackControls(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSessionPlaybackInfo : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo
    {
        GlobalSystemMediaTransportControlsSessionPlaybackInfo(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSessionPlaybackInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GlobalSystemMediaTransportControlsSessionTimelineProperties : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties
    {
        GlobalSystemMediaTransportControlsSessionTimelineProperties(std::nullptr_t) noexcept {}
        GlobalSystemMediaTransportControlsSessionTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPropertiesChangedEventArgs : Windows::Media::Control::IMediaPropertiesChangedEventArgs
    {
        MediaPropertiesChangedEventArgs(std::nullptr_t) noexcept {}
        MediaPropertiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IMediaPropertiesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackInfoChangedEventArgs : Windows::Media::Control::IPlaybackInfoChangedEventArgs
    {
        PlaybackInfoChangedEventArgs(std::nullptr_t) noexcept {}
        PlaybackInfoChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::IPlaybackInfoChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SessionsChangedEventArgs : Windows::Media::Control::ISessionsChangedEventArgs
    {
        SessionsChangedEventArgs(std::nullptr_t) noexcept {}
        SessionsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::ISessionsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TimelinePropertiesChangedEventArgs : Windows::Media::Control::ITimelinePropertiesChangedEventArgs
    {
        TimelinePropertiesChangedEventArgs(std::nullptr_t) noexcept {}
        TimelinePropertiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Control::ITimelinePropertiesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
