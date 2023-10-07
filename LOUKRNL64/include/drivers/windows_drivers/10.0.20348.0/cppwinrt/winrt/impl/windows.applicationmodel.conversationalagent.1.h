// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_1_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_1_H
#include "winrt/impl/Windows.ApplicationModel.ConversationalAgent.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    struct __declspec(empty_bases) IActivationSignalDetectionConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivationSignalDetectionConfiguration>
    {
        IActivationSignalDetectionConfiguration(std::nullptr_t = nullptr) noexcept {}
        IActivationSignalDetectionConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivationSignalDetector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivationSignalDetector>
    {
        IActivationSignalDetector(std::nullptr_t = nullptr) noexcept {}
        IActivationSignalDetector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentDetectorManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentDetectorManager>
    {
        IConversationalAgentDetectorManager(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentDetectorManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentDetectorManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentDetectorManagerStatics>
    {
        IConversationalAgentDetectorManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentDetectorManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSession>
    {
        IConversationalAgentSession(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSessionInterruptedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSessionInterruptedEventArgs>
    {
        IConversationalAgentSessionInterruptedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSessionInterruptedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSessionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSessionStatics>
    {
        IConversationalAgentSessionStatics(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSessionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSignal :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSignal>
    {
        IConversationalAgentSignal(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSignal(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSignalDetectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSignalDetectedEventArgs>
    {
        IConversationalAgentSignalDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSignalDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConversationalAgentSystemStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSystemStateChangedEventArgs>
    {
        IConversationalAgentSystemStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSystemStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDetectionConfigurationAvailabilityChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        IDetectionConfigurationAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDetectionConfigurationAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDetectionConfigurationAvailabilityInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDetectionConfigurationAvailabilityInfo>
    {
        IDetectionConfigurationAvailabilityInfo(std::nullptr_t = nullptr) noexcept {}
        IDetectionConfigurationAvailabilityInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
