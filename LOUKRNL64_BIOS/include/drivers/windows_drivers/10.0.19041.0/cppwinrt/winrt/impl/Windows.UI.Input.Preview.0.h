// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_0_H
#define WINRT_Windows_UI_Input_Preview_0_H
namespace winrt::Windows::UI::Input
{
    struct InputActivationListener;
}
namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
namespace winrt::Windows::UI::Input::Preview
{
    struct IInputActivationListenerPreviewStatics;
    struct InputActivationListenerPreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::InputActivationListenerPreview>
    {
        using type = class_category;
    };
    template <> struct name<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.IInputActivationListenerPreviewStatics" };
    };
    template <> struct name<Windows::UI::Input::Preview::InputActivationListenerPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.InputActivationListenerPreview" };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        static constexpr guid value{ 0xF0551CE5,0x0DE6,0x5BE0,{ 0xA5,0x89,0xF7,0x37,0x20,0x1A,0x45,0x82 } };
    };
    template <> struct abi<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForApplicationWindow(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics
    {
        auto CreateForApplicationWindow(Windows::UI::WindowManagement::AppWindow const& window) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics<D>;
    };
}
#endif
