// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Pwm_Provider_0_H
#define WINRT_Windows_Devices_Pwm_Provider_0_H
namespace winrt::Windows::Devices::Pwm::Provider
{
    struct IPwmControllerProvider;
    struct IPwmProvider;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        using type = interface_category;
    };
    template <> struct name<Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.Provider.IPwmControllerProvider" };
    };
    template <> struct name<Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.Provider.IPwmProvider" };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        static constexpr guid value{ 0x1300593B,0xE2E3,0x40A4,{ 0xB7,0xD9,0x48,0xDF,0xF0,0x37,0x7A,0x52 } };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        static constexpr guid value{ 0xA3301228,0x52F1,0x47B0,{ 0x93,0x49,0x66,0xBA,0x43,0xD2,0x59,0x02 } };
    };
    template <> struct abi<Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActualFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall SetDesiredFrequency(double, double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall AcquirePin(int32_t) noexcept = 0;
            virtual int32_t __stdcall ReleasePin(int32_t) noexcept = 0;
            virtual int32_t __stdcall EnablePin(int32_t) noexcept = 0;
            virtual int32_t __stdcall DisablePin(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPulseParameters(int32_t, double, bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllers(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider
    {
        [[nodiscard]] auto PinCount() const;
        [[nodiscard]] auto ActualFrequency() const;
        auto SetDesiredFrequency(double frequency) const;
        [[nodiscard]] auto MaxFrequency() const;
        [[nodiscard]] auto MinFrequency() const;
        auto AcquirePin(int32_t pin) const;
        auto ReleasePin(int32_t pin) const;
        auto EnablePin(int32_t pin) const;
        auto DisablePin(int32_t pin) const;
        auto SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) const;
    };
    template <> struct consume<Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_Provider_IPwmProvider
    {
        auto GetControllers() const;
    };
    template <> struct consume<Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_Provider_IPwmProvider<D>;
    };
}
#endif
