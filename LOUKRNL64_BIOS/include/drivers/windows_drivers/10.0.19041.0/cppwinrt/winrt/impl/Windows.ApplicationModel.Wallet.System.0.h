// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Wallet_System_0_H
#define WINRT_Windows_ApplicationModel_Wallet_System_0_H
namespace winrt::Windows::ApplicationModel::Wallet
{
    struct WalletItem;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::ApplicationModel::Wallet::System
{
    enum class WalletItemAppAssociation : int32_t
    {
        None = 0,
        AppInstalled = 1,
        AppNotInstalled = 2,
    };
    struct IWalletItemSystemStore;
    struct IWalletItemSystemStore2;
    struct IWalletManagerSystemStatics;
    struct WalletItemSystemStore;
    struct WalletManagerSystem;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::System::WalletManagerSystem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::WalletManagerSystem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.System.WalletItemAppAssociation" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        static constexpr guid value{ 0x522E2BFF,0x96A2,0x4A17,{ 0x8D,0x19,0xFE,0x1D,0x9F,0x83,0x75,0x61 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        static constexpr guid value{ 0xF98D3A4E,0xBE00,0x4FDD,{ 0x97,0x34,0x6C,0x11,0x3C,0x1A,0xC1,0xCB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        static constexpr guid value{ 0xBEE8EB89,0x2634,0x4B9A,{ 0x8B,0x23,0xEE,0x89,0x03,0xC9,0x1F,0xE0 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>
    {
        using type = Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore;
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppStatusForItem(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall LaunchAppForItemAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ItemsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore
    {
        auto GetItemsAsync() const;
        auto DeleteAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
        auto ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const;
        auto GetAppStatusForItem(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
        auto LaunchAppForItemAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2
    {
        auto ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const;
        using ItemsChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2, &impl::abi_t<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>::remove_ItemsChanged>;
        ItemsChanged_revoker ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const;
        auto ItemsChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics
    {
        auto RequestStoreAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics<D>;
    };
}
#endif
