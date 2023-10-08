// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_Core_1_H
#define WINRT_Windows_Security_Authentication_Identity_Core_1_H
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core
{
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorAuthenticationManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorAuthenticationManager>
    {
        IMicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorAuthenticationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorAuthenticatorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorAuthenticatorStatics>
    {
        IMicrosoftAccountMultiFactorAuthenticatorStatics(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorAuthenticatorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorGetSessionsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorGetSessionsResult>
    {
        IMicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorGetSessionsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorOneTimeCodedInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorOneTimeCodedInfo>
    {
        IMicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorOneTimeCodedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorSessionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorSessionInfo>
    {
        IMicrosoftAccountMultiFactorSessionInfo(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
    {
        IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t = nullptr) noexcept {}
        IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
