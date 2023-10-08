// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Display_0_H
#define WINRT_Windows_Devices_Display_0_H
namespace winrt::Windows::Foundation
{
    struct Point;
}
namespace winrt::Windows::Graphics
{
    struct DisplayAdapterId;
    struct SizeInt32;
}
namespace winrt::Windows::Devices::Display
{
    enum class DisplayMonitorConnectionKind : int32_t
    {
        Internal = 0,
        Wired = 1,
        Wireless = 2,
        Virtual = 3,
    };
    enum class DisplayMonitorDescriptorKind : int32_t
    {
        Edid = 0,
        DisplayId = 1,
    };
    enum class DisplayMonitorPhysicalConnectorKind : int32_t
    {
        Unknown = 0,
        HD15 = 1,
        AnalogTV = 2,
        Dvi = 3,
        Hdmi = 4,
        Lvds = 5,
        Sdi = 6,
        DisplayPort = 7,
    };
    enum class DisplayMonitorUsageKind : int32_t
    {
        Standard = 0,
        HeadMounted = 1,
        SpecialPurpose = 2,
    };
    struct IDisplayMonitor;
    struct IDisplayMonitor2;
    struct IDisplayMonitorStatics;
    struct DisplayMonitor;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Display::IDisplayMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Display::IDisplayMonitor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Display::IDisplayMonitorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Display::DisplayMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Display::DisplayMonitorConnectionKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Display::DisplayMonitorDescriptorKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Display::DisplayMonitorUsageKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Display::IDisplayMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.IDisplayMonitor" };
    };
    template <> struct name<Windows::Devices::Display::IDisplayMonitor2>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.IDisplayMonitor2" };
    };
    template <> struct name<Windows::Devices::Display::IDisplayMonitorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.IDisplayMonitorStatics" };
    };
    template <> struct name<Windows::Devices::Display::DisplayMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.DisplayMonitor" };
    };
    template <> struct name<Windows::Devices::Display::DisplayMonitorConnectionKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.DisplayMonitorConnectionKind" };
    };
    template <> struct name<Windows::Devices::Display::DisplayMonitorDescriptorKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.DisplayMonitorDescriptorKind" };
    };
    template <> struct name<Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.DisplayMonitorPhysicalConnectorKind" };
    };
    template <> struct name<Windows::Devices::Display::DisplayMonitorUsageKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Display.DisplayMonitorUsageKind" };
    };
    template <> struct guid_storage<Windows::Devices::Display::IDisplayMonitor>
    {
        static constexpr guid value{ 0x1F6B15D4,0x1D01,0x4C51,{ 0x87,0xE2,0x6F,0x95,0x4A,0x77,0x2B,0x59 } };
    };
    template <> struct guid_storage<Windows::Devices::Display::IDisplayMonitor2>
    {
        static constexpr guid value{ 0x023018E6,0xCB23,0x5830,{ 0x96,0xDF,0xA7,0xBF,0x6E,0x60,0x25,0x77 } };
    };
    template <> struct guid_storage<Windows::Devices::Display::IDisplayMonitorStatics>
    {
        static constexpr guid value{ 0x6EAE698F,0xA228,0x4C05,{ 0x82,0x1D,0xB6,0x95,0xD6,0x67,0xDE,0x8E } };
    };
    template <> struct default_interface<Windows::Devices::Display::DisplayMonitor>
    {
        using type = Windows::Devices::Display::IDisplayMonitor;
    };
    template <> struct abi<Windows::Devices::Display::IDisplayMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalConnector(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterId(struct struct_Windows_Graphics_DisplayAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterTargetId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeResolutionInRawPixels(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalSizeInInches(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiX(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiY(float*) noexcept = 0;
            virtual int32_t __stdcall get_RedPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_GreenPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BluePrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WhitePoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAverageFullFrameLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall GetDescriptor(int32_t, uint32_t* __resultSize, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Display::IDisplayMonitor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDolbyVisionSupportedInHdrMode(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Display::IDisplayMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromInterfaceIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitor
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto ConnectionKind() const;
        [[nodiscard]] auto PhysicalConnector() const;
        [[nodiscard]] auto DisplayAdapterDeviceId() const;
        [[nodiscard]] auto DisplayAdapterId() const;
        [[nodiscard]] auto DisplayAdapterTargetId() const;
        [[nodiscard]] auto UsageKind() const;
        [[nodiscard]] auto NativeResolutionInRawPixels() const;
        [[nodiscard]] auto PhysicalSizeInInches() const;
        [[nodiscard]] auto RawDpiX() const;
        [[nodiscard]] auto RawDpiY() const;
        [[nodiscard]] auto RedPrimary() const;
        [[nodiscard]] auto GreenPrimary() const;
        [[nodiscard]] auto BluePrimary() const;
        [[nodiscard]] auto WhitePoint() const;
        [[nodiscard]] auto MaxLuminanceInNits() const;
        [[nodiscard]] auto MinLuminanceInNits() const;
        [[nodiscard]] auto MaxAverageFullFrameLuminanceInNits() const;
        auto GetDescriptor(Windows::Devices::Display::DisplayMonitorDescriptorKind const& descriptorKind) const;
    };
    template <> struct consume<Windows::Devices::Display::IDisplayMonitor>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitor2
    {
        [[nodiscard]] auto IsDolbyVisionSupportedInHdrMode() const;
    };
    template <> struct consume<Windows::Devices::Display::IDisplayMonitor2>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitorStatics
    {
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto FromInterfaceIdAsync(param::hstring const& deviceInterfaceId) const;
    };
    template <> struct consume<Windows::Devices::Display::IDisplayMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitorStatics<D>;
    };
}
#endif
