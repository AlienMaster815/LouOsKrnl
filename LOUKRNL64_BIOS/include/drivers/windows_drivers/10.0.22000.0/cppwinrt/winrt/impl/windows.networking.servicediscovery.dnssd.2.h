// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_ServiceDiscovery_Dnssd_2_H
#define WINRT_Windows_Networking_ServiceDiscovery_Dnssd_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd
{
    struct __declspec(empty_bases) DnssdRegistrationResult : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult,
        impl::require<DnssdRegistrationResult, Windows::Foundation::IStringable>
    {
        DnssdRegistrationResult(std::nullptr_t) noexcept {}
        DnssdRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult(ptr, take_ownership_from_abi) {}
        DnssdRegistrationResult();
    };
    struct __declspec(empty_bases) DnssdServiceInstance : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance,
        impl::require<DnssdServiceInstance, Windows::Foundation::IStringable>
    {
        DnssdServiceInstance(std::nullptr_t) noexcept {}
        DnssdServiceInstance(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance(ptr, take_ownership_from_abi) {}
        DnssdServiceInstance(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port);
    };
    struct __declspec(empty_bases) DnssdServiceInstanceCollection : Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
    {
        DnssdServiceInstanceCollection(std::nullptr_t) noexcept {}
        DnssdServiceInstanceCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DnssdServiceWatcher : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher
    {
        DnssdServiceWatcher(std::nullptr_t) noexcept {}
        DnssdServiceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher(ptr, take_ownership_from_abi) {}
    };
}
#endif
