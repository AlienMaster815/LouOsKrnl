// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Usb_0_H
#define WINRT_Windows_Devices_Usb_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::Devices::Usb
{
    enum class UsbControlRecipient : int32_t
    {
        Device = 0,
        SpecifiedInterface = 1,
        Endpoint = 2,
        Other = 3,
        DefaultInterface = 4,
    };
    enum class UsbControlTransferType : int32_t
    {
        Standard = 0,
        Class = 1,
        Vendor = 2,
    };
    enum class UsbEndpointType : int32_t
    {
        Control = 0,
        Isochronous = 1,
        Bulk = 2,
        Interrupt = 3,
    };
    enum class UsbReadOptions : uint32_t
    {
        None = 0,
        AutoClearStall = 0x1,
        OverrideAutomaticBufferManagement = 0x2,
        IgnoreShortPacket = 0x4,
        AllowPartialReads = 0x8,
    };
    enum class UsbTransferDirection : int32_t
    {
        Out = 0,
        In = 1,
    };
    enum class UsbWriteOptions : uint32_t
    {
        None = 0,
        AutoClearStall = 0x1,
        ShortPacketTerminate = 0x2,
    };
    struct IUsbBulkInEndpointDescriptor;
    struct IUsbBulkInPipe;
    struct IUsbBulkOutEndpointDescriptor;
    struct IUsbBulkOutPipe;
    struct IUsbConfiguration;
    struct IUsbConfigurationDescriptor;
    struct IUsbConfigurationDescriptorStatics;
    struct IUsbControlRequestType;
    struct IUsbDescriptor;
    struct IUsbDevice;
    struct IUsbDeviceClass;
    struct IUsbDeviceClasses;
    struct IUsbDeviceClassesStatics;
    struct IUsbDeviceDescriptor;
    struct IUsbDeviceStatics;
    struct IUsbEndpointDescriptor;
    struct IUsbEndpointDescriptorStatics;
    struct IUsbInterface;
    struct IUsbInterfaceDescriptor;
    struct IUsbInterfaceDescriptorStatics;
    struct IUsbInterfaceSetting;
    struct IUsbInterruptInEndpointDescriptor;
    struct IUsbInterruptInEventArgs;
    struct IUsbInterruptInPipe;
    struct IUsbInterruptOutEndpointDescriptor;
    struct IUsbInterruptOutPipe;
    struct IUsbSetupPacket;
    struct IUsbSetupPacketFactory;
    struct UsbBulkInEndpointDescriptor;
    struct UsbBulkInPipe;
    struct UsbBulkOutEndpointDescriptor;
    struct UsbBulkOutPipe;
    struct UsbConfiguration;
    struct UsbConfigurationDescriptor;
    struct UsbControlRequestType;
    struct UsbDescriptor;
    struct UsbDevice;
    struct UsbDeviceClass;
    struct UsbDeviceClasses;
    struct UsbDeviceDescriptor;
    struct UsbEndpointDescriptor;
    struct UsbInterface;
    struct UsbInterfaceDescriptor;
    struct UsbInterfaceSetting;
    struct UsbInterruptInEndpointDescriptor;
    struct UsbInterruptInEventArgs;
    struct UsbInterruptInPipe;
    struct UsbInterruptOutEndpointDescriptor;
    struct UsbInterruptOutPipe;
    struct UsbSetupPacket;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbBulkInPipe>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbControlRequestType>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDeviceClass>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDeviceClasses>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbSetupPacket>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbBulkInPipe>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbBulkOutPipe>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbConfigurationDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbControlRequestType>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbDeviceClass>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbDeviceClasses>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbDeviceDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbEndpointDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterfaceDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterfaceSetting>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterruptInEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterruptInPipe>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbInterruptOutPipe>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbSetupPacket>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbControlRecipient>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbControlTransferType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbEndpointType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbReadOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbTransferDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Usb::UsbWriteOptions>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbBulkInPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkInPipe" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkOutPipe" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbConfiguration>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfiguration" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfigurationDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbControlRequestType>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbControlRequestType" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDevice" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDeviceClass>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClass" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDeviceClasses>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClasses" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClassesStatics" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterface>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterface" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceSetting" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInEventArgs" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInPipe" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptOutPipe" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbSetupPacket>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbSetupPacket" };
    };
    template <> struct name<Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.IUsbSetupPacketFactory" };
    };
    template <> struct name<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbBulkInPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkInPipe" };
    };
    template <> struct name<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbBulkOutPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkOutPipe" };
    };
    template <> struct name<Windows::Devices::Usb::UsbConfiguration>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbConfiguration" };
    };
    template <> struct name<Windows::Devices::Usb::UsbConfigurationDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbConfigurationDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbControlRequestType>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlRequestType" };
    };
    template <> struct name<Windows::Devices::Usb::UsbDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbDevice" };
    };
    template <> struct name<Windows::Devices::Usb::UsbDeviceClass>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceClass" };
    };
    template <> struct name<Windows::Devices::Usb::UsbDeviceClasses>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceClasses" };
    };
    template <> struct name<Windows::Devices::Usb::UsbDeviceDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterface>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterface" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterfaceDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterfaceDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterfaceSetting>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterfaceSetting" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterruptInEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInEventArgs" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterruptInPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInPipe" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor" };
    };
    template <> struct name<Windows::Devices::Usb::UsbInterruptOutPipe>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptOutPipe" };
    };
    template <> struct name<Windows::Devices::Usb::UsbSetupPacket>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbSetupPacket" };
    };
    template <> struct name<Windows::Devices::Usb::UsbControlRecipient>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlRecipient" };
    };
    template <> struct name<Windows::Devices::Usb::UsbControlTransferType>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlTransferType" };
    };
    template <> struct name<Windows::Devices::Usb::UsbEndpointType>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbEndpointType" };
    };
    template <> struct name<Windows::Devices::Usb::UsbReadOptions>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbReadOptions" };
    };
    template <> struct name<Windows::Devices::Usb::UsbTransferDirection>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbTransferDirection" };
    };
    template <> struct name<Windows::Devices::Usb::UsbWriteOptions>
    {
        static constexpr auto & value{ L"Windows.Devices.Usb.UsbWriteOptions" };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        static constexpr guid value{ 0x3C6E4846,0x06CF,0x42A9,{ 0x9D,0xC2,0x97,0x1C,0x1B,0x14,0xB6,0xE3 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbBulkInPipe>
    {
        static constexpr guid value{ 0xF01D2D3B,0x4548,0x4D50,{ 0xB3,0x26,0xD8,0x2C,0xDA,0xBE,0x12,0x20 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        static constexpr guid value{ 0x2820847A,0xFFEE,0x4F60,{ 0x9B,0xE1,0x95,0x6C,0xAC,0x3E,0xCB,0x65 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        static constexpr guid value{ 0xA8E9EE6E,0x0115,0x45AA,{ 0x8B,0x21,0x37,0xB2,0x25,0xBC,0xCE,0xE7 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbConfiguration>
    {
        static constexpr guid value{ 0x68177429,0x36A9,0x46D7,{ 0xB8,0x73,0xFC,0x68,0x92,0x51,0xEC,0x30 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        static constexpr guid value{ 0xF2176D92,0xB442,0x407A,{ 0x82,0x07,0x7D,0x64,0x6C,0x03,0x85,0xF3 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        static constexpr guid value{ 0x424CED93,0xE740,0x40A1,{ 0x92,0xBD,0xDA,0x12,0x0E,0xA0,0x49,0x14 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbControlRequestType>
    {
        static constexpr guid value{ 0x8E9465A6,0xD73D,0x46DE,{ 0x94,0xBE,0xAA,0xE7,0xF0,0x7C,0x0F,0x5C } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDescriptor>
    {
        static constexpr guid value{ 0x0A89F216,0x5F9D,0x4874,{ 0x89,0x04,0xDA,0x9A,0xD3,0xF5,0x52,0x8F } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDevice>
    {
        static constexpr guid value{ 0x5249B992,0xC456,0x44D5,{ 0xAD,0x5E,0x24,0xF5,0xA0,0x89,0xF6,0x3B } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDeviceClass>
    {
        static constexpr guid value{ 0x051942F9,0x845E,0x47EB,{ 0xB1,0x2A,0x38,0xF2,0xF6,0x17,0xAF,0xE7 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDeviceClasses>
    {
        static constexpr guid value{ 0x686F955D,0x9B92,0x4B30,{ 0x97,0x81,0xC2,0x2C,0x55,0xAC,0x35,0xCB } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        static constexpr guid value{ 0xB20B0527,0xC580,0x4599,{ 0xA1,0x65,0x98,0x1B,0x4F,0xD0,0x32,0x30 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        static constexpr guid value{ 0x1F48D1F6,0xBA97,0x4322,{ 0xB9,0x2C,0xB5,0xB1,0x89,0x21,0x65,0x88 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbDeviceStatics>
    {
        static constexpr guid value{ 0x066B85A2,0x09B7,0x4446,{ 0x85,0x02,0x6F,0xE6,0xDC,0xAA,0x73,0x09 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        static constexpr guid value{ 0x6B4862D9,0x8DF7,0x4B40,{ 0xAC,0x83,0x57,0x8F,0x13,0x9F,0x05,0x75 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        static constexpr guid value{ 0xC890B201,0x9A6A,0x495E,{ 0xA8,0x2C,0x29,0x5B,0x9E,0x70,0x81,0x06 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterface>
    {
        static constexpr guid value{ 0xA0322B95,0x7F47,0x48AB,{ 0xA7,0x27,0x67,0x8C,0x25,0xBE,0x21,0x12 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        static constexpr guid value{ 0x199670C7,0xB7EE,0x4F90,{ 0x8C,0xD5,0x94,0xA2,0xE2,0x57,0x59,0x8A } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        static constexpr guid value{ 0xE34A9FF5,0x77D6,0x48B6,{ 0xB0,0xBE,0x16,0xC6,0x42,0x23,0x16,0xFE } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        static constexpr guid value{ 0x1827BBA7,0x8DA7,0x4AF7,{ 0x8F,0x4C,0x7F,0x30,0x32,0xE7,0x81,0xF5 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        static constexpr guid value{ 0xC0528967,0xC911,0x4C3A,{ 0x86,0xB2,0x41,0x9C,0x2D,0xA8,0x90,0x39 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        static constexpr guid value{ 0xB7B04092,0x1418,0x4936,{ 0x82,0x09,0x29,0x9C,0xF5,0x60,0x55,0x83 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        static constexpr guid value{ 0xFA007116,0x84D7,0x48C7,{ 0x8A,0x3F,0x4C,0x0B,0x23,0x5F,0x2E,0xA6 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        static constexpr guid value{ 0xCC9FED81,0x10CA,0x4533,{ 0x95,0x2D,0x9E,0x27,0x83,0x41,0xE8,0x0F } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        static constexpr guid value{ 0xE984C8A9,0xAAF9,0x49D0,{ 0xB9,0x6C,0xF6,0x61,0xAB,0x4A,0x7F,0x95 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbSetupPacket>
    {
        static constexpr guid value{ 0x104BA132,0xC78F,0x4C51,{ 0xB6,0x54,0xE4,0x9D,0x02,0xF2,0xCB,0x03 } };
    };
    template <> struct guid_storage<Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        static constexpr guid value{ 0xC9257D50,0x1B2E,0x4A41,{ 0xA2,0xA7,0x33,0x8F,0x0C,0xEF,0x3C,0x14 } };
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbBulkInEndpointDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbBulkInPipe>
    {
        using type = Windows::Devices::Usb::IUsbBulkInPipe;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbBulkOutPipe>
    {
        using type = Windows::Devices::Usb::IUsbBulkOutPipe;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbConfiguration>
    {
        using type = Windows::Devices::Usb::IUsbConfiguration;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbConfigurationDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbConfigurationDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbControlRequestType>
    {
        using type = Windows::Devices::Usb::IUsbControlRequestType;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbDevice>
    {
        using type = Windows::Devices::Usb::IUsbDevice;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbDeviceClass>
    {
        using type = Windows::Devices::Usb::IUsbDeviceClass;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbDeviceClasses>
    {
        using type = Windows::Devices::Usb::IUsbDeviceClasses;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbDeviceDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbDeviceDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbEndpointDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbEndpointDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterface>
    {
        using type = Windows::Devices::Usb::IUsbInterface;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterfaceDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbInterfaceDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterfaceSetting>
    {
        using type = Windows::Devices::Usb::IUsbInterfaceSetting;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInEventArgs>
    {
        using type = Windows::Devices::Usb::IUsbInterruptInEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInPipe>
    {
        using type = Windows::Devices::Usb::IUsbInterruptInPipe;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
    {
        using type = Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbInterruptOutPipe>
    {
        using type = Windows::Devices::Usb::IUsbInterruptOutPipe;
    };
    template <> struct default_interface<Windows::Devices::Usb::UsbSetupPacket>
    {
        using type = Windows::Devices::Usb::IUsbSetupPacket;
    };
    template <> struct abi<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbBulkInPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxTransferSizeBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReadOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall FlushBuffer() noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_WriteOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UsbInterfaces(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConfigurationDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConfigurationValue(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPowerMilliamps(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelfPowered(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteWakeup(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbControlRequestType>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ControlTransferType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ControlTransferType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Recipient(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Recipient(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AsByte(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_AsByte(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Length(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_DescriptorType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall ReadDescriptorBuffer(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendControlOutTransferAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlOutTransferAsyncNoBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlInTransferAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlInTransferAsyncNoBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultInterface(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDeviceClass>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClassCode(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_SubclassCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_SubclassCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProtocolCode(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDeviceClasses>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CdcControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_Physical(void**) noexcept = 0;
            virtual int32_t __stdcall get_PersonalHealthcare(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSync(void**) noexcept = 0;
            virtual int32_t __stdcall get_PalmSync(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceFirmwareUpdate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Irda(void**) noexcept = 0;
            virtual int32_t __stdcall get_Measurement(void**) noexcept = 0;
            virtual int32_t __stdcall get_VendorSpecific(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BcdUsb(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPacketSize0(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_VendorId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProductId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BcdDeviceRevision(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfConfigurations(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(uint32_t, uint32_t, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorGuidOnly(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorVidPidOnly(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceClassSelector(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AsBulkInEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsInterruptInEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsBulkOutEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsInterruptOutEndpointDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BulkInPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptInPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_BulkOutPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptOutPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SubclassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_AlternateSettingNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceNumber(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BulkInEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptInEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_BulkOutEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptOutEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_Selected(bool*) noexcept = 0;
            virtual int32_t __stdcall SelectSettingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InterruptData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_DataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_WriteOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbSetupPacket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestType(void**) noexcept = 0;
            virtual int32_t __stdcall put_RequestType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Request(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_Request(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Index(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Index(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithEightByteBuffer(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor
    {
        [[nodiscard]] auto MaxPacketSize() const;
        [[nodiscard]] auto EndpointNumber() const;
        [[nodiscard]] auto Pipe() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkInPipe
    {
        [[nodiscard]] auto MaxTransferSizeBytes() const;
        [[nodiscard]] auto EndpointDescriptor() const;
        auto ClearStallAsync() const;
        auto ReadOptions(Windows::Devices::Usb::UsbReadOptions const& value) const;
        [[nodiscard]] auto ReadOptions() const;
        auto FlushBuffer() const;
        [[nodiscard]] auto InputStream() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbBulkInPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor
    {
        [[nodiscard]] auto MaxPacketSize() const;
        [[nodiscard]] auto EndpointNumber() const;
        [[nodiscard]] auto Pipe() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkOutPipe
    {
        [[nodiscard]] auto EndpointDescriptor() const;
        auto ClearStallAsync() const;
        auto WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const;
        [[nodiscard]] auto WriteOptions() const;
        [[nodiscard]] auto OutputStream() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfiguration
    {
        [[nodiscard]] auto UsbInterfaces() const;
        [[nodiscard]] auto ConfigurationDescriptor() const;
        [[nodiscard]] auto Descriptors() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbConfiguration>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptor
    {
        [[nodiscard]] auto ConfigurationValue() const;
        [[nodiscard]] auto MaxPowerMilliamps() const;
        [[nodiscard]] auto SelfPowered() const;
        [[nodiscard]] auto RemoteWakeup() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics
    {
        auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed) const;
        auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbControlRequestType
    {
        [[nodiscard]] auto Direction() const;
        auto Direction(Windows::Devices::Usb::UsbTransferDirection const& value) const;
        [[nodiscard]] auto ControlTransferType() const;
        auto ControlTransferType(Windows::Devices::Usb::UsbControlTransferType const& value) const;
        [[nodiscard]] auto Recipient() const;
        auto Recipient(Windows::Devices::Usb::UsbControlRecipient const& value) const;
        [[nodiscard]] auto AsByte() const;
        auto AsByte(uint8_t value) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbControlRequestType>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbControlRequestType<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDescriptor
    {
        [[nodiscard]] auto Length() const;
        [[nodiscard]] auto DescriptorType() const;
        auto ReadDescriptorBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDevice
    {
        auto SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const;
        auto SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
        auto SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const;
        auto SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
        [[nodiscard]] auto DefaultInterface() const;
        [[nodiscard]] auto DeviceDescriptor() const;
        [[nodiscard]] auto Configuration() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClass
    {
        [[nodiscard]] auto ClassCode() const;
        auto ClassCode(uint8_t value) const;
        [[nodiscard]] auto SubclassCode() const;
        auto SubclassCode(Windows::Foundation::IReference<uint8_t> const& value) const;
        [[nodiscard]] auto ProtocolCode() const;
        auto ProtocolCode(Windows::Foundation::IReference<uint8_t> const& value) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDeviceClass>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClass<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClasses
    {
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDeviceClasses>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClasses<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClassesStatics
    {
        [[nodiscard]] auto CdcControl() const;
        [[nodiscard]] auto Physical() const;
        [[nodiscard]] auto PersonalHealthcare() const;
        [[nodiscard]] auto ActiveSync() const;
        [[nodiscard]] auto PalmSync() const;
        [[nodiscard]] auto DeviceFirmwareUpdate() const;
        [[nodiscard]] auto Irda() const;
        [[nodiscard]] auto Measurement() const;
        [[nodiscard]] auto VendorSpecific() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceDescriptor
    {
        [[nodiscard]] auto BcdUsb() const;
        [[nodiscard]] auto MaxPacketSize0() const;
        [[nodiscard]] auto VendorId() const;
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto BcdDeviceRevision() const;
        [[nodiscard]] auto NumberOfConfigurations() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceStatics
    {
        auto GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass) const;
        auto GetDeviceSelector(winrt::guid const& winUsbInterfaceClass) const;
        auto GetDeviceSelector(uint32_t vendorId, uint32_t productId) const;
        auto GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass) const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbEndpointDescriptor
    {
        [[nodiscard]] auto EndpointNumber() const;
        [[nodiscard]] auto Direction() const;
        [[nodiscard]] auto EndpointType() const;
        [[nodiscard]] auto AsBulkInEndpointDescriptor() const;
        [[nodiscard]] auto AsInterruptInEndpointDescriptor() const;
        [[nodiscard]] auto AsBulkOutEndpointDescriptor() const;
        [[nodiscard]] auto AsInterruptOutEndpointDescriptor() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics
    {
        auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed) const;
        auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterface
    {
        [[nodiscard]] auto BulkInPipes() const;
        [[nodiscard]] auto InterruptInPipes() const;
        [[nodiscard]] auto BulkOutPipes() const;
        [[nodiscard]] auto InterruptOutPipes() const;
        [[nodiscard]] auto InterfaceSettings() const;
        [[nodiscard]] auto InterfaceNumber() const;
        [[nodiscard]] auto Descriptors() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterface>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterface<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptor
    {
        [[nodiscard]] auto ClassCode() const;
        [[nodiscard]] auto SubclassCode() const;
        [[nodiscard]] auto ProtocolCode() const;
        [[nodiscard]] auto AlternateSettingNumber() const;
        [[nodiscard]] auto InterfaceNumber() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics
    {
        auto TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed) const;
        auto Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceSetting
    {
        [[nodiscard]] auto BulkInEndpoints() const;
        [[nodiscard]] auto InterruptInEndpoints() const;
        [[nodiscard]] auto BulkOutEndpoints() const;
        [[nodiscard]] auto InterruptOutEndpoints() const;
        [[nodiscard]] auto Selected() const;
        auto SelectSettingAsync() const;
        [[nodiscard]] auto InterfaceDescriptor() const;
        [[nodiscard]] auto Descriptors() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor
    {
        [[nodiscard]] auto MaxPacketSize() const;
        [[nodiscard]] auto EndpointNumber() const;
        [[nodiscard]] auto Interval() const;
        [[nodiscard]] auto Pipe() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInEventArgs
    {
        [[nodiscard]] auto InterruptData() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInPipe
    {
        [[nodiscard]] auto EndpointDescriptor() const;
        auto ClearStallAsync() const;
        auto DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
        using DataReceived_revoker = impl::event_revoker<Windows::Devices::Usb::IUsbInterruptInPipe, &impl::abi_t<Windows::Devices::Usb::IUsbInterruptInPipe>::remove_DataReceived>;
        DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
        auto DataReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor
    {
        [[nodiscard]] auto MaxPacketSize() const;
        [[nodiscard]] auto EndpointNumber() const;
        [[nodiscard]] auto Interval() const;
        [[nodiscard]] auto Pipe() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptOutPipe
    {
        [[nodiscard]] auto EndpointDescriptor() const;
        auto ClearStallAsync() const;
        auto WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const;
        [[nodiscard]] auto WriteOptions() const;
        [[nodiscard]] auto OutputStream() const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbSetupPacket
    {
        [[nodiscard]] auto RequestType() const;
        auto RequestType(Windows::Devices::Usb::UsbControlRequestType const& value) const;
        [[nodiscard]] auto Request() const;
        auto Request(uint8_t value) const;
        [[nodiscard]] auto Value() const;
        auto Value(uint32_t value) const;
        [[nodiscard]] auto Index() const;
        auto Index(uint32_t value) const;
        [[nodiscard]] auto Length() const;
        auto Length(uint32_t value) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbSetupPacket>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacket<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbSetupPacketFactory
    {
        auto CreateWithEightByteBuffer(Windows::Storage::Streams::IBuffer const& eightByteBuffer) const;
    };
    template <> struct consume<Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacketFactory<D>;
    };
}
#endif
