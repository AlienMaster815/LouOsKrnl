// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playlists_1_H
#define WINRT_Windows_Media_Playlists_1_H
#include "winrt/impl/Windows.Media.Playlists.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Playlists
{
    struct __declspec(empty_bases) IPlaylist :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylist>
    {
        IPlaylist(std::nullptr_t = nullptr) noexcept {}
        IPlaylist(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaylistStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylistStatics>
    {
        IPlaylistStatics(std::nullptr_t = nullptr) noexcept {}
        IPlaylistStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
