// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_1_H
#define WINRT_Windows_Devices_WiFiDirect_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect
{
    struct __declspec(empty_bases) IWiFiDirectAdvertisement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisement>
    {
        IWiFiDirectAdvertisement(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectAdvertisement2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisement2>
    {
        IWiFiDirectAdvertisement2(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectAdvertisement2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectAdvertisementPublisher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisementPublisher>
    {
        IWiFiDirectAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectAdvertisementPublisher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectAdvertisementPublisherStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
    {
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionListener :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionListener>
    {
        IWiFiDirectConnectionListener(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionParameters :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParameters>
    {
        IWiFiDirectConnectionParameters(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionParameters2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParameters2>
    {
        IWiFiDirectConnectionParameters2(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionParameters2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionParametersStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionParametersStatics>
    {
        IWiFiDirectConnectionParametersStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionParametersStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionRequest>,
        impl::require<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest, Windows::Foundation::IClosable>
    {
        IWiFiDirectConnectionRequest(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectConnectionRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectConnectionRequestedEventArgs>
    {
        IWiFiDirectConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectConnectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDevice>,
        impl::require<Windows::Devices::WiFiDirect::IWiFiDirectDevice, Windows::Foundation::IClosable>
    {
        IWiFiDirectDevice(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDeviceStatics>
    {
        IWiFiDirectDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectDeviceStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectDeviceStatics2>
    {
        IWiFiDirectDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectDeviceStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectInformationElement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectInformationElement>
    {
        IWiFiDirectInformationElement(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectInformationElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectInformationElementStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectInformationElementStatics>
    {
        IWiFiDirectInformationElementStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectInformationElementStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectLegacySettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectLegacySettings>
    {
        IWiFiDirectLegacySettings(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectLegacySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
