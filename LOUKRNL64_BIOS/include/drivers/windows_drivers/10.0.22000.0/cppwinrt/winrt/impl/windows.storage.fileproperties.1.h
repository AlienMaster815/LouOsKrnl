// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_FileProperties_1_H
#define WINRT_Windows_Storage_FileProperties_1_H
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    struct __declspec(empty_bases) IBasicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicProperties>
    {
        IBasicProperties(std::nullptr_t = nullptr) noexcept {}
        IBasicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDocumentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDocumentProperties>,
        impl::require<Windows::Storage::FileProperties::IDocumentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IDocumentProperties(std::nullptr_t = nullptr) noexcept {}
        IDocumentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeotagHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeotagHelperStatics>
    {
        IGeotagHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IGeotagHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageProperties>,
        impl::require<Windows::Storage::FileProperties::IImageProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IImageProperties(std::nullptr_t = nullptr) noexcept {}
        IImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMusicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMusicProperties>,
        impl::require<Windows::Storage::FileProperties::IMusicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IMusicProperties(std::nullptr_t = nullptr) noexcept {}
        IMusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageItemContentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemContentProperties>,
        impl::require<Windows::Storage::FileProperties::IStorageItemContentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IStorageItemContentProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemContentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageItemExtraProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemExtraProperties>
    {
        IStorageItemExtraProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemExtraProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IThumbnailProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThumbnailProperties>
    {
        IThumbnailProperties(std::nullptr_t = nullptr) noexcept {}
        IThumbnailProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoProperties>,
        impl::require<Windows::Storage::FileProperties::IVideoProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IVideoProperties(std::nullptr_t = nullptr) noexcept {}
        IVideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
