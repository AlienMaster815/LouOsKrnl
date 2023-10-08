// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_0_H
#define WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_0_H
namespace winrt::Windows::Devices::Bluetooth
{
    enum class BluetoothCacheMode : int32_t;
    struct BluetoothDeviceId;
    enum class BluetoothError : int32_t;
    struct BluetoothLEDevice;
}
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceAccessInformation;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    enum class GattCharacteristicProperties : uint32_t
    {
        None = 0,
        Broadcast = 0x1,
        Read = 0x2,
        WriteWithoutResponse = 0x4,
        Write = 0x8,
        Notify = 0x10,
        Indicate = 0x20,
        AuthenticatedSignedWrites = 0x40,
        ExtendedProperties = 0x80,
        ReliableWrites = 0x100,
        WritableAuxiliaries = 0x200,
    };
    enum class GattClientCharacteristicConfigurationDescriptorValue : int32_t
    {
        None = 0,
        Notify = 1,
        Indicate = 2,
    };
    enum class GattCommunicationStatus : int32_t
    {
        Success = 0,
        Unreachable = 1,
        ProtocolError = 2,
        AccessDenied = 3,
    };
    enum class GattOpenStatus : int32_t
    {
        Unspecified = 0,
        Success = 1,
        AlreadyOpened = 2,
        NotFound = 3,
        SharingViolation = 4,
        AccessDenied = 5,
    };
    enum class GattProtectionLevel : int32_t
    {
        Plain = 0,
        AuthenticationRequired = 1,
        EncryptionRequired = 2,
        EncryptionAndAuthenticationRequired = 3,
    };
    enum class GattRequestState : int32_t
    {
        Pending = 0,
        Completed = 1,
        Canceled = 2,
    };
    enum class GattServiceProviderAdvertisementStatus : int32_t
    {
        Created = 0,
        Stopped = 1,
        Started = 2,
        Aborted = 3,
        StartedWithoutAllAdvertisementData = 4,
    };
    enum class GattSessionStatus : int32_t
    {
        Closed = 0,
        Active = 1,
    };
    enum class GattSharingMode : int32_t
    {
        Unspecified = 0,
        Exclusive = 1,
        SharedReadOnly = 2,
        SharedReadAndWrite = 3,
    };
    enum class GattWriteOption : int32_t
    {
        WriteWithResponse = 0,
        WriteWithoutResponse = 1,
    };
    struct IGattCharacteristic;
    struct IGattCharacteristic2;
    struct IGattCharacteristic3;
    struct IGattCharacteristicStatics;
    struct IGattCharacteristicUuidsStatics;
    struct IGattCharacteristicUuidsStatics2;
    struct IGattCharacteristicsResult;
    struct IGattClientNotificationResult;
    struct IGattClientNotificationResult2;
    struct IGattDescriptor;
    struct IGattDescriptor2;
    struct IGattDescriptorStatics;
    struct IGattDescriptorUuidsStatics;
    struct IGattDescriptorsResult;
    struct IGattDeviceService;
    struct IGattDeviceService2;
    struct IGattDeviceService3;
    struct IGattDeviceServiceStatics;
    struct IGattDeviceServiceStatics2;
    struct IGattDeviceServicesResult;
    struct IGattLocalCharacteristic;
    struct IGattLocalCharacteristicParameters;
    struct IGattLocalCharacteristicResult;
    struct IGattLocalDescriptor;
    struct IGattLocalDescriptorParameters;
    struct IGattLocalDescriptorResult;
    struct IGattLocalService;
    struct IGattPresentationFormat;
    struct IGattPresentationFormatStatics;
    struct IGattPresentationFormatStatics2;
    struct IGattPresentationFormatTypesStatics;
    struct IGattProtocolErrorStatics;
    struct IGattReadClientCharacteristicConfigurationDescriptorResult;
    struct IGattReadClientCharacteristicConfigurationDescriptorResult2;
    struct IGattReadRequest;
    struct IGattReadRequestedEventArgs;
    struct IGattReadResult;
    struct IGattReadResult2;
    struct IGattReliableWriteTransaction;
    struct IGattReliableWriteTransaction2;
    struct IGattRequestStateChangedEventArgs;
    struct IGattServiceProvider;
    struct IGattServiceProviderAdvertisementStatusChangedEventArgs;
    struct IGattServiceProviderAdvertisingParameters;
    struct IGattServiceProviderAdvertisingParameters2;
    struct IGattServiceProviderResult;
    struct IGattServiceProviderStatics;
    struct IGattServiceUuidsStatics;
    struct IGattServiceUuidsStatics2;
    struct IGattSession;
    struct IGattSessionStatics;
    struct IGattSessionStatusChangedEventArgs;
    struct IGattSubscribedClient;
    struct IGattValueChangedEventArgs;
    struct IGattWriteRequest;
    struct IGattWriteRequestedEventArgs;
    struct IGattWriteResult;
    struct GattCharacteristic;
    struct GattCharacteristicUuids;
    struct GattCharacteristicsResult;
    struct GattClientNotificationResult;
    struct GattDescriptor;
    struct GattDescriptorUuids;
    struct GattDescriptorsResult;
    struct GattDeviceService;
    struct GattDeviceServicesResult;
    struct GattLocalCharacteristic;
    struct GattLocalCharacteristicParameters;
    struct GattLocalCharacteristicResult;
    struct GattLocalDescriptor;
    struct GattLocalDescriptorParameters;
    struct GattLocalDescriptorResult;
    struct GattLocalService;
    struct GattPresentationFormat;
    struct GattPresentationFormatTypes;
    struct GattProtocolError;
    struct GattReadClientCharacteristicConfigurationDescriptorResult;
    struct GattReadRequest;
    struct GattReadRequestedEventArgs;
    struct GattReadResult;
    struct GattReliableWriteTransaction;
    struct GattRequestStateChangedEventArgs;
    struct GattServiceProvider;
    struct GattServiceProviderAdvertisementStatusChangedEventArgs;
    struct GattServiceProviderAdvertisingParameters;
    struct GattServiceProviderResult;
    struct GattServiceUuids;
    struct GattSession;
    struct GattSessionStatusChangedEventArgs;
    struct GattSubscribedClient;
    struct GattValueChangedEventArgs;
    struct GattWriteRequest;
    struct GattWriteRequestedEventArgs;
    struct GattWriteResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic3" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicUuidsStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicUuidsStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattClientNotificationResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattClientNotificationResult2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptor" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptor2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorUuidsStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorsResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService3" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServiceStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServiceStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServicesResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristic" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristicParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristicResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptor" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptorParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptorResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalService" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormat" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatTypesStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattProtocolErrorStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadClientCharacteristicConfigurationDescriptorResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadClientCharacteristicConfigurationDescriptorResult2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadRequest" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadResult2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReliableWriteTransaction" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReliableWriteTransaction2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattRequestStateChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProvider" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisementStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisingParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisingParameters2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceUuidsStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceUuidsStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSession" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSessionStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSessionStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSubscribedClient" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattValueChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteRequest" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristic" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicUuids" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattClientNotificationResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptor" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorUuids" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorsResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceServicesResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristic" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptor" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalService" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormat" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormatTypes" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattProtocolError" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadClientCharacteristicConfigurationDescriptorResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequest" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReliableWriteTransaction" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattRequestStateChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProvider" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisementStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisingParameters" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceUuids" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSession" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSessionStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSubscribedClient" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequest" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteResult" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicProperties" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattClientCharacteristicConfigurationDescriptorValue" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCommunicationStatus" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattOpenStatus" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattProtectionLevel" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattRequestState" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisementStatus" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSessionStatus" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSharingMode" };
    };
    template <> struct name<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteOption" };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        static constexpr guid value{ 0x59CB50C1,0x5934,0x4F68,{ 0xA1,0x98,0xEB,0x86,0x4F,0xA4,0x4E,0x6B } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        static constexpr guid value{ 0xAE1AB578,0xEC06,0x4764,{ 0xB7,0x80,0x98,0x35,0xA1,0xD3,0x5D,0x6E } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        static constexpr guid value{ 0x3F3C663E,0x93D4,0x406B,{ 0xB8,0x17,0xDB,0x81,0xF8,0xED,0x53,0xB3 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        static constexpr guid value{ 0x59CB50C3,0x5934,0x4F68,{ 0xA1,0x98,0xEB,0x86,0x4F,0xA4,0x4E,0x6B } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        static constexpr guid value{ 0x58FA4586,0xB1DE,0x470C,{ 0xB7,0xDE,0x0D,0x11,0xFF,0x44,0xF4,0xB7 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        static constexpr guid value{ 0x1855B425,0xD46E,0x4A2C,{ 0x9C,0x3F,0xED,0x6D,0xEA,0x29,0xE7,0xBE } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        static constexpr guid value{ 0x1194945C,0xB257,0x4F3E,{ 0x9D,0xB7,0xF6,0x8B,0xC9,0xA9,0xAE,0xF2 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        static constexpr guid value{ 0x506D5599,0x0112,0x419A,{ 0x8E,0x3B,0xAE,0x21,0xAF,0xAB,0xD2,0xC2 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        static constexpr guid value{ 0x8FAEC497,0x45E0,0x497E,{ 0x95,0x82,0x29,0xA1,0xFE,0x28,0x1A,0xD5 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        static constexpr guid value{ 0x92055F2B,0x8084,0x4344,{ 0xB4,0xC2,0x28,0x4D,0xE1,0x9A,0x85,0x06 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        static constexpr guid value{ 0x8F563D39,0xD630,0x406C,{ 0xBA,0x11,0x10,0xCD,0xD1,0x6B,0x0E,0x5E } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        static constexpr guid value{ 0x92055F2D,0x8084,0x4344,{ 0xB4,0xC2,0x28,0x4D,0xE1,0x9A,0x85,0x06 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        static constexpr guid value{ 0xA6F862CE,0x9CFC,0x42F1,{ 0x91,0x85,0xFF,0x37,0xB7,0x51,0x81,0xD3 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        static constexpr guid value{ 0x9BC091F3,0x95E7,0x4489,{ 0x8D,0x25,0xFF,0x81,0x95,0x5A,0x57,0xB9 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        static constexpr guid value{ 0xAC7B7C05,0xB33C,0x47CF,{ 0x99,0x0F,0x6B,0x8F,0x55,0x77,0xDF,0x71 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        static constexpr guid value{ 0xFC54520B,0x0B0D,0x4708,{ 0xBA,0xE0,0x9F,0xFD,0x94,0x89,0xBC,0x59 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        static constexpr guid value{ 0xB293A950,0x0C53,0x437C,{ 0xA9,0xB3,0x5C,0x32,0x10,0xC6,0xE5,0x69 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        static constexpr guid value{ 0x196D0022,0xFAAD,0x45DC,{ 0xAE,0x5B,0x2A,0xC3,0x18,0x4E,0x84,0xDB } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        static constexpr guid value{ 0x0604186E,0x24A6,0x4B0D,{ 0xA2,0xF2,0x30,0xCC,0x01,0x54,0x5D,0x25 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        static constexpr guid value{ 0x171DD3EE,0x016D,0x419D,{ 0x83,0x8A,0x57,0x6C,0xF4,0x75,0xA3,0xD8 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        static constexpr guid value{ 0xAEDE376D,0x5412,0x4D74,{ 0x92,0xA8,0x8D,0xEB,0x85,0x26,0x82,0x9C } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        static constexpr guid value{ 0xFAF73DB4,0x4CFF,0x44C7,{ 0x84,0x45,0x04,0x0E,0x6E,0xAD,0x00,0x63 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        static constexpr guid value{ 0x7975DE9B,0x0170,0x4397,{ 0x96,0x66,0x92,0xF8,0x63,0xF1,0x2E,0xE6 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        static constexpr guid value{ 0xF48EBE06,0x789D,0x4A4B,{ 0x86,0x52,0xBD,0x01,0x7B,0x5D,0x2F,0xC6 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        static constexpr guid value{ 0x5FDEDE6A,0xF3C1,0x4B66,{ 0x8C,0x4B,0xE3,0xD2,0x29,0x3B,0x40,0xE9 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        static constexpr guid value{ 0x375791BE,0x321F,0x4366,{ 0xBF,0xC1,0x3B,0xC6,0xB8,0x2C,0x79,0xF8 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        static constexpr guid value{ 0xF513E258,0xF7F7,0x4902,{ 0xB8,0x03,0x57,0xFC,0xC7,0xD6,0xFE,0x83 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        static constexpr guid value{ 0x196D0021,0xFAAD,0x45DC,{ 0xAE,0x5B,0x2A,0xC3,0x18,0x4E,0x84,0xDB } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        static constexpr guid value{ 0x196D0020,0xFAAD,0x45DC,{ 0xAE,0x5B,0x2A,0xC3,0x18,0x4E,0x84,0xDB } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        static constexpr guid value{ 0xA9C21713,0xB82F,0x435E,{ 0xB6,0x34,0x21,0xFD,0x85,0xA4,0x3C,0x07 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        static constexpr guid value{ 0xFAF1BA0A,0x30BA,0x409C,{ 0xBE,0xF7,0xCF,0xFB,0x6D,0x03,0xB8,0xFB } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        static constexpr guid value{ 0xCA46C5C5,0x0ECC,0x4809,{ 0xBE,0xA3,0xCF,0x79,0xBC,0x99,0x1E,0x37 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        static constexpr guid value{ 0x63A66F09,0x1AEA,0x4C4C,{ 0xA5,0x0F,0x97,0xBA,0xE4,0x74,0xB3,0x48 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        static constexpr guid value{ 0x1BF1A59D,0xBA4D,0x4622,{ 0x86,0x51,0xF4,0xEE,0x15,0x0D,0x0A,0x5D } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        static constexpr guid value{ 0xF1DD6535,0x6ACD,0x42A6,{ 0xA4,0xBB,0xD7,0x89,0xDA,0xE0,0x04,0x3E } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        static constexpr guid value{ 0x93497243,0xF39C,0x484B,{ 0x8A,0xB6,0x99,0x6B,0xA4,0x86,0xCF,0xA3 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        static constexpr guid value{ 0x63A66F08,0x1AEA,0x4C4C,{ 0xA5,0x0F,0x97,0xBA,0xE4,0x74,0xB3,0x48 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        static constexpr guid value{ 0xA10F50A0,0xFB43,0x48AF,{ 0xBA,0xAA,0x63,0x8A,0x5C,0x63,0x29,0xFE } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        static constexpr guid value{ 0x63A66F07,0x1AEA,0x4C4C,{ 0xA5,0x0F,0x97,0xBA,0xE4,0x74,0xB3,0x48 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        static constexpr guid value{ 0x51113987,0xEF12,0x462F,{ 0x9F,0xB2,0xA1,0xA4,0x3A,0x67,0x94,0x16 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        static constexpr guid value{ 0xE834D92C,0x27BE,0x44B3,{ 0x9D,0x0D,0x4F,0xC6,0xE8,0x08,0xDD,0x3F } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        static constexpr guid value{ 0x7822B3CD,0x2889,0x4F86,{ 0xA0,0x51,0x3F,0x0A,0xED,0x1C,0x27,0x60 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        static constexpr guid value{ 0x59A5AA65,0xFA21,0x4FFC,{ 0xB1,0x55,0x04,0xD9,0x28,0x01,0x26,0x86 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        static constexpr guid value{ 0xE2CE31AB,0x6315,0x4C22,{ 0x9B,0xD7,0x78,0x1D,0xBC,0x3D,0x8D,0x82 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        static constexpr guid value{ 0xFF68468D,0xCA92,0x4434,{ 0x97,0x43,0x0E,0x90,0x98,0x8A,0xD8,0x79 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        static constexpr guid value{ 0x764696D8,0xC53E,0x428C,{ 0x8A,0x48,0x67,0xAF,0xE0,0x2C,0x3A,0xE6 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        static constexpr guid value{ 0x31794063,0x5256,0x4054,{ 0xA4,0xF4,0x7B,0xBE,0x77,0x55,0xA5,0x7E } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        static constexpr guid value{ 0x6DC57058,0x9ABA,0x4417,{ 0xB8,0xF2,0xDC,0xE0,0x16,0xD3,0x4E,0xE2 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        static constexpr guid value{ 0xD2AE94F5,0x3D15,0x4F79,{ 0x9C,0x0C,0xEA,0xAF,0xA6,0x75,0x15,0x5C } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        static constexpr guid value{ 0xD23B5143,0xE04E,0x4C24,{ 0x99,0x9C,0x9C,0x25,0x6F,0x98,0x56,0xB1 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        static constexpr guid value{ 0x2E65B95C,0x539F,0x4DB7,{ 0x82,0xA8,0x73,0xBD,0xBB,0xF7,0x3E,0xBF } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        static constexpr guid value{ 0x7605B72E,0x837F,0x404C,{ 0xAB,0x34,0x31,0x63,0xF3,0x9D,0xDF,0x32 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        static constexpr guid value{ 0x736E9001,0x15A4,0x4EC2,{ 0x92,0x48,0xE3,0xF2,0x0D,0x46,0x3B,0xE9 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        static constexpr guid value{ 0xD21BDB54,0x06E3,0x4ED8,{ 0xA2,0x63,0xAC,0xFA,0xC8,0xBA,0x73,0x13 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        static constexpr guid value{ 0xAEB6A9ED,0xDE2F,0x4FC2,{ 0xA9,0xA8,0x94,0xEA,0x78,0x44,0xF1,0x3D } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        static constexpr guid value{ 0x2DEC8BBE,0xA73A,0x471A,{ 0x94,0xD5,0x03,0x7D,0xEA,0xDD,0x08,0x06 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        static constexpr guid value{ 0x4991DDB1,0xCB2B,0x44F7,{ 0x99,0xFC,0xD2,0x9A,0x28,0x71,0xDC,0x9B } };
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
    {
        using type = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult;
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDescriptors(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicProperties(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_UserDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeHandle(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_PresentationFormats(void**) noexcept = 0;
            virtual int32_t __stdcall ReadValueAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadValueWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall WriteValueAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall WriteValueWithOptionAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReadClientCharacteristicConfigurationDescriptorAsync(void**) noexcept = 0;
            virtual int32_t __stdcall WriteClientCharacteristicConfigurationDescriptorAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_ValueChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllDescriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDescriptorsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDescriptorsWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDescriptorsForUuidAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDescriptorsForUuidWithCacheModeAsync(winrt::guid, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall WriteValueWithResultAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall WriteValueWithResultAndOptionAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall WriteClientCharacteristicConfigurationDescriptorWithResultAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertShortIdToUuid(uint16_t, winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BatteryLevel(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressureFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressureMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BodySensorLocation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CscFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CscMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GlucoseFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GlucoseMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GlucoseMeasurementContext(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HeartRateControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HeartRateMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateCuffPressure(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateTemperature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_MeasurementInterval(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RecordAccessControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RscFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RscMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SCControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SensorLocation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TemperatureMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TemperatureType(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlertCategoryId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AlertCategoryIdBitMask(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AlertLevel(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AlertNotificationControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AlertStatus(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GapAppearance(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BootKeyboardInputReport(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BootKeyboardOutputReport(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BootMouseInputReport(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentTime(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPowerControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPowerFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPowerMeasurement(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPowerVector(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DateTime(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DayDateTime(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DayOfWeek(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GapDeviceName(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DstOffset(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ExactTime256(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_FirmwareRevisionString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareRevisionString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HidControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HidInformation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Ieee1107320601RegulatoryCertificationDataList(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LnControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LnFeature(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LocalTimeInformation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LocationAndSpeed(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ManufacturerNameString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ModelNumberString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Navigation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_NewAlert(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GapPeripheralPreferredConnectionParameters(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GapPeripheralPrivacyFlag(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PnpId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PositionQuality(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolMode(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GapReconnectionAddress(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceTimeInformation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Report(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReportMap(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RingerControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RingerSetting(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ScanIntervalWindow(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ScanRefresh(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumberString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GattServiceChanged(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SoftwareRevisionString(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedNewAlertCategory(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SupportUnreadAlertCategory(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SystemId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeAccuracy(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeSource(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeUpdateControlPoint(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeUpdateState(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeWithDst(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TimeZone(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TxPowerLevel(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_UnreadAlertStatus(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
            virtual int32_t __stdcall get_Characteristics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SubscribedClient(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BytesSent(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeHandle(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall ReadValueAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadValueWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall WriteValueAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall WriteValueWithResultAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertShortIdToUuid(uint16_t, winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CharacteristicAggregateFormat(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicExtendedProperties(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicPresentationFormat(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicUserDescription(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ClientCharacteristicConfiguration(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCharacteristicConfiguration(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCharacteristics(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetIncludedServices(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeHandle(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParentServices(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllCharacteristics(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllIncludedServices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceAccessInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetCharacteristicsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCharacteristicsWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetCharacteristicsForUuidAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetCharacteristicsForUuidWithCacheModeAsync(winrt::guid, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIncludedServicesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetIncludedServicesWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIncludedServicesForUuidAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetIncludedServicesForUuidWithCacheModeAsync(winrt::guid, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromUuid(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromShortId(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertShortIdToUuid(uint16_t, winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdWithSharingModeAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuid(void*, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(void*, winrt::guid, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
            virtual int32_t __stdcall get_Services(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_StaticValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicProperties(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateDescriptorAsync(winrt::guid, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_PresentationFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubscribedClients(void**) noexcept = 0;
            virtual int32_t __stdcall add_SubscribedClientsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SubscribedClientsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ReadRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WriteRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WriteRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyValueAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall NotifyValueForSubscribedClientAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_StaticValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_StaticValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_CharacteristicProperties(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CharacteristicProperties(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReadProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WriteProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UserDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_PresentationFormats(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Characteristic(void**) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_StaticValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WriteRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WriteRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_StaticValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_StaticValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReadProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WriteProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteProtectionLevel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Descriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall CreateCharacteristicAsync(winrt::guid, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Characteristics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormatType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Exponent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Unit(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Namespace(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Description(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BluetoothSigAssignedNumbers(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromParts(uint8_t, int32_t, uint16_t, uint8_t, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Boolean(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Bit2(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Nibble(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt8(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt12(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt16(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt24(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt32(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt48(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt64(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UInt128(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt8(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt12(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt16(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt24(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt32(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt48(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt64(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SInt128(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Float32(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Float64(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SFloat(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Float(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_DUInt16(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Utf8(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Utf16(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Struct(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InvalidHandle(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadNotPermitted(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteNotPermitted(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InvalidPdu(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InsufficientAuthentication(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_RequestNotSupported(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InvalidOffset(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InsufficientAuthorization(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrepareQueueFull(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeNotFound(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeNotLong(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InsufficientEncryptionKeySize(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InvalidAttributeValueLength(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnlikelyError(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InsufficientEncryption(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnsupportedGroupType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InsufficientResources(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ClientCharacteristicConfigurationDescriptor(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Offset(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RespondWithValue(void*) noexcept = 0;
            virtual int32_t __stdcall RespondWithProtocolError(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall GetRequestAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall WriteValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall CommitAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CommitWithResultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisementStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_AdvertisementStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvertisementStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartAdvertising() noexcept = 0;
            virtual int32_t __stdcall StartAdvertisingWithParameters(void*) noexcept = 0;
            virtual int32_t __stdcall StopAdvertising() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsConnectable(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConnectable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDiscoverable(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDiscoverable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ServiceData(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Battery(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressure(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingSpeedAndCadence(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GenericAccess(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GenericAttribute(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Glucose(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HealthThermometer(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HeartRate(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RunningSpeedAndCadence(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlertNotification(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentTime(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPower(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HumanInterfaceDevice(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ImmediateAlert(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LinkLoss(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_LocationAndNavigation(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_NextDstChange(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneAlertStatus(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceTimeUpdate(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ScanParameters(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TxPower(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanMaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MaintainConnection(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPduSize(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_SessionStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_MaxPduSizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MaxPduSizeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SessionStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromDeviceIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxNotificationSize(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall add_MaxNotificationSizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MaxNotificationSizeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CharacteristicValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall get_Offset(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Option(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Respond() noexcept = 0;
            virtual int32_t __stdcall RespondWithProtocolError(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall GetRequestAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolError(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic
    {
        auto GetDescriptors(winrt::guid const& descriptorUuid) const;
        [[nodiscard]] auto CharacteristicProperties() const;
        [[nodiscard]] auto ProtectionLevel() const;
        auto ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto UserDescription() const;
        [[nodiscard]] auto Uuid() const;
        [[nodiscard]] auto AttributeHandle() const;
        [[nodiscard]] auto PresentationFormats() const;
        auto ReadValueAsync() const;
        auto ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const;
        auto WriteValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const;
        auto ReadClientCharacteristicConfigurationDescriptorAsync() const;
        auto WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const;
        auto ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const;
        using ValueChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>::remove_ValueChanged>;
        ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const;
        auto ValueChanged(winrt::event_token const& valueChangedEventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2
    {
        [[nodiscard]] auto Service() const;
        auto GetAllDescriptors() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3
    {
        auto GetDescriptorsAsync() const;
        auto GetDescriptorsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetDescriptorsForUuidAsync(winrt::guid const& descriptorUuid) const;
        auto GetDescriptorsForUuidAsync(winrt::guid const& descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const;
        auto WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const;
        auto WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicStatics
    {
        auto ConvertShortIdToUuid(uint16_t shortId) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics
    {
        [[nodiscard]] auto BatteryLevel() const;
        [[nodiscard]] auto BloodPressureFeature() const;
        [[nodiscard]] auto BloodPressureMeasurement() const;
        [[nodiscard]] auto BodySensorLocation() const;
        [[nodiscard]] auto CscFeature() const;
        [[nodiscard]] auto CscMeasurement() const;
        [[nodiscard]] auto GlucoseFeature() const;
        [[nodiscard]] auto GlucoseMeasurement() const;
        [[nodiscard]] auto GlucoseMeasurementContext() const;
        [[nodiscard]] auto HeartRateControlPoint() const;
        [[nodiscard]] auto HeartRateMeasurement() const;
        [[nodiscard]] auto IntermediateCuffPressure() const;
        [[nodiscard]] auto IntermediateTemperature() const;
        [[nodiscard]] auto MeasurementInterval() const;
        [[nodiscard]] auto RecordAccessControlPoint() const;
        [[nodiscard]] auto RscFeature() const;
        [[nodiscard]] auto RscMeasurement() const;
        [[nodiscard]] auto SCControlPoint() const;
        [[nodiscard]] auto SensorLocation() const;
        [[nodiscard]] auto TemperatureMeasurement() const;
        [[nodiscard]] auto TemperatureType() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2
    {
        [[nodiscard]] auto AlertCategoryId() const;
        [[nodiscard]] auto AlertCategoryIdBitMask() const;
        [[nodiscard]] auto AlertLevel() const;
        [[nodiscard]] auto AlertNotificationControlPoint() const;
        [[nodiscard]] auto AlertStatus() const;
        [[nodiscard]] auto GapAppearance() const;
        [[nodiscard]] auto BootKeyboardInputReport() const;
        [[nodiscard]] auto BootKeyboardOutputReport() const;
        [[nodiscard]] auto BootMouseInputReport() const;
        [[nodiscard]] auto CurrentTime() const;
        [[nodiscard]] auto CyclingPowerControlPoint() const;
        [[nodiscard]] auto CyclingPowerFeature() const;
        [[nodiscard]] auto CyclingPowerMeasurement() const;
        [[nodiscard]] auto CyclingPowerVector() const;
        [[nodiscard]] auto DateTime() const;
        [[nodiscard]] auto DayDateTime() const;
        [[nodiscard]] auto DayOfWeek() const;
        [[nodiscard]] auto GapDeviceName() const;
        [[nodiscard]] auto DstOffset() const;
        [[nodiscard]] auto ExactTime256() const;
        [[nodiscard]] auto FirmwareRevisionString() const;
        [[nodiscard]] auto HardwareRevisionString() const;
        [[nodiscard]] auto HidControlPoint() const;
        [[nodiscard]] auto HidInformation() const;
        [[nodiscard]] auto Ieee1107320601RegulatoryCertificationDataList() const;
        [[nodiscard]] auto LnControlPoint() const;
        [[nodiscard]] auto LnFeature() const;
        [[nodiscard]] auto LocalTimeInformation() const;
        [[nodiscard]] auto LocationAndSpeed() const;
        [[nodiscard]] auto ManufacturerNameString() const;
        [[nodiscard]] auto ModelNumberString() const;
        [[nodiscard]] auto Navigation() const;
        [[nodiscard]] auto NewAlert() const;
        [[nodiscard]] auto GapPeripheralPreferredConnectionParameters() const;
        [[nodiscard]] auto GapPeripheralPrivacyFlag() const;
        [[nodiscard]] auto PnpId() const;
        [[nodiscard]] auto PositionQuality() const;
        [[nodiscard]] auto ProtocolMode() const;
        [[nodiscard]] auto GapReconnectionAddress() const;
        [[nodiscard]] auto ReferenceTimeInformation() const;
        [[nodiscard]] auto Report() const;
        [[nodiscard]] auto ReportMap() const;
        [[nodiscard]] auto RingerControlPoint() const;
        [[nodiscard]] auto RingerSetting() const;
        [[nodiscard]] auto ScanIntervalWindow() const;
        [[nodiscard]] auto ScanRefresh() const;
        [[nodiscard]] auto SerialNumberString() const;
        [[nodiscard]] auto GattServiceChanged() const;
        [[nodiscard]] auto SoftwareRevisionString() const;
        [[nodiscard]] auto SupportedNewAlertCategory() const;
        [[nodiscard]] auto SupportUnreadAlertCategory() const;
        [[nodiscard]] auto SystemId() const;
        [[nodiscard]] auto TimeAccuracy() const;
        [[nodiscard]] auto TimeSource() const;
        [[nodiscard]] auto TimeUpdateControlPoint() const;
        [[nodiscard]] auto TimeUpdateState() const;
        [[nodiscard]] auto TimeWithDst() const;
        [[nodiscard]] auto TimeZone() const;
        [[nodiscard]] auto TxPowerLevel() const;
        [[nodiscard]] auto UnreadAlertStatus() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProtocolError() const;
        [[nodiscard]] auto Characteristics() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult
    {
        [[nodiscard]] auto SubscribedClient() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProtocolError() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult2
    {
        [[nodiscard]] auto BytesSent() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor
    {
        [[nodiscard]] auto ProtectionLevel() const;
        auto ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto Uuid() const;
        [[nodiscard]] auto AttributeHandle() const;
        auto ReadValueAsync() const;
        auto ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor2
    {
        auto WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorStatics
    {
        auto ConvertShortIdToUuid(uint16_t shortId) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics
    {
        [[nodiscard]] auto CharacteristicAggregateFormat() const;
        [[nodiscard]] auto CharacteristicExtendedProperties() const;
        [[nodiscard]] auto CharacteristicPresentationFormat() const;
        [[nodiscard]] auto CharacteristicUserDescription() const;
        [[nodiscard]] auto ClientCharacteristicConfiguration() const;
        [[nodiscard]] auto ServerCharacteristicConfiguration() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProtocolError() const;
        [[nodiscard]] auto Descriptors() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService
    {
        auto GetCharacteristics(winrt::guid const& characteristicUuid) const;
        auto GetIncludedServices(winrt::guid const& serviceUuid) const;
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Uuid() const;
        [[nodiscard]] auto AttributeHandle() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2
    {
        [[nodiscard]] auto Device() const;
        [[nodiscard]] auto ParentServices() const;
        auto GetAllCharacteristics() const;
        auto GetAllIncludedServices() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3
    {
        [[nodiscard]] auto DeviceAccessInformation() const;
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto SharingMode() const;
        auto RequestAccessAsync() const;
        auto OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const;
        auto GetCharacteristicsAsync() const;
        auto GetCharacteristicsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetCharacteristicsForUuidAsync(winrt::guid const& characteristicUuid) const;
        auto GetCharacteristicsForUuidAsync(winrt::guid const& characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetIncludedServicesAsync() const;
        auto GetIncludedServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetIncludedServicesForUuidAsync(winrt::guid const& serviceUuid) const;
        auto GetIncludedServicesForUuidAsync(winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelectorFromUuid(winrt::guid const& serviceUuid) const;
        auto GetDeviceSelectorFromShortId(uint16_t serviceShortId) const;
        auto ConvertShortIdToUuid(uint16_t shortId) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2
    {
        auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const;
        auto GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId) const;
        auto GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid) const;
        auto GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProtocolError() const;
        [[nodiscard]] auto Services() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic
    {
        [[nodiscard]] auto Uuid() const;
        [[nodiscard]] auto StaticValue() const;
        [[nodiscard]] auto CharacteristicProperties() const;
        [[nodiscard]] auto ReadProtectionLevel() const;
        [[nodiscard]] auto WriteProtectionLevel() const;
        auto CreateDescriptorAsync(winrt::guid const& descriptorUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters const& parameters) const;
        [[nodiscard]] auto Descriptors() const;
        [[nodiscard]] auto UserDescription() const;
        [[nodiscard]] auto PresentationFormats() const;
        [[nodiscard]] auto SubscribedClients() const;
        auto SubscribedClientsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const;
        using SubscribedClientsChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_SubscribedClientsChanged>;
        SubscribedClientsChanged_revoker SubscribedClientsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const;
        auto SubscribedClientsChanged(winrt::event_token const& token) const noexcept;
        auto ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const;
        using ReadRequested_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_ReadRequested>;
        ReadRequested_revoker ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const;
        auto ReadRequested(winrt::event_token const& token) const noexcept;
        auto WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const;
        using WriteRequested_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_WriteRequested>;
        WriteRequested_revoker WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const;
        auto WriteRequested(winrt::event_token const& token) const noexcept;
        auto NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value) const;
        auto NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient const& subscribedClient) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters
    {
        auto StaticValue(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto StaticValue() const;
        auto CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties const& value) const;
        [[nodiscard]] auto CharacteristicProperties() const;
        auto ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto ReadProtectionLevel() const;
        auto WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto WriteProtectionLevel() const;
        auto UserDescription(param::hstring const& value) const;
        [[nodiscard]] auto UserDescription() const;
        [[nodiscard]] auto PresentationFormats() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult
    {
        [[nodiscard]] auto Characteristic() const;
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor
    {
        [[nodiscard]] auto Uuid() const;
        [[nodiscard]] auto StaticValue() const;
        [[nodiscard]] auto ReadProtectionLevel() const;
        [[nodiscard]] auto WriteProtectionLevel() const;
        auto ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const;
        using ReadRequested_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>::remove_ReadRequested>;
        ReadRequested_revoker ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const;
        auto ReadRequested(winrt::event_token const& token) const noexcept;
        auto WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const;
        using WriteRequested_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>::remove_WriteRequested>;
        WriteRequested_revoker WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const;
        auto WriteRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters
    {
        auto StaticValue(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto StaticValue() const;
        auto ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto ReadProtectionLevel() const;
        auto WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const;
        [[nodiscard]] auto WriteProtectionLevel() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult
    {
        [[nodiscard]] auto Descriptor() const;
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService
    {
        [[nodiscard]] auto Uuid() const;
        auto CreateCharacteristicAsync(winrt::guid const& characteristicUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters const& parameters) const;
        [[nodiscard]] auto Characteristics() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat
    {
        [[nodiscard]] auto FormatType() const;
        [[nodiscard]] auto Exponent() const;
        [[nodiscard]] auto Unit() const;
        [[nodiscard]] auto Namespace() const;
        [[nodiscard]] auto Description() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics
    {
        [[nodiscard]] auto BluetoothSigAssignedNumbers() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics2
    {
        auto FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics
    {
        [[nodiscard]] auto Boolean() const;
        [[nodiscard]] auto Bit2() const;
        [[nodiscard]] auto Nibble() const;
        [[nodiscard]] auto UInt8() const;
        [[nodiscard]] auto UInt12() const;
        [[nodiscard]] auto UInt16() const;
        [[nodiscard]] auto UInt24() const;
        [[nodiscard]] auto UInt32() const;
        [[nodiscard]] auto UInt48() const;
        [[nodiscard]] auto UInt64() const;
        [[nodiscard]] auto UInt128() const;
        [[nodiscard]] auto SInt8() const;
        [[nodiscard]] auto SInt12() const;
        [[nodiscard]] auto SInt16() const;
        [[nodiscard]] auto SInt24() const;
        [[nodiscard]] auto SInt32() const;
        [[nodiscard]] auto SInt48() const;
        [[nodiscard]] auto SInt64() const;
        [[nodiscard]] auto SInt128() const;
        [[nodiscard]] auto Float32() const;
        [[nodiscard]] auto Float64() const;
        [[nodiscard]] auto SFloat() const;
        [[nodiscard]] auto Float() const;
        [[nodiscard]] auto DUInt16() const;
        [[nodiscard]] auto Utf8() const;
        [[nodiscard]] auto Utf16() const;
        [[nodiscard]] auto Struct() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics
    {
        [[nodiscard]] auto InvalidHandle() const;
        [[nodiscard]] auto ReadNotPermitted() const;
        [[nodiscard]] auto WriteNotPermitted() const;
        [[nodiscard]] auto InvalidPdu() const;
        [[nodiscard]] auto InsufficientAuthentication() const;
        [[nodiscard]] auto RequestNotSupported() const;
        [[nodiscard]] auto InvalidOffset() const;
        [[nodiscard]] auto InsufficientAuthorization() const;
        [[nodiscard]] auto PrepareQueueFull() const;
        [[nodiscard]] auto AttributeNotFound() const;
        [[nodiscard]] auto AttributeNotLong() const;
        [[nodiscard]] auto InsufficientEncryptionKeySize() const;
        [[nodiscard]] auto InvalidAttributeValueLength() const;
        [[nodiscard]] auto UnlikelyError() const;
        [[nodiscard]] auto InsufficientEncryption() const;
        [[nodiscard]] auto UnsupportedGroupType() const;
        [[nodiscard]] auto InsufficientResources() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ClientCharacteristicConfigurationDescriptor() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult2
    {
        [[nodiscard]] auto ProtocolError() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest
    {
        [[nodiscard]] auto Offset() const;
        [[nodiscard]] auto Length() const;
        [[nodiscard]] auto State() const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
        auto RespondWithValue(Windows::Storage::Streams::IBuffer const& value) const;
        auto RespondWithProtocolError(uint8_t protocolError) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs
    {
        [[nodiscard]] auto Session() const;
        auto GetDeferral() const;
        auto GetRequestAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult2
    {
        [[nodiscard]] auto ProtocolError() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction
    {
        auto WriteValue(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Storage::Streams::IBuffer const& value) const;
        auto CommitAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction2
    {
        auto CommitWithResultAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider
    {
        [[nodiscard]] auto Service() const;
        [[nodiscard]] auto AdvertisementStatus() const;
        auto AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const;
        using AdvertisementStatusChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>::remove_AdvertisementStatusChanged>;
        AdvertisementStatusChanged_revoker AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const;
        auto AdvertisementStatusChanged(winrt::event_token const& token) const noexcept;
        auto StartAdvertising() const;
        auto StartAdvertising(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& parameters) const;
        auto StopAdvertising() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs
    {
        [[nodiscard]] auto Error() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters
    {
        auto IsConnectable(bool value) const;
        [[nodiscard]] auto IsConnectable() const;
        auto IsDiscoverable(bool value) const;
        [[nodiscard]] auto IsDiscoverable() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters2
    {
        auto ServiceData(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto ServiceData() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult
    {
        [[nodiscard]] auto Error() const;
        [[nodiscard]] auto ServiceProvider() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderStatics
    {
        auto CreateAsync(winrt::guid const& serviceUuid) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics
    {
        [[nodiscard]] auto Battery() const;
        [[nodiscard]] auto BloodPressure() const;
        [[nodiscard]] auto CyclingSpeedAndCadence() const;
        [[nodiscard]] auto GenericAccess() const;
        [[nodiscard]] auto GenericAttribute() const;
        [[nodiscard]] auto Glucose() const;
        [[nodiscard]] auto HealthThermometer() const;
        [[nodiscard]] auto HeartRate() const;
        [[nodiscard]] auto RunningSpeedAndCadence() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2
    {
        [[nodiscard]] auto AlertNotification() const;
        [[nodiscard]] auto CurrentTime() const;
        [[nodiscard]] auto CyclingPower() const;
        [[nodiscard]] auto DeviceInformation() const;
        [[nodiscard]] auto HumanInterfaceDevice() const;
        [[nodiscard]] auto ImmediateAlert() const;
        [[nodiscard]] auto LinkLoss() const;
        [[nodiscard]] auto LocationAndNavigation() const;
        [[nodiscard]] auto NextDstChange() const;
        [[nodiscard]] auto PhoneAlertStatus() const;
        [[nodiscard]] auto ReferenceTimeUpdate() const;
        [[nodiscard]] auto ScanParameters() const;
        [[nodiscard]] auto TxPower() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto CanMaintainConnection() const;
        auto MaintainConnection(bool value) const;
        [[nodiscard]] auto MaintainConnection() const;
        [[nodiscard]] auto MaxPduSize() const;
        [[nodiscard]] auto SessionStatus() const;
        auto MaxPduSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const;
        using MaxPduSizeChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>::remove_MaxPduSizeChanged>;
        MaxPduSizeChanged_revoker MaxPduSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const;
        auto MaxPduSizeChanged(winrt::event_token const& token) const noexcept;
        auto SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const;
        using SessionStatusChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>::remove_SessionStatusChanged>;
        SessionStatusChanged_revoker SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const;
        auto SessionStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatics
    {
        auto FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs
    {
        [[nodiscard]] auto Error() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient
    {
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto MaxNotificationSize() const;
        auto MaxNotificationSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const;
        using MaxNotificationSizeChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>::remove_MaxNotificationSizeChanged>;
        MaxNotificationSizeChanged_revoker MaxNotificationSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const;
        auto MaxNotificationSizeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs
    {
        [[nodiscard]] auto CharacteristicValue() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest
    {
        [[nodiscard]] auto Value() const;
        [[nodiscard]] auto Offset() const;
        [[nodiscard]] auto Option() const;
        [[nodiscard]] auto State() const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest, &impl::abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
        auto Respond() const;
        auto RespondWithProtocolError(uint8_t protocolError) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs
    {
        [[nodiscard]] auto Session() const;
        auto GetDeferral() const;
        auto GetRequestAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProtocolError() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult<D>;
    };
}
#endif
