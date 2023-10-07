// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playlists_H
#define WINRT_Windows_Media_Playlists_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Media.Playlists.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile>) consume_Windows_Media_Playlists_IPlaylist<D>::Files() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Playlists::IPlaylist)->get_Files(&value));
        return Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsAsync(*(void**)(&saveLocation), *(void**)(&desiredName), static_cast<int32_t>(option), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) consume_Windows_Media_Playlists_IPlaylist<D>::SaveAsAsync(Windows::Storage::IStorageFolder const& saveLocation, param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option, Windows::Media::Playlists::PlaylistFormat const& playlistFormat) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Playlists::IPlaylist)->SaveAsWithFormatAsync(*(void**)(&saveLocation), *(void**)(&desiredName), static_cast<int32_t>(option), static_cast<int32_t>(playlistFormat), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist>) consume_Windows_Media_Playlists_IPlaylistStatics<D>::LoadAsync(Windows::Storage::IStorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Playlists::IPlaylistStatics)->LoadAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Playlists::IPlaylist> : produce_base<D, Windows::Media::Playlists::IPlaylist>
    {
        int32_t __stdcall get_Files(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Storage::StorageFile>>(this->shim().Files());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsAsync(void* saveLocation, void* desiredName, int32_t option, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().SaveAsAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&saveLocation), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsWithFormatAsync(void* saveLocation, void* desiredName, int32_t option, int32_t playlistFormat, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().SaveAsAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&saveLocation), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option), *reinterpret_cast<Windows::Media::Playlists::PlaylistFormat const*>(&playlistFormat)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Playlists::IPlaylistStatics> : produce_base<D, Windows::Media::Playlists::IPlaylistStatics>
    {
        int32_t __stdcall LoadAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist>>(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::Playlists
{
    inline Playlist::Playlist() :
        Playlist(impl::call_factory_cast<Playlist(*)(Windows::Foundation::IActivationFactory const&), Playlist>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<Playlist>(); }))
    {
    }
    inline auto Playlist::LoadAsync(Windows::Storage::IStorageFile const& file)
    {
        return impl::call_factory<Playlist, IPlaylistStatics>([&](IPlaylistStatics const& f) { return f.LoadAsync(file); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::Playlists::IPlaylist> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Playlists::IPlaylistStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Playlists::Playlist> : winrt::impl::hash_base {};
#endif
}
#endif
