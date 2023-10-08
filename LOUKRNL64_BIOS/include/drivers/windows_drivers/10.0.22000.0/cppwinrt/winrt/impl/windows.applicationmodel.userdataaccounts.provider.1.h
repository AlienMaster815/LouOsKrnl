// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_1_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider
{
    struct __declspec(empty_bases) IUserDataAccountPartnerAccountInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountPartnerAccountInfo>
    {
        IUserDataAccountPartnerAccountInfo(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountPartnerAccountInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderAddAccountOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderAddAccountOperation>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderAddAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderResolveErrorsOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderResolveErrorsOperation>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderResolveErrorsOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderResolveErrorsOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderSettingsOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderSettingsOperation>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderSettingsOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderSettingsOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
