// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_2_H
#define WINRT_Windows_Networking_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct __declspec(empty_bases) EndpointPair : Windows::Networking::IEndpointPair
    {
        EndpointPair(std::nullptr_t) noexcept {}
        EndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::IEndpointPair(ptr, take_ownership_from_abi) {}
        EndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
    };
    struct __declspec(empty_bases) HostName : Windows::Networking::IHostName,
        impl::require<HostName, Windows::Foundation::IStringable>
    {
        HostName(std::nullptr_t) noexcept {}
        HostName(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::IHostName(ptr, take_ownership_from_abi) {}
        explicit HostName(param::hstring const& hostName);
        static auto Compare(param::hstring const& value1, param::hstring const& value2);
    };
}
#endif
