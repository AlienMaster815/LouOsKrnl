// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Enumeration_1_H
#define WINRT_Windows_Devices_Enumeration_1_H
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct __declspec(empty_bases) IDeviceAccessChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceAccessChangedEventArgs>
    {
        IDeviceAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeviceAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceAccessChangedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceAccessChangedEventArgs2>,
        impl::require<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
    {
        IDeviceAccessChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IDeviceAccessChangedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceAccessInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceAccessInformation>
    {
        IDeviceAccessInformation(std::nullptr_t = nullptr) noexcept {}
        IDeviceAccessInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceAccessInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceAccessInformationStatics>
    {
        IDeviceAccessInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IDeviceAccessInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceConnectionChangeTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceConnectionChangeTriggerDetails>
    {
        IDeviceConnectionChangeTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceConnectionChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceDisconnectButtonClickedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceDisconnectButtonClickedEventArgs>
    {
        IDeviceDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeviceDisconnectButtonClickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformation>
    {
        IDeviceInformation(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformation2>
    {
        IDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationCustomPairing :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationCustomPairing>
    {
        IDeviceInformationCustomPairing(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationCustomPairing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationPairing :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationPairing>
    {
        IDeviceInformationPairing(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationPairing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationPairing2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationPairing2>
    {
        IDeviceInformationPairing2(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationPairing2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationPairingStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationPairingStatics>
    {
        IDeviceInformationPairingStatics(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationPairingStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationPairingStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationPairingStatics2>
    {
        IDeviceInformationPairingStatics2(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationPairingStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationStatics>
    {
        IDeviceInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationStatics2>
    {
        IDeviceInformationStatics2(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationUpdate :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationUpdate>
    {
        IDeviceInformationUpdate(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationUpdate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceInformationUpdate2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceInformationUpdate2>
    {
        IDeviceInformationUpdate2(std::nullptr_t = nullptr) noexcept {}
        IDeviceInformationUpdate2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingRequestedEventArgs>
    {
        IDevicePairingRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingRequestedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingRequestedEventArgs2>
    {
        IDevicePairingRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingRequestedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingResult>
    {
        IDevicePairingResult(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingSettings>
    {
        IDevicePairingSettings(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePicker :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePicker>
    {
        IDevicePicker(std::nullptr_t = nullptr) noexcept {}
        IDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePickerAppearance :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePickerAppearance>
    {
        IDevicePickerAppearance(std::nullptr_t = nullptr) noexcept {}
        IDevicePickerAppearance(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePickerFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePickerFilter>
    {
        IDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
        IDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceSelectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceSelectedEventArgs>
    {
        IDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceUnpairingResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceUnpairingResult>
    {
        IDeviceUnpairingResult(std::nullptr_t = nullptr) noexcept {}
        IDeviceUnpairingResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceWatcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceWatcher>
    {
        IDeviceWatcher(std::nullptr_t = nullptr) noexcept {}
        IDeviceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceWatcher2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceWatcher2>
    {
        IDeviceWatcher2(std::nullptr_t = nullptr) noexcept {}
        IDeviceWatcher2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceWatcherEvent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceWatcherEvent>
    {
        IDeviceWatcherEvent(std::nullptr_t = nullptr) noexcept {}
        IDeviceWatcherEvent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceWatcherTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceWatcherTriggerDetails>
    {
        IDeviceWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceWatcherTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEnclosureLocation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEnclosureLocation>
    {
        IEnclosureLocation(std::nullptr_t = nullptr) noexcept {}
        IEnclosureLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEnclosureLocation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEnclosureLocation2>,
        impl::require<Windows::Devices::Enumeration::IEnclosureLocation2, Windows::Devices::Enumeration::IEnclosureLocation>
    {
        IEnclosureLocation2(std::nullptr_t = nullptr) noexcept {}
        IEnclosureLocation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
