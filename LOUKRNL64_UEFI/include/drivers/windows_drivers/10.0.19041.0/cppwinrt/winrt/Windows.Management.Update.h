// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Update_H
#define WINRT_Windows_Management_Update_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Management.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Management.Update.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManager)->get_ArePreviewBuildsAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManager)->put_ArePreviewBuildsAllowed(value));
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::GetCurrentState() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManager)->GetCurrentState(&result));
        return Windows::Management::Update::PreviewBuildsState{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::SyncAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManager)->SyncAsync(&result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::GetDefault() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManagerStatics)->GetDefault(&value));
        return Windows::Management::Update::PreviewBuildsManager{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsManagerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsState<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Update::IPreviewBuildsState)->get_Properties(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Management::Update::IPreviewBuildsManager> : produce_base<D, Windows::Management::Update::IPreviewBuildsManager>
    {
        int32_t __stdcall get_ArePreviewBuildsAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ArePreviewBuildsAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ArePreviewBuildsAllowed(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArePreviewBuildsAllowed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentState(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Update::PreviewBuildsState>(this->shim().GetCurrentState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SyncAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SyncAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Management::Update::IPreviewBuildsManagerStatics> : produce_base<D, Windows::Management::Update::IPreviewBuildsManagerStatics>
    {
        int32_t __stdcall GetDefault(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Update::PreviewBuildsManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Management::Update::IPreviewBuildsState> : produce_base<D, Windows::Management::Update::IPreviewBuildsState>
    {
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Management::Update
{
    inline auto PreviewBuildsManager::GetDefault()
    {
        return impl::call_factory<PreviewBuildsManager, Windows::Management::Update::IPreviewBuildsManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto PreviewBuildsManager::IsSupported()
    {
        return impl::call_factory<PreviewBuildsManager, Windows::Management::Update::IPreviewBuildsManagerStatics>([&](auto&& f) { return f.IsSupported(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManager> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsManager> {};
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> {};
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsState> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsState> {};
    template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsManager> : winrt::impl::hash_base<winrt::Windows::Management::Update::PreviewBuildsManager> {};
    template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsState> : winrt::impl::hash_base<winrt::Windows::Management::Update::PreviewBuildsState> {};
}
#endif
