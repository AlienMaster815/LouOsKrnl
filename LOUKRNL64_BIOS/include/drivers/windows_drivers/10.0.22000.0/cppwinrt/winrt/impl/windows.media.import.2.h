// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Import_2_H
#define WINRT_Windows_Media_Import_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Media.Import.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Import
{
    struct PhotoImportProgress
    {
        uint32_t ItemsImported;
        uint32_t TotalItemsToImport;
        uint64_t BytesImported;
        uint64_t TotalBytesToImport;
        double ImportProgress;
    };
    inline bool operator==(PhotoImportProgress const& left, PhotoImportProgress const& right) noexcept
    {
        return left.ItemsImported == right.ItemsImported && left.TotalItemsToImport == right.TotalItemsToImport && left.BytesImported == right.BytesImported && left.TotalBytesToImport == right.TotalBytesToImport && left.ImportProgress == right.ImportProgress;
    }
    inline bool operator!=(PhotoImportProgress const& left, PhotoImportProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) PhotoImportDeleteImportedItemsFromSourceResult : Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult
    {
        PhotoImportDeleteImportedItemsFromSourceResult(std::nullptr_t) noexcept {}
        PhotoImportDeleteImportedItemsFromSourceResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportFindItemsResult : Windows::Media::Import::IPhotoImportFindItemsResult,
        impl::require<PhotoImportFindItemsResult, Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        PhotoImportFindItemsResult(std::nullptr_t) noexcept {}
        PhotoImportFindItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportFindItemsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportImportItemsResult : Windows::Media::Import::IPhotoImportImportItemsResult
    {
        PhotoImportImportItemsResult(std::nullptr_t) noexcept {}
        PhotoImportImportItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportImportItemsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportItem : Windows::Media::Import::IPhotoImportItem,
        impl::require<PhotoImportItem, Windows::Media::Import::IPhotoImportItem2>
    {
        PhotoImportItem(std::nullptr_t) noexcept {}
        PhotoImportItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportItemImportedEventArgs : Windows::Media::Import::IPhotoImportItemImportedEventArgs
    {
        PhotoImportItemImportedEventArgs(std::nullptr_t) noexcept {}
        PhotoImportItemImportedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportItemImportedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct PhotoImportManager
    {
        PhotoImportManager() = delete;
        static auto IsSupportedAsync();
        static auto FindAllSourcesAsync();
        static auto GetPendingOperations();
    };
    struct __declspec(empty_bases) PhotoImportOperation : Windows::Media::Import::IPhotoImportOperation
    {
        PhotoImportOperation(std::nullptr_t) noexcept {}
        PhotoImportOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportSelectionChangedEventArgs : Windows::Media::Import::IPhotoImportSelectionChangedEventArgs
    {
        PhotoImportSelectionChangedEventArgs(std::nullptr_t) noexcept {}
        PhotoImportSelectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportSelectionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportSession : Windows::Media::Import::IPhotoImportSession,
        impl::require<PhotoImportSession, Windows::Media::Import::IPhotoImportSession2>
    {
        PhotoImportSession(std::nullptr_t) noexcept {}
        PhotoImportSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportSidecar : Windows::Media::Import::IPhotoImportSidecar
    {
        PhotoImportSidecar(std::nullptr_t) noexcept {}
        PhotoImportSidecar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportSidecar(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportSource : Windows::Media::Import::IPhotoImportSource
    {
        PhotoImportSource(std::nullptr_t) noexcept {}
        PhotoImportSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportSource(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& sourceId);
        static auto FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder);
    };
    struct __declspec(empty_bases) PhotoImportStorageMedium : Windows::Media::Import::IPhotoImportStorageMedium
    {
        PhotoImportStorageMedium(std::nullptr_t) noexcept {}
        PhotoImportStorageMedium(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportStorageMedium(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoImportVideoSegment : Windows::Media::Import::IPhotoImportVideoSegment
    {
        PhotoImportVideoSegment(std::nullptr_t) noexcept {}
        PhotoImportVideoSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Import::IPhotoImportVideoSegment(ptr, take_ownership_from_abi) {}
    };
}
#endif
