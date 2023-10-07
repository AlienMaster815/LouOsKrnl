// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Phone_StartScreen_1_H
#define WINRT_Windows_Phone_StartScreen_1_H
#include "winrt/impl/Windows.Phone.StartScreen.0.h"
WINRT_EXPORT namespace winrt::Windows::Phone::StartScreen
{
    struct __declspec(empty_bases) IDualSimTile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDualSimTile>
    {
        IDualSimTile(std::nullptr_t = nullptr) noexcept {}
        IDualSimTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDualSimTileStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDualSimTileStatics>
    {
        IDualSimTileStatics(std::nullptr_t = nullptr) noexcept {}
        IDualSimTileStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationManagerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationManagerStatics3>
    {
        IToastNotificationManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
