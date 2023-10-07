// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ContentRestrictions_2_H
#define WINRT_Windows_Media_ContentRestrictions_2_H
#include "winrt/impl/Windows.Media.ContentRestrictions.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions
{
    struct __declspec(empty_bases) ContentRestrictionsBrowsePolicy : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy
    {
        ContentRestrictionsBrowsePolicy(std::nullptr_t) noexcept {}
        ContentRestrictionsBrowsePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RatedContentDescription : Windows::Media::ContentRestrictions::IRatedContentDescription
    {
        RatedContentDescription(std::nullptr_t) noexcept {}
        RatedContentDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentDescription(ptr, take_ownership_from_abi) {}
        RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category);
    };
    struct __declspec(empty_bases) RatedContentRestrictions : Windows::Media::ContentRestrictions::IRatedContentRestrictions
    {
        RatedContentRestrictions(std::nullptr_t) noexcept {}
        RatedContentRestrictions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentRestrictions(ptr, take_ownership_from_abi) {}
        RatedContentRestrictions();
        explicit RatedContentRestrictions(uint32_t maxAgeRating);
    };
}
#endif
