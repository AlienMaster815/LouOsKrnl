// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_OnlineId_2_H
#define WINRT_Windows_Security_Authentication_OnlineId_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authentication.OnlineId.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::OnlineId
{
    struct __declspec(empty_bases) OnlineIdAuthenticator : Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator
    {
        OnlineIdAuthenticator(std::nullptr_t) noexcept {}
        OnlineIdAuthenticator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator(ptr, take_ownership_from_abi) {}
        OnlineIdAuthenticator();
    };
    struct __declspec(empty_bases) OnlineIdServiceTicket : Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket
    {
        OnlineIdServiceTicket(std::nullptr_t) noexcept {}
        OnlineIdServiceTicket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OnlineIdServiceTicketRequest : Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest
    {
        OnlineIdServiceTicketRequest(std::nullptr_t) noexcept {}
        OnlineIdServiceTicketRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest(ptr, take_ownership_from_abi) {}
        OnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy);
        explicit OnlineIdServiceTicketRequest(param::hstring const& service);
    };
    struct OnlineIdSystemAuthenticator
    {
        OnlineIdSystemAuthenticator() = delete;
        [[nodiscard]] static auto Default();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) OnlineIdSystemAuthenticatorForUser : Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser
    {
        OnlineIdSystemAuthenticatorForUser(std::nullptr_t) noexcept {}
        OnlineIdSystemAuthenticatorForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OnlineIdSystemIdentity : Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity
    {
        OnlineIdSystemIdentity(std::nullptr_t) noexcept {}
        OnlineIdSystemIdentity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OnlineIdSystemTicketResult : Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult
    {
        OnlineIdSystemTicketResult(std::nullptr_t) noexcept {}
        OnlineIdSystemTicketResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SignOutUserOperation : Windows::Foundation::IAsyncAction
    {
        SignOutUserOperation(std::nullptr_t) noexcept {}
        SignOutUserOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserAuthenticationOperation : Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>
    {
        UserAuthenticationOperation(std::nullptr_t) noexcept {}
        UserAuthenticationOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserIdentity : Windows::Security::Authentication::OnlineId::IUserIdentity
    {
        UserIdentity(std::nullptr_t) noexcept {}
        UserIdentity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::OnlineId::IUserIdentity(ptr, take_ownership_from_abi) {}
    };
}
#endif
