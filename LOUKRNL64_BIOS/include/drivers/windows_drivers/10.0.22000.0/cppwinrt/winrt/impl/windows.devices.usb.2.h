// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Usb_2_H
#define WINRT_Windows_Devices_Usb_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Usb.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Usb
{
    struct __declspec(empty_bases) UsbBulkInEndpointDescriptor : Windows::Devices::Usb::IUsbBulkInEndpointDescriptor
    {
        UsbBulkInEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbBulkInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbBulkInEndpointDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbBulkInPipe : Windows::Devices::Usb::IUsbBulkInPipe
    {
        UsbBulkInPipe(std::nullptr_t) noexcept {}
        UsbBulkInPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbBulkInPipe(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbBulkOutEndpointDescriptor : Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor
    {
        UsbBulkOutEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbBulkOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbBulkOutPipe : Windows::Devices::Usb::IUsbBulkOutPipe
    {
        UsbBulkOutPipe(std::nullptr_t) noexcept {}
        UsbBulkOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbBulkOutPipe(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbConfiguration : Windows::Devices::Usb::IUsbConfiguration
    {
        UsbConfiguration(std::nullptr_t) noexcept {}
        UsbConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbConfigurationDescriptor : Windows::Devices::Usb::IUsbConfigurationDescriptor
    {
        UsbConfigurationDescriptor(std::nullptr_t) noexcept {}
        UsbConfigurationDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbConfigurationDescriptor(ptr, take_ownership_from_abi) {}
        static auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed);
        static auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbControlRequestType : Windows::Devices::Usb::IUsbControlRequestType
    {
        UsbControlRequestType(std::nullptr_t) noexcept {}
        UsbControlRequestType(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbControlRequestType(ptr, take_ownership_from_abi) {}
        UsbControlRequestType();
    };
    struct __declspec(empty_bases) UsbDescriptor : Windows::Devices::Usb::IUsbDescriptor
    {
        UsbDescriptor(std::nullptr_t) noexcept {}
        UsbDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbDevice : Windows::Devices::Usb::IUsbDevice
    {
        UsbDevice(std::nullptr_t) noexcept {}
        UsbDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass);
        static auto GetDeviceSelector(winrt::guid const& winUsbInterfaceClass);
        static auto GetDeviceSelector(uint32_t vendorId, uint32_t productId);
        static auto GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) UsbDeviceClass : Windows::Devices::Usb::IUsbDeviceClass
    {
        UsbDeviceClass(std::nullptr_t) noexcept {}
        UsbDeviceClass(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbDeviceClass(ptr, take_ownership_from_abi) {}
        UsbDeviceClass();
    };
    struct __declspec(empty_bases) UsbDeviceClasses : Windows::Devices::Usb::IUsbDeviceClasses
    {
        UsbDeviceClasses(std::nullptr_t) noexcept {}
        UsbDeviceClasses(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbDeviceClasses(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CdcControl();
        [[nodiscard]] static auto Physical();
        [[nodiscard]] static auto PersonalHealthcare();
        [[nodiscard]] static auto ActiveSync();
        [[nodiscard]] static auto PalmSync();
        [[nodiscard]] static auto DeviceFirmwareUpdate();
        [[nodiscard]] static auto Irda();
        [[nodiscard]] static auto Measurement();
        [[nodiscard]] static auto VendorSpecific();
    };
    struct __declspec(empty_bases) UsbDeviceDescriptor : Windows::Devices::Usb::IUsbDeviceDescriptor
    {
        UsbDeviceDescriptor(std::nullptr_t) noexcept {}
        UsbDeviceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbDeviceDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbEndpointDescriptor : Windows::Devices::Usb::IUsbEndpointDescriptor
    {
        UsbEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbEndpointDescriptor(ptr, take_ownership_from_abi) {}
        static auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed);
        static auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbInterface : Windows::Devices::Usb::IUsbInterface
    {
        UsbInterface(std::nullptr_t) noexcept {}
        UsbInterface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterfaceDescriptor : Windows::Devices::Usb::IUsbInterfaceDescriptor
    {
        UsbInterfaceDescriptor(std::nullptr_t) noexcept {}
        UsbInterfaceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterfaceDescriptor(ptr, take_ownership_from_abi) {}
        static auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed);
        static auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbInterfaceSetting : Windows::Devices::Usb::IUsbInterfaceSetting
    {
        UsbInterfaceSetting(std::nullptr_t) noexcept {}
        UsbInterfaceSetting(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterfaceSetting(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterruptInEndpointDescriptor : Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor
    {
        UsbInterruptInEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbInterruptInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterruptInEventArgs : Windows::Devices::Usb::IUsbInterruptInEventArgs
    {
        UsbInterruptInEventArgs(std::nullptr_t) noexcept {}
        UsbInterruptInEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterruptInEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterruptInPipe : Windows::Devices::Usb::IUsbInterruptInPipe
    {
        UsbInterruptInPipe(std::nullptr_t) noexcept {}
        UsbInterruptInPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterruptInPipe(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterruptOutEndpointDescriptor : Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor
    {
        UsbInterruptOutEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbInterruptOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbInterruptOutPipe : Windows::Devices::Usb::IUsbInterruptOutPipe
    {
        UsbInterruptOutPipe(std::nullptr_t) noexcept {}
        UsbInterruptOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbInterruptOutPipe(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UsbSetupPacket : Windows::Devices::Usb::IUsbSetupPacket
    {
        UsbSetupPacket(std::nullptr_t) noexcept {}
        UsbSetupPacket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Usb::IUsbSetupPacket(ptr, take_ownership_from_abi) {}
        UsbSetupPacket();
        explicit UsbSetupPacket(Windows::Storage::Streams::IBuffer const& eightByteBuffer);
    };
}
#endif
