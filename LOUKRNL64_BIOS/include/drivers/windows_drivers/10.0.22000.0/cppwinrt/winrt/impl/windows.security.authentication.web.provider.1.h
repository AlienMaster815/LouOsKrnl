// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Provider_1_H
#define WINRT_Windows_Security_Authentication_Web_Provider_1_H
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider
{
    struct __declspec(empty_bases) IWebAccountClientView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountClientView>
    {
        IWebAccountClientView(std::nullptr_t = nullptr) noexcept {}
        IWebAccountClientView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountClientViewFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountClientViewFactory>
    {
        IWebAccountClientViewFactory(std::nullptr_t = nullptr) noexcept {}
        IWebAccountClientViewFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountManagerStatics>
    {
        IWebAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IWebAccountManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountManagerStatics2>
    {
        IWebAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IWebAccountManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountManagerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountManagerStatics3>
    {
        IWebAccountManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IWebAccountManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountManagerStatics4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountManagerStatics4>
    {
        IWebAccountManagerStatics4(std::nullptr_t = nullptr) noexcept {}
        IWebAccountManagerStatics4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountMapManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountMapManagerStatics>
    {
        IWebAccountMapManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IWebAccountMapManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderAddAccountOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderAddAccountOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderAddAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderBaseReportOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderBaseReportOperation>
    {
        IWebAccountProviderBaseReportOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderBaseReportOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderDeleteAccountOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderDeleteAccountOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderDeleteAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderDeleteAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderManageAccountOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderManageAccountOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderManageAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderManageAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderOperation>
    {
        IWebAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderRetrieveCookiesOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderRetrieveCookiesOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderRetrieveCookiesOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderRetrieveCookiesOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderSignOutAccountOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderSignOutAccountOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderSignOutAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderSignOutAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderSilentReportOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderSilentReportOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        IWebAccountProviderSilentReportOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderSilentReportOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderTokenObjects :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderTokenObjects>
    {
        IWebAccountProviderTokenObjects(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderTokenObjects(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderTokenObjects2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderTokenObjects2>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        IWebAccountProviderTokenObjects2(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderTokenObjects2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderTokenOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderTokenOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        IWebAccountProviderTokenOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderTokenOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderUIReportOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderUIReportOperation>,
        impl::require<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        IWebAccountProviderUIReportOperation(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderUIReportOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountScopeManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountScopeManagerStatics>
    {
        IWebAccountScopeManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IWebAccountScopeManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebProviderTokenRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebProviderTokenRequest>
    {
        IWebProviderTokenRequest(std::nullptr_t = nullptr) noexcept {}
        IWebProviderTokenRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebProviderTokenRequest2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebProviderTokenRequest2>
    {
        IWebProviderTokenRequest2(std::nullptr_t = nullptr) noexcept {}
        IWebProviderTokenRequest2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebProviderTokenRequest3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebProviderTokenRequest3>
    {
        IWebProviderTokenRequest3(std::nullptr_t = nullptr) noexcept {}
        IWebProviderTokenRequest3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebProviderTokenResponse :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebProviderTokenResponse>
    {
        IWebProviderTokenResponse(std::nullptr_t = nullptr) noexcept {}
        IWebProviderTokenResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebProviderTokenResponseFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebProviderTokenResponseFactory>
    {
        IWebProviderTokenResponseFactory(std::nullptr_t = nullptr) noexcept {}
        IWebProviderTokenResponseFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
