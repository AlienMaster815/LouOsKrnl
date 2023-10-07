// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_2_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    struct __declspec(empty_bases) UserDataAccount : Windows::ApplicationModel::UserDataAccounts::IUserDataAccount,
        impl::require<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        UserDataAccount(std::nullptr_t) noexcept {}
        UserDataAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserDataAccounts::IUserDataAccount(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::UserDataAccounts::IUserDataAccount::Icon;
        using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>::Icon;
        using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>::IsProtectedUnderLock;
        using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>::IsProtectedUnderLock;
    };
    struct UserDataAccountManager
    {
        UserDataAccountManager() = delete;
        static auto RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType);
        static auto ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds);
        static auto ShowAccountSettingsAsync(param::hstring const& id);
        static auto ShowAccountErrorResolverAsync(param::hstring const& id);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) UserDataAccountManagerForUser : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser
    {
        UserDataAccountManagerForUser(std::nullptr_t) noexcept {}
        UserDataAccountManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserDataAccountStore : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore,
        impl::require<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        UserDataAccountStore(std::nullptr_t) noexcept {}
        UserDataAccountStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore::CreateAccountAsync;
        using impl::consume_t<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::CreateAccountAsync;
        using impl::consume_t<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>::CreateAccountAsync;
    };
    struct __declspec(empty_bases) UserDataAccountStoreChangedEventArgs : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs
    {
        UserDataAccountStoreChangedEventArgs(std::nullptr_t) noexcept {}
        UserDataAccountStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
