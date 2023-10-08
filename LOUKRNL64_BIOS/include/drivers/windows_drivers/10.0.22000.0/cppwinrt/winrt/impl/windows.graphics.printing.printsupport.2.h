// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_2_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintSupport.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintSupport
{
    struct __declspec(empty_bases) PrintSupportExtensionSession : Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession
    {
        PrintSupportExtensionSession(std::nullptr_t) noexcept {}
        PrintSupportExtensionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportExtensionTriggerDetails : Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails
    {
        PrintSupportExtensionTriggerDetails(std::nullptr_t) noexcept {}
        PrintSupportExtensionTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportPrintDeviceCapabilitiesChangedEventArgs : Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs
    {
        PrintSupportPrintDeviceCapabilitiesChangedEventArgs(std::nullptr_t) noexcept {}
        PrintSupportPrintDeviceCapabilitiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportPrintTicketValidationRequestedEventArgs : Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs
    {
        PrintSupportPrintTicketValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        PrintSupportPrintTicketValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportSessionInfo : Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo
    {
        PrintSupportSessionInfo(std::nullptr_t) noexcept {}
        PrintSupportSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportSettingsActivatedEventArgs : Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs,
        impl::require<PrintSupportSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        PrintSupportSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
        PrintSupportSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintSupportSettingsUISession : Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession
    {
        PrintSupportSettingsUISession(std::nullptr_t) noexcept {}
        PrintSupportSettingsUISession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession(ptr, take_ownership_from_abi) {}
    };
}
#endif
