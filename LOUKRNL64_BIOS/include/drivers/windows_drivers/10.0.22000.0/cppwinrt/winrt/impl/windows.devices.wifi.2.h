// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFi_2_H
#define WINRT_Windows_Devices_WiFi_2_H
#include "winrt/impl/Windows.Devices.WiFi.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFi
{
    struct __declspec(empty_bases) WiFiAdapter : Windows::Devices::WiFi::IWiFiAdapter,
        impl::require<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapter2>
    {
        WiFiAdapter(std::nullptr_t) noexcept {}
        WiFiAdapter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFi::IWiFiAdapter(ptr, take_ownership_from_abi) {}
        using Windows::Devices::WiFi::IWiFiAdapter::ConnectAsync;
        using impl::consume_t<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapter2>::ConnectAsync;
        static auto FindAllAdaptersAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto RequestAccessAsync();
    };
    struct __declspec(empty_bases) WiFiAvailableNetwork : Windows::Devices::WiFi::IWiFiAvailableNetwork
    {
        WiFiAvailableNetwork(std::nullptr_t) noexcept {}
        WiFiAvailableNetwork(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFi::IWiFiAvailableNetwork(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiConnectionResult : Windows::Devices::WiFi::IWiFiConnectionResult
    {
        WiFiConnectionResult(std::nullptr_t) noexcept {}
        WiFiConnectionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFi::IWiFiConnectionResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiNetworkReport : Windows::Devices::WiFi::IWiFiNetworkReport
    {
        WiFiNetworkReport(std::nullptr_t) noexcept {}
        WiFiNetworkReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFi::IWiFiNetworkReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiWpsConfigurationResult : Windows::Devices::WiFi::IWiFiWpsConfigurationResult
    {
        WiFiWpsConfigurationResult(std::nullptr_t) noexcept {}
        WiFiWpsConfigurationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFi::IWiFiWpsConfigurationResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
