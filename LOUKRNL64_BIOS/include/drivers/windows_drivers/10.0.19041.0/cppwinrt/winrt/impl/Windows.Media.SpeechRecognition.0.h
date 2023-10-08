// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_SpeechRecognition_0_H
#define WINRT_Windows_Media_SpeechRecognition_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Globalization
{
    struct Language;
}
namespace winrt::Windows::Storage
{
    struct StorageFile;
}
namespace winrt::Windows::Media::SpeechRecognition
{
    enum class SpeechContinuousRecognitionMode : int32_t
    {
        Default = 0,
        PauseOnRecognition = 1,
    };
    enum class SpeechRecognitionAudioProblem : int32_t
    {
        None = 0,
        TooNoisy = 1,
        NoSignal = 2,
        TooLoud = 3,
        TooQuiet = 4,
        TooFast = 5,
        TooSlow = 6,
    };
    enum class SpeechRecognitionConfidence : int32_t
    {
        High = 0,
        Medium = 1,
        Low = 2,
        Rejected = 3,
    };
    enum class SpeechRecognitionConstraintProbability : int32_t
    {
        Default = 0,
        Min = 1,
        Max = 2,
    };
    enum class SpeechRecognitionConstraintType : int32_t
    {
        Topic = 0,
        List = 1,
        Grammar = 2,
        VoiceCommandDefinition = 3,
    };
    enum class SpeechRecognitionResultStatus : int32_t
    {
        Success = 0,
        TopicLanguageNotSupported = 1,
        GrammarLanguageMismatch = 2,
        GrammarCompilationFailure = 3,
        AudioQualityFailure = 4,
        UserCanceled = 5,
        Unknown = 6,
        TimeoutExceeded = 7,
        PauseLimitExceeded = 8,
        NetworkFailure = 9,
        MicrophoneUnavailable = 10,
    };
    enum class SpeechRecognitionScenario : int32_t
    {
        WebSearch = 0,
        Dictation = 1,
        FormFilling = 2,
    };
    enum class SpeechRecognizerState : int32_t
    {
        Idle = 0,
        Capturing = 1,
        Processing = 2,
        SoundStarted = 3,
        SoundEnded = 4,
        SpeechDetected = 5,
        Paused = 6,
    };
    struct ISpeechContinuousRecognitionCompletedEventArgs;
    struct ISpeechContinuousRecognitionResultGeneratedEventArgs;
    struct ISpeechContinuousRecognitionSession;
    struct ISpeechRecognitionCompilationResult;
    struct ISpeechRecognitionConstraint;
    struct ISpeechRecognitionGrammarFileConstraint;
    struct ISpeechRecognitionGrammarFileConstraintFactory;
    struct ISpeechRecognitionHypothesis;
    struct ISpeechRecognitionHypothesisGeneratedEventArgs;
    struct ISpeechRecognitionListConstraint;
    struct ISpeechRecognitionListConstraintFactory;
    struct ISpeechRecognitionQualityDegradingEventArgs;
    struct ISpeechRecognitionResult;
    struct ISpeechRecognitionResult2;
    struct ISpeechRecognitionSemanticInterpretation;
    struct ISpeechRecognitionTopicConstraint;
    struct ISpeechRecognitionTopicConstraintFactory;
    struct ISpeechRecognitionVoiceCommandDefinitionConstraint;
    struct ISpeechRecognizer;
    struct ISpeechRecognizer2;
    struct ISpeechRecognizerFactory;
    struct ISpeechRecognizerStateChangedEventArgs;
    struct ISpeechRecognizerStatics;
    struct ISpeechRecognizerStatics2;
    struct ISpeechRecognizerTimeouts;
    struct ISpeechRecognizerUIOptions;
    struct IVoiceCommandManager;
    struct IVoiceCommandSet;
    struct SpeechContinuousRecognitionCompletedEventArgs;
    struct SpeechContinuousRecognitionResultGeneratedEventArgs;
    struct SpeechContinuousRecognitionSession;
    struct SpeechRecognitionCompilationResult;
    struct SpeechRecognitionGrammarFileConstraint;
    struct SpeechRecognitionHypothesis;
    struct SpeechRecognitionHypothesisGeneratedEventArgs;
    struct SpeechRecognitionListConstraint;
    struct SpeechRecognitionQualityDegradingEventArgs;
    struct SpeechRecognitionResult;
    struct SpeechRecognitionSemanticInterpretation;
    struct SpeechRecognitionTopicConstraint;
    struct SpeechRecognitionVoiceCommandDefinitionConstraint;
    struct SpeechRecognizer;
    struct SpeechRecognizerStateChangedEventArgs;
    struct SpeechRecognizerTimeouts;
    struct SpeechRecognizerUIOptions;
    struct VoiceCommandManager;
    struct VoiceCommandSet;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::IVoiceCommandManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::IVoiceCommandSet>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::VoiceCommandManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::VoiceCommandSet>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::SpeechRecognition::SpeechRecognizerState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionCompletedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionResultGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechContinuousRecognitionSession" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionCompilationResult" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionGrammarFileConstraintFactory" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesis" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionHypothesisGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionListConstraintFactory" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionQualityDegradingEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionResult2" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionSemanticInterpretation" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionTopicConstraintFactory" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognitionVoiceCommandDefinitionConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizer>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizer" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizer2" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerFactory" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerStatics" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerStatics2" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerTimeouts" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.ISpeechRecognizerUIOptions" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::IVoiceCommandManager>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.IVoiceCommandManager" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::IVoiceCommandSet>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.IVoiceCommandSet" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionCompletedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionResultGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionSession" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionCompilationResult" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionGrammarFileConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesis" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionHypothesisGeneratedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionListConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionQualityDegradingEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionResult>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionResult" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionSemanticInterpretation" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionTopicConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionVoiceCommandDefinitionConstraint" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizer>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizer" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerStateChangedEventArgs" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerTimeouts" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerUIOptions" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::VoiceCommandManager>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.VoiceCommandManager" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::VoiceCommandSet>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.VoiceCommandSet" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechContinuousRecognitionMode" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionAudioProblem" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConfidence" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConstraintProbability" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionConstraintType" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionResultStatus" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognitionScenario" };
    };
    template <> struct name<Windows::Media::SpeechRecognition::SpeechRecognizerState>
    {
        static constexpr auto & value{ L"Windows.Media.SpeechRecognition.SpeechRecognizerState" };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
    {
        static constexpr guid value{ 0xE3D069BB,0xE30C,0x5E18,{ 0x42,0x4B,0x7F,0xBE,0x81,0xF8,0xFB,0xD0 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        static constexpr guid value{ 0x19091E1E,0x6E7E,0x5A46,{ 0x40,0xFB,0x76,0x59,0x4F,0x78,0x65,0x04 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
    {
        static constexpr guid value{ 0x6A213C04,0x6614,0x49F8,{ 0x99,0xA2,0xB5,0xE9,0xB3,0xA0,0x85,0xC8 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
    {
        static constexpr guid value{ 0x407E6C5D,0x6AC7,0x4DA4,{ 0x9C,0xC1,0x2F,0xCE,0x32,0xCF,0x74,0x89 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        static constexpr guid value{ 0x79AC1628,0x4D68,0x43C4,{ 0x89,0x11,0x40,0xDC,0x41,0x01,0xB5,0x5B } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
    {
        static constexpr guid value{ 0xB5031A8F,0x85CA,0x4FA4,{ 0xB1,0x1A,0x47,0x4F,0xC4,0x1B,0x38,0x35 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
    {
        static constexpr guid value{ 0x3DA770EB,0xC479,0x4C27,{ 0x9F,0x19,0x89,0x97,0x4E,0xF3,0x92,0xD1 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
    {
        static constexpr guid value{ 0x7A7B25B0,0x99C5,0x4F7D,{ 0xBF,0x84,0x10,0xAA,0x13,0x02,0xB6,0x34 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        static constexpr guid value{ 0x55161A7A,0x8023,0x5866,{ 0x41,0x1D,0x12,0x13,0xBB,0x27,0x14,0x76 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
    {
        static constexpr guid value{ 0x09C487E9,0xE4AD,0x4526,{ 0x81,0xF2,0x49,0x46,0xFB,0x48,0x1D,0x98 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
    {
        static constexpr guid value{ 0x40F3CDC7,0x562A,0x426A,{ 0x9F,0x3B,0x3B,0x4E,0x28,0x2B,0xE1,0xD5 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
    {
        static constexpr guid value{ 0x4FE24105,0x8C3A,0x4C7E,{ 0x8D,0x0A,0x5B,0xD4,0xF5,0xB1,0x4A,0xD8 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
    {
        static constexpr guid value{ 0x4E303157,0x034E,0x4652,{ 0x85,0x7E,0xD0,0x45,0x4C,0xC4,0xBE,0xEC } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        static constexpr guid value{ 0xAF7ED1BA,0x451B,0x4166,{ 0xA0,0xC1,0x1F,0xFE,0x84,0x03,0x2D,0x03 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
    {
        static constexpr guid value{ 0xAAE1DA9B,0x7E32,0x4C1F,{ 0x89,0xFE,0x0C,0x65,0xF4,0x86,0xF5,0x2E } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
    {
        static constexpr guid value{ 0xBF6FDF19,0x825D,0x4E69,{ 0xA6,0x81,0x36,0xE4,0x8C,0xF1,0xC9,0x3E } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
    {
        static constexpr guid value{ 0x6E6863DF,0xEC05,0x47D7,{ 0xA5,0xDF,0x56,0xA3,0x43,0x1E,0x58,0xD2 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        static constexpr guid value{ 0xF2791C2B,0x1EF4,0x4AE7,{ 0x9D,0x77,0xB6,0xFF,0x10,0xB8,0xA3,0xC2 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizer>
    {
        static constexpr guid value{ 0x0BC3C9CB,0xC26A,0x40F2,{ 0xAE,0xB5,0x80,0x96,0xB2,0xE4,0x80,0x73 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        static constexpr guid value{ 0x63C9BAF1,0x91E3,0x4EA4,{ 0x86,0xA1,0x7C,0x38,0x67,0xD0,0x84,0xA6 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
    {
        static constexpr guid value{ 0x60C488DD,0x7FB8,0x4033,{ 0xAC,0x70,0xD0,0x46,0xF6,0x48,0x18,0xE1 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
    {
        static constexpr guid value{ 0x563D4F09,0xBA03,0x4BAD,{ 0xAD,0x81,0xDD,0xC6,0xC4,0xDA,0xB0,0xC3 } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
    {
        static constexpr guid value{ 0x87A35EAC,0xA7DC,0x4B0B,{ 0xBC,0xC9,0x24,0xF4,0x7C,0x0B,0x7E,0xBF } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
    {
        static constexpr guid value{ 0x1D1B0D95,0x7565,0x4EF9,{ 0xA2,0xF3,0xBA,0x15,0x16,0x2A,0x96,0xCF } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
    {
        static constexpr guid value{ 0x2EF76FCA,0x6A3C,0x4DCA,{ 0xA1,0x53,0xDF,0x1B,0xC8,0x8A,0x79,0xAF } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
    {
        static constexpr guid value{ 0x7888D641,0xB92B,0x44BA,{ 0xA2,0x5F,0xD1,0x86,0x46,0x30,0x64,0x1F } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::IVoiceCommandManager>
    {
        static constexpr guid value{ 0xAA3A8DD5,0xB6E7,0x4EE2,{ 0xBA,0xA9,0xDD,0x6B,0xAC,0xED,0x0A,0x2B } };
    };
    template <> struct guid_storage<Windows::Media::SpeechRecognition::IVoiceCommandSet>
    {
        static constexpr guid value{ 0x0BEDDA75,0x46E6,0x4B11,{ 0xA0,0x88,0x5C,0x68,0x63,0x28,0x99,0xB5 } };
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionResult>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionResult;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizer>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognizer;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>
    {
        using type = Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions;
    };
    template <> struct default_interface<Windows::Media::SpeechRecognition::VoiceCommandSet>
    {
        using type = Windows::Media::SpeechRecognition::IVoiceCommandSet;
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoStopSilenceTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoStopSilenceTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartWithModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CancelAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResultGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResultGenerated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Probability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Probability(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GrammarFile(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTag(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Hypothesis(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Commands(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTag(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Problem(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall get_Confidence(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SemanticInterpretation(void**) noexcept = 0;
            virtual int32_t __stdcall GetAlternates(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Constraint(void**) noexcept = 0;
            virtual int32_t __stdcall get_RulePath(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawConfidence(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PhraseStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhraseDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Scenario(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TopicHint(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTag(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Constraints(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timeouts(void**) noexcept = 0;
            virtual int32_t __stdcall get_UIOptions(void**) noexcept = 0;
            virtual int32_t __stdcall CompileConstraintsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RecognizeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RecognizeWithUIAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_RecognitionQualityDegrading(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecognitionQualityDegrading(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContinuousRecognitionSession(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall StopRecognitionAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_HypothesisGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HypothesisGenerated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemSpeechLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTopicLanguages(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedGrammarLanguages(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TrySetSystemSpeechLanguageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InitialSilenceTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_InitialSilenceTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_EndSilenceTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_EndSilenceTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BabbleTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BabbleTimeout(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExampleText(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExampleText(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudiblePrompt(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudiblePrompt(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsReadBackEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsReadBackEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowConfirmation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowConfirmation(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::IVoiceCommandManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InstallCommandSetsFromStorageFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_InstalledCommandSets(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechRecognition::IVoiceCommandSet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall SetPhraseListAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs
    {
        [[nodiscard]] auto Result() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession
    {
        [[nodiscard]] auto AutoStopSilenceTimeout() const;
        auto AutoStopSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
        auto StartAsync() const;
        auto StartAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode const& mode) const;
        auto StopAsync() const;
        auto CancelAsync() const;
        auto PauseAsync() const;
        auto Resume() const;
        auto Completed(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const;
        using Completed_revoker = impl::event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession, &impl::abi_t<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const;
        auto Completed(winrt::event_token const& value) const noexcept;
        auto ResultGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const;
        using ResultGenerated_revoker = impl::event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession, &impl::abi_t<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>::remove_ResultGenerated>;
        ResultGenerated_revoker ResultGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const;
        auto ResultGenerated(winrt::event_token const& value) const noexcept;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto Tag() const;
        auto Tag(param::hstring const& value) const;
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Probability() const;
        auto Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability const& value) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint
    {
        [[nodiscard]] auto GrammarFile() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory
    {
        auto Create(Windows::Storage::StorageFile const& file) const;
        auto CreateWithTag(Windows::Storage::StorageFile const& file, param::hstring const& tag) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis
    {
        [[nodiscard]] auto Text() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs
    {
        [[nodiscard]] auto Hypothesis() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint
    {
        [[nodiscard]] auto Commands() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory
    {
        auto Create(param::iterable<hstring> const& commands) const;
        auto CreateWithTag(param::iterable<hstring> const& commands, param::hstring const& tag) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs
    {
        [[nodiscard]] auto Problem() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Text() const;
        [[nodiscard]] auto Confidence() const;
        [[nodiscard]] auto SemanticInterpretation() const;
        auto GetAlternates(uint32_t maxAlternates) const;
        [[nodiscard]] auto Constraint() const;
        [[nodiscard]] auto RulePath() const;
        [[nodiscard]] auto RawConfidence() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2
    {
        [[nodiscard]] auto PhraseStartTime() const;
        [[nodiscard]] auto PhraseDuration() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation
    {
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint
    {
        [[nodiscard]] auto Scenario() const;
        [[nodiscard]] auto TopicHint() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory
    {
        auto Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint) const;
        auto CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognitionVoiceCommandDefinitionConstraint
    {
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognitionVoiceCommandDefinitionConstraint<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizer
    {
        [[nodiscard]] auto CurrentLanguage() const;
        [[nodiscard]] auto Constraints() const;
        [[nodiscard]] auto Timeouts() const;
        [[nodiscard]] auto UIOptions() const;
        auto CompileConstraintsAsync() const;
        auto RecognizeAsync() const;
        auto RecognizeWithUIAsync() const;
        auto RecognitionQualityDegrading(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const;
        using RecognitionQualityDegrading_revoker = impl::event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer, &impl::abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer>::remove_RecognitionQualityDegrading>;
        RecognitionQualityDegrading_revoker RecognitionQualityDegrading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const;
        auto RecognitionQualityDegrading(winrt::event_token const& cookie) const noexcept;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer, &impl::abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const;
        auto StateChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizer>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2
    {
        [[nodiscard]] auto ContinuousRecognitionSession() const;
        [[nodiscard]] auto State() const;
        auto StopRecognitionAsync() const;
        auto HypothesisGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const;
        using HypothesisGenerated_revoker = impl::event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer2, &impl::abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer2>::remove_HypothesisGenerated>;
        HypothesisGenerated_revoker HypothesisGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const;
        auto HypothesisGenerated(winrt::event_token const& value) const noexcept;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory
    {
        auto Create(Windows::Globalization::Language const& language) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs
    {
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics
    {
        [[nodiscard]] auto SystemSpeechLanguage() const;
        [[nodiscard]] auto SupportedTopicLanguages() const;
        [[nodiscard]] auto SupportedGrammarLanguages() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics2
    {
        auto TrySetSystemSpeechLanguageAsync(Windows::Globalization::Language const& speechLanguage) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts
    {
        [[nodiscard]] auto InitialSilenceTimeout() const;
        auto InitialSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto EndSilenceTimeout() const;
        auto EndSilenceTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto BabbleTimeout() const;
        auto BabbleTimeout(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions
    {
        [[nodiscard]] auto ExampleText() const;
        auto ExampleText(param::hstring const& value) const;
        [[nodiscard]] auto AudiblePrompt() const;
        auto AudiblePrompt(param::hstring const& value) const;
        [[nodiscard]] auto IsReadBackEnabled() const;
        auto IsReadBackEnabled(bool value) const;
        [[nodiscard]] auto ShowConfirmation() const;
        auto ShowConfirmation(bool value) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_IVoiceCommandManager
    {
        auto InstallCommandSetsFromStorageFileAsync(Windows::Storage::StorageFile const& file) const;
        [[nodiscard]] auto InstalledCommandSets() const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::IVoiceCommandManager>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_IVoiceCommandManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechRecognition_IVoiceCommandSet
    {
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto Name() const;
        auto SetPhraseListAsync(param::hstring const& phraseListName, param::async_iterable<hstring> const& phraseList) const;
    };
    template <> struct consume<Windows::Media::SpeechRecognition::IVoiceCommandSet>
    {
        template <typename D> using type = consume_Windows_Media_SpeechRecognition_IVoiceCommandSet<D>;
    };
}
#endif
