// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_HumanInterfaceDevice_0_H
#define WINRT_Windows_Devices_HumanInterfaceDevice_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage
{
    enum class FileAccessMode : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Devices::HumanInterfaceDevice
{
    enum class HidCollectionType : int32_t
    {
        Physical = 0,
        Application = 1,
        Logical = 2,
        Report = 3,
        NamedArray = 4,
        UsageSwitch = 5,
        UsageModifier = 6,
        Other = 7,
    };
    enum class HidReportType : int32_t
    {
        Input = 0,
        Output = 1,
        Feature = 2,
    };
    struct IHidBooleanControl;
    struct IHidBooleanControlDescription;
    struct IHidBooleanControlDescription2;
    struct IHidCollection;
    struct IHidDevice;
    struct IHidDeviceStatics;
    struct IHidFeatureReport;
    struct IHidInputReport;
    struct IHidInputReportReceivedEventArgs;
    struct IHidNumericControl;
    struct IHidNumericControlDescription;
    struct IHidOutputReport;
    struct HidBooleanControl;
    struct HidBooleanControlDescription;
    struct HidCollection;
    struct HidDevice;
    struct HidFeatureReport;
    struct HidInputReport;
    struct HidInputReportReceivedEventArgs;
    struct HidNumericControl;
    struct HidNumericControlDescription;
    struct HidOutputReport;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidInputReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidNumericControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidOutputReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidCollectionType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::HumanInterfaceDevice::HidReportType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidCollection" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidDevice" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidInputReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidCollection>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidCollection" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidDevice" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidInputReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidInputReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidNumericControl>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidNumericControl" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidOutputReport>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidOutputReport" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidCollectionType>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidCollectionType" };
    };
    template <> struct name<Windows::Devices::HumanInterfaceDevice::HidReportType>
    {
        static constexpr auto & value{ L"Windows.Devices.HumanInterfaceDevice.HidReportType" };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        static constexpr guid value{ 0x524DF48A,0x3695,0x408C,{ 0xBB,0xA2,0xE2,0xEB,0x5A,0xBF,0xBC,0x20 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        static constexpr guid value{ 0x6196E543,0x29D8,0x4A2A,{ 0x86,0x83,0x84,0x9E,0x20,0x7B,0xBE,0x31 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        static constexpr guid value{ 0xC8EED2EA,0x8A77,0x4C36,{ 0xAA,0x00,0x5F,0xF0,0x44,0x9D,0x3E,0x73 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        static constexpr guid value{ 0x7189F5A3,0x32F1,0x46E3,{ 0xBE,0xFD,0x44,0xD2,0x66,0x3B,0x7E,0x6A } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        static constexpr guid value{ 0x5F8A14E7,0x2200,0x432E,{ 0x95,0xDA,0xD0,0x9B,0x87,0xD5,0x74,0xA8 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        static constexpr guid value{ 0x9E5981E4,0x9856,0x418C,{ 0x9F,0x73,0x77,0xDE,0x0C,0xD8,0x57,0x54 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        static constexpr guid value{ 0x841D9B79,0x5AE5,0x46E3,{ 0x82,0xEF,0x1F,0xEC,0x5C,0x89,0x42,0xF4 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        static constexpr guid value{ 0xC35D0E50,0xF7E7,0x4E8D,{ 0xB2,0x3E,0xCA,0xBB,0xE5,0x6B,0x90,0xE9 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        static constexpr guid value{ 0x7059C5CB,0x59B2,0x4DC2,{ 0x98,0x5C,0x0A,0xDC,0x61,0x36,0xFA,0x2D } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        static constexpr guid value{ 0xE38A12A5,0x35A7,0x4B75,{ 0x89,0xC8,0xFB,0x1F,0x28,0xB1,0x08,0x23 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        static constexpr guid value{ 0x638D5E86,0x1D97,0x4C75,{ 0x92,0x7F,0x5F,0xF5,0x8B,0xA0,0x5E,0x32 } };
    };
    template <> struct guid_storage<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        static constexpr guid value{ 0x62CB2544,0xC896,0x4463,{ 0x93,0xC1,0xDF,0x9D,0xB0,0x53,0xC4,0x50 } };
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidBooleanControl;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidCollection>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidCollection;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidDevice>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidDevice;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidFeatureReport;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidInputReport>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidInputReport;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidNumericControl>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidNumericControl;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription;
    };
    template <> struct default_interface<Windows::Devices::HumanInterfaceDevice::HidOutputReport>
    {
        using type = Windows::Devices::HumanInterfaceDevice::IHidOutputReport;
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsActive(bool) noexcept = 0;
            virtual int32_t __stdcall get_ControlDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ParentCollections(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAbsolute(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Version(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall GetInputReportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetInputReportByIdAsync(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFeatureReportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetFeatureReportByIdAsync(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOutputReport(void**) noexcept = 0;
            virtual int32_t __stdcall CreateOutputReportById(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFeatureReport(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFeatureReportById(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall SendOutputReportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendFeatureReportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlDescriptions(int32_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlDescriptions(int32_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_InputReportReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputReportReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorVidPid(uint16_t, uint16_t, uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActivatedBooleanControls(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitionedBooleanControls(void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsGrouped(bool*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaledValue(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaledValue(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ControlDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReportCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsagePage(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalMinimum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalMaximum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalMinimum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalMaximum(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnitExponent(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Unit(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsAbsolute(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNull(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ParentCollections(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlByDescription(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControl(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlByDescription(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
        [[nodiscard]] auto IsActive() const;
        auto IsActive(bool value) const;
        [[nodiscard]] auto ControlDescription() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ReportId() const;
        [[nodiscard]] auto ReportType() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
        [[nodiscard]] auto ParentCollections() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2
    {
        [[nodiscard]] auto IsAbsolute() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidCollection
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidCollection>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidDevice
    {
        [[nodiscard]] auto VendorId() const;
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
        auto GetInputReportAsync() const;
        auto GetInputReportAsync(uint16_t reportId) const;
        auto GetFeatureReportAsync() const;
        auto GetFeatureReportAsync(uint16_t reportId) const;
        auto CreateOutputReport() const;
        auto CreateOutputReport(uint16_t reportId) const;
        auto CreateFeatureReport() const;
        auto CreateFeatureReport(uint16_t reportId) const;
        auto SendOutputReportAsync(Windows::Devices::HumanInterfaceDevice::HidOutputReport const& outputReport) const;
        auto SendFeatureReportAsync(Windows::Devices::HumanInterfaceDevice::HidFeatureReport const& featureReport) const;
        auto GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
        auto GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const;
        auto InputReportReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
        using InputReportReceived_revoker = impl::event_revoker<Windows::Devices::HumanInterfaceDevice::IHidDevice, &impl::abi_t<Windows::Devices::HumanInterfaceDevice::IHidDevice>::remove_InputReportReceived>;
        InputReportReceived_revoker InputReportReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const;
        auto InputReportReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidDevice>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics
    {
        auto GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const;
        auto GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const;
        auto FromIdAsync(param::hstring const& deviceId, Windows::Storage::FileAccessMode const& accessMode) const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Data() const;
        auto Data(Windows::Storage::Streams::IBuffer const& value) const;
        auto GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        auto GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto ActivatedBooleanControls() const;
        [[nodiscard]] auto TransitionedBooleanControls() const;
        auto GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        auto GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidInputReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs
    {
        [[nodiscard]] auto Report() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto IsGrouped() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
        [[nodiscard]] auto Value() const;
        auto Value(int64_t value) const;
        [[nodiscard]] auto ScaledValue() const;
        auto ScaledValue(int64_t value) const;
        [[nodiscard]] auto ControlDescription() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ReportId() const;
        [[nodiscard]] auto ReportType() const;
        [[nodiscard]] auto ReportSize() const;
        [[nodiscard]] auto ReportCount() const;
        [[nodiscard]] auto UsagePage() const;
        [[nodiscard]] auto UsageId() const;
        [[nodiscard]] auto LogicalMinimum() const;
        [[nodiscard]] auto LogicalMaximum() const;
        [[nodiscard]] auto PhysicalMinimum() const;
        [[nodiscard]] auto PhysicalMaximum() const;
        [[nodiscard]] auto UnitExponent() const;
        [[nodiscard]] auto Unit() const;
        [[nodiscard]] auto IsAbsolute() const;
        [[nodiscard]] auto HasNull() const;
        [[nodiscard]] auto ParentCollections() const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Data() const;
        auto Data(Windows::Storage::Streams::IBuffer const& value) const;
        auto GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const;
        auto GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
        auto GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const;
    };
    template <> struct consume<Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
    {
        template <typename D> using type = consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>;
    };
}
#endif
