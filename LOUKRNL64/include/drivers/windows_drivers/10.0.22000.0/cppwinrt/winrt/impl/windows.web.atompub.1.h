// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_AtomPub_1_H
#define WINRT_Windows_Web_AtomPub_1_H
#include "winrt/impl/Windows.Web.Syndication.0.h"
#include "winrt/impl/Windows.Web.AtomPub.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::AtomPub
{
    struct __declspec(empty_bases) IAtomPubClient :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAtomPubClient>,
        impl::require<Windows::Web::AtomPub::IAtomPubClient, Windows::Web::Syndication::ISyndicationClient>
    {
        IAtomPubClient(std::nullptr_t = nullptr) noexcept {}
        IAtomPubClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAtomPubClientFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAtomPubClientFactory>
    {
        IAtomPubClientFactory(std::nullptr_t = nullptr) noexcept {}
        IAtomPubClientFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IResourceCollection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IResourceCollection>,
        impl::require<Windows::Web::AtomPub::IResourceCollection, Windows::Web::Syndication::ISyndicationNode>
    {
        IResourceCollection(std::nullptr_t = nullptr) noexcept {}
        IResourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServiceDocument :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServiceDocument>,
        impl::require<Windows::Web::AtomPub::IServiceDocument, Windows::Web::Syndication::ISyndicationNode>
    {
        IServiceDocument(std::nullptr_t = nullptr) noexcept {}
        IServiceDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkspace :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWorkspace>,
        impl::require<Windows::Web::AtomPub::IWorkspace, Windows::Web::Syndication::ISyndicationNode>
    {
        IWorkspace(std::nullptr_t = nullptr) noexcept {}
        IWorkspace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
