// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Wallet_2_H
#define WINRT_Windows_ApplicationModel_Wallet_2_H
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet
{
    struct __declspec(empty_bases) WalletBarcode : Windows::ApplicationModel::Wallet::IWalletBarcode
    {
        WalletBarcode(std::nullptr_t) noexcept {}
        WalletBarcode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletBarcode(ptr, take_ownership_from_abi) {}
        WalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value);
        explicit WalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage);
    };
    struct __declspec(empty_bases) WalletItem : Windows::ApplicationModel::Wallet::IWalletItem
    {
        WalletItem(std::nullptr_t) noexcept {}
        WalletItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletItem(ptr, take_ownership_from_abi) {}
        WalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName);
    };
    struct __declspec(empty_bases) WalletItemCustomProperty : Windows::ApplicationModel::Wallet::IWalletItemCustomProperty
    {
        WalletItemCustomProperty(std::nullptr_t) noexcept {}
        WalletItemCustomProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletItemCustomProperty(ptr, take_ownership_from_abi) {}
        WalletItemCustomProperty(param::hstring const& name, param::hstring const& value);
    };
    struct __declspec(empty_bases) WalletItemStore : Windows::ApplicationModel::Wallet::IWalletItemStore
    {
        WalletItemStore(std::nullptr_t) noexcept {}
        WalletItemStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletItemStore(ptr, take_ownership_from_abi) {}
    };
    struct WalletManager
    {
        WalletManager() = delete;
        static auto RequestStoreAsync();
    };
    struct __declspec(empty_bases) WalletRelevantLocation : Windows::ApplicationModel::Wallet::IWalletRelevantLocation
    {
        WalletRelevantLocation(std::nullptr_t) noexcept {}
        WalletRelevantLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletRelevantLocation(ptr, take_ownership_from_abi) {}
        WalletRelevantLocation();
    };
    struct __declspec(empty_bases) WalletTransaction : Windows::ApplicationModel::Wallet::IWalletTransaction
    {
        WalletTransaction(std::nullptr_t) noexcept {}
        WalletTransaction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletTransaction(ptr, take_ownership_from_abi) {}
        WalletTransaction();
    };
    struct __declspec(empty_bases) WalletVerb : Windows::ApplicationModel::Wallet::IWalletVerb
    {
        WalletVerb(std::nullptr_t) noexcept {}
        WalletVerb(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::IWalletVerb(ptr, take_ownership_from_abi) {}
        explicit WalletVerb(param::hstring const& name);
    };
}
#endif
