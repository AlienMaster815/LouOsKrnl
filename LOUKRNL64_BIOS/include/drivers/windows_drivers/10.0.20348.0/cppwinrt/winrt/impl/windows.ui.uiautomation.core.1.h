// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_Core_1_H
#define WINRT_Windows_UI_UIAutomation_Core_1_H
#include "winrt/impl/Windows.UI.UIAutomation.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation::Core
{
    struct __declspec(empty_bases) IAutomationRemoteOperationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAutomationRemoteOperationResult>
    {
        IAutomationRemoteOperationResult(std::nullptr_t = nullptr) noexcept {}
        IAutomationRemoteOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreAutomationRemoteOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreAutomationRemoteOperation>
    {
        ICoreAutomationRemoteOperation(std::nullptr_t = nullptr) noexcept {}
        ICoreAutomationRemoteOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
