// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Core_0_H
#define WINRT_Windows_UI_Input_Core_0_H
namespace winrt::Windows::ApplicationModel::Core
{
    struct CoreApplicationView;
}
namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
namespace winrt::Windows::UI::Core
{
    struct CoreDispatcher;
}
namespace winrt::Windows::UI::Input
{
    struct RadialController;
}
namespace winrt::Windows::UI::Input::Core
{
    struct IRadialControllerIndependentInputSource;
    struct IRadialControllerIndependentInputSource2;
    struct IRadialControllerIndependentInputSourceStatics;
    struct RadialControllerIndependentInputSource;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Core::IRadialControllerIndependentInputSource2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Core::RadialControllerIndependentInputSource>
    {
        using type = class_category;
    };
    template <> struct name<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource" };
    };
    template <> struct name<Windows::UI::Input::Core::IRadialControllerIndependentInputSource2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource2" };
    };
    template <> struct name<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics" };
    };
    template <> struct name<Windows::UI::Input::Core::RadialControllerIndependentInputSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Core.RadialControllerIndependentInputSource" };
    };
    template <> struct guid_storage<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
    {
        static constexpr guid value{ 0x3D577EF6,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::Core::IRadialControllerIndependentInputSource2>
    {
        static constexpr guid value{ 0x7073AAD8,0x35F3,0x4EEB,{ 0x87,0x51,0xBE,0x4D,0x0A,0x66,0xFA,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
    {
        static constexpr guid value{ 0x3D577EF5,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct default_interface<Windows::UI::Input::Core::RadialControllerIndependentInputSource>
    {
        using type = Windows::UI::Input::Core::IRadialControllerIndependentInputSource;
    };
    template <> struct abi<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Controller(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Core::IRadialControllerIndependentInputSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForView(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource
    {
        [[nodiscard]] auto Controller() const;
        [[nodiscard]] auto Dispatcher() const;
    };
    template <> struct consume<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
    {
        template <typename D> using type = consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource2
    {
        [[nodiscard]] auto DispatcherQueue() const;
    };
    template <> struct consume<Windows::UI::Input::Core::IRadialControllerIndependentInputSource2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics
    {
        auto CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view) const;
    };
    template <> struct consume<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics<D>;
    };
}
#endif
