// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_DataProtection_2_H
#define WINRT_Windows_Security_DataProtection_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.DataProtection.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::DataProtection
{
    struct __declspec(empty_bases) UserDataAvailabilityStateChangedEventArgs : Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs
    {
        UserDataAvailabilityStateChangedEventArgs(std::nullptr_t) noexcept {}
        UserDataAvailabilityStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserDataBufferUnprotectResult : Windows::Security::DataProtection::IUserDataBufferUnprotectResult
    {
        UserDataBufferUnprotectResult(std::nullptr_t) noexcept {}
        UserDataBufferUnprotectResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::DataProtection::IUserDataBufferUnprotectResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserDataProtectionManager : Windows::Security::DataProtection::IUserDataProtectionManager
    {
        UserDataProtectionManager(std::nullptr_t) noexcept {}
        UserDataProtectionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::DataProtection::IUserDataProtectionManager(ptr, take_ownership_from_abi) {}
        static auto TryGetDefault();
        static auto TryGetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) UserDataStorageItemProtectionInfo : Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo
    {
        UserDataStorageItemProtectionInfo(std::nullptr_t) noexcept {}
        UserDataStorageItemProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
