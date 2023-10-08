// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Text_1_H
#define WINRT_Windows_UI_Text_1_H
#include "winrt/impl/Windows.UI.Text.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Text
{
    struct __declspec(empty_bases) IContentLinkInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentLinkInfo>
    {
        IContentLinkInfo(std::nullptr_t = nullptr) noexcept {}
        IContentLinkInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFontWeights :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFontWeights>
    {
        IFontWeights(std::nullptr_t = nullptr) noexcept {}
        IFontWeights(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFontWeightsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFontWeightsStatics>
    {
        IFontWeightsStatics(std::nullptr_t = nullptr) noexcept {}
        IFontWeightsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRichEditTextRange :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRichEditTextRange>
    {
        IRichEditTextRange(std::nullptr_t = nullptr) noexcept {}
        IRichEditTextRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextCharacterFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextCharacterFormat>
    {
        ITextCharacterFormat(std::nullptr_t = nullptr) noexcept {}
        ITextCharacterFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextConstantsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextConstantsStatics>
    {
        ITextConstantsStatics(std::nullptr_t = nullptr) noexcept {}
        ITextConstantsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextDocument :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextDocument>
    {
        ITextDocument(std::nullptr_t = nullptr) noexcept {}
        ITextDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextDocument2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextDocument2>
    {
        ITextDocument2(std::nullptr_t = nullptr) noexcept {}
        ITextDocument2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextDocument3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextDocument3>
    {
        ITextDocument3(std::nullptr_t = nullptr) noexcept {}
        ITextDocument3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextDocument4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextDocument4>
    {
        ITextDocument4(std::nullptr_t = nullptr) noexcept {}
        ITextDocument4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextParagraphFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextParagraphFormat>
    {
        ITextParagraphFormat(std::nullptr_t = nullptr) noexcept {}
        ITextParagraphFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextRange :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextRange>
    {
        ITextRange(std::nullptr_t = nullptr) noexcept {}
        ITextRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITextSelection :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITextSelection>,
        impl::require<Windows::UI::Text::ITextSelection, Windows::UI::Text::ITextRange>
    {
        ITextSelection(std::nullptr_t = nullptr) noexcept {}
        ITextSelection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
