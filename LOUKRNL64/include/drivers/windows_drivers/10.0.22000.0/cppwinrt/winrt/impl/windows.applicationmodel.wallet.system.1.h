// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Wallet_System_1_H
#define WINRT_Windows_ApplicationModel_Wallet_System_1_H
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System
{
    struct __declspec(empty_bases) IWalletItemSystemStore :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemSystemStore>
    {
        IWalletItemSystemStore(std::nullptr_t = nullptr) noexcept {}
        IWalletItemSystemStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWalletItemSystemStore2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWalletItemSystemStore2>
    {
        IWalletItemSystemStore2(std::nullptr_t = nullptr) noexcept {}
        IWalletItemSystemStore2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWalletManagerSystemStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWalletManagerSystemStatics>
    {
        IWalletManagerSystemStatics(std::nullptr_t = nullptr) noexcept {}
        IWalletManagerSystemStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
