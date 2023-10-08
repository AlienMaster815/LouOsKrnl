// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Credentials_2_H
#define WINRT_Windows_Security_Credentials_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct __declspec(empty_bases) KeyCredential : Windows::Security::Credentials::IKeyCredential
    {
        KeyCredential(std::nullptr_t) noexcept {}
        KeyCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IKeyCredential(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyCredentialAttestationResult : Windows::Security::Credentials::IKeyCredentialAttestationResult
    {
        KeyCredentialAttestationResult(std::nullptr_t) noexcept {}
        KeyCredentialAttestationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IKeyCredentialAttestationResult(ptr, take_ownership_from_abi) {}
    };
    struct KeyCredentialManager
    {
        KeyCredentialManager() = delete;
        static auto IsSupportedAsync();
        static auto RenewAttestationAsync();
        static auto RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option);
        static auto OpenAsync(param::hstring const& name);
        static auto DeleteAsync(param::hstring const& name);
    };
    struct __declspec(empty_bases) KeyCredentialOperationResult : Windows::Security::Credentials::IKeyCredentialOperationResult
    {
        KeyCredentialOperationResult(std::nullptr_t) noexcept {}
        KeyCredentialOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IKeyCredentialOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyCredentialRetrievalResult : Windows::Security::Credentials::IKeyCredentialRetrievalResult
    {
        KeyCredentialRetrievalResult(std::nullptr_t) noexcept {}
        KeyCredentialRetrievalResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IKeyCredentialRetrievalResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PasswordCredential : Windows::Security::Credentials::IPasswordCredential
    {
        PasswordCredential(std::nullptr_t) noexcept {}
        PasswordCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IPasswordCredential(ptr, take_ownership_from_abi) {}
        PasswordCredential();
        PasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password);
    };
    struct __declspec(empty_bases) PasswordCredentialPropertyStore : Windows::Foundation::Collections::IPropertySet
    {
        PasswordCredentialPropertyStore(std::nullptr_t) noexcept {}
        PasswordCredentialPropertyStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IPropertySet(ptr, take_ownership_from_abi) {}
        PasswordCredentialPropertyStore();
    };
    struct __declspec(empty_bases) PasswordVault : Windows::Security::Credentials::IPasswordVault
    {
        PasswordVault(std::nullptr_t) noexcept {}
        PasswordVault(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IPasswordVault(ptr, take_ownership_from_abi) {}
        PasswordVault();
    };
    struct __declspec(empty_bases) WebAccount : Windows::Security::Credentials::IWebAccount,
        impl::require<WebAccount, Windows::Security::Credentials::IWebAccount2>
    {
        WebAccount(std::nullptr_t) noexcept {}
        WebAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IWebAccount(ptr, take_ownership_from_abi) {}
        WebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state);
    };
    struct __declspec(empty_bases) WebAccountProvider : Windows::Security::Credentials::IWebAccountProvider,
        impl::require<WebAccountProvider, Windows::Security::Credentials::IWebAccountProvider2, Windows::Security::Credentials::IWebAccountProvider3, Windows::Security::Credentials::IWebAccountProvider4>
    {
        WebAccountProvider(std::nullptr_t) noexcept {}
        WebAccountProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::IWebAccountProvider(ptr, take_ownership_from_abi) {}
        WebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri);
    };
}
#endif
