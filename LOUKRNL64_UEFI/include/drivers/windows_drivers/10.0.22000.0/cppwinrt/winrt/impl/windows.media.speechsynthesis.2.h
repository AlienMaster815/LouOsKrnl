// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_SpeechSynthesis_2_H
#define WINRT_Windows_Media_SpeechSynthesis_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis
{
    struct __declspec(empty_bases) SpeechSynthesisStream : Windows::Media::SpeechSynthesis::ISpeechSynthesisStream,
        impl::require<SpeechSynthesisStream, Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        SpeechSynthesisStream(std::nullptr_t) noexcept {}
        SpeechSynthesisStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::SpeechSynthesis::ISpeechSynthesisStream(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpeechSynthesizer : Windows::Media::SpeechSynthesis::ISpeechSynthesizer,
        impl::require<SpeechSynthesizer, Windows::Foundation::IClosable, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
    {
        SpeechSynthesizer(std::nullptr_t) noexcept {}
        SpeechSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::SpeechSynthesis::ISpeechSynthesizer(ptr, take_ownership_from_abi) {}
        SpeechSynthesizer();
        [[nodiscard]] static auto AllVoices();
        [[nodiscard]] static auto DefaultVoice();
        static auto TrySetDefaultVoiceAsync(Windows::Media::SpeechSynthesis::VoiceInformation const& voice);
    };
    struct __declspec(empty_bases) SpeechSynthesizerOptions : Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions,
        impl::require<SpeechSynthesizerOptions, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>
    {
        SpeechSynthesizerOptions(std::nullptr_t) noexcept {}
        SpeechSynthesizerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VoiceInformation : Windows::Media::SpeechSynthesis::IVoiceInformation
    {
        VoiceInformation(std::nullptr_t) noexcept {}
        VoiceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::SpeechSynthesis::IVoiceInformation(ptr, take_ownership_from_abi) {}
    };
}
#endif
