// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_2_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    struct __declspec(empty_bases) AppCapability : Windows::Security::Authorization::AppCapabilityAccess::IAppCapability
    {
        AppCapability(std::nullptr_t) noexcept {}
        AppCapability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authorization::AppCapabilityAccess::IAppCapability(ptr, take_ownership_from_abi) {}
        static auto RequestAccessForCapabilitiesAsync(param::async_iterable<hstring> const& capabilityNames);
        static auto RequestAccessForCapabilitiesForUserAsync(Windows::System::User const& user, param::async_iterable<hstring> const& capabilityNames);
        static auto Create(param::hstring const& capabilityName);
        static auto CreateWithProcessIdForUser(Windows::System::User const& user, param::hstring const& capabilityName, uint32_t pid);
    };
    struct __declspec(empty_bases) AppCapabilityAccessChangedEventArgs : Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs
    {
        AppCapabilityAccessChangedEventArgs(std::nullptr_t) noexcept {}
        AppCapabilityAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
