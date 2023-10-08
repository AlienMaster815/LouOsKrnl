// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Syndication_1_H
#define WINRT_Windows_Web_Syndication_1_H
#include "winrt/impl/Windows.Web.Syndication.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Syndication
{
    struct __declspec(empty_bases) ISyndicationAttribute :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationAttribute>
    {
        ISyndicationAttribute(std::nullptr_t = nullptr) noexcept {}
        ISyndicationAttribute(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationAttributeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationAttributeFactory>
    {
        ISyndicationAttributeFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationAttributeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationCategory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationCategory>,
        impl::require<Windows::Web::Syndication::ISyndicationCategory, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationCategory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationCategory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationCategoryFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationCategoryFactory>
    {
        ISyndicationCategoryFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationCategoryFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationClient :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationClient>
    {
        ISyndicationClient(std::nullptr_t = nullptr) noexcept {}
        ISyndicationClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationClientFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationClientFactory>
    {
        ISyndicationClientFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationClientFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationContent :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationContent>,
        impl::require<Windows::Web::Syndication::ISyndicationContent, Windows::Web::Syndication::ISyndicationNode, Windows::Web::Syndication::ISyndicationText>
    {
        ISyndicationContent(std::nullptr_t = nullptr) noexcept {}
        ISyndicationContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationContentFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationContentFactory>
    {
        ISyndicationContentFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationContentFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationErrorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationErrorStatics>
    {
        ISyndicationErrorStatics(std::nullptr_t = nullptr) noexcept {}
        ISyndicationErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationFeed :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationFeed>,
        impl::require<Windows::Web::Syndication::ISyndicationFeed, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationFeed(std::nullptr_t = nullptr) noexcept {}
        ISyndicationFeed(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationFeedFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationFeedFactory>
    {
        ISyndicationFeedFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationFeedFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationGenerator :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationGenerator>
    {
        ISyndicationGenerator(std::nullptr_t = nullptr) noexcept {}
        ISyndicationGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationGeneratorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationGeneratorFactory>
    {
        ISyndicationGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationGeneratorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationItem>,
        impl::require<Windows::Web::Syndication::ISyndicationItem, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationItem(std::nullptr_t = nullptr) noexcept {}
        ISyndicationItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationItemFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationItemFactory>
    {
        ISyndicationItemFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationItemFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationLink :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationLink>,
        impl::require<Windows::Web::Syndication::ISyndicationLink, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationLink(std::nullptr_t = nullptr) noexcept {}
        ISyndicationLink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationLinkFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationLinkFactory>
    {
        ISyndicationLinkFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationLinkFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationNode>
    {
        ISyndicationNode(std::nullptr_t = nullptr) noexcept {}
        ISyndicationNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationNodeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationNodeFactory>
    {
        ISyndicationNodeFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationNodeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationPerson :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationPerson>,
        impl::require<Windows::Web::Syndication::ISyndicationPerson, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationPerson(std::nullptr_t = nullptr) noexcept {}
        ISyndicationPerson(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationPersonFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationPersonFactory>
    {
        ISyndicationPersonFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationPersonFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationText :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationText>,
        impl::require<Windows::Web::Syndication::ISyndicationText, Windows::Web::Syndication::ISyndicationNode>
    {
        ISyndicationText(std::nullptr_t = nullptr) noexcept {}
        ISyndicationText(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISyndicationTextFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISyndicationTextFactory>
    {
        ISyndicationTextFactory(std::nullptr_t = nullptr) noexcept {}
        ISyndicationTextFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
