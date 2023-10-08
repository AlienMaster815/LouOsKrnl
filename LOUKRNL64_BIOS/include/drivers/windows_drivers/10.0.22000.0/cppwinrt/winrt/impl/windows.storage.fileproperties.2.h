// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_FileProperties_2_H
#define WINRT_Windows_Storage_FileProperties_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    struct __declspec(empty_bases) BasicProperties : Windows::Storage::FileProperties::IBasicProperties,
        impl::require<BasicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        BasicProperties(std::nullptr_t) noexcept {}
        BasicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IBasicProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DocumentProperties : Windows::Storage::FileProperties::IDocumentProperties
    {
        DocumentProperties(std::nullptr_t) noexcept {}
        DocumentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IDocumentProperties(ptr, take_ownership_from_abi) {}
    };
    struct GeotagHelper
    {
        GeotagHelper() = delete;
        static auto GetGeotagAsync(Windows::Storage::IStorageFile const& file);
        static auto SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator);
        static auto SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint);
    };
    struct __declspec(empty_bases) ImageProperties : Windows::Storage::FileProperties::IImageProperties
    {
        ImageProperties(std::nullptr_t) noexcept {}
        ImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IImageProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MusicProperties : Windows::Storage::FileProperties::IMusicProperties
    {
        MusicProperties(std::nullptr_t) noexcept {}
        MusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IMusicProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorageItemContentProperties : Windows::Storage::FileProperties::IStorageItemContentProperties
    {
        StorageItemContentProperties(std::nullptr_t) noexcept {}
        StorageItemContentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IStorageItemContentProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorageItemThumbnail : Windows::Storage::Streams::IRandomAccessStreamWithContentType,
        impl::require<StorageItemThumbnail, Windows::Storage::FileProperties::IThumbnailProperties>
    {
        StorageItemThumbnail(std::nullptr_t) noexcept {}
        StorageItemThumbnail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoProperties : Windows::Storage::FileProperties::IVideoProperties
    {
        VideoProperties(std::nullptr_t) noexcept {}
        VideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::FileProperties::IVideoProperties(ptr, take_ownership_from_abi) {}
    };
}
#endif
