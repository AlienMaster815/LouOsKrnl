// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Search_Core_2_H
#define WINRT_Windows_ApplicationModel_Search_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.Search.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core
{
    struct __declspec(empty_bases) RequestingFocusOnKeyboardInputEventArgs : Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs
    {
        RequestingFocusOnKeyboardInputEventArgs(std::nullptr_t) noexcept {}
        RequestingFocusOnKeyboardInputEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchSuggestion : Windows::ApplicationModel::Search::Core::ISearchSuggestion
    {
        SearchSuggestion(std::nullptr_t) noexcept {}
        SearchSuggestion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::Core::ISearchSuggestion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchSuggestionManager : Windows::ApplicationModel::Search::Core::ISearchSuggestionManager
    {
        SearchSuggestionManager(std::nullptr_t) noexcept {}
        SearchSuggestionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::Core::ISearchSuggestionManager(ptr, take_ownership_from_abi) {}
        SearchSuggestionManager();
    };
    struct __declspec(empty_bases) SearchSuggestionsRequestedEventArgs : Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs
    {
        SearchSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
        SearchSuggestionsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
