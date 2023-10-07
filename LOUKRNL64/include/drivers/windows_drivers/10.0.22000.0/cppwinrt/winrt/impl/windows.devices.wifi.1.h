// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFi_1_H
#define WINRT_Windows_Devices_WiFi_1_H
#include "winrt/impl/Windows.Devices.WiFi.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFi
{
    struct __declspec(empty_bases) IWiFiAdapter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiAdapter>
    {
        IWiFiAdapter(std::nullptr_t = nullptr) noexcept {}
        IWiFiAdapter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiAdapter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiAdapter2>
    {
        IWiFiAdapter2(std::nullptr_t = nullptr) noexcept {}
        IWiFiAdapter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiAdapterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiAdapterStatics>
    {
        IWiFiAdapterStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiAdapterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiAvailableNetwork :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiAvailableNetwork>
    {
        IWiFiAvailableNetwork(std::nullptr_t = nullptr) noexcept {}
        IWiFiAvailableNetwork(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiConnectionResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiConnectionResult>
    {
        IWiFiConnectionResult(std::nullptr_t = nullptr) noexcept {}
        IWiFiConnectionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiNetworkReport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiNetworkReport>
    {
        IWiFiNetworkReport(std::nullptr_t = nullptr) noexcept {}
        IWiFiNetworkReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiWpsConfigurationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiWpsConfigurationResult>
    {
        IWiFiWpsConfigurationResult(std::nullptr_t = nullptr) noexcept {}
        IWiFiWpsConfigurationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
