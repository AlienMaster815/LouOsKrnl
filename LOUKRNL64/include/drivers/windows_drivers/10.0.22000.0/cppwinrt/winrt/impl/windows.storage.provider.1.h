// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_1_H
#define WINRT_Windows_Storage_Provider_1_H
#include "winrt/impl/Windows.Storage.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    struct __declspec(empty_bases) ICachedFileUpdaterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterStatics>
    {
        ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI2>,
        impl::require<Windows::Storage::Provider::ICachedFileUpdaterUI2, Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest>
    {
        IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest2>,
        impl::require<Windows::Storage::Provider::IFileUpdateRequest2, Windows::Storage::Provider::IFileUpdateRequest>
    {
        IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestDeferral>
    {
        IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestedEventArgs>
    {
        IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderError :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderError>
    {
        IStorageProviderError(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderErrorCommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderErrorCommand>
    {
        IStorageProviderErrorCommand(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderErrorCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderErrorCommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderErrorCommandFactory>
    {
        IStorageProviderErrorCommandFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderErrorCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderErrorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderErrorFactory>
    {
        IStorageProviderErrorFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderErrorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderFileTypeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfo>
    {
        IStorageProviderFileTypeInfo(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderFileTypeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderFileTypeInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfoFactory>
    {
        IStorageProviderFileTypeInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderFileTypeInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderGetContentInfoForPathResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetContentInfoForPathResult>
    {
        IStorageProviderGetContentInfoForPathResult(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderGetContentInfoForPathResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderGetPathForContentUriResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetPathForContentUriResult>
    {
        IStorageProviderGetPathForContentUriResult(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderGetPathForContentUriResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderHandlerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderHandlerFactory>
    {
        IStorageProviderHandlerFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderHandlerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertiesStatics>
    {
        IStorageProviderItemPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemProperty :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemProperty>
    {
        IStorageProviderItemProperty(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertyDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertyDefinition>
    {
        IStorageProviderItemPropertyDefinition(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertyDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertySource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertySource>
    {
        IStorageProviderItemPropertySource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertySource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderPropertyCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderPropertyCapabilities>
    {
        IStorageProviderPropertyCapabilities(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderPropertyCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatus :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatus>
    {
        IStorageProviderStatus(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatusFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatusFactory>
    {
        IStorageProviderStatusFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatusFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatusSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatusSource>
    {
        IStorageProviderStatusSource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatusSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo>
    {
        IStorageProviderSyncRootInfo(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo2>
    {
        IStorageProviderSyncRootInfo2(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo3>
    {
        IStorageProviderSyncRootInfo3(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics>
    {
        IStorageProviderSyncRootManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics2>
    {
        IStorageProviderSyncRootManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderUriSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderUriSource>
    {
        IStorageProviderUriSource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderUriSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
