// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_1_H
#define WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    struct __declspec(empty_bases) IGattCharacteristic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristic>
    {
        IGattCharacteristic(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristic2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristic2>,
        impl::require<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        IGattCharacteristic2(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristic2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristic3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristic3>
    {
        IGattCharacteristic3(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristic3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicStatics>
    {
        IGattCharacteristicStatics(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicUuidsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicUuidsStatics>
    {
        IGattCharacteristicUuidsStatics(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicUuidsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicUuidsStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicUuidsStatics2>
    {
        IGattCharacteristicUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicUuidsStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicsResult>
    {
        IGattCharacteristicsResult(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattClientNotificationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattClientNotificationResult>
    {
        IGattClientNotificationResult(std::nullptr_t = nullptr) noexcept {}
        IGattClientNotificationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattClientNotificationResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattClientNotificationResult2>
    {
        IGattClientNotificationResult2(std::nullptr_t = nullptr) noexcept {}
        IGattClientNotificationResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDescriptor>
    {
        IGattDescriptor(std::nullptr_t = nullptr) noexcept {}
        IGattDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDescriptor2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDescriptor2>
    {
        IGattDescriptor2(std::nullptr_t = nullptr) noexcept {}
        IGattDescriptor2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDescriptorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDescriptorStatics>
    {
        IGattDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
        IGattDescriptorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDescriptorUuidsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDescriptorUuidsStatics>
    {
        IGattDescriptorUuidsStatics(std::nullptr_t = nullptr) noexcept {}
        IGattDescriptorUuidsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDescriptorsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDescriptorsResult>
    {
        IGattDescriptorsResult(std::nullptr_t = nullptr) noexcept {}
        IGattDescriptorsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceService :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceService>,
        impl::require<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService, Windows::Foundation::IClosable>
    {
        IGattDeviceService(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceService2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceService2>,
        impl::require<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2, Windows::Foundation::IClosable, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        IGattDeviceService2(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceService2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceService3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceService3>
    {
        IGattDeviceService3(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceService3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceServiceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceServiceStatics>
    {
        IGattDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceServiceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceServiceStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceServiceStatics2>
    {
        IGattDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceServiceStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattDeviceServicesResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattDeviceServicesResult>
    {
        IGattDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
        IGattDeviceServicesResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalCharacteristic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalCharacteristic>
    {
        IGattLocalCharacteristic(std::nullptr_t = nullptr) noexcept {}
        IGattLocalCharacteristic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalCharacteristicParameters :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalCharacteristicParameters>
    {
        IGattLocalCharacteristicParameters(std::nullptr_t = nullptr) noexcept {}
        IGattLocalCharacteristicParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalCharacteristicResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalCharacteristicResult>
    {
        IGattLocalCharacteristicResult(std::nullptr_t = nullptr) noexcept {}
        IGattLocalCharacteristicResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalDescriptor>
    {
        IGattLocalDescriptor(std::nullptr_t = nullptr) noexcept {}
        IGattLocalDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalDescriptorParameters :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalDescriptorParameters>
    {
        IGattLocalDescriptorParameters(std::nullptr_t = nullptr) noexcept {}
        IGattLocalDescriptorParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalDescriptorResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalDescriptorResult>
    {
        IGattLocalDescriptorResult(std::nullptr_t = nullptr) noexcept {}
        IGattLocalDescriptorResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattLocalService :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattLocalService>
    {
        IGattLocalService(std::nullptr_t = nullptr) noexcept {}
        IGattLocalService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattPresentationFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattPresentationFormat>
    {
        IGattPresentationFormat(std::nullptr_t = nullptr) noexcept {}
        IGattPresentationFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattPresentationFormatStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattPresentationFormatStatics>
    {
        IGattPresentationFormatStatics(std::nullptr_t = nullptr) noexcept {}
        IGattPresentationFormatStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattPresentationFormatStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattPresentationFormatStatics2>,
        impl::require<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        IGattPresentationFormatStatics2(std::nullptr_t = nullptr) noexcept {}
        IGattPresentationFormatStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattPresentationFormatTypesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattPresentationFormatTypesStatics>
    {
        IGattPresentationFormatTypesStatics(std::nullptr_t = nullptr) noexcept {}
        IGattPresentationFormatTypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattProtocolErrorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattProtocolErrorStatics>
    {
        IGattProtocolErrorStatics(std::nullptr_t = nullptr) noexcept {}
        IGattProtocolErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadClientCharacteristicConfigurationDescriptorResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        IGattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t = nullptr) noexcept {}
        IGattReadClientCharacteristicConfigurationDescriptorResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadClientCharacteristicConfigurationDescriptorResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        IGattReadClientCharacteristicConfigurationDescriptorResult2(std::nullptr_t = nullptr) noexcept {}
        IGattReadClientCharacteristicConfigurationDescriptorResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadRequest>
    {
        IGattReadRequest(std::nullptr_t = nullptr) noexcept {}
        IGattReadRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadRequestedEventArgs>
    {
        IGattReadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattReadRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadResult>
    {
        IGattReadResult(std::nullptr_t = nullptr) noexcept {}
        IGattReadResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReadResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReadResult2>
    {
        IGattReadResult2(std::nullptr_t = nullptr) noexcept {}
        IGattReadResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReliableWriteTransaction :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReliableWriteTransaction>
    {
        IGattReliableWriteTransaction(std::nullptr_t = nullptr) noexcept {}
        IGattReliableWriteTransaction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattReliableWriteTransaction2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattReliableWriteTransaction2>
    {
        IGattReliableWriteTransaction2(std::nullptr_t = nullptr) noexcept {}
        IGattReliableWriteTransaction2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattRequestStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattRequestStateChangedEventArgs>
    {
        IGattRequestStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattRequestStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProvider>
    {
        IGattServiceProvider(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderAdvertisementStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        IGattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderAdvertisementStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderAdvertisingParameters :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderAdvertisingParameters>
    {
        IGattServiceProviderAdvertisingParameters(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderAdvertisingParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderAdvertisingParameters2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderAdvertisingParameters2>
    {
        IGattServiceProviderAdvertisingParameters2(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderAdvertisingParameters2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderResult>
    {
        IGattServiceProviderResult(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderStatics>
    {
        IGattServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceUuidsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceUuidsStatics>
    {
        IGattServiceUuidsStatics(std::nullptr_t = nullptr) noexcept {}
        IGattServiceUuidsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceUuidsStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceUuidsStatics2>
    {
        IGattServiceUuidsStatics2(std::nullptr_t = nullptr) noexcept {}
        IGattServiceUuidsStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattSession>
    {
        IGattSession(std::nullptr_t = nullptr) noexcept {}
        IGattSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattSessionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattSessionStatics>
    {
        IGattSessionStatics(std::nullptr_t = nullptr) noexcept {}
        IGattSessionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattSessionStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattSessionStatusChangedEventArgs>
    {
        IGattSessionStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattSessionStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattSubscribedClient :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattSubscribedClient>
    {
        IGattSubscribedClient(std::nullptr_t = nullptr) noexcept {}
        IGattSubscribedClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattValueChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattValueChangedEventArgs>
    {
        IGattValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattWriteRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattWriteRequest>
    {
        IGattWriteRequest(std::nullptr_t = nullptr) noexcept {}
        IGattWriteRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattWriteRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattWriteRequestedEventArgs>
    {
        IGattWriteRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGattWriteRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattWriteResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattWriteResult>
    {
        IGattWriteResult(std::nullptr_t = nullptr) noexcept {}
        IGattWriteResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
