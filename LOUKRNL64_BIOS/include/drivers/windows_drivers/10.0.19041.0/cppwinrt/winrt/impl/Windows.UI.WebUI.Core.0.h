// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WebUI_Core_0_H
#define WINRT_Windows_UI_WebUI_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::WebUI::Core
{
    enum class WebUICommandBarClosedDisplayMode : int32_t
    {
        Default = 0,
        Minimal = 1,
        Compact = 2,
    };
    struct IWebUICommandBar;
    struct IWebUICommandBarBitmapIcon;
    struct IWebUICommandBarBitmapIconFactory;
    struct IWebUICommandBarConfirmationButton;
    struct IWebUICommandBarElement;
    struct IWebUICommandBarIcon;
    struct IWebUICommandBarIconButton;
    struct IWebUICommandBarItemInvokedEventArgs;
    struct IWebUICommandBarSizeChangedEventArgs;
    struct IWebUICommandBarStatics;
    struct IWebUICommandBarSymbolIcon;
    struct IWebUICommandBarSymbolIconFactory;
    struct WebUICommandBar;
    struct WebUICommandBarBitmapIcon;
    struct WebUICommandBarConfirmationButton;
    struct WebUICommandBarIconButton;
    struct WebUICommandBarItemInvokedEventArgs;
    struct WebUICommandBarSizeChangedEventArgs;
    struct WebUICommandBarSymbolIcon;
    struct MenuClosedEventHandler;
    struct MenuOpenedEventHandler;
    struct SizeChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarIconButton>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::MenuClosedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::WebUI::Core::SizeChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBar>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBar" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarBitmapIcon" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarBitmapIconFactory" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarConfirmationButton" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarElement" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarIcon" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarIconButton" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarItemInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarSizeChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarStatics" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarSymbolIcon" };
    };
    template <> struct name<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.IWebUICommandBarSymbolIconFactory" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBar>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBar" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarBitmapIcon" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarConfirmationButton" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarIconButton>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarIconButton" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarItemInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarSizeChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarSymbolIcon" };
    };
    template <> struct name<Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.WebUICommandBarClosedDisplayMode" };
    };
    template <> struct name<Windows::UI::WebUI::Core::MenuClosedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.MenuClosedEventHandler" };
    };
    template <> struct name<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.MenuOpenedEventHandler" };
    };
    template <> struct name<Windows::UI::WebUI::Core::SizeChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.WebUI.Core.SizeChangedEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBar>
    {
        static constexpr guid value{ 0xA4FC0016,0xDBE5,0x41AD,{ 0x8D,0x7B,0x14,0x69,0x8B,0xD6,0x91,0x1D } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
    {
        static constexpr guid value{ 0x858F4F45,0x08D8,0x4A46,{ 0x81,0xEC,0x00,0x01,0x5B,0x0B,0x1C,0x6C } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
    {
        static constexpr guid value{ 0xF3F7D78A,0x7673,0x444A,{ 0xBE,0x62,0xAC,0x12,0xD3,0x1C,0x22,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
    {
        static constexpr guid value{ 0x86E7824A,0xE3D5,0x4EB6,{ 0xB2,0xFF,0x8F,0x01,0x8A,0x17,0x21,0x05 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        static constexpr guid value{ 0xC9069EC2,0x284A,0x4633,{ 0x8A,0xAD,0x63,0x7A,0x27,0xE2,0x82,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        static constexpr guid value{ 0xD587655D,0x2014,0x42BE,{ 0x96,0x9A,0x7D,0x14,0xCA,0x6C,0x8A,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
    {
        static constexpr guid value{ 0x8F1BC93A,0x3A7C,0x4842,{ 0xA0,0xCF,0xAF,0xF6,0xEA,0x30,0x85,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
    {
        static constexpr guid value{ 0x304EDBDD,0xE741,0x41EF,{ 0xBD,0xC4,0xA4,0x5C,0xEA,0x2A,0x4F,0x70 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
    {
        static constexpr guid value{ 0xFBF1E2F6,0x3029,0x4719,{ 0x83,0x78,0x92,0xF8,0x2B,0x87,0xAF,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
    {
        static constexpr guid value{ 0x1449CDB9,0xA506,0x45BE,{ 0x8F,0x42,0xB2,0x83,0x7E,0x2F,0xE0,0xC9 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
    {
        static constexpr guid value{ 0xD4935477,0xFD26,0x46ED,{ 0x86,0x58,0x1A,0x3F,0x44,0x00,0xE7,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
    {
        static constexpr guid value{ 0x51BE1A1F,0x3730,0x429E,{ 0xB6,0x22,0x14,0xE2,0xB7,0xBF,0x6A,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::MenuClosedEventHandler>
    {
        static constexpr guid value{ 0x435387C8,0x4DD0,0x4C52,{ 0x94,0x89,0xD3,0x90,0xCE,0x77,0x21,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
    {
        static constexpr guid value{ 0x18DC0AD3,0x678F,0x4C19,{ 0x89,0x63,0xCC,0x1C,0x49,0xA5,0xEF,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::WebUI::Core::SizeChangedEventHandler>
    {
        static constexpr guid value{ 0xD49CFE3C,0xDD2E,0x4C28,{ 0xB6,0x27,0x30,0x3A,0x7F,0x91,0x1A,0xF5 } };
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBar>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBar;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarIconButton>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarIconButton;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>
    {
        using type = Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon;
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_ClosedDisplayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClosedDisplayMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOpen(bool) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryCommands(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecondaryCommands(void**) noexcept = 0;
            virtual int32_t __stdcall add_MenuOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MenuOpened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MenuClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MenuClosed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SizeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall add_ItemInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsToggleButton(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsToggleButton(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsChecked(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsChecked(bool) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
            virtual int32_t __stdcall add_ItemInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrimaryCommand(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbol(void**) noexcept = 0;
            virtual int32_t __stdcall put_Symbol(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::MenuClosedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WebUI::Core::SizeChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBar
    {
        [[nodiscard]] auto Visible() const;
        auto Visible(bool value) const;
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto ClosedDisplayMode() const;
        auto ClosedDisplayMode(Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode const& value) const;
        [[nodiscard]] auto IsOpen() const;
        auto IsOpen(bool value) const;
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto PrimaryCommands() const;
        [[nodiscard]] auto SecondaryCommands() const;
        auto MenuOpened(Windows::UI::WebUI::Core::MenuOpenedEventHandler const& handler) const;
        using MenuOpened_revoker = impl::event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar, &impl::abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_MenuOpened>;
        MenuOpened_revoker MenuOpened(auto_revoke_t, Windows::UI::WebUI::Core::MenuOpenedEventHandler const& handler) const;
        auto MenuOpened(winrt::event_token const& value) const noexcept;
        auto MenuClosed(Windows::UI::WebUI::Core::MenuClosedEventHandler const& handler) const;
        using MenuClosed_revoker = impl::event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar, &impl::abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_MenuClosed>;
        MenuClosed_revoker MenuClosed(auto_revoke_t, Windows::UI::WebUI::Core::MenuClosedEventHandler const& handler) const;
        auto MenuClosed(winrt::event_token const& value) const noexcept;
        auto SizeChanged(Windows::UI::WebUI::Core::SizeChangedEventHandler const& handler) const;
        using SizeChanged_revoker = impl::event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar, &impl::abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_SizeChanged>;
        SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::UI::WebUI::Core::SizeChangedEventHandler const& handler) const;
        auto SizeChanged(winrt::event_token const& value) const noexcept;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBar>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIcon
    {
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIconFactory
    {
        auto Create(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIconFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        auto ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const;
        using ItemInvoked_revoker = impl::event_revoker<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton, &impl::abi_t<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>::remove_ItemInvoked>;
        ItemInvoked_revoker ItemInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const;
        auto ItemInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarElement
    {
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarIcon
    {
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton
    {
        [[nodiscard]] auto Enabled() const;
        auto Enabled(bool value) const;
        [[nodiscard]] auto Label() const;
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto IsToggleButton() const;
        auto IsToggleButton(bool value) const;
        [[nodiscard]] auto IsChecked() const;
        auto IsChecked(bool value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::WebUI::Core::IWebUICommandBarIcon const& value) const;
        auto ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const;
        using ItemInvoked_revoker = impl::event_revoker<Windows::UI::WebUI::Core::IWebUICommandBarIconButton, &impl::abi_t<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>::remove_ItemInvoked>;
        ItemInvoked_revoker ItemInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const;
        auto ItemInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarItemInvokedEventArgs
    {
        [[nodiscard]] auto IsPrimaryCommand() const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarItemInvokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarSizeChangedEventArgs
    {
        [[nodiscard]] auto Size() const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarSizeChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIcon
    {
        [[nodiscard]] auto Symbol() const;
        auto Symbol(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIconFactory
    {
        auto Create(param::hstring const& symbol) const;
    };
    template <> struct consume<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
    {
        template <typename D> using type = consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIconFactory<D>;
    };
}
#endif
