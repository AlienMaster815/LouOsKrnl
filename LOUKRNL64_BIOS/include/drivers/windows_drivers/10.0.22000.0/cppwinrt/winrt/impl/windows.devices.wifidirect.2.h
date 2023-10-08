// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_2_H
#define WINRT_Windows_Devices_WiFiDirect_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect
{
    struct __declspec(empty_bases) WiFiDirectAdvertisement : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement,
        impl::require<WiFiDirectAdvertisement, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
    {
        WiFiDirectAdvertisement(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectAdvertisementPublisher : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher
    {
        WiFiDirectAdvertisementPublisher(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher(ptr, take_ownership_from_abi) {}
        WiFiDirectAdvertisementPublisher();
    };
    struct __declspec(empty_bases) WiFiDirectAdvertisementPublisherStatusChangedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
    {
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectConnectionListener : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener
    {
        WiFiDirectConnectionListener(std::nullptr_t) noexcept {}
        WiFiDirectConnectionListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionListener();
    };
    struct __declspec(empty_bases) WiFiDirectConnectionParameters : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters,
        impl::require<WiFiDirectConnectionParameters, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2, Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        WiFiDirectConnectionParameters(std::nullptr_t) noexcept {}
        WiFiDirectConnectionParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionParameters();
        static auto GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod);
    };
    struct __declspec(empty_bases) WiFiDirectConnectionRequest : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest
    {
        WiFiDirectConnectionRequest(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectConnectionRequestedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs
    {
        WiFiDirectConnectionRequestedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectDevice : Windows::Devices::WiFiDirect::IWiFiDirectDevice
    {
        WiFiDirectDevice(std::nullptr_t) noexcept {}
        WiFiDirectDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type);
        static auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters);
    };
    struct __declspec(empty_bases) WiFiDirectInformationElement : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement
    {
        WiFiDirectInformationElement(std::nullptr_t) noexcept {}
        WiFiDirectInformationElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement(ptr, take_ownership_from_abi) {}
        WiFiDirectInformationElement();
        static auto CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
        static auto CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation);
    };
    struct __declspec(empty_bases) WiFiDirectLegacySettings : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings
    {
        WiFiDirectLegacySettings(std::nullptr_t) noexcept {}
        WiFiDirectLegacySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings(ptr, take_ownership_from_abi) {}
    };
}
#endif
