// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Inventory_1_H
#define WINRT_Windows_System_Inventory_1_H
#include "winrt/impl/Windows.System.Inventory.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Inventory
{
    struct __declspec(empty_bases) IInstalledDesktopApp :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInstalledDesktopApp>
    {
        IInstalledDesktopApp(std::nullptr_t = nullptr) noexcept {}
        IInstalledDesktopApp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInstalledDesktopAppStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInstalledDesktopAppStatics>
    {
        IInstalledDesktopAppStatics(std::nullptr_t = nullptr) noexcept {}
        IInstalledDesktopAppStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
