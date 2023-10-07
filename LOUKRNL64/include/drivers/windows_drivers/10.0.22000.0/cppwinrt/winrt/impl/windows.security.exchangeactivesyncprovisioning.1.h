// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    struct __declspec(empty_bases) IEasClientDeviceInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEasClientDeviceInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation2>,
        impl::require<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEasClientSecurityPolicy :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientSecurityPolicy>
    {
        IEasClientSecurityPolicy(std::nullptr_t = nullptr) noexcept {}
        IEasClientSecurityPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEasComplianceResults :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasComplianceResults>
    {
        IEasComplianceResults(std::nullptr_t = nullptr) noexcept {}
        IEasComplianceResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEasComplianceResults2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasComplianceResults2>,
        impl::require<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        IEasComplianceResults2(std::nullptr_t = nullptr) noexcept {}
        IEasComplianceResults2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
