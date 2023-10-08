// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_0_H
#define WINRT_Windows_System_Power_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::System::Power
{
    enum class BatteryStatus : int32_t
    {
        NotPresent = 0,
        Discharging = 1,
        Idle = 2,
        Charging = 3,
    };
    enum class EnergySaverStatus : int32_t
    {
        Disabled = 0,
        Off = 1,
        On = 2,
    };
    enum class PowerSupplyStatus : int32_t
    {
        NotPresent = 0,
        Inadequate = 1,
        Adequate = 2,
    };
    struct IBackgroundEnergyManagerStatics;
    struct IForegroundEnergyManagerStatics;
    struct IPowerManagerStatics;
    struct BackgroundEnergyManager;
    struct ForegroundEnergyManager;
    struct PowerManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Power::IBackgroundEnergyManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Power::IForegroundEnergyManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Power::IPowerManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Power::BackgroundEnergyManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Power::ForegroundEnergyManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Power::PowerManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Power::BatteryStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Power::EnergySaverStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Power::PowerSupplyStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::System::Power::IBackgroundEnergyManagerStatics>
    {
        static constexpr auto & value{ L"Windows.System.Power.IBackgroundEnergyManagerStatics" };
    };
    template <> struct name<Windows::System::Power::IForegroundEnergyManagerStatics>
    {
        static constexpr auto & value{ L"Windows.System.Power.IForegroundEnergyManagerStatics" };
    };
    template <> struct name<Windows::System::Power::IPowerManagerStatics>
    {
        static constexpr auto & value{ L"Windows.System.Power.IPowerManagerStatics" };
    };
    template <> struct name<Windows::System::Power::BackgroundEnergyManager>
    {
        static constexpr auto & value{ L"Windows.System.Power.BackgroundEnergyManager" };
    };
    template <> struct name<Windows::System::Power::ForegroundEnergyManager>
    {
        static constexpr auto & value{ L"Windows.System.Power.ForegroundEnergyManager" };
    };
    template <> struct name<Windows::System::Power::PowerManager>
    {
        static constexpr auto & value{ L"Windows.System.Power.PowerManager" };
    };
    template <> struct name<Windows::System::Power::BatteryStatus>
    {
        static constexpr auto & value{ L"Windows.System.Power.BatteryStatus" };
    };
    template <> struct name<Windows::System::Power::EnergySaverStatus>
    {
        static constexpr auto & value{ L"Windows.System.Power.EnergySaverStatus" };
    };
    template <> struct name<Windows::System::Power::PowerSupplyStatus>
    {
        static constexpr auto & value{ L"Windows.System.Power.PowerSupplyStatus" };
    };
    template <> struct guid_storage<Windows::System::Power::IBackgroundEnergyManagerStatics>
    {
        static constexpr guid value{ 0xB3161D95,0x1180,0x4376,{ 0x96,0xE1,0x40,0x95,0x56,0x81,0x47,0xCE } };
    };
    template <> struct guid_storage<Windows::System::Power::IForegroundEnergyManagerStatics>
    {
        static constexpr guid value{ 0x9FF86872,0xE677,0x4814,{ 0x9A,0x20,0x53,0x37,0xCA,0x73,0x2B,0x98 } };
    };
    template <> struct guid_storage<Windows::System::Power::IPowerManagerStatics>
    {
        static constexpr guid value{ 0x1394825D,0x62CE,0x4364,{ 0x98,0xD5,0xAA,0x28,0xC7,0xFB,0xD1,0x5B } };
    };
    template <> struct abi<Windows::System::Power::IBackgroundEnergyManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LowUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NearMaxAcceptableUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAcceptableUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExcessiveUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NearTerminationUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TerminationUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecentEnergyUsage(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecentEnergyUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_RecentEnergyUsageIncreased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecentEnergyUsageIncreased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecentEnergyUsageReturnedToLow(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecentEnergyUsageReturnedToLow(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Power::IForegroundEnergyManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LowUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NearMaxAcceptableUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAcceptableUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExcessiveUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecentEnergyUsage(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecentEnergyUsageLevel(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_RecentEnergyUsageIncreased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecentEnergyUsageIncreased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecentEnergyUsageReturnedToLow(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecentEnergyUsageReturnedToLow(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Power::IPowerManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnergySaverStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_EnergySaverStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnergySaverStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_BatteryStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_BatteryStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BatteryStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_PowerSupplyStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PowerSupplyStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PowerSupplyStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_RemainingChargePercent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_RemainingChargePercentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemainingChargePercentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_RemainingDischargeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_RemainingDischargeTimeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemainingDischargeTimeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Power_IBackgroundEnergyManagerStatics
    {
        [[nodiscard]] auto LowUsageLevel() const;
        [[nodiscard]] auto NearMaxAcceptableUsageLevel() const;
        [[nodiscard]] auto MaxAcceptableUsageLevel() const;
        [[nodiscard]] auto ExcessiveUsageLevel() const;
        [[nodiscard]] auto NearTerminationUsageLevel() const;
        [[nodiscard]] auto TerminationUsageLevel() const;
        [[nodiscard]] auto RecentEnergyUsage() const;
        [[nodiscard]] auto RecentEnergyUsageLevel() const;
        auto RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RecentEnergyUsageIncreased_revoker = impl::event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased>;
        RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RecentEnergyUsageIncreased(winrt::event_token const& token) const noexcept;
        auto RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RecentEnergyUsageReturnedToLow_revoker = impl::event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow>;
        RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RecentEnergyUsageReturnedToLow(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Power::IBackgroundEnergyManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Power_IForegroundEnergyManagerStatics
    {
        [[nodiscard]] auto LowUsageLevel() const;
        [[nodiscard]] auto NearMaxAcceptableUsageLevel() const;
        [[nodiscard]] auto MaxAcceptableUsageLevel() const;
        [[nodiscard]] auto ExcessiveUsageLevel() const;
        [[nodiscard]] auto RecentEnergyUsage() const;
        [[nodiscard]] auto RecentEnergyUsageLevel() const;
        auto RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RecentEnergyUsageIncreased_revoker = impl::event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased>;
        RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RecentEnergyUsageIncreased(winrt::event_token const& token) const noexcept;
        auto RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RecentEnergyUsageReturnedToLow_revoker = impl::event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow>;
        RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RecentEnergyUsageReturnedToLow(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Power::IForegroundEnergyManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Power_IPowerManagerStatics
    {
        [[nodiscard]] auto EnergySaverStatus() const;
        auto EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using EnergySaverStatusChanged_revoker = impl::event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged>;
        EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto EnergySaverStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto BatteryStatus() const;
        auto BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using BatteryStatusChanged_revoker = impl::event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged>;
        BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto BatteryStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto PowerSupplyStatus() const;
        auto PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PowerSupplyStatusChanged_revoker = impl::event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged>;
        PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto PowerSupplyStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto RemainingChargePercent() const;
        auto RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RemainingChargePercentChanged_revoker = impl::event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged>;
        RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RemainingChargePercentChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto RemainingDischargeTime() const;
        auto RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RemainingDischargeTimeChanged_revoker = impl::event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged>;
        RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RemainingDischargeTimeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Power::IPowerManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_Power_IPowerManagerStatics<D>;
    };
}
#endif
