// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_2_H
#define WINRT_Windows_UI_Shell_2_H
#include "winrt/impl/Windows.UI.Shell.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct AdaptiveCardBuilder
    {
        AdaptiveCardBuilder() = delete;
        static auto CreateAdaptiveCardFromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) SecurityAppManager : Windows::UI::Shell::ISecurityAppManager
    {
        SecurityAppManager(std::nullptr_t) noexcept {}
        SecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::ISecurityAppManager(ptr, take_ownership_from_abi) {}
        SecurityAppManager();
    };
    struct __declspec(empty_bases) ShareWindowCommandEventArgs : Windows::UI::Shell::IShareWindowCommandEventArgs
    {
        ShareWindowCommandEventArgs(std::nullptr_t) noexcept {}
        ShareWindowCommandEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IShareWindowCommandEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareWindowCommandSource : Windows::UI::Shell::IShareWindowCommandSource
    {
        ShareWindowCommandSource(std::nullptr_t) noexcept {}
        ShareWindowCommandSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IShareWindowCommandSource(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) TaskbarManager : Windows::UI::Shell::ITaskbarManager,
        impl::require<TaskbarManager, Windows::UI::Shell::ITaskbarManager2>
    {
        TaskbarManager(std::nullptr_t) noexcept {}
        TaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::ITaskbarManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
}
#endif
