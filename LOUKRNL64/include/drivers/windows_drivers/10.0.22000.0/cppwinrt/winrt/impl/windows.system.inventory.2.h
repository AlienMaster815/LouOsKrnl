// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Inventory_2_H
#define WINRT_Windows_System_Inventory_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Inventory.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Inventory
{
    struct __declspec(empty_bases) InstalledDesktopApp : Windows::System::Inventory::IInstalledDesktopApp,
        impl::require<InstalledDesktopApp, Windows::Foundation::IStringable>
    {
        InstalledDesktopApp(std::nullptr_t) noexcept {}
        InstalledDesktopApp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Inventory::IInstalledDesktopApp(ptr, take_ownership_from_abi) {}
        static auto GetInventoryAsync();
    };
}
#endif
