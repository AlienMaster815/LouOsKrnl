// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_SpeechRecognition_1_H
#define WINRT_Windows_Media_SpeechRecognition_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition
{
    struct __declspec(empty_bases) ISpeechContinuousRecognitionCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionCompletedEventArgs>
    {
        ISpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechContinuousRecognitionResultGeneratedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        ISpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionResultGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechContinuousRecognitionSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionSession>
    {
        ISpeechContinuousRecognitionSession(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionCompilationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionCompilationResult>
    {
        ISpeechRecognitionCompilationResult(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionCompilationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionConstraint :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionConstraint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionGrammarFileConstraint :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionGrammarFileConstraint>,
        impl::require<Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionGrammarFileConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionGrammarFileConstraint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionGrammarFileConstraintFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionGrammarFileConstraintFactory>
    {
        ISpeechRecognitionGrammarFileConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionGrammarFileConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionHypothesis :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionHypothesis>
    {
        ISpeechRecognitionHypothesis(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionHypothesis(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionHypothesisGeneratedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        ISpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionHypothesisGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionListConstraint :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionListConstraint>,
        impl::require<Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionListConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionListConstraint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionListConstraintFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionListConstraintFactory>
    {
        ISpeechRecognitionListConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionListConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionQualityDegradingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionQualityDegradingEventArgs>
    {
        ISpeechRecognitionQualityDegradingEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionQualityDegradingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionResult>
    {
        ISpeechRecognitionResult(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionResult2>
    {
        ISpeechRecognitionResult2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionSemanticInterpretation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionSemanticInterpretation>
    {
        ISpeechRecognitionSemanticInterpretation(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionSemanticInterpretation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionTopicConstraint :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionTopicConstraint>,
        impl::require<Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionTopicConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionTopicConstraint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionTopicConstraintFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionTopicConstraintFactory>
    {
        ISpeechRecognitionTopicConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionTopicConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognitionVoiceCommandDefinitionConstraint :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionVoiceCommandDefinitionConstraint>,
        impl::require<Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionVoiceCommandDefinitionConstraint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizer :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizer>,
        impl::require<Windows::Media::SpeechRecognition::ISpeechRecognizer, Windows::Foundation::IClosable>
    {
        ISpeechRecognizer(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizer2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizer2>
    {
        ISpeechRecognizer2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizer2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerFactory>
    {
        ISpeechRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStateChangedEventArgs>
    {
        ISpeechRecognizerStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStatics>
    {
        ISpeechRecognizerStatics(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStatics2>
    {
        ISpeechRecognizerStatics2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerTimeouts :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerTimeouts>
    {
        ISpeechRecognizerTimeouts(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerTimeouts(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechRecognizerUIOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerUIOptions>
    {
        ISpeechRecognizerUIOptions(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVoiceCommandManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVoiceCommandManager>
    {
        IVoiceCommandManager(std::nullptr_t = nullptr) noexcept {}
        IVoiceCommandManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVoiceCommandSet :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVoiceCommandSet>
    {
        IVoiceCommandSet(std::nullptr_t = nullptr) noexcept {}
        IVoiceCommandSet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
