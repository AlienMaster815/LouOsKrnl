// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Wallet_System_H
#define WINRT_Windows_ApplicationModel_Wallet_System_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.ApplicationModel.Wallet.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>>) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::GetItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->GetItemsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::DeleteAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->DeleteAsync(*(void**)(&item), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem>) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->ImportItemAsync(*(void**)(&stream), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::GetAppStatusForItem(Windows::ApplicationModel::Wallet::WalletItem const& item) const
    {
        Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->GetAppStatusForItem(*(void**)(&item), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore<D>::LaunchAppForItemAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore)->LaunchAppForItemAsync(*(void**)(&item), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2)->add_ItemsChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged_revoker consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ItemsChanged_revoker>(this, ItemsChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2<D>::ItemsChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2)->remove_ItemsChanged(impl::bind_in(cookie)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>) consume_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics<D>::RequestStoreAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics)->RequestStoreAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore>
    {
        int32_t __stdcall GetItemsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Wallet::WalletItem>>>(this->shim().GetItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteAsync(void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportItemAsync(void* stream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::WalletItem>>(this->shim().ImportItemAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppStatusForItem(void* item, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation>(this->shim().GetAppStatusForItem(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchAppForItemAsync(void* item, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchAppForItemAsync(*reinterpret_cast<Windows::ApplicationModel::Wallet::WalletItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        int32_t __stdcall add_ItemsChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().ItemsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ItemsChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemsChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> : produce_base<D, Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics>
    {
        int32_t __stdcall RequestStoreAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>>(this->shim().RequestStoreAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System
{
    inline auto WalletManagerSystem::RequestStoreAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore>(*)(IWalletManagerSystemStatics const&), WalletManagerSystem, IWalletManagerSystemStatics>([](IWalletManagerSystemStatics const& f) { return f.RequestStoreAsync(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Wallet::System::WalletManagerSystem> : winrt::impl::hash_base {};
#endif
}
#endif
