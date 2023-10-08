// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Pwm_0_H
#define WINRT_Windows_Devices_Pwm_0_H
namespace winrt::Windows::Devices::Pwm::Provider
{
    struct IPwmProvider;
}
namespace winrt::Windows::Devices::Pwm
{
    enum class PwmPulsePolarity : int32_t
    {
        ActiveHigh = 0,
        ActiveLow = 1,
    };
    struct IPwmController;
    struct IPwmControllerStatics;
    struct IPwmControllerStatics2;
    struct IPwmControllerStatics3;
    struct IPwmPin;
    struct PwmController;
    struct PwmPin;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Pwm::IPwmController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::IPwmControllerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::IPwmPin>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Pwm::PwmController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Pwm::PwmPin>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Pwm::PwmPulsePolarity>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Pwm::IPwmController>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmController" };
    };
    template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics" };
    };
    template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics2" };
    };
    template <> struct name<Windows::Devices::Pwm::IPwmControllerStatics3>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmControllerStatics3" };
    };
    template <> struct name<Windows::Devices::Pwm::IPwmPin>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.IPwmPin" };
    };
    template <> struct name<Windows::Devices::Pwm::PwmController>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.PwmController" };
    };
    template <> struct name<Windows::Devices::Pwm::PwmPin>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.PwmPin" };
    };
    template <> struct name<Windows::Devices::Pwm::PwmPulsePolarity>
    {
        static constexpr auto & value{ L"Windows.Devices.Pwm.PwmPulsePolarity" };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::IPwmController>
    {
        static constexpr guid value{ 0xC45F5C85,0xD2E8,0x42CF,{ 0x9B,0xD6,0xCF,0x5E,0xD0,0x29,0xE6,0xA7 } };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::IPwmControllerStatics>
    {
        static constexpr guid value{ 0x4263BDA1,0x8946,0x4404,{ 0xBD,0x48,0x81,0xDD,0x12,0x4A,0xF4,0xD9 } };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::IPwmControllerStatics2>
    {
        static constexpr guid value{ 0x44FC5B1F,0xF119,0x4BDD,{ 0x97,0xAD,0xF7,0x6E,0xF9,0x86,0x73,0x6D } };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::IPwmControllerStatics3>
    {
        static constexpr guid value{ 0xB2581871,0x0229,0x4344,{ 0xAE,0x3F,0x9B,0x7C,0xD0,0xE6,0x6B,0x94 } };
    };
    template <> struct guid_storage<Windows::Devices::Pwm::IPwmPin>
    {
        static constexpr guid value{ 0x22972DC8,0xC6CF,0x4821,{ 0xB7,0xF9,0xC6,0x45,0x4F,0xB6,0xAF,0x79 } };
    };
    template <> struct default_interface<Windows::Devices::Pwm::PwmController>
    {
        using type = Windows::Devices::Pwm::IPwmController;
    };
    template <> struct default_interface<Windows::Devices::Pwm::PwmPin>
    {
        using type = Windows::Devices::Pwm::IPwmPin;
    };
    template <> struct abi<Windows::Devices::Pwm::IPwmController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActualFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall SetDesiredFrequency(double, double*) noexcept = 0;
            virtual int32_t __stdcall get_MinFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxFrequency(double*) noexcept = 0;
            virtual int32_t __stdcall OpenPin(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Pwm::IPwmControllerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromFriendlyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Pwm::IPwmPin>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Controller(void**) noexcept = 0;
            virtual int32_t __stdcall GetActiveDutyCyclePercentage(double*) noexcept = 0;
            virtual int32_t __stdcall SetActiveDutyCyclePercentage(double) noexcept = 0;
            virtual int32_t __stdcall get_Polarity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Polarity(int32_t) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall get_IsStarted(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_IPwmController
    {
        [[nodiscard]] auto PinCount() const;
        [[nodiscard]] auto ActualFrequency() const;
        auto SetDesiredFrequency(double desiredFrequency) const;
        [[nodiscard]] auto MinFrequency() const;
        [[nodiscard]] auto MaxFrequency() const;
        auto OpenPin(int32_t pinNumber) const;
    };
    template <> struct consume<Windows::Devices::Pwm::IPwmController>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_IPwmController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_IPwmControllerStatics
    {
        auto GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider) const;
    };
    template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_IPwmControllerStatics2
    {
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_IPwmControllerStatics3
    {
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(param::hstring const& friendlyName) const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Pwm::IPwmControllerStatics3>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_IPwmControllerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Pwm_IPwmPin
    {
        [[nodiscard]] auto Controller() const;
        auto GetActiveDutyCyclePercentage() const;
        auto SetActiveDutyCyclePercentage(double dutyCyclePercentage) const;
        [[nodiscard]] auto Polarity() const;
        auto Polarity(Windows::Devices::Pwm::PwmPulsePolarity const& value) const;
        auto Start() const;
        auto Stop() const;
        [[nodiscard]] auto IsStarted() const;
    };
    template <> struct consume<Windows::Devices::Pwm::IPwmPin>
    {
        template <typename D> using type = consume_Windows_Devices_Pwm_IPwmPin<D>;
    };
}
#endif
