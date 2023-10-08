// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Radios_0_H
#define WINRT_Windows_Devices_Radios_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Radios
{
    enum class RadioAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class RadioKind : int32_t
    {
        Other = 0,
        WiFi = 1,
        MobileBroadband = 2,
        Bluetooth = 3,
        FM = 4,
    };
    enum class RadioState : int32_t
    {
        Unknown = 0,
        On = 1,
        Off = 2,
        Disabled = 3,
    };
    struct IRadio;
    struct IRadioStatics;
    struct Radio;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Radios::IRadio>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Radios::IRadioStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Radios::Radio>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Radios::RadioAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Radios::RadioKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Radios::RadioState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Radios::IRadio>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.IRadio" };
    };
    template <> struct name<Windows::Devices::Radios::IRadioStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.IRadioStatics" };
    };
    template <> struct name<Windows::Devices::Radios::Radio>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.Radio" };
    };
    template <> struct name<Windows::Devices::Radios::RadioAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.RadioAccessStatus" };
    };
    template <> struct name<Windows::Devices::Radios::RadioKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.RadioKind" };
    };
    template <> struct name<Windows::Devices::Radios::RadioState>
    {
        static constexpr auto & value{ L"Windows.Devices.Radios.RadioState" };
    };
    template <> struct guid_storage<Windows::Devices::Radios::IRadio>
    {
        static constexpr guid value{ 0x252118DF,0xB33E,0x416A,{ 0x87,0x5F,0x1C,0xF3,0x8A,0xE2,0xD8,0x3E } };
    };
    template <> struct guid_storage<Windows::Devices::Radios::IRadioStatics>
    {
        static constexpr guid value{ 0x5FB6A12E,0x67CB,0x46AE,{ 0xAA,0xE9,0x65,0x91,0x9F,0x86,0xEF,0xF4 } };
    };
    template <> struct default_interface<Windows::Devices::Radios::Radio>
    {
        using type = Windows::Devices::Radios::IRadio;
    };
    template <> struct abi<Windows::Devices::Radios::IRadio>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetStateAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Radios::IRadioStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetRadiosAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Radios_IRadio
    {
        auto SetStateAsync(Windows::Devices::Radios::RadioState const& value) const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Devices::Radios::IRadio, &impl::abi_t<Windows::Devices::Radios::IRadio>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const;
        auto StateChanged(winrt::event_token const& eventCookie) const noexcept;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::Devices::Radios::IRadio>
    {
        template <typename D> using type = consume_Windows_Devices_Radios_IRadio<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Radios_IRadioStatics
    {
        auto GetRadiosAsync() const;
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Devices::Radios::IRadioStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Radios_IRadioStatics<D>;
    };
}
#endif
