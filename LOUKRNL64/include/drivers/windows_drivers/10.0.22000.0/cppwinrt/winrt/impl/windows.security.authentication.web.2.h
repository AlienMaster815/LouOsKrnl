// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_2_H
#define WINRT_Windows_Security_Authentication_Web_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web
{
    struct WebAuthenticationBroker
    {
        WebAuthenticationBroker() = delete;
        static auto AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri);
        static auto AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri);
        static auto GetCurrentApplicationCallbackUri();
        static auto AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri);
        static auto AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri);
        static auto AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options);
        static auto AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri);
        static auto AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options);
    };
    struct __declspec(empty_bases) WebAuthenticationResult : Windows::Security::Authentication::Web::IWebAuthenticationResult
    {
        WebAuthenticationResult(std::nullptr_t) noexcept {}
        WebAuthenticationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Web::IWebAuthenticationResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
