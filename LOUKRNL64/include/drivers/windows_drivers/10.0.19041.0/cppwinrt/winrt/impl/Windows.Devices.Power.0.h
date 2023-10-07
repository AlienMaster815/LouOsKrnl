// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Power_0_H
#define WINRT_Windows_Devices_Power_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::System::Power
{
    enum class BatteryStatus : int32_t;
}
namespace winrt::Windows::Devices::Power
{
    struct IBattery;
    struct IBatteryReport;
    struct IBatteryStatics;
    struct Battery;
    struct BatteryReport;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Power::IBattery>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Power::IBatteryReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Power::IBatteryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Power::Battery>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Power::BatteryReport>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Devices::Power::IBattery>
    {
        static constexpr auto & value{ L"Windows.Devices.Power.IBattery" };
    };
    template <> struct name<Windows::Devices::Power::IBatteryReport>
    {
        static constexpr auto & value{ L"Windows.Devices.Power.IBatteryReport" };
    };
    template <> struct name<Windows::Devices::Power::IBatteryStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Power.IBatteryStatics" };
    };
    template <> struct name<Windows::Devices::Power::Battery>
    {
        static constexpr auto & value{ L"Windows.Devices.Power.Battery" };
    };
    template <> struct name<Windows::Devices::Power::BatteryReport>
    {
        static constexpr auto & value{ L"Windows.Devices.Power.BatteryReport" };
    };
    template <> struct guid_storage<Windows::Devices::Power::IBattery>
    {
        static constexpr guid value{ 0xBC894FC6,0x0072,0x47C8,{ 0x8B,0x5D,0x61,0x4A,0xAA,0x7A,0x43,0x7E } };
    };
    template <> struct guid_storage<Windows::Devices::Power::IBatteryReport>
    {
        static constexpr guid value{ 0xC9858C3A,0x4E13,0x420A,{ 0xA8,0xD0,0x24,0xF1,0x8F,0x39,0x54,0x01 } };
    };
    template <> struct guid_storage<Windows::Devices::Power::IBatteryStatics>
    {
        static constexpr guid value{ 0x79CD72B6,0x9E5E,0x4452,{ 0xBE,0xA6,0xDF,0xCD,0x54,0x1E,0x59,0x7F } };
    };
    template <> struct default_interface<Windows::Devices::Power::Battery>
    {
        using type = Windows::Devices::Power::IBattery;
    };
    template <> struct default_interface<Windows::Devices::Power::BatteryReport>
    {
        using type = Windows::Devices::Power::IBatteryReport;
    };
    template <> struct abi<Windows::Devices::Power::IBattery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetReport(void**) noexcept = 0;
            virtual int32_t __stdcall add_ReportUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReportUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Power::IBatteryReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChargeRateInMilliwatts(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesignCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullChargeCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemainingCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Power::IBatteryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AggregateBattery(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBattery
    {
        [[nodiscard]] auto DeviceId() const;
        auto GetReport() const;
        auto ReportUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const;
        using ReportUpdated_revoker = impl::event_revoker<Windows::Devices::Power::IBattery, &impl::abi_t<Windows::Devices::Power::IBattery>::remove_ReportUpdated>;
        ReportUpdated_revoker ReportUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Power::Battery, Windows::Foundation::IInspectable> const& handler) const;
        auto ReportUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Power::IBattery>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBattery<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBatteryReport
    {
        [[nodiscard]] auto ChargeRateInMilliwatts() const;
        [[nodiscard]] auto DesignCapacityInMilliwattHours() const;
        [[nodiscard]] auto FullChargeCapacityInMilliwattHours() const;
        [[nodiscard]] auto RemainingCapacityInMilliwattHours() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::Power::IBatteryReport>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBatteryReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBatteryStatics
    {
        [[nodiscard]] auto AggregateBattery() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Power::IBatteryStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBatteryStatics<D>;
    };
}
#endif
