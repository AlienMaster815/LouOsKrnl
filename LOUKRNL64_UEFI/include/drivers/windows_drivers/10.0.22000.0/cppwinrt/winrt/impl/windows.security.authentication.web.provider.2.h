// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Provider_2_H
#define WINRT_Windows_Security_Authentication_Web_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider
{
    struct __declspec(empty_bases) WebAccountClientView : Windows::Security::Authentication::Web::Provider::IWebAccountClientView
    {
        WebAccountClientView(std::nullptr_t) noexcept {}
        WebAccountClientView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountClientView(ptr, take_ownership_from_abi) {}
        WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri);
        WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId);
    };
    struct WebAccountManager
    {
        WebAccountManager() = delete;
        static auto UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
        static auto DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount);
        static auto FindAllProviderWebAccountsAsync();
        static auto PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies);
        static auto SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view);
        static auto ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri);
        static auto GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount);
        static auto SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture);
        static auto ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount);
        static auto PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN);
        static auto FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user);
        static auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
        static auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
        static auto InvalidateAppCacheForAllAccountsAsync();
        static auto InvalidateAppCacheForAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
        static auto SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId);
        static auto GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount);
        static auto ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto GetScope(Windows::Security::Credentials::WebAccount const& webAccount);
    };
    struct __declspec(empty_bases) WebAccountProviderAddAccountOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation
    {
        WebAccountProviderAddAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderAddAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderDeleteAccountOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation,
        impl::require<WebAccountProviderDeleteAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderDeleteAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderDeleteAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderGetTokenSilentOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
        impl::require<WebAccountProviderGetTokenSilentOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        WebAccountProviderGetTokenSilentOperation(std::nullptr_t) noexcept {}
        WebAccountProviderGetTokenSilentOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderManageAccountOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation
    {
        WebAccountProviderManageAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderManageAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderRequestTokenOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
        impl::require<WebAccountProviderRequestTokenOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        WebAccountProviderRequestTokenOperation(std::nullptr_t) noexcept {}
        WebAccountProviderRequestTokenOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderRetrieveCookiesOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation,
        impl::require<WebAccountProviderRetrieveCookiesOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderRetrieveCookiesOperation(std::nullptr_t) noexcept {}
        WebAccountProviderRetrieveCookiesOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderSignOutAccountOperation : Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation,
        impl::require<WebAccountProviderSignOutAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderSignOutAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderSignOutAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderTriggerDetails : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects,
        impl::require<WebAccountProviderTriggerDetails, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        WebAccountProviderTriggerDetails(std::nullptr_t) noexcept {}
        WebAccountProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebProviderTokenRequest : Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest,
        impl::require<WebProviderTokenRequest, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        WebProviderTokenRequest(std::nullptr_t) noexcept {}
        WebProviderTokenRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebProviderTokenResponse : Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse
    {
        WebProviderTokenResponse(std::nullptr_t) noexcept {}
        WebProviderTokenResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse(ptr, take_ownership_from_abi) {}
        explicit WebProviderTokenResponse(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse);
    };
}
#endif
