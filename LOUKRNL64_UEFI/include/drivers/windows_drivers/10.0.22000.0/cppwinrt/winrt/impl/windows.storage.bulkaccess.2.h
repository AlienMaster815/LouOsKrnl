// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_BulkAccess_2_H
#define WINRT_Windows_Storage_BulkAccess_2_H
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
#include "winrt/impl/Windows.Storage.Search.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.BulkAccess.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::BulkAccess
{
    struct __declspec(empty_bases) FileInformation : Windows::Storage::BulkAccess::IStorageItemInformation,
        impl::require<FileInformation, Windows::Storage::IStorageItem, Windows::Storage::Streams::IRandomAccessStreamReference, Windows::Storage::Streams::IInputStreamReference, Windows::Storage::IStorageFile, Windows::Storage::IStorageItemProperties, Windows::Storage::IStorageItem2, Windows::Storage::IStorageItemPropertiesWithProvider, Windows::Storage::IStorageFilePropertiesWithAvailability, Windows::Storage::IStorageFile2>
    {
        FileInformation(std::nullptr_t) noexcept {}
        FileInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::BulkAccess::IStorageItemInformation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<FileInformation, Windows::Storage::IStorageFile>::OpenAsync;
        using impl::consume_t<FileInformation, Windows::Storage::IStorageFile2>::OpenAsync;
        using impl::consume_t<FileInformation, Windows::Storage::IStorageFile>::OpenTransactedWriteAsync;
        using impl::consume_t<FileInformation, Windows::Storage::IStorageFile2>::OpenTransactedWriteAsync;
    };
    struct __declspec(empty_bases) FileInformationFactory : Windows::Storage::BulkAccess::IFileInformationFactory
    {
        FileInformationFactory(std::nullptr_t) noexcept {}
        FileInformationFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::BulkAccess::IFileInformationFactory(ptr, take_ownership_from_abi) {}
        FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode);
        FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize);
        FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions);
        FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad);
    };
    struct __declspec(empty_bases) FolderInformation : Windows::Storage::BulkAccess::IStorageItemInformation,
        impl::require<FolderInformation, Windows::Storage::IStorageItem, Windows::Storage::IStorageFolder, Windows::Storage::IStorageItemProperties, Windows::Storage::Search::IStorageFolderQueryOperations, Windows::Storage::IStorageItem2, Windows::Storage::IStorageFolder2, Windows::Storage::IStorageItemPropertiesWithProvider>
    {
        FolderInformation(std::nullptr_t) noexcept {}
        FolderInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::BulkAccess::IStorageItemInformation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetFilesAsync;
        using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFilesAsync;
        using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetFoldersAsync;
        using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFoldersAsync;
        using impl::consume_t<FolderInformation, Windows::Storage::IStorageFolder>::GetItemsAsync;
        using impl::consume_t<FolderInformation, Windows::Storage::Search::IStorageFolderQueryOperations>::GetItemsAsync;
    };
}
#endif
