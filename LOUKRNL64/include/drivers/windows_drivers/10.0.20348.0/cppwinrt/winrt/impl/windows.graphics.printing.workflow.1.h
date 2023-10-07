// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_Workflow_1_H
#define WINRT_Windows_Graphics_Printing_Workflow_1_H
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow
{
    struct __declspec(empty_bases) IPrintWorkflowBackgroundSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowBackgroundSession>
    {
        IPrintWorkflowBackgroundSession(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowBackgroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowBackgroundSetupRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        IPrintWorkflowBackgroundSetupRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowBackgroundSetupRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowConfiguration>
    {
        IPrintWorkflowConfiguration(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowForegroundSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowForegroundSession>
    {
        IPrintWorkflowForegroundSession(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowForegroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowForegroundSetupRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        IPrintWorkflowForegroundSetupRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowForegroundSetupRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowObjectModelSourceFileContent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowObjectModelSourceFileContent>
    {
        IPrintWorkflowObjectModelSourceFileContent(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowObjectModelSourceFileContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowObjectModelTargetPackage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowObjectModelTargetPackage>
    {
        IPrintWorkflowObjectModelTargetPackage(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowObjectModelTargetPackage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowSourceContent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowSourceContent>
    {
        IPrintWorkflowSourceContent(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowSourceContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowSpoolStreamContent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowSpoolStreamContent>
    {
        IPrintWorkflowSpoolStreamContent(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowSpoolStreamContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowStreamTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowStreamTarget>
    {
        IPrintWorkflowStreamTarget(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowStreamTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowSubmittedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowSubmittedEventArgs>
    {
        IPrintWorkflowSubmittedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowSubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowSubmittedOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowSubmittedOperation>
    {
        IPrintWorkflowSubmittedOperation(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowSubmittedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowTarget>
    {
        IPrintWorkflowTarget(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowTriggerDetails>
    {
        IPrintWorkflowTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowUIActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowUIActivatedEventArgs>,
        impl::require<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        IPrintWorkflowUIActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowUIActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintWorkflowXpsDataAvailableEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintWorkflowXpsDataAvailableEventArgs>
    {
        IPrintWorkflowXpsDataAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintWorkflowXpsDataAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
