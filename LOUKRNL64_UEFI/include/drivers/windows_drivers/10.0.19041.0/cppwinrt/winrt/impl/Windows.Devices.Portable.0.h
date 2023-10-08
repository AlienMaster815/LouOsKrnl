// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Portable_0_H
#define WINRT_Windows_Devices_Portable_0_H
namespace winrt::Windows::Storage
{
    struct StorageFolder;
}
namespace winrt::Windows::Devices::Portable
{
    enum class ServiceDeviceType : int32_t
    {
        CalendarService = 0,
        ContactsService = 1,
        DeviceStatusService = 2,
        NotesService = 3,
        RingtonesService = 4,
        SmsService = 5,
        TasksService = 6,
    };
    struct IServiceDeviceStatics;
    struct IStorageDeviceStatics;
    struct ServiceDevice;
    struct StorageDevice;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Portable::IServiceDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Portable::IStorageDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Portable::ServiceDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Portable::StorageDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Portable::ServiceDeviceType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Portable::IServiceDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Portable.IServiceDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Portable::IStorageDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Portable.IStorageDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Portable::ServiceDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Portable.ServiceDevice" };
    };
    template <> struct name<Windows::Devices::Portable::StorageDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Portable.StorageDevice" };
    };
    template <> struct name<Windows::Devices::Portable::ServiceDeviceType>
    {
        static constexpr auto & value{ L"Windows.Devices.Portable.ServiceDeviceType" };
    };
    template <> struct guid_storage<Windows::Devices::Portable::IServiceDeviceStatics>
    {
        static constexpr guid value{ 0xA88214E1,0x59C7,0x4A20,{ 0xAB,0xA6,0x9F,0x67,0x07,0x93,0x72,0x30 } };
    };
    template <> struct guid_storage<Windows::Devices::Portable::IStorageDeviceStatics>
    {
        static constexpr guid value{ 0x5ECE44EE,0x1B23,0x4DD2,{ 0x86,0x52,0xBC,0x16,0x4F,0x00,0x31,0x28 } };
    };
    template <> struct abi<Windows::Devices::Portable::IServiceDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromServiceId(winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Portable::IStorageDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Portable_IServiceDeviceStatics
    {
        auto GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType) const;
        auto GetDeviceSelectorFromServiceId(winrt::guid const& serviceId) const;
    };
    template <> struct consume<Windows::Devices::Portable::IServiceDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Portable_IServiceDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Portable_IStorageDeviceStatics
    {
        auto FromId(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Portable::IStorageDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Portable_IStorageDeviceStatics<D>;
    };
}
#endif
