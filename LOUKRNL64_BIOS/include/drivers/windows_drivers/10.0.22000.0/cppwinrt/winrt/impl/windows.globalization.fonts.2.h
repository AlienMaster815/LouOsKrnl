// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_Fonts_2_H
#define WINRT_Windows_Globalization_Fonts_2_H
#include "winrt/impl/Windows.Globalization.Fonts.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts
{
    struct __declspec(empty_bases) LanguageFont : Windows::Globalization::Fonts::ILanguageFont
    {
        LanguageFont(std::nullptr_t) noexcept {}
        LanguageFont(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Fonts::ILanguageFont(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LanguageFontGroup : Windows::Globalization::Fonts::ILanguageFontGroup
    {
        LanguageFontGroup(std::nullptr_t) noexcept {}
        LanguageFontGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Fonts::ILanguageFontGroup(ptr, take_ownership_from_abi) {}
        explicit LanguageFontGroup(param::hstring const& languageTag);
    };
}
#endif
