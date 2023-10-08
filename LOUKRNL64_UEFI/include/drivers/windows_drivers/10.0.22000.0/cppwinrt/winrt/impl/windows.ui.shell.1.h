// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_1_H
#define WINRT_Windows_UI_Shell_1_H
#include "winrt/impl/Windows.UI.Shell.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct __declspec(empty_bases) IAdaptiveCard :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCard>
    {
        IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveCardBuilderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCardBuilderStatics>
    {
        IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCardBuilderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISecurityAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISecurityAppManager>
    {
        ISecurityAppManager(std::nullptr_t = nullptr) noexcept {}
        ISecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandEventArgs>
    {
        IShareWindowCommandEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandSource>
    {
        IShareWindowCommandSource(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandSourceStatics>
    {
        IShareWindowCommandSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager>
    {
        ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager2>,
        impl::require<Windows::UI::Shell::ITaskbarManager2, Windows::UI::Shell::ITaskbarManager>
    {
        ITaskbarManager2(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerStatics>
    {
        ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
