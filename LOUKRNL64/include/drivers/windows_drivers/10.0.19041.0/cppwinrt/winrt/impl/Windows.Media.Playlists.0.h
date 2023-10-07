// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playlists_0_H
#define WINRT_Windows_Media_Playlists_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct IStorageFolder;
    enum class NameCollisionOption : int32_t;
}
namespace winrt::Windows::Media::Playlists
{
    enum class PlaylistFormat : int32_t
    {
        WindowsMedia = 0,
        Zune = 1,
        M3u = 2,
    };
    struct IPlaylist;
    struct IPlaylistStatics;
    struct Playlist;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Playlists::IPlaylist>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Playlists::IPlaylistStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Playlists::Playlist>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Playlists::PlaylistFormat>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Playlists::IPlaylist>
    {
        static constexpr auto & value{ L"Windows.Media.Playlists.IPlaylist" };
    };
    template <> struct name<Windows::Media::Playlists::IPlaylistStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Playlists.IPlaylistStatics" };
    };
    template <> struct name<Windows::Media::Playlists::Playlist>
    {
        static constexpr auto & value{ L"Windows.Media.Playlists.Playlist" };
    };
    template <> struct name<Windows::Media::Playlists::PlaylistFormat>
    {
        static constexpr auto & value{ L"Windows.Media.Playlists.PlaylistFormat" };
    };
    template <> struct guid_storage<Windows::Media::Playlists::IPlaylist>
    {
        static constexpr guid value{ 0x803736F5,0xCF44,0x4D97,{ 0x83,0xB3,0x7A,0x08,0x9E,0x9A,0xB6,0x63 } };
    };
    template <> struct guid_storage<Windows::Media::Playlists::IPlaylistStatics>
    {
        static constexpr guid value{ 0xC5C331CD,0x81F9,0x4FF3,{ 0x95,0xB9,0x70,0xB6,0xFF,0x04,0x6B,0x68 } };
    };
    template <> struct default_interface<Windows::Media::Playlists::Playlist>
    {
        using type = Windows::Media::Playlists::IPlaylist;
    };
    template <> struct abi<Windows::Media::Playlists::IPlaylist>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Files(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsWithFormatAsync(void*, void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Playlists::IPlaylistStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Playlists_IPlaylist
    {
        [[nodiscard]] auto Files() const;
        auto SaveAsync() const;
        auto SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const;
        auto SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option, Windows::Media::Playlists::PlaylistFormat const& playlistFormat) const;
    };
    template <> struct consume<Windows::Media::Playlists::IPlaylist>
    {
        template <typename D> using type = consume_Windows_Media_Playlists_IPlaylist<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playlists_IPlaylistStatics
    {
        auto LoadAsync(Windows::Storage::IStorageFile const& file) const;
    };
    template <> struct consume<Windows::Media::Playlists::IPlaylistStatics>
    {
        template <typename D> using type = consume_Windows_Media_Playlists_IPlaylistStatics<D>;
    };
}
#endif
