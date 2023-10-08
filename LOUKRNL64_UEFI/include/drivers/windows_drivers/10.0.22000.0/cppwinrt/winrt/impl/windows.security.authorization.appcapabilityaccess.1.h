// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    struct __declspec(empty_bases) IAppCapability :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapability>
    {
        IAppCapability(std::nullptr_t = nullptr) noexcept {}
        IAppCapability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCapabilityAccessChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityAccessChangedEventArgs>
    {
        IAppCapabilityAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCapabilityStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityStatics>
    {
        IAppCapabilityStatics(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
