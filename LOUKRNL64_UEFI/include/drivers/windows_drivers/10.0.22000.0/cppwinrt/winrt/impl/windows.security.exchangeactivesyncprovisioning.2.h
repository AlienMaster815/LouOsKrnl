// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_2_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_2_H
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    struct __declspec(empty_bases) EasClientDeviceInformation : Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation,
        impl::require<EasClientDeviceInformation, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        EasClientDeviceInformation(std::nullptr_t) noexcept {}
        EasClientDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation(ptr, take_ownership_from_abi) {}
        EasClientDeviceInformation();
    };
    struct __declspec(empty_bases) EasClientSecurityPolicy : Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy
    {
        EasClientSecurityPolicy(std::nullptr_t) noexcept {}
        EasClientSecurityPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy(ptr, take_ownership_from_abi) {}
        EasClientSecurityPolicy();
    };
    struct __declspec(empty_bases) EasComplianceResults : Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults,
        impl::require<EasComplianceResults, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        EasComplianceResults(std::nullptr_t) noexcept {}
        EasComplianceResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults(ptr, take_ownership_from_abi) {}
    };
}
#endif
