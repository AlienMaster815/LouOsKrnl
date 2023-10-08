// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Import_1_H
#define WINRT_Windows_Media_Import_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Import.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Import
{
    struct __declspec(empty_bases) IPhotoImportDeleteImportedItemsFromSourceResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        IPhotoImportDeleteImportedItemsFromSourceResult(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportDeleteImportedItemsFromSourceResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportFindItemsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportFindItemsResult>
    {
        IPhotoImportFindItemsResult(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportFindItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportFindItemsResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportFindItemsResult2>
    {
        IPhotoImportFindItemsResult2(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportFindItemsResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportImportItemsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportImportItemsResult>
    {
        IPhotoImportImportItemsResult(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportImportItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportItem>
    {
        IPhotoImportItem(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportItem2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportItem2>
    {
        IPhotoImportItem2(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportItem2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportItemImportedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportItemImportedEventArgs>
    {
        IPhotoImportItemImportedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportItemImportedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportManagerStatics>
    {
        IPhotoImportManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportOperation>
    {
        IPhotoImportOperation(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSelectionChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSelectionChangedEventArgs>
    {
        IPhotoImportSelectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSelectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSession>,
        impl::require<Windows::Media::Import::IPhotoImportSession, Windows::Foundation::IClosable>
    {
        IPhotoImportSession(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSession2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSession2>
    {
        IPhotoImportSession2(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSession2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSidecar :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSidecar>
    {
        IPhotoImportSidecar(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSidecar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSource>
    {
        IPhotoImportSource(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportSourceStatics>
    {
        IPhotoImportSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportStorageMedium :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportStorageMedium>
    {
        IPhotoImportStorageMedium(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportStorageMedium(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoImportVideoSegment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoImportVideoSegment>
    {
        IPhotoImportVideoSegment(std::nullptr_t = nullptr) noexcept {}
        IPhotoImportVideoSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
