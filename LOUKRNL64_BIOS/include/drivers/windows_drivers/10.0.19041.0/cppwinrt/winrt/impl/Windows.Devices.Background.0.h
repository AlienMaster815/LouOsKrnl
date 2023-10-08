// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Background_0_H
#define WINRT_Windows_Devices_Background_0_H
namespace winrt::Windows::Foundation
{
}
namespace winrt::Windows::Devices::Background
{
    struct IDeviceServicingDetails;
    struct IDeviceUseDetails;
    struct DeviceServicingDetails;
    struct DeviceUseDetails;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Background::IDeviceServicingDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Background::IDeviceUseDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Background::DeviceServicingDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Background::DeviceUseDetails>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Devices::Background::IDeviceServicingDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Background.IDeviceServicingDetails" };
    };
    template <> struct name<Windows::Devices::Background::IDeviceUseDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Background.IDeviceUseDetails" };
    };
    template <> struct name<Windows::Devices::Background::DeviceServicingDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Background.DeviceServicingDetails" };
    };
    template <> struct name<Windows::Devices::Background::DeviceUseDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Background.DeviceUseDetails" };
    };
    template <> struct guid_storage<Windows::Devices::Background::IDeviceServicingDetails>
    {
        static constexpr guid value{ 0x4AABEE29,0x2344,0x4AC4,{ 0x85,0x27,0x4A,0x8E,0xF6,0x90,0x56,0x45 } };
    };
    template <> struct guid_storage<Windows::Devices::Background::IDeviceUseDetails>
    {
        static constexpr guid value{ 0x7D565141,0x557E,0x4154,{ 0xB9,0x94,0xE4,0xF7,0xA1,0x1F,0xB3,0x23 } };
    };
    template <> struct default_interface<Windows::Devices::Background::DeviceServicingDetails>
    {
        using type = Windows::Devices::Background::IDeviceServicingDetails;
    };
    template <> struct default_interface<Windows::Devices::Background::DeviceUseDetails>
    {
        using type = Windows::Devices::Background::IDeviceUseDetails;
    };
    template <> struct abi<Windows::Devices::Background::IDeviceServicingDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExpectedDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Background::IDeviceUseDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Background_IDeviceServicingDetails
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Arguments() const;
        [[nodiscard]] auto ExpectedDuration() const;
    };
    template <> struct consume<Windows::Devices::Background::IDeviceServicingDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Background_IDeviceServicingDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Background_IDeviceUseDetails
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Arguments() const;
    };
    template <> struct consume<Windows::Devices::Background::IDeviceUseDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Background_IDeviceUseDetails<D>;
    };
}
#endif
