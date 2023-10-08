// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_0_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Media::Audio
{
    struct AudioDeviceInputNode;
    struct AudioGraph;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
}
namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    enum class ActivationSignalDetectionTrainingDataFormat : int32_t
    {
        Voice8kHz8BitMono = 0,
        Voice8kHz16BitMono = 1,
        Voice16kHz8BitMono = 2,
        Voice16kHz16BitMono = 3,
        VoiceOEMDefined = 4,
        Audio44kHz8BitMono = 5,
        Audio44kHz16BitMono = 6,
        Audio48kHz8BitMono = 7,
        Audio48kHz16BitMono = 8,
        AudioOEMDefined = 9,
        OtherOEMDefined = 10,
    };
    enum class ActivationSignalDetectorKind : int32_t
    {
        AudioPattern = 0,
        AudioImpulse = 1,
        HardwareEvent = 2,
    };
    enum class ActivationSignalDetectorPowerState : int32_t
    {
        HighPower = 0,
        ConnectedLowPower = 1,
        DisconnectedLowPower = 2,
    };
    enum class ConversationalAgentSessionUpdateResponse : int32_t
    {
        Success = 0,
        Failed = 1,
    };
    enum class ConversationalAgentState : int32_t
    {
        Inactive = 0,
        Detecting = 1,
        Listening = 2,
        Working = 3,
        Speaking = 4,
        ListeningAndSpeaking = 5,
    };
    enum class ConversationalAgentSystemStateChangeType : int32_t
    {
        UserAuthentication = 0,
        ScreenAvailability = 1,
        IndicatorLightAvailability = 2,
        VoiceActivationAvailability = 3,
    };
    enum class DetectionConfigurationAvailabilityChangeKind : int32_t
    {
        SystemResourceAccess = 0,
        Permission = 1,
        LockScreenPermission = 2,
    };
    enum class DetectionConfigurationTrainingStatus : int32_t
    {
        Success = 0,
        FormatNotSupported = 1,
        VoiceTooQuiet = 2,
        VoiceTooLoud = 3,
        VoiceTooFast = 4,
        VoiceTooSlow = 5,
        VoiceQualityProblem = 6,
        TrainingSystemInternalError = 7,
    };
    struct IActivationSignalDetectionConfiguration;
    struct IActivationSignalDetector;
    struct IConversationalAgentDetectorManager;
    struct IConversationalAgentDetectorManagerStatics;
    struct IConversationalAgentSession;
    struct IConversationalAgentSessionInterruptedEventArgs;
    struct IConversationalAgentSessionStatics;
    struct IConversationalAgentSignal;
    struct IConversationalAgentSignalDetectedEventArgs;
    struct IConversationalAgentSystemStateChangedEventArgs;
    struct IDetectionConfigurationAvailabilityChangedEventArgs;
    struct IDetectionConfigurationAvailabilityInfo;
    struct ActivationSignalDetectionConfiguration;
    struct ActivationSignalDetector;
    struct ConversationalAgentDetectorManager;
    struct ConversationalAgentSession;
    struct ConversationalAgentSessionInterruptedEventArgs;
    struct ConversationalAgentSignal;
    struct ConversationalAgentSignalDetectedEventArgs;
    struct ConversationalAgentSystemStateChangedEventArgs;
    struct DetectionConfigurationAvailabilityChangedEventArgs;
    struct DetectionConfigurationAvailabilityInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentDetectorManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorPowerState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangeKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationTrainingStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IActivationSignalDetectionConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IActivationSignalDetector" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentDetectorManager" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentDetectorManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSession" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionInterruptedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionStatics" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignal" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignalDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSystemStateChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IDetectionConfigurationAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IDetectionConfigurationAvailabilityInfo" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ActivationSignalDetectionConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetector>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ActivationSignalDetector" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentDetectorManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentDetectorManager" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSession" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSessionInterruptedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignal" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignalDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSystemStateChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.DetectionConfigurationAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.DetectionConfigurationAvailabilityInfo" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ActivationSignalDetectionTrainingDataFormat" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ActivationSignalDetectorKind" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorPowerState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ActivationSignalDetectorPowerState" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSessionUpdateResponse" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentState" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSystemStateChangeType" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangeKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.DetectionConfigurationAvailabilityChangeKind" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationTrainingStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.DetectionConfigurationTrainingStatus" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>
    {
        static constexpr guid value{ 0x40D8BE16,0x5217,0x581C,{ 0x9A,0xB2,0xCE,0x9B,0x2F,0x2E,0x8E,0x00 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector>
    {
        static constexpr guid value{ 0xB5BF345F,0xA4D0,0x5B2B,{ 0x8E,0x65,0xB3,0xC5,0x5E,0xE7,0x56,0xFF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager>
    {
        static constexpr guid value{ 0xDE94FBB0,0x597A,0x5DF8,{ 0x8C,0xFB,0x9D,0xBB,0x58,0x3B,0xA3,0xFF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManagerStatics>
    {
        static constexpr guid value{ 0x36A8D283,0xFA0E,0x5693,{ 0x84,0x89,0x0F,0xB2,0xF0,0xAB,0x40,0xD3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        static constexpr guid value{ 0xDAAAE09A,0xB7BA,0x57E5,{ 0xAD,0x13,0xDF,0x52,0x0F,0x9B,0x6F,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr guid value{ 0x9766591F,0xF63D,0x5D3E,{ 0x9B,0xF2,0xBD,0x07,0x60,0x55,0x26,0x86 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        static constexpr guid value{ 0xA005166E,0xE954,0x576E,{ 0xBE,0x04,0x11,0xB8,0xED,0x10,0xF3,0x7B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        static constexpr guid value{ 0x20ED25F7,0xB120,0x51F2,{ 0x86,0x03,0x26,0x5D,0x6A,0x47,0xF2,0x32 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr guid value{ 0x4D57EB8F,0xF88A,0x599B,{ 0x91,0xD3,0xD6,0x04,0x87,0x67,0x08,0xBC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr guid value{ 0x1C2C6E3E,0x2785,0x59A7,{ 0x8E,0x71,0x38,0xAD,0xEE,0xF7,0x99,0x28 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        static constexpr guid value{ 0x5129C9FB,0x4BE8,0x5F14,{ 0xAF,0x2B,0x88,0xD6,0x2B,0x1B,0x44,0x62 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo>
    {
        static constexpr guid value{ 0xB5AFFEB0,0x40F0,0x5398,{ 0xB8,0x38,0x91,0x97,0x9C,0x2C,0x62,0x08 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetector>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentDetectorManager>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityInfo>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo;
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall SetEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetEnabledAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall get_AvailabilityInfo(void**) noexcept = 0;
            virtual int32_t __stdcall add_AvailabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailabilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetModelData(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetModelDataAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetModelDataType(void**) noexcept = 0;
            virtual int32_t __stdcall GetModelDataTypeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetModelData(void**) noexcept = 0;
            virtual int32_t __stdcall GetModelDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearModelData() noexcept = 0;
            virtual int32_t __stdcall ClearModelDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrainingStepsCompleted(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrainingStepsRemaining(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrainingDataFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ApplyTrainingData(int32_t, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall ApplyTrainingDataAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearTrainingData() noexcept = 0;
            virtual int32_t __stdcall ClearTrainingDataAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanCreateConfigurations(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedModelDataTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTrainingDataFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPowerStates(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedModelIdsForSignalId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedModelIdsForSignalIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateConfiguration(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall CreateConfigurationAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConfigurations(void**) noexcept = 0;
            virtual int32_t __stdcall GetConfigurationsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetConfiguration(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConfigurationAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveConfiguration(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveConfigurationAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAllActivationSignalDetectors(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllActivationSignalDetectorsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetActivationSignalDetectors(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetActivationSignalDetectorsAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Default(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SessionInterrupted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionInterrupted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SignalDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SignalDetected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AgentState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Signal(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsIndicatorLightAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsScreenAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserAuthenticated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsVoiceActivationAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInterruptible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInterrupted(bool*) noexcept = 0;
            virtual int32_t __stdcall RequestInterruptibleAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall RequestInterruptible(bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAgentStateChangeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAgentStateChange(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestForegroundActivationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestForegroundActivation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAudioClientAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioClient(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioDeviceInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioDeviceInputNode(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioCaptureDeviceIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioCaptureDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderDeviceIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetSignalModelIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSignalModelId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetSignalModelIdAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetSignalModelId(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetSupportedSignalModelIdsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedSignalModelIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSessionAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSessionSync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSignalVerificationRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSignalVerificationRequired(bool) noexcept = 0;
            virtual int32_t __stdcall get_SignalId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalName(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignalStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_SignalEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignalEnd(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemStateChangeType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasSystemResourceAccess(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasPermission(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasLockScreenPermission(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IActivationSignalDetectionConfiguration
    {
        [[nodiscard]] auto SignalId() const;
        [[nodiscard]] auto ModelId() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto IsActive() const;
        auto SetEnabled(bool value) const;
        auto SetEnabledAsync(bool value) const;
        [[nodiscard]] auto AvailabilityInfo() const;
        auto AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration, Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs> const& handler) const;
        using AvailabilityChanged_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>::remove_AvailabilityChanged>;
        AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration, Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs> const& handler) const;
        auto AvailabilityChanged(winrt::event_token const& token) const noexcept;
        auto SetModelData(param::hstring const& dataType, Windows::Storage::Streams::IInputStream const& data) const;
        auto SetModelDataAsync(param::hstring const& dataType, Windows::Storage::Streams::IInputStream const& data) const;
        auto GetModelDataType() const;
        auto GetModelDataTypeAsync() const;
        auto GetModelData() const;
        auto GetModelDataAsync() const;
        auto ClearModelData() const;
        auto ClearModelDataAsync() const;
        [[nodiscard]] auto TrainingStepsCompleted() const;
        [[nodiscard]] auto TrainingStepsRemaining() const;
        [[nodiscard]] auto TrainingDataFormat() const;
        auto ApplyTrainingData(Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat const& trainingDataFormat, Windows::Storage::Streams::IInputStream const& trainingData) const;
        auto ApplyTrainingDataAsync(Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat const& trainingDataFormat, Windows::Storage::Streams::IInputStream const& trainingData) const;
        auto ClearTrainingData() const;
        auto ClearTrainingDataAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IActivationSignalDetectionConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IActivationSignalDetector
    {
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto CanCreateConfigurations() const;
        [[nodiscard]] auto SupportedModelDataTypes() const;
        [[nodiscard]] auto SupportedTrainingDataFormats() const;
        [[nodiscard]] auto SupportedPowerStates() const;
        auto GetSupportedModelIdsForSignalId(param::hstring const& signalId) const;
        auto GetSupportedModelIdsForSignalIdAsync(param::hstring const& signalId) const;
        auto CreateConfiguration(param::hstring const& signalId, param::hstring const& modelId, param::hstring const& displayName) const;
        auto CreateConfigurationAsync(param::hstring const& signalId, param::hstring const& modelId, param::hstring const& displayName) const;
        auto GetConfigurations() const;
        auto GetConfigurationsAsync() const;
        auto GetConfiguration(param::hstring const& signalId, param::hstring const& modelId) const;
        auto GetConfigurationAsync(param::hstring const& signalId, param::hstring const& modelId) const;
        auto RemoveConfiguration(param::hstring const& signalId, param::hstring const& modelId) const;
        auto RemoveConfigurationAsync(param::hstring const& signalId, param::hstring const& modelId) const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IActivationSignalDetector<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentDetectorManager
    {
        auto GetAllActivationSignalDetectors() const;
        auto GetAllActivationSignalDetectorsAsync() const;
        auto GetActivationSignalDetectors(Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind const& kind) const;
        auto GetActivationSignalDetectorsAsync(Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind const& kind) const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentDetectorManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentDetectorManagerStatics
    {
        [[nodiscard]] auto Default() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentDetectorManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSession
    {
        auto SessionInterrupted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs> const& handler) const;
        using SessionInterrupted_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SessionInterrupted>;
        SessionInterrupted_revoker SessionInterrupted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs> const& handler) const;
        auto SessionInterrupted(winrt::event_token const& token) const noexcept;
        auto SignalDetected(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs> const& handler) const;
        using SignalDetected_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SignalDetected>;
        SignalDetected_revoker SignalDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs> const& handler) const;
        auto SignalDetected(winrt::event_token const& token) const noexcept;
        auto SystemStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs> const& handler) const;
        using SystemStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SystemStateChanged>;
        SystemStateChanged_revoker SystemStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs> const& handler) const;
        auto SystemStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AgentState() const;
        [[nodiscard]] auto Signal() const;
        [[nodiscard]] auto IsIndicatorLightAvailable() const;
        [[nodiscard]] auto IsScreenAvailable() const;
        [[nodiscard]] auto IsUserAuthenticated() const;
        [[nodiscard]] auto IsVoiceActivationAvailable() const;
        [[nodiscard]] auto IsInterruptible() const;
        [[nodiscard]] auto IsInterrupted() const;
        auto RequestInterruptibleAsync(bool interruptible) const;
        auto RequestInterruptible(bool interruptible) const;
        auto RequestAgentStateChangeAsync(Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState const& state) const;
        auto RequestAgentStateChange(Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState const& state) const;
        auto RequestForegroundActivationAsync() const;
        auto RequestForegroundActivation() const;
        auto GetAudioClientAsync() const;
        auto GetAudioClient() const;
        auto CreateAudioDeviceInputNodeAsync(Windows::Media::Audio::AudioGraph const& graph) const;
        auto CreateAudioDeviceInputNode(Windows::Media::Audio::AudioGraph const& graph) const;
        auto GetAudioCaptureDeviceIdAsync() const;
        auto GetAudioCaptureDeviceId() const;
        auto GetAudioRenderDeviceIdAsync() const;
        auto GetAudioRenderDeviceId() const;
        auto GetSignalModelIdAsync() const;
        auto GetSignalModelId() const;
        auto SetSignalModelIdAsync(uint32_t signalModelId) const;
        auto SetSignalModelId(uint32_t signalModelId) const;
        auto GetSupportedSignalModelIdsAsync() const;
        auto GetSupportedSignalModelIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSession<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionInterruptedEventArgs
    {
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionInterruptedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionStatics
    {
        auto GetCurrentSessionAsync() const;
        auto GetCurrentSessionSync() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignal
    {
        [[nodiscard]] auto IsSignalVerificationRequired() const;
        auto IsSignalVerificationRequired(bool value) const;
        [[nodiscard]] auto SignalId() const;
        auto SignalId(param::hstring const& value) const;
        [[nodiscard]] auto SignalName() const;
        auto SignalName(param::hstring const& value) const;
        [[nodiscard]] auto SignalContext() const;
        auto SignalContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto SignalStart() const;
        auto SignalStart(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto SignalEnd() const;
        auto SignalEnd(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignal<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignalDetectedEventArgs
    {
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignalDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSystemStateChangedEventArgs
    {
        [[nodiscard]] auto SystemStateChangeType() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSystemStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IDetectionConfigurationAvailabilityChangedEventArgs
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IDetectionConfigurationAvailabilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IDetectionConfigurationAvailabilityInfo
    {
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto HasSystemResourceAccess() const;
        [[nodiscard]] auto HasPermission() const;
        [[nodiscard]] auto HasLockScreenPermission() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IDetectionConfigurationAvailabilityInfo<D>;
    };
}
#endif
