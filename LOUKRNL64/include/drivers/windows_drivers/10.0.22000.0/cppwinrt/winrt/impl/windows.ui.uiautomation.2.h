// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_2_H
#define WINRT_Windows_UI_UIAutomation_2_H
#include "winrt/impl/Windows.UI.UIAutomation.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
    struct __declspec(empty_bases) AutomationConnection : Windows::UI::UIAutomation::IAutomationConnection
    {
        AutomationConnection(std::nullptr_t) noexcept {}
        AutomationConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::IAutomationConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AutomationConnectionBoundObject : Windows::UI::UIAutomation::IAutomationConnectionBoundObject
    {
        AutomationConnectionBoundObject(std::nullptr_t) noexcept {}
        AutomationConnectionBoundObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::IAutomationConnectionBoundObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AutomationElement : Windows::UI::UIAutomation::IAutomationElement
    {
        AutomationElement(std::nullptr_t) noexcept {}
        AutomationElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::IAutomationElement(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AutomationTextRange : Windows::UI::UIAutomation::IAutomationTextRange
    {
        AutomationTextRange(std::nullptr_t) noexcept {}
        AutomationTextRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::UIAutomation::IAutomationTextRange(ptr, take_ownership_from_abi) {}
    };
}
#endif
