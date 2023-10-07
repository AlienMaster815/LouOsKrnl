// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_Core_2_H
#define WINRT_Windows_UI_UIAutomation_Core_2_H
#include "winrt/impl/Windows.UI.UIAutomation.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation::Core
{
    struct AutomationRemoteOperationOperandId
    {
        int32_t Value;
    };
    inline bool operator==(AutomationRemoteOperationOperandId const& left, AutomationRemoteOperationOperandId const& right) noexcept
    {
        return left.Value == right.Value;
    }
    inline bool operator!=(AutomationRemoteOperationOperandId const& left, AutomationRemoteOperationOperandId const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AutomationRemoteOperationResult : Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult
    {
        AutomationRemoteOperationResult(std::nullptr_t) noexcept {}
        AutomationRemoteOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreAutomationRemoteOperation : Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation
    {
        CoreAutomationRemoteOperation(std::nullptr_t) noexcept {}
        CoreAutomationRemoteOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation(ptr, take_ownership_from_abi) {}
        CoreAutomationRemoteOperation();
    };
}
#endif
