// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_0_H
#define WINRT_Windows_Devices_Printers_0_H
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
namespace winrt::Windows::Devices::Printers
{
    struct IPrint3DDevice;
    struct IPrint3DDeviceStatics;
    struct IPrintSchema;
    struct Print3DDevice;
    struct PrintSchema;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Printers::IPrint3DDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::IPrintSchema>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Print3DDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::PrintSchema>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Devices::Printers::IPrint3DDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.IPrint3DDevice" };
    };
    template <> struct name<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.IPrint3DDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Printers::IPrintSchema>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.IPrintSchema" };
    };
    template <> struct name<Windows::Devices::Printers::Print3DDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Print3DDevice" };
    };
    template <> struct name<Windows::Devices::Printers::PrintSchema>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.PrintSchema" };
    };
    template <> struct guid_storage<Windows::Devices::Printers::IPrint3DDevice>
    {
        static constexpr guid value{ 0x041C3D19,0x9713,0x42A2,{ 0x98,0x13,0x7D,0xC3,0x33,0x74,0x28,0xD3 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        static constexpr guid value{ 0xFDE3620A,0x67CD,0x41B7,{ 0xA3,0x44,0x51,0x50,0xA1,0xFD,0x75,0xB5 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::IPrintSchema>
    {
        static constexpr guid value{ 0xC2B98316,0x26B8,0x4BFB,{ 0x81,0x38,0x9F,0x96,0x2C,0x22,0xA3,0x5B } };
    };
    template <> struct default_interface<Windows::Devices::Printers::Print3DDevice>
    {
        using type = Windows::Devices::Printers::IPrint3DDevice;
    };
    template <> struct default_interface<Windows::Devices::Printers::PrintSchema>
    {
        using type = Windows::Devices::Printers::IPrintSchema;
    };
    template <> struct abi<Windows::Devices::Printers::IPrint3DDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintSchema(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::IPrintSchema>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MergeAndValidateWithDefaultPrintTicketAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDevice
    {
        [[nodiscard]] auto PrintSchema() const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrint3DDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDeviceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrintSchema
    {
        auto GetDefaultPrintTicketAsync() const;
        auto GetCapabilitiesAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const;
        auto MergeAndValidateWithDefaultPrintTicketAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrintSchema>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrintSchema<D>;
    };
}
#endif
