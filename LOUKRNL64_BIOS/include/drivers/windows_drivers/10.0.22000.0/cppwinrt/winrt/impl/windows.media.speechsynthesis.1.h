// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_SpeechSynthesis_1_H
#define WINRT_Windows_Media_SpeechSynthesis_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis
{
    struct __declspec(empty_bases) IInstalledVoicesStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInstalledVoicesStatic>
    {
        IInstalledVoicesStatic(std::nullptr_t = nullptr) noexcept {}
        IInstalledVoicesStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInstalledVoicesStatic2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInstalledVoicesStatic2>
    {
        IInstalledVoicesStatic2(std::nullptr_t = nullptr) noexcept {}
        IInstalledVoicesStatic2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesisStream :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesisStream>,
        impl::require<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
    {
        ISpeechSynthesisStream(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesisStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesizer :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesizer>
    {
        ISpeechSynthesizer(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesizer2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesizer2>
    {
        ISpeechSynthesizer2(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesizer2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesizerOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesizerOptions>
    {
        ISpeechSynthesizerOptions(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesizerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesizerOptions2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesizerOptions2>
    {
        ISpeechSynthesizerOptions2(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesizerOptions2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechSynthesizerOptions3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechSynthesizerOptions3>
    {
        ISpeechSynthesizerOptions3(std::nullptr_t = nullptr) noexcept {}
        ISpeechSynthesizerOptions3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVoiceInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVoiceInformation>
    {
        IVoiceInformation(std::nullptr_t = nullptr) noexcept {}
        IVoiceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
