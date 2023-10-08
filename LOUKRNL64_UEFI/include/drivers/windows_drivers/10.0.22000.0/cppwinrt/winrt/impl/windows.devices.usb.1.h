// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Usb_1_H
#define WINRT_Windows_Devices_Usb_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Usb.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Usb
{
    struct __declspec(empty_bases) IUsbBulkInEndpointDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbBulkInEndpointDescriptor>
    {
        IUsbBulkInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbBulkInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbBulkInPipe :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbBulkInPipe>
    {
        IUsbBulkInPipe(std::nullptr_t = nullptr) noexcept {}
        IUsbBulkInPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbBulkOutEndpointDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbBulkOutEndpointDescriptor>
    {
        IUsbBulkOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbBulkOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbBulkOutPipe :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbBulkOutPipe>
    {
        IUsbBulkOutPipe(std::nullptr_t = nullptr) noexcept {}
        IUsbBulkOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbConfiguration>
    {
        IUsbConfiguration(std::nullptr_t = nullptr) noexcept {}
        IUsbConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbConfigurationDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbConfigurationDescriptor>
    {
        IUsbConfigurationDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbConfigurationDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbConfigurationDescriptorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbConfigurationDescriptorStatics>
    {
        IUsbConfigurationDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
        IUsbConfigurationDescriptorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbControlRequestType :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbControlRequestType>
    {
        IUsbControlRequestType(std::nullptr_t = nullptr) noexcept {}
        IUsbControlRequestType(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDescriptor>
    {
        IUsbDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDevice>,
        impl::require<Windows::Devices::Usb::IUsbDevice, Windows::Foundation::IClosable>
    {
        IUsbDevice(std::nullptr_t = nullptr) noexcept {}
        IUsbDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDeviceClass :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDeviceClass>
    {
        IUsbDeviceClass(std::nullptr_t = nullptr) noexcept {}
        IUsbDeviceClass(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDeviceClasses :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDeviceClasses>
    {
        IUsbDeviceClasses(std::nullptr_t = nullptr) noexcept {}
        IUsbDeviceClasses(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDeviceClassesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDeviceClassesStatics>
    {
        IUsbDeviceClassesStatics(std::nullptr_t = nullptr) noexcept {}
        IUsbDeviceClassesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDeviceDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDeviceDescriptor>
    {
        IUsbDeviceDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbDeviceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbDeviceStatics>
    {
        IUsbDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IUsbDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbEndpointDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbEndpointDescriptor>
    {
        IUsbEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbEndpointDescriptorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbEndpointDescriptorStatics>
    {
        IUsbEndpointDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
        IUsbEndpointDescriptorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterface :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterface>
    {
        IUsbInterface(std::nullptr_t = nullptr) noexcept {}
        IUsbInterface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterfaceDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterfaceDescriptor>
    {
        IUsbInterfaceDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbInterfaceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterfaceDescriptorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterfaceDescriptorStatics>
    {
        IUsbInterfaceDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
        IUsbInterfaceDescriptorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterfaceSetting :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterfaceSetting>
    {
        IUsbInterfaceSetting(std::nullptr_t = nullptr) noexcept {}
        IUsbInterfaceSetting(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterruptInEndpointDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterruptInEndpointDescriptor>
    {
        IUsbInterruptInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbInterruptInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterruptInEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterruptInEventArgs>
    {
        IUsbInterruptInEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUsbInterruptInEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterruptInPipe :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterruptInPipe>
    {
        IUsbInterruptInPipe(std::nullptr_t = nullptr) noexcept {}
        IUsbInterruptInPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterruptOutEndpointDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterruptOutEndpointDescriptor>
    {
        IUsbInterruptOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
        IUsbInterruptOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbInterruptOutPipe :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbInterruptOutPipe>
    {
        IUsbInterruptOutPipe(std::nullptr_t = nullptr) noexcept {}
        IUsbInterruptOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbSetupPacket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbSetupPacket>
    {
        IUsbSetupPacket(std::nullptr_t = nullptr) noexcept {}
        IUsbSetupPacket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUsbSetupPacketFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUsbSetupPacketFactory>
    {
        IUsbSetupPacketFactory(std::nullptr_t = nullptr) noexcept {}
        IUsbSetupPacketFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
