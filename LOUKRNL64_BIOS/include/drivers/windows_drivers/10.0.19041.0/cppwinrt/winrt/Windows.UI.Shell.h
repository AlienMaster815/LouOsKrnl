// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_H
#define WINRT_Windows_UI_Shell_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.StartScreen.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Shell_IAdaptiveCard<D>::ToJson() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IAdaptiveCard)->ToJson(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>::CreateAdaptiveCardFromJson(param::hstring const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IAdaptiveCardBuilderStatics)->CreateAdaptiveCardFromJson(*(void**)(&value), &result));
        return Windows::UI::Shell::IAdaptiveCard{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::Register(Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const
    {
        winrt::guid result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->Register(static_cast<int32_t>(kind), *(void**)(&displayName), *(void**)(&detailsUri), registerPerUser, put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::Unregister(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->Unregister(static_cast<int32_t>(kind), impl::bind_in(guidRegistration)));
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::UpdateState(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, Windows::UI::Shell::SecurityAppState const& state, Windows::UI::Shell::SecurityAppSubstatus const& substatus, Windows::Foundation::Uri const& detailsUri) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->UpdateState(static_cast<int32_t>(kind), impl::bind_in(guidRegistration), static_cast<int32_t>(state), static_cast<int32_t>(substatus), *(void**)(&detailsUri)));
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsPinningAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsPinningAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsCurrentAppPinnedAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->IsCurrentAppPinnedAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->IsAppListEntryPinnedAsync(*(void**)(&appListEntry), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinCurrentAppAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinCurrentAppAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinAppListEntryAsync(*(void**)(&appListEntry), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::IsSecondaryTilePinnedAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->IsSecondaryTilePinnedAsync(*(void**)(&tileId), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::RequestPinSecondaryTileAsync(Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->RequestPinSecondaryTileAsync(*(void**)(&secondaryTile), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::TryUnpinSecondaryTileAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->TryUnpinSecondaryTileAsync(*(void**)(&tileId), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManagerStatics)->GetDefault(&result));
        return Windows::UI::Shell::TaskbarManager{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::UI::Shell::IAdaptiveCard> : produce_base<D, Windows::UI::Shell::IAdaptiveCard>
    {
        int32_t __stdcall ToJson(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics> : produce_base<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        int32_t __stdcall CreateAdaptiveCardFromJson(void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::IAdaptiveCard>(this->shim().CreateAdaptiveCardFromJson(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ISecurityAppManager> : produce_base<D, Windows::UI::Shell::ISecurityAppManager>
    {
        int32_t __stdcall Register(int32_t kind, void* displayName, void* detailsUri, bool registerPerUser, winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().Register(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<Windows::Foundation::Uri const*>(&detailsUri), registerPerUser));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Unregister(int32_t kind, winrt::guid guidRegistration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateState(int32_t kind, winrt::guid guidRegistration, int32_t state, int32_t substatus, void* detailsUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateState(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration), *reinterpret_cast<Windows::UI::Shell::SecurityAppState const*>(&state), *reinterpret_cast<Windows::UI::Shell::SecurityAppSubstatus const*>(&substatus), *reinterpret_cast<Windows::Foundation::Uri const*>(&detailsUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManager> : produce_base<D, Windows::UI::Shell::ITaskbarManager>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPinningAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPinningAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCurrentAppPinnedAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsCurrentAppPinnedAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsAppListEntryPinnedAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsAppListEntryPinnedAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinCurrentAppAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinCurrentAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinAppListEntryAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManager2> : produce_base<D, Windows::UI::Shell::ITaskbarManager2>
    {
        int32_t __stdcall IsSecondaryTilePinnedAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsSecondaryTilePinnedAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinSecondaryTileAsync(void* secondaryTile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinSecondaryTileAsync(*reinterpret_cast<Windows::UI::StartScreen::SecondaryTile const*>(&secondaryTile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUnpinSecondaryTileAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUnpinSecondaryTileAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManagerStatics> : produce_base<D, Windows::UI::Shell::ITaskbarManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::TaskbarManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Shell
{
    inline auto AdaptiveCardBuilder::CreateAdaptiveCardFromJson(param::hstring const& value)
    {
        return impl::call_factory<AdaptiveCardBuilder, Windows::UI::Shell::IAdaptiveCardBuilderStatics>([&](auto&& f) { return f.CreateAdaptiveCardFromJson(value); });
    }
    inline SecurityAppManager::SecurityAppManager() :
        SecurityAppManager(impl::call_factory<SecurityAppManager>([](auto&& f) { return f.template ActivateInstance<SecurityAppManager>(); }))
    {
    }
    inline auto TaskbarManager::GetDefault()
    {
        return impl::call_factory<TaskbarManager, Windows::UI::Shell::ITaskbarManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCard> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCard> {};
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::ISecurityAppManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ISecurityAppManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager2> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManager2> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManagerStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::AdaptiveCardBuilder> : winrt::impl::hash_base<winrt::Windows::UI::Shell::AdaptiveCardBuilder> {};
    template<> struct hash<winrt::Windows::UI::Shell::SecurityAppManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::SecurityAppManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::TaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::TaskbarManager> {};
}
#endif
