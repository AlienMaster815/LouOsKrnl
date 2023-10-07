// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.ConversationalAgent.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    struct __declspec(empty_bases) ActivationSignalDetectionConfiguration : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration,
        impl::require<ActivationSignalDetectionConfiguration, Windows::Foundation::IClosable, Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration2>
    {
        ActivationSignalDetectionConfiguration(std::nullptr_t) noexcept {}
        ActivationSignalDetectionConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivationSignalDetectionConfigurationCreationResult : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfigurationCreationResult
    {
        ActivationSignalDetectionConfigurationCreationResult(std::nullptr_t) noexcept {}
        ActivationSignalDetectionConfigurationCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfigurationCreationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivationSignalDetector : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector,
        impl::require<ActivationSignalDetector, Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector2>
    {
        ActivationSignalDetector(std::nullptr_t) noexcept {}
        ActivationSignalDetector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConversationalAgentDetectorManager : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager,
        impl::require<ConversationalAgentDetectorManager, Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager2>
    {
        ConversationalAgentDetectorManager(std::nullptr_t) noexcept {}
        ConversationalAgentDetectorManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Default();
    };
    struct __declspec(empty_bases) ConversationalAgentSession : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession,
        impl::require<ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession2, Windows::Foundation::IClosable>
    {
        ConversationalAgentSession(std::nullptr_t) noexcept {}
        ConversationalAgentSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession(ptr, take_ownership_from_abi) {}
        static auto GetCurrentSessionAsync();
        static auto GetCurrentSessionSync();
    };
    struct __declspec(empty_bases) ConversationalAgentSessionInterruptedEventArgs : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs
    {
        ConversationalAgentSessionInterruptedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSessionInterruptedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConversationalAgentSignal : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal,
        impl::require<ConversationalAgentSignal, Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal2>
    {
        ConversationalAgentSignal(std::nullptr_t) noexcept {}
        ConversationalAgentSignal(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConversationalAgentSignalDetectedEventArgs : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs
    {
        ConversationalAgentSignalDetectedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSignalDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConversationalAgentSystemStateChangedEventArgs : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs
    {
        ConversationalAgentSystemStateChangedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSystemStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DetectionConfigurationAvailabilityChangedEventArgs : Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs
    {
        DetectionConfigurationAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DetectionConfigurationAvailabilityInfo : Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo,
        impl::require<DetectionConfigurationAvailabilityInfo, Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo2>
    {
        DetectionConfigurationAvailabilityInfo(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
