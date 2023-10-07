// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Core_2_H
#define WINRT_Windows_Security_Authentication_Web_Core_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core
{
    struct __declspec(empty_bases) FindAllAccountsResult : Windows::Security::Authentication::Web::Core::IFindAllAccountsResult
    {
        FindAllAccountsResult(std::nullptr_t) noexcept {}
        FindAllAccountsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IFindAllAccountsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountEventArgs : Windows::Security::Authentication::Web::Core::IWebAccountEventArgs
    {
        WebAccountEventArgs(std::nullptr_t) noexcept {}
        WebAccountEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebAccountEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountMonitor : Windows::Security::Authentication::Web::Core::IWebAccountMonitor,
        impl::require<WebAccountMonitor, Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        WebAccountMonitor(std::nullptr_t) noexcept {}
        WebAccountMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebAccountMonitor(ptr, take_ownership_from_abi) {}
    };
    struct WebAuthenticationCoreManager
    {
        WebAuthenticationCoreManager() = delete;
        static auto GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request);
        static auto GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount);
        static auto RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request);
        static auto RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount);
        static auto FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId);
        static auto FindAccountProviderAsync(param::hstring const& webAccountProviderId);
        static auto FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority);
        static auto FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user);
        static auto CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts);
        static auto FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider);
        static auto FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& clientId);
        static auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId);
        static auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority);
        static auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user);
    };
    struct __declspec(empty_bases) WebProviderError : Windows::Security::Authentication::Web::Core::IWebProviderError
    {
        WebProviderError(std::nullptr_t) noexcept {}
        WebProviderError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebProviderError(ptr, take_ownership_from_abi) {}
        WebProviderError(uint32_t errorCode, param::hstring const& errorMessage);
    };
    struct __declspec(empty_bases) WebTokenRequest : Windows::Security::Authentication::Web::Core::IWebTokenRequest,
        impl::require<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequest2, Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        WebTokenRequest(std::nullptr_t) noexcept {}
        WebTokenRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebTokenRequest(ptr, take_ownership_from_abi) {}
        WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId);
        WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType);
        explicit WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider);
        WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope);
    };
    struct __declspec(empty_bases) WebTokenRequestResult : Windows::Security::Authentication::Web::Core::IWebTokenRequestResult
    {
        WebTokenRequestResult(std::nullptr_t) noexcept {}
        WebTokenRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebTokenRequestResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebTokenResponse : Windows::Security::Authentication::Web::Core::IWebTokenResponse
    {
        WebTokenResponse(std::nullptr_t) noexcept {}
        WebTokenResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::Core::IWebTokenResponse(ptr, take_ownership_from_abi) {}
        WebTokenResponse();
        explicit WebTokenResponse(param::hstring const& token);
        WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount);
        WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error);
    };
}
#endif
