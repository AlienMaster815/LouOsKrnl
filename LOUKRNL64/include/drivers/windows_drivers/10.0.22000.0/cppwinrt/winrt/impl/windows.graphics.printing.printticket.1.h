// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintTicket_1_H
#define WINRT_Windows_Graphics_Printing_PrintTicket_1_H
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    struct __declspec(empty_bases) IPrintTicketCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketCapabilities>
    {
        IPrintTicketCapabilities(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTicketFeature :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketFeature>
    {
        IPrintTicketFeature(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketFeature(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTicketOption :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketOption>
    {
        IPrintTicketOption(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketOption(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTicketParameterDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketParameterDefinition>
    {
        IPrintTicketParameterDefinition(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketParameterDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTicketParameterInitializer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketParameterInitializer>
    {
        IPrintTicketParameterInitializer(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketParameterInitializer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTicketValue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTicketValue>
    {
        IPrintTicketValue(std::nullptr_t = nullptr) noexcept {}
        IPrintTicketValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkflowPrintTicket :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWorkflowPrintTicket>
    {
        IWorkflowPrintTicket(std::nullptr_t = nullptr) noexcept {}
        IWorkflowPrintTicket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkflowPrintTicketValidationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWorkflowPrintTicketValidationResult>
    {
        IWorkflowPrintTicketValidationResult(std::nullptr_t = nullptr) noexcept {}
        IWorkflowPrintTicketValidationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
