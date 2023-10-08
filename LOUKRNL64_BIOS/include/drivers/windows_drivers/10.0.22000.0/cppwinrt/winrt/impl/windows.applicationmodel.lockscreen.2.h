// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_LockScreen_2_H
#define WINRT_Windows_ApplicationModel_LockScreen_2_H
#include "winrt/impl/Windows.ApplicationModel.LockScreen.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen
{
    struct __declspec(empty_bases) LockApplicationHost : Windows::ApplicationModel::LockScreen::ILockApplicationHost
    {
        LockApplicationHost(std::nullptr_t) noexcept {}
        LockApplicationHost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::LockScreen::ILockApplicationHost(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) LockScreenBadge : Windows::ApplicationModel::LockScreen::ILockScreenBadge
    {
        LockScreenBadge(std::nullptr_t) noexcept {}
        LockScreenBadge(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::LockScreen::ILockScreenBadge(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenInfo : Windows::ApplicationModel::LockScreen::ILockScreenInfo
    {
        LockScreenInfo(std::nullptr_t) noexcept {}
        LockScreenInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::LockScreen::ILockScreenInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenUnlockingDeferral : Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral
    {
        LockScreenUnlockingDeferral(std::nullptr_t) noexcept {}
        LockScreenUnlockingDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenUnlockingEventArgs : Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs
    {
        LockScreenUnlockingEventArgs(std::nullptr_t) noexcept {}
        LockScreenUnlockingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
