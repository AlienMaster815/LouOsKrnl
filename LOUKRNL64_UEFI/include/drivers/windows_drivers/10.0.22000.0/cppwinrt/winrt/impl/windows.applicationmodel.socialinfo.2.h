// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_2_H
#define WINRT_Windows_ApplicationModel_SocialInfo_2_H
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo
{
    struct __declspec(empty_bases) SocialFeedChildItem : Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem
    {
        SocialFeedChildItem(std::nullptr_t) noexcept {}
        SocialFeedChildItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem(ptr, take_ownership_from_abi) {}
        SocialFeedChildItem();
    };
    struct __declspec(empty_bases) SocialFeedContent : Windows::ApplicationModel::SocialInfo::ISocialFeedContent
    {
        SocialFeedContent(std::nullptr_t) noexcept {}
        SocialFeedContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialFeedContent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SocialFeedItem : Windows::ApplicationModel::SocialInfo::ISocialFeedItem
    {
        SocialFeedItem(std::nullptr_t) noexcept {}
        SocialFeedItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialFeedItem(ptr, take_ownership_from_abi) {}
        SocialFeedItem();
    };
    struct __declspec(empty_bases) SocialFeedSharedItem : Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem
    {
        SocialFeedSharedItem(std::nullptr_t) noexcept {}
        SocialFeedSharedItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem(ptr, take_ownership_from_abi) {}
        SocialFeedSharedItem();
    };
    struct __declspec(empty_bases) SocialItemThumbnail : Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail
    {
        SocialItemThumbnail(std::nullptr_t) noexcept {}
        SocialItemThumbnail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail(ptr, take_ownership_from_abi) {}
        SocialItemThumbnail();
    };
    struct __declspec(empty_bases) SocialUserInfo : Windows::ApplicationModel::SocialInfo::ISocialUserInfo
    {
        SocialUserInfo(std::nullptr_t) noexcept {}
        SocialUserInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::SocialInfo::ISocialUserInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
