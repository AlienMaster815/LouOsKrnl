// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_1_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_1_H
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    struct __declspec(empty_bases) IUserDataAccount :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount>
    {
        IUserDataAccount(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccount2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount2>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        IUserDataAccount2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccount3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount3>
    {
        IUserDataAccount3(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccount4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccount4>
    {
        IUserDataAccount4(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccount4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountManagerForUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerForUser>
    {
        IUserDataAccountManagerForUser(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerStatics>
    {
        IUserDataAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountManagerStatics2>
    {
        IUserDataAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountStore :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore>
    {
        IUserDataAccountStore(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountStore2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore2>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        IUserDataAccountStore2(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IUserDataAccountStore2, IUserDataAccountStore2>::CreateAccountAsync;
        using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    };
    struct __declspec(empty_bases) IUserDataAccountStore3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStore3>,
        impl::require<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        IUserDataAccountStore3(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStore3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IUserDataAccountStore3, IUserDataAccountStore3>::CreateAccountAsync;
        using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    };
    struct __declspec(empty_bases) IUserDataAccountStoreChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountStoreChangedEventArgs>
    {
        IUserDataAccountStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
