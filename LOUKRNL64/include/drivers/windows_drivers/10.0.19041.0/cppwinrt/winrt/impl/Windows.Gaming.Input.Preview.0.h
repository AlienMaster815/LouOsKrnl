// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_0_H
#define WINRT_Windows_Gaming_Input_Preview_0_H
namespace winrt::Windows::Gaming::Input::Custom
{
    struct IGameControllerProvider;
}
namespace winrt::Windows::Gaming::Input::Preview
{
    struct IGameControllerProviderInfoStatics;
    struct GameControllerProviderInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerProviderInfo>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerProviderInfo>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerProviderInfo" };
    };
    template <> struct guid_storage<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        static constexpr guid value{ 0x0BE1E6C5,0xD9BD,0x44EE,{ 0x83,0x62,0x48,0x8B,0x2E,0x46,0x4B,0xFB } };
    };
    template <> struct abi<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetParentProviderId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProviderId(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics
    {
        auto GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
        auto GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
    };
    template <> struct consume<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>;
    };
}
#endif
