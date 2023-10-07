// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_1_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_1_H
#include "winrt/impl/Windows.Graphics.Printing.PrintSupport.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintSupport
{
    struct __declspec(empty_bases) IPrintSupportExtensionSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportExtensionSession>
    {
        IPrintSupportExtensionSession(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportExtensionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportExtensionTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportExtensionTriggerDetails>
    {
        IPrintSupportExtensionTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportExtensionTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportPrintDeviceCapabilitiesChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        IPrintSupportPrintDeviceCapabilitiesChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportPrintDeviceCapabilitiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportPrintTicketValidationRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        IPrintSupportPrintTicketValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportPrintTicketValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportSessionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportSessionInfo>
    {
        IPrintSupportSessionInfo(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportSettingsActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportSettingsActivatedEventArgs>
    {
        IPrintSupportSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSupportSettingsUISession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSupportSettingsUISession>
    {
        IPrintSupportSettingsUISession(std::nullptr_t = nullptr) noexcept {}
        IPrintSupportSettingsUISession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
