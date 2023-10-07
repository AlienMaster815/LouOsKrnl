// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_1_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground
{
    struct __declspec(empty_bases) IExtendedExecutionForegroundRevokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionForegroundRevokedEventArgs>
    {
        IExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionForegroundRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IExtendedExecutionForegroundSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionForegroundSession>,
        impl::require<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession, Windows::Foundation::IClosable>
    {
        IExtendedExecutionForegroundSession(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionForegroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
