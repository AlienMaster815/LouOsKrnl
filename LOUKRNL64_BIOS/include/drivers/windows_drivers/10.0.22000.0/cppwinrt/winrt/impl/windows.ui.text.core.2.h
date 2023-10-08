// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Text_Core_2_H
#define WINRT_Windows_UI_Text_Core_2_H
#include "winrt/impl/Windows.UI.Text.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Text::Core
{
    struct CoreTextRange
    {
        int32_t StartCaretPosition;
        int32_t EndCaretPosition;
    };
    inline bool operator==(CoreTextRange const& left, CoreTextRange const& right) noexcept
    {
        return left.StartCaretPosition == right.StartCaretPosition && left.EndCaretPosition == right.EndCaretPosition;
    }
    inline bool operator!=(CoreTextRange const& left, CoreTextRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CoreTextCompositionCompletedEventArgs : Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs
    {
        CoreTextCompositionCompletedEventArgs(std::nullptr_t) noexcept {}
        CoreTextCompositionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextCompositionSegment : Windows::UI::Text::Core::ICoreTextCompositionSegment
    {
        CoreTextCompositionSegment(std::nullptr_t) noexcept {}
        CoreTextCompositionSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextCompositionSegment(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextCompositionStartedEventArgs : Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs
    {
        CoreTextCompositionStartedEventArgs(std::nullptr_t) noexcept {}
        CoreTextCompositionStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextEditContext : Windows::UI::Text::Core::ICoreTextEditContext,
        impl::require<CoreTextEditContext, Windows::UI::Text::Core::ICoreTextEditContext2>
    {
        CoreTextEditContext(std::nullptr_t) noexcept {}
        CoreTextEditContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextEditContext(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextFormatUpdatingEventArgs : Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs
    {
        CoreTextFormatUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextFormatUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextLayoutBounds : Windows::UI::Text::Core::ICoreTextLayoutBounds
    {
        CoreTextLayoutBounds(std::nullptr_t) noexcept {}
        CoreTextLayoutBounds(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextLayoutBounds(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextLayoutRequest : Windows::UI::Text::Core::ICoreTextLayoutRequest,
        impl::require<CoreTextLayoutRequest, Windows::UI::Text::Core::ICoreTextLayoutRequest2>
    {
        CoreTextLayoutRequest(std::nullptr_t) noexcept {}
        CoreTextLayoutRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextLayoutRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextLayoutRequestedEventArgs : Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs
    {
        CoreTextLayoutRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextLayoutRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextSelectionRequest : Windows::UI::Text::Core::ICoreTextSelectionRequest
    {
        CoreTextSelectionRequest(std::nullptr_t) noexcept {}
        CoreTextSelectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextSelectionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextSelectionRequestedEventArgs : Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs
    {
        CoreTextSelectionRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextSelectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextSelectionUpdatingEventArgs : Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs
    {
        CoreTextSelectionUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextSelectionUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct CoreTextServicesConstants
    {
        CoreTextServicesConstants() = delete;
        [[nodiscard]] static auto HiddenCharacter();
    };
    struct __declspec(empty_bases) CoreTextServicesManager : Windows::UI::Text::Core::ICoreTextServicesManager
    {
        CoreTextServicesManager(std::nullptr_t) noexcept {}
        CoreTextServicesManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextServicesManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) CoreTextTextRequest : Windows::UI::Text::Core::ICoreTextTextRequest
    {
        CoreTextTextRequest(std::nullptr_t) noexcept {}
        CoreTextTextRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextTextRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextTextRequestedEventArgs : Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs
    {
        CoreTextTextRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextTextRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreTextTextUpdatingEventArgs : Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs
    {
        CoreTextTextUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextTextUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
