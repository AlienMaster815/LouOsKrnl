// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_Core_2_H
#define WINRT_Windows_Security_Authentication_Identity_Core_2_H
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core
{
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorAuthenticationManager : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager
    {
        MicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorAuthenticationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorGetSessionsResult : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult
    {
        MicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorGetSessionsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorOneTimeCodedInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo
    {
        MicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorOneTimeCodedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorSessionInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo
    {
        MicrosoftAccountMultiFactorSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
    {
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
