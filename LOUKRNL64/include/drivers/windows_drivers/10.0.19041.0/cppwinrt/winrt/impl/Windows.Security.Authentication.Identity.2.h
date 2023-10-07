// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_2_H
#define WINRT_Windows_Security_Authentication_Identity_2_H
#include "winrt/impl/Windows.Security.Authentication.Identity.1.h"
namespace winrt::Windows::Security::Authentication::Identity
{
    struct __declspec(empty_bases) EnterpriseKeyCredentialRegistrationInfo : Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo
    {
        EnterpriseKeyCredentialRegistrationInfo(std::nullptr_t) noexcept {}
        EnterpriseKeyCredentialRegistrationInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EnterpriseKeyCredentialRegistrationManager : Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager
    {
        EnterpriseKeyCredentialRegistrationManager(std::nullptr_t) noexcept {}
        EnterpriseKeyCredentialRegistrationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
    };
}
#endif
