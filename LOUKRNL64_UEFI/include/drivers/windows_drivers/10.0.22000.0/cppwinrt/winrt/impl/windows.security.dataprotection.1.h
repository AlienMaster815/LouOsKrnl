// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_DataProtection_1_H
#define WINRT_Windows_Security_DataProtection_1_H
#include "winrt/impl/Windows.Security.DataProtection.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::DataProtection
{
    struct __declspec(empty_bases) IUserDataAvailabilityStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAvailabilityStateChangedEventArgs>
    {
        IUserDataAvailabilityStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataAvailabilityStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataBufferUnprotectResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataBufferUnprotectResult>
    {
        IUserDataBufferUnprotectResult(std::nullptr_t = nullptr) noexcept {}
        IUserDataBufferUnprotectResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataProtectionManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataProtectionManager>
    {
        IUserDataProtectionManager(std::nullptr_t = nullptr) noexcept {}
        IUserDataProtectionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataProtectionManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataProtectionManagerStatics>
    {
        IUserDataProtectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IUserDataProtectionManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataStorageItemProtectionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataStorageItemProtectionInfo>
    {
        IUserDataStorageItemProtectionInfo(std::nullptr_t = nullptr) noexcept {}
        IUserDataStorageItemProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
