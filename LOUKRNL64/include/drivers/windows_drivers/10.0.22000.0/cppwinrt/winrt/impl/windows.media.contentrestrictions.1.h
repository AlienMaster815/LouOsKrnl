// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ContentRestrictions_1_H
#define WINRT_Windows_Media_ContentRestrictions_1_H
#include "winrt/impl/Windows.Media.ContentRestrictions.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions
{
    struct __declspec(empty_bases) IContentRestrictionsBrowsePolicy :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentRestrictionsBrowsePolicy>
    {
        IContentRestrictionsBrowsePolicy(std::nullptr_t = nullptr) noexcept {}
        IContentRestrictionsBrowsePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRatedContentDescription :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentDescription>
    {
        IRatedContentDescription(std::nullptr_t = nullptr) noexcept {}
        IRatedContentDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRatedContentDescriptionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentDescriptionFactory>
    {
        IRatedContentDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
        IRatedContentDescriptionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRatedContentRestrictions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentRestrictions>
    {
        IRatedContentRestrictions(std::nullptr_t = nullptr) noexcept {}
        IRatedContentRestrictions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRatedContentRestrictionsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentRestrictionsFactory>
    {
        IRatedContentRestrictionsFactory(std::nullptr_t = nullptr) noexcept {}
        IRatedContentRestrictionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
