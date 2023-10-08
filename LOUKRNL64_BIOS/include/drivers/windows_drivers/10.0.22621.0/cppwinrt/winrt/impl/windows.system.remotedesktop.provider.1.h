// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_1_H
#define WINRT_Windows_System_RemoteDesktop_Provider_1_H
#include "winrt/impl/Windows.System.RemoteDesktop.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Provider
{
    struct __declspec(empty_bases) IRemoteDesktopConnectionInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteDesktopConnectionInfo>
    {
        IRemoteDesktopConnectionInfo(std::nullptr_t = nullptr) noexcept {}
        IRemoteDesktopConnectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRemoteDesktopConnectionInfoStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteDesktopConnectionInfoStatics>
    {
        IRemoteDesktopConnectionInfoStatics(std::nullptr_t = nullptr) noexcept {}
        IRemoteDesktopConnectionInfoStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
