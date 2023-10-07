// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Enumeration_2_H
#define WINRT_Windows_Devices_Enumeration_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct __declspec(empty_bases) DeviceAccessChangedEventArgs : Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs,
        impl::require<DeviceAccessChangedEventArgs, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
    {
        DeviceAccessChangedEventArgs(std::nullptr_t) noexcept {}
        DeviceAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceAccessInformation : Windows::Devices::Enumeration::IDeviceAccessInformation
    {
        DeviceAccessInformation(std::nullptr_t) noexcept {}
        DeviceAccessInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceAccessInformation(ptr, take_ownership_from_abi) {}
        static auto CreateFromId(param::hstring const& deviceId);
        static auto CreateFromDeviceClassId(winrt::guid const& deviceClassId);
        static auto CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
    };
    struct __declspec(empty_bases) DeviceConnectionChangeTriggerDetails : Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails
    {
        DeviceConnectionChangeTriggerDetails(std::nullptr_t) noexcept {}
        DeviceConnectionChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceDisconnectButtonClickedEventArgs : Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs
    {
        DeviceDisconnectButtonClickedEventArgs(std::nullptr_t) noexcept {}
        DeviceDisconnectButtonClickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceInformation : Windows::Devices::Enumeration::IDeviceInformation,
        impl::require<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformation2>
    {
        DeviceInformation(std::nullptr_t) noexcept {}
        DeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceInformation(ptr, take_ownership_from_abi) {}
        static auto CreateFromIdAsync(param::hstring const& deviceId);
        static auto CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties);
        static auto FindAllAsync();
        static auto FindAllAsync(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto FindAllAsync(param::hstring const& aqsFilter);
        static auto FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties);
        static auto CreateWatcher();
        static auto CreateWatcher(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto CreateWatcher(param::hstring const& aqsFilter);
        static auto CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties);
        static auto GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
        static auto CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
        static auto FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
        static auto CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
    };
    struct __declspec(empty_bases) DeviceInformationCollection : Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>
    {
        DeviceInformationCollection(std::nullptr_t) noexcept {}
        DeviceInformationCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceInformationCustomPairing : Windows::Devices::Enumeration::IDeviceInformationCustomPairing
    {
        DeviceInformationCustomPairing(std::nullptr_t) noexcept {}
        DeviceInformationCustomPairing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceInformationCustomPairing(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceInformationPairing : Windows::Devices::Enumeration::IDeviceInformationPairing,
        impl::require<DeviceInformationPairing, Windows::Devices::Enumeration::IDeviceInformationPairing2>
    {
        DeviceInformationPairing(std::nullptr_t) noexcept {}
        DeviceInformationPairing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceInformationPairing(ptr, take_ownership_from_abi) {}
        using Windows::Devices::Enumeration::IDeviceInformationPairing::PairAsync;
        using impl::consume_t<DeviceInformationPairing, Windows::Devices::Enumeration::IDeviceInformationPairing2>::PairAsync;
        static auto TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported);
        static auto TryRegisterForAllInboundPairingRequestsWithProtectionLevel(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel);
    };
    struct __declspec(empty_bases) DeviceInformationUpdate : Windows::Devices::Enumeration::IDeviceInformationUpdate,
        impl::require<DeviceInformationUpdate, Windows::Devices::Enumeration::IDeviceInformationUpdate2>
    {
        DeviceInformationUpdate(std::nullptr_t) noexcept {}
        DeviceInformationUpdate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceInformationUpdate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePairingRequestedEventArgs : Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs,
        impl::require<DevicePairingRequestedEventArgs, Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2>
    {
        DevicePairingRequestedEventArgs(std::nullptr_t) noexcept {}
        DevicePairingRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePairingResult : Windows::Devices::Enumeration::IDevicePairingResult
    {
        DevicePairingResult(std::nullptr_t) noexcept {}
        DevicePairingResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDevicePairingResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePicker : Windows::Devices::Enumeration::IDevicePicker
    {
        DevicePicker(std::nullptr_t) noexcept {}
        DevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDevicePicker(ptr, take_ownership_from_abi) {}
        DevicePicker();
    };
    struct __declspec(empty_bases) DevicePickerAppearance : Windows::Devices::Enumeration::IDevicePickerAppearance
    {
        DevicePickerAppearance(std::nullptr_t) noexcept {}
        DevicePickerAppearance(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDevicePickerAppearance(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePickerFilter : Windows::Devices::Enumeration::IDevicePickerFilter
    {
        DevicePickerFilter(std::nullptr_t) noexcept {}
        DevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDevicePickerFilter(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceSelectedEventArgs : Windows::Devices::Enumeration::IDeviceSelectedEventArgs
    {
        DeviceSelectedEventArgs(std::nullptr_t) noexcept {}
        DeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceSelectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceThumbnail : Windows::Storage::Streams::IRandomAccessStreamWithContentType
    {
        DeviceThumbnail(std::nullptr_t) noexcept {}
        DeviceThumbnail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceUnpairingResult : Windows::Devices::Enumeration::IDeviceUnpairingResult
    {
        DeviceUnpairingResult(std::nullptr_t) noexcept {}
        DeviceUnpairingResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceUnpairingResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceWatcher : Windows::Devices::Enumeration::IDeviceWatcher,
        impl::require<DeviceWatcher, Windows::Devices::Enumeration::IDeviceWatcher2>
    {
        DeviceWatcher(std::nullptr_t) noexcept {}
        DeviceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceWatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceWatcherEvent : Windows::Devices::Enumeration::IDeviceWatcherEvent
    {
        DeviceWatcherEvent(std::nullptr_t) noexcept {}
        DeviceWatcherEvent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceWatcherEvent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceWatcherTriggerDetails : Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails
    {
        DeviceWatcherTriggerDetails(std::nullptr_t) noexcept {}
        DeviceWatcherTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EnclosureLocation : Windows::Devices::Enumeration::IEnclosureLocation,
        impl::require<EnclosureLocation, Windows::Devices::Enumeration::IEnclosureLocation2>
    {
        EnclosureLocation(std::nullptr_t) noexcept {}
        EnclosureLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Enumeration::IEnclosureLocation(ptr, take_ownership_from_abi) {}
    };
}
#endif
