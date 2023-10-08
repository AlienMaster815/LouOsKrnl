// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_Workflow_2_H
#define WINRT_Windows_Graphics_Printing_Workflow_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow
{
    struct __declspec(empty_bases) PrintWorkflowBackgroundSession : Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession
    {
        PrintWorkflowBackgroundSession(std::nullptr_t) noexcept {}
        PrintWorkflowBackgroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowBackgroundSetupRequestedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs
    {
        PrintWorkflowBackgroundSetupRequestedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowBackgroundSetupRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowConfiguration : Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration,
        impl::require<PrintWorkflowConfiguration, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        PrintWorkflowConfiguration(std::nullptr_t) noexcept {}
        PrintWorkflowConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowForegroundSession : Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession
    {
        PrintWorkflowForegroundSession(std::nullptr_t) noexcept {}
        PrintWorkflowForegroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowForegroundSetupRequestedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs
    {
        PrintWorkflowForegroundSetupRequestedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowForegroundSetupRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobActivatedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs,
        impl::require<PrintWorkflowJobActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        PrintWorkflowJobActivatedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowJobActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobBackgroundSession : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession
    {
        PrintWorkflowJobBackgroundSession(std::nullptr_t) noexcept {}
        PrintWorkflowJobBackgroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobNotificationEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs
    {
        PrintWorkflowJobNotificationEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowJobNotificationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobStartingEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs
    {
        PrintWorkflowJobStartingEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowJobStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobTriggerDetails : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails
    {
        PrintWorkflowJobTriggerDetails(std::nullptr_t) noexcept {}
        PrintWorkflowJobTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowJobUISession : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession
    {
        PrintWorkflowJobUISession(std::nullptr_t) noexcept {}
        PrintWorkflowJobUISession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowObjectModelSourceFileContent : Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent
    {
        PrintWorkflowObjectModelSourceFileContent(std::nullptr_t) noexcept {}
        PrintWorkflowObjectModelSourceFileContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent(ptr, take_ownership_from_abi) {}
        explicit PrintWorkflowObjectModelSourceFileContent(Windows::Storage::Streams::IInputStream const& xpsStream);
    };
    struct __declspec(empty_bases) PrintWorkflowObjectModelTargetPackage : Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage
    {
        PrintWorkflowObjectModelTargetPackage(std::nullptr_t) noexcept {}
        PrintWorkflowObjectModelTargetPackage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPdlConverter : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter
    {
        PrintWorkflowPdlConverter(std::nullptr_t) noexcept {}
        PrintWorkflowPdlConverter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPdlDataAvailableEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs
    {
        PrintWorkflowPdlDataAvailableEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowPdlDataAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPdlModificationRequestedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs
    {
        PrintWorkflowPdlModificationRequestedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowPdlModificationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPdlSourceContent : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent
    {
        PrintWorkflowPdlSourceContent(std::nullptr_t) noexcept {}
        PrintWorkflowPdlSourceContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPdlTargetStream : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream
    {
        PrintWorkflowPdlTargetStream(std::nullptr_t) noexcept {}
        PrintWorkflowPdlTargetStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowPrinterJob : Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob
    {
        PrintWorkflowPrinterJob(std::nullptr_t) noexcept {}
        PrintWorkflowPrinterJob(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowSourceContent : Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent
    {
        PrintWorkflowSourceContent(std::nullptr_t) noexcept {}
        PrintWorkflowSourceContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowSpoolStreamContent : Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent
    {
        PrintWorkflowSpoolStreamContent(std::nullptr_t) noexcept {}
        PrintWorkflowSpoolStreamContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowStreamTarget : Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget
    {
        PrintWorkflowStreamTarget(std::nullptr_t) noexcept {}
        PrintWorkflowStreamTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowSubmittedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs
    {
        PrintWorkflowSubmittedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowSubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowSubmittedOperation : Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation
    {
        PrintWorkflowSubmittedOperation(std::nullptr_t) noexcept {}
        PrintWorkflowSubmittedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowTarget : Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget
    {
        PrintWorkflowTarget(std::nullptr_t) noexcept {}
        PrintWorkflowTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowTriggerDetails : Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails
    {
        PrintWorkflowTriggerDetails(std::nullptr_t) noexcept {}
        PrintWorkflowTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowUIActivatedEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs
    {
        PrintWorkflowUIActivatedEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowUIActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowUILauncher : Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher
    {
        PrintWorkflowUILauncher(std::nullptr_t) noexcept {}
        PrintWorkflowUILauncher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintWorkflowXpsDataAvailableEventArgs : Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs
    {
        PrintWorkflowXpsDataAvailableEventArgs(std::nullptr_t) noexcept {}
        PrintWorkflowXpsDataAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
