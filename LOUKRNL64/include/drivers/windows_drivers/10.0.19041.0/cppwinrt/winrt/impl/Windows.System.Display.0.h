// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Display_0_H
#define WINRT_Windows_System_Display_0_H
namespace winrt::Windows::System::Display
{
    struct IDisplayRequest;
    struct DisplayRequest;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Display::IDisplayRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Display::DisplayRequest>
    {
        using type = class_category;
    };
    template <> struct name<Windows::System::Display::IDisplayRequest>
    {
        static constexpr auto & value{ L"Windows.System.Display.IDisplayRequest" };
    };
    template <> struct name<Windows::System::Display::DisplayRequest>
    {
        static constexpr auto & value{ L"Windows.System.Display.DisplayRequest" };
    };
    template <> struct guid_storage<Windows::System::Display::IDisplayRequest>
    {
        static constexpr guid value{ 0xE5732044,0xF49F,0x4B60,{ 0x8D,0xD4,0x5E,0x7E,0x3A,0x63,0x2A,0xC0 } };
    };
    template <> struct default_interface<Windows::System::Display::DisplayRequest>
    {
        using type = Windows::System::Display::IDisplayRequest;
    };
    template <> struct abi<Windows::System::Display::IDisplayRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestActive() noexcept = 0;
            virtual int32_t __stdcall RequestRelease() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Display_IDisplayRequest
    {
        auto RequestActive() const;
        auto RequestRelease() const;
    };
    template <> struct consume<Windows::System::Display::IDisplayRequest>
    {
        template <typename D> using type = consume_Windows_System_Display_IDisplayRequest<D>;
    };
}
#endif
