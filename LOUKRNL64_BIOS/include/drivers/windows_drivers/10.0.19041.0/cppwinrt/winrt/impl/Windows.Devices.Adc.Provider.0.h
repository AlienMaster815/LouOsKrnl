// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Adc_Provider_0_H
#define WINRT_Windows_Devices_Adc_Provider_0_H
namespace winrt::Windows::Devices::Adc::Provider
{
    enum class ProviderAdcChannelMode : int32_t
    {
        SingleEnded = 0,
        Differential = 1,
    };
    struct IAdcControllerProvider;
    struct IAdcProvider;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Adc::Provider::IAdcControllerProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::Provider::IAdcProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Adc::Provider::ProviderAdcChannelMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Adc::Provider::IAdcControllerProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.Provider.IAdcControllerProvider" };
    };
    template <> struct name<Windows::Devices::Adc::Provider::IAdcProvider>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.Provider.IAdcProvider" };
    };
    template <> struct name<Windows::Devices::Adc::Provider::ProviderAdcChannelMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Adc.Provider.ProviderAdcChannelMode" };
    };
    template <> struct guid_storage<Windows::Devices::Adc::Provider::IAdcControllerProvider>
    {
        static constexpr guid value{ 0xBE545828,0x816D,0x4DE5,{ 0xA0,0x48,0xAB,0xA0,0x69,0x58,0xAA,0xA8 } };
    };
    template <> struct guid_storage<Windows::Devices::Adc::Provider::IAdcProvider>
    {
        static constexpr guid value{ 0x28953668,0x9359,0x4C57,{ 0xBC,0x88,0xE2,0x75,0xE8,0x16,0x38,0xC9 } };
    };
    template <> struct abi<Windows::Devices::Adc::Provider::IAdcControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChannelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionInBits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ChannelMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChannelMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall IsChannelModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall AcquireChannel(int32_t) noexcept = 0;
            virtual int32_t __stdcall ReleaseChannel(int32_t) noexcept = 0;
            virtual int32_t __stdcall ReadValue(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Adc::Provider::IAdcProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllers(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_Provider_IAdcControllerProvider
    {
        [[nodiscard]] auto ChannelCount() const;
        [[nodiscard]] auto ResolutionInBits() const;
        [[nodiscard]] auto MinValue() const;
        [[nodiscard]] auto MaxValue() const;
        [[nodiscard]] auto ChannelMode() const;
        auto ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& value) const;
        auto IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& channelMode) const;
        auto AcquireChannel(int32_t channel) const;
        auto ReleaseChannel(int32_t channel) const;
        auto ReadValue(int32_t channelNumber) const;
    };
    template <> struct consume<Windows::Devices::Adc::Provider::IAdcControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_Provider_IAdcProvider
    {
        auto GetControllers() const;
    };
    template <> struct consume<Windows::Devices::Adc::Provider::IAdcProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_Provider_IAdcProvider<D>;
    };
}
#endif
