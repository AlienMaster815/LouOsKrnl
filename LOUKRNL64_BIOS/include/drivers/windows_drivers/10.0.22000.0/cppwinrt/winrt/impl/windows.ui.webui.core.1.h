// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WebUI_Core_1_H
#define WINRT_Windows_UI_WebUI_Core_1_H
#include "winrt/impl/Windows.UI.WebUI.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core
{
    struct __declspec(empty_bases) IWebUICommandBar :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBar>
    {
        IWebUICommandBar(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarBitmapIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarBitmapIcon>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        IWebUICommandBarBitmapIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarBitmapIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarBitmapIconFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarBitmapIconFactory>
    {
        IWebUICommandBarBitmapIconFactory(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarBitmapIconFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarConfirmationButton :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarConfirmationButton>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        IWebUICommandBarConfirmationButton(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarConfirmationButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarElement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarElement>
    {
        IWebUICommandBarElement(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarIcon>
    {
        IWebUICommandBarIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarIconButton :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarIconButton>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarIconButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        IWebUICommandBarIconButton(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarIconButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarItemInvokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarItemInvokedEventArgs>
    {
        IWebUICommandBarItemInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarSizeChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSizeChangedEventArgs>
    {
        IWebUICommandBarSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarStatics>
    {
        IWebUICommandBarStatics(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarSymbolIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSymbolIcon>,
        impl::require<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        IWebUICommandBarSymbolIcon(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSymbolIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUICommandBarSymbolIconFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUICommandBarSymbolIconFactory>
    {
        IWebUICommandBarSymbolIconFactory(std::nullptr_t = nullptr) noexcept {}
        IWebUICommandBarSymbolIconFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
