// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_2_H
#define WINRT_Windows_Storage_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    struct CachedFileUpdater
    {
        CachedFileUpdater() = delete;
        static auto SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options);
    };
    struct __declspec(empty_bases) CachedFileUpdaterUI : Windows::Storage::Provider::ICachedFileUpdaterUI,
        impl::require<CachedFileUpdaterUI, Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        CachedFileUpdaterUI(std::nullptr_t) noexcept {}
        CachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::ICachedFileUpdaterUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileUpdateRequest : Windows::Storage::Provider::IFileUpdateRequest,
        impl::require<FileUpdateRequest, Windows::Storage::Provider::IFileUpdateRequest2>
    {
        FileUpdateRequest(std::nullptr_t) noexcept {}
        FileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileUpdateRequestDeferral : Windows::Storage::Provider::IFileUpdateRequestDeferral
    {
        FileUpdateRequestDeferral(std::nullptr_t) noexcept {}
        FileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileUpdateRequestedEventArgs : Windows::Storage::Provider::IFileUpdateRequestedEventArgs
    {
        FileUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
        FileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IFileUpdateRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorageProviderError : Windows::Storage::Provider::IStorageProviderError
    {
        StorageProviderError(std::nullptr_t) noexcept {}
        StorageProviderError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderError(ptr, take_ownership_from_abi) {}
        StorageProviderError(param::hstring const& id, param::hstring const& title, param::hstring const& message);
    };
    struct __declspec(empty_bases) StorageProviderErrorCommand : Windows::Storage::Provider::IStorageProviderErrorCommand
    {
        StorageProviderErrorCommand(std::nullptr_t) noexcept {}
        StorageProviderErrorCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderErrorCommand(ptr, take_ownership_from_abi) {}
        StorageProviderErrorCommand(param::hstring const& label, Windows::Foundation::Uri const& actionUri);
    };
    struct __declspec(empty_bases) StorageProviderFileTypeInfo : Windows::Storage::Provider::IStorageProviderFileTypeInfo
    {
        StorageProviderFileTypeInfo(std::nullptr_t) noexcept {}
        StorageProviderFileTypeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderFileTypeInfo(ptr, take_ownership_from_abi) {}
        StorageProviderFileTypeInfo(param::hstring const& fileExtension, param::hstring const& iconResource);
    };
    struct __declspec(empty_bases) StorageProviderGetContentInfoForPathResult : Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult
    {
        StorageProviderGetContentInfoForPathResult(std::nullptr_t) noexcept {}
        StorageProviderGetContentInfoForPathResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetContentInfoForPathResult();
    };
    struct __declspec(empty_bases) StorageProviderGetPathForContentUriResult : Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult
    {
        StorageProviderGetPathForContentUriResult(std::nullptr_t) noexcept {}
        StorageProviderGetPathForContentUriResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetPathForContentUriResult();
    };
    struct StorageProviderItemProperties
    {
        StorageProviderItemProperties() = delete;
        static auto SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties);
    };
    struct __declspec(empty_bases) StorageProviderItemProperty : Windows::Storage::Provider::IStorageProviderItemProperty
    {
        StorageProviderItemProperty(std::nullptr_t) noexcept {}
        StorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderItemProperty(ptr, take_ownership_from_abi) {}
        StorageProviderItemProperty();
    };
    struct __declspec(empty_bases) StorageProviderItemPropertyDefinition : Windows::Storage::Provider::IStorageProviderItemPropertyDefinition
    {
        StorageProviderItemPropertyDefinition(std::nullptr_t) noexcept {}
        StorageProviderItemPropertyDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderItemPropertyDefinition(ptr, take_ownership_from_abi) {}
        StorageProviderItemPropertyDefinition();
    };
    struct __declspec(empty_bases) StorageProviderStatus : Windows::Storage::Provider::IStorageProviderStatus
    {
        StorageProviderStatus(std::nullptr_t) noexcept {}
        StorageProviderStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderStatus(ptr, take_ownership_from_abi) {}
        StorageProviderStatus(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message);
        StorageProviderStatus(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message, param::iterable<Windows::Storage::Provider::StorageProviderError> const& errorMessages);
    };
    struct __declspec(empty_bases) StorageProviderSyncRootInfo : Windows::Storage::Provider::IStorageProviderSyncRootInfo,
        impl::require<StorageProviderSyncRootInfo, Windows::Storage::Provider::IStorageProviderSyncRootInfo2, Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        StorageProviderSyncRootInfo(std::nullptr_t) noexcept {}
        StorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Provider::IStorageProviderSyncRootInfo(ptr, take_ownership_from_abi) {}
        StorageProviderSyncRootInfo();
    };
    struct StorageProviderSyncRootManager
    {
        StorageProviderSyncRootManager() = delete;
        static auto Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation);
        static auto Unregister(param::hstring const& id);
        static auto GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder);
        static auto GetSyncRootInformationForId(param::hstring const& id);
        static auto GetCurrentSyncRoots();
        static auto IsSupported();
    };
}
#endif
