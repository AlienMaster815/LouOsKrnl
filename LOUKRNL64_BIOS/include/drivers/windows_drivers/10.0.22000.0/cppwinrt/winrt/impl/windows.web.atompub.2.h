// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_AtomPub_2_H
#define WINRT_Windows_Web_AtomPub_2_H
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Web.Syndication.1.h"
#include "winrt/impl/Windows.Web.AtomPub.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::AtomPub
{
    struct __declspec(empty_bases) AtomPubClient : Windows::Web::AtomPub::IAtomPubClient
    {
        AtomPubClient(std::nullptr_t) noexcept {}
        AtomPubClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IAtomPubClient(ptr, take_ownership_from_abi) {}
        AtomPubClient();
        explicit AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
    };
    struct __declspec(empty_bases) ResourceCollection : Windows::Web::AtomPub::IResourceCollection
    {
        ResourceCollection(std::nullptr_t) noexcept {}
        ResourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IResourceCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServiceDocument : Windows::Web::AtomPub::IServiceDocument
    {
        ServiceDocument(std::nullptr_t) noexcept {}
        ServiceDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IServiceDocument(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Workspace : Windows::Web::AtomPub::IWorkspace
    {
        Workspace(std::nullptr_t) noexcept {}
        Workspace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::AtomPub::IWorkspace(ptr, take_ownership_from_abi) {}
    };
}
#endif
