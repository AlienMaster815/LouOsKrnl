// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playlists_2_H
#define WINRT_Windows_Media_Playlists_2_H
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Media.Playlists.1.h"
namespace winrt::Windows::Media::Playlists
{
    struct __declspec(empty_bases) Playlist : Windows::Media::Playlists::IPlaylist
    {
        Playlist(std::nullptr_t) noexcept {}
        Playlist(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playlists::IPlaylist(ptr, take_ownership_from_abi) {}
        Playlist();
        static auto LoadAsync(Windows::Storage::IStorageFile const& file);
    };
}
#endif
