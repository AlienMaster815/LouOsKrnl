// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_Injection_1_H
#define WINRT_Windows_UI_Input_Preview_Injection_1_H
#include "winrt/impl/Windows.UI.Input.Preview.Injection.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection
{
    struct __declspec(empty_bases) IInjectedInputGamepadInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfo>
    {
        IInjectedInputGamepadInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInjectedInputGamepadInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfoFactory>
    {
        IInjectedInputGamepadInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInjectedInputKeyboardInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputKeyboardInfo>
    {
        IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputKeyboardInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInjectedInputMouseInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputMouseInfo>
    {
        IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputMouseInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInjectedInputPenInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputPenInfo>
    {
        IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputPenInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInjectedInputTouchInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputTouchInfo>
    {
        IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputTouchInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInputInjector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector>
    {
        IInputInjector(std::nullptr_t = nullptr) noexcept {}
        IInputInjector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInputInjector2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector2>,
        impl::require<Windows::UI::Input::Preview::Injection::IInputInjector2, Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        IInputInjector2(std::nullptr_t = nullptr) noexcept {}
        IInputInjector2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInputInjectorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics>
    {
        IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInputInjectorStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics2>,
        impl::require<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        IInputInjectorStatics2(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
