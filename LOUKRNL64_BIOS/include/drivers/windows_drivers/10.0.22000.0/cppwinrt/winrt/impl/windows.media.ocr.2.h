// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Ocr_2_H
#define WINRT_Windows_Media_Ocr_2_H
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Media.Ocr.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Ocr
{
    struct __declspec(empty_bases) OcrEngine : Windows::Media::Ocr::IOcrEngine
    {
        OcrEngine(std::nullptr_t) noexcept {}
        OcrEngine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrEngine(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MaxImageDimension();
        [[nodiscard]] static auto AvailableRecognizerLanguages();
        static auto IsLanguageSupported(Windows::Globalization::Language const& language);
        static auto TryCreateFromLanguage(Windows::Globalization::Language const& language);
        static auto TryCreateFromUserProfileLanguages();
    };
    struct __declspec(empty_bases) OcrLine : Windows::Media::Ocr::IOcrLine
    {
        OcrLine(std::nullptr_t) noexcept {}
        OcrLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrLine(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OcrResult : Windows::Media::Ocr::IOcrResult
    {
        OcrResult(std::nullptr_t) noexcept {}
        OcrResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OcrWord : Windows::Media::Ocr::IOcrWord
    {
        OcrWord(std::nullptr_t) noexcept {}
        OcrWord(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Ocr::IOcrWord(ptr, take_ownership_from_abi) {}
    };
}
#endif
