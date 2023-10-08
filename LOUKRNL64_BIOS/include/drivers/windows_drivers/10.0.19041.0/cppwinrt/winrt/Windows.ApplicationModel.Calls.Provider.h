// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Calls_Provider_H
#define WINRT_Windows_ApplicationModel_Calls_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.Calls.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Provider.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Category() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_Category(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Category(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_Category(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::CategoryDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_CategoryDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::CategoryDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_CategoryDescription(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Location() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->get_Location(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>::Location(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin)->put_Location(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>::DisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2)->put_DisplayName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>::DisplayPicture() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3)->get_DisplayPicture(&value));
        return Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>::DisplayPicture(Windows::Storage::StorageFile const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3)->put_DisplayPicture(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::IsCurrentAppActiveCallOriginApp() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->get_IsCurrentAppActiveCallOriginApp(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::ShowPhoneCallOriginSettingsUI() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->ShowPhoneCallOriginSettingsUI());
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>::SetCallOrigin(winrt::guid const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics)->SetCallOrigin(impl::bind_in(requestId), *(void**)(&callOrigin)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2<D>::RequestSetAsActiveCallOriginAppAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2)->RequestSetAsActiveCallOriginAppAsync(&result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics3<D>::IsSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3)->get_IsSupported(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        int32_t __stdcall get_Category(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Category());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Category(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Category(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CategoryDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CategoryDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CategoryDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CategoryDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Location(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Location());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Location(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        int32_t __stdcall get_DisplayPicture(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().DisplayPicture());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayPicture(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayPicture(*reinterpret_cast<Windows::Storage::StorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        int32_t __stdcall get_IsCurrentAppActiveCallOriginApp(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCurrentAppActiveCallOriginApp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowPhoneCallOriginSettingsUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowPhoneCallOriginSettingsUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetCallOrigin(winrt::guid requestId, void* callOrigin) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCallOrigin(*reinterpret_cast<winrt::guid const*>(&requestId), *reinterpret_cast<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const*>(&callOrigin));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
    {
        int32_t __stdcall RequestSetAsActiveCallOriginAppAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestSetAsActiveCallOriginAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3> : produce_base<D, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Calls::Provider
{
    inline PhoneCallOrigin::PhoneCallOrigin() :
        PhoneCallOrigin(impl::call_factory<PhoneCallOrigin>([](auto&& f) { return f.template ActivateInstance<PhoneCallOrigin>(); }))
    {
    }
    inline auto PhoneCallOriginManager::IsCurrentAppActiveCallOriginApp()
    {
        return impl::call_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>([&](auto&& f) { return f.IsCurrentAppActiveCallOriginApp(); });
    }
    inline auto PhoneCallOriginManager::ShowPhoneCallOriginSettingsUI()
    {
        impl::call_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>([&](auto&& f) { return f.ShowPhoneCallOriginSettingsUI(); });
    }
    inline auto PhoneCallOriginManager::SetCallOrigin(winrt::guid const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin)
    {
        impl::call_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>([&](auto&& f) { return f.SetCallOrigin(requestId, callOrigin); });
    }
    inline auto PhoneCallOriginManager::RequestSetAsActiveCallOriginAppAsync()
    {
        return impl::call_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>([&](auto&& f) { return f.RequestSetAsActiveCallOriginAppAsync(); });
    }
    inline auto PhoneCallOriginManager::IsSupported()
    {
        return impl::call_factory<PhoneCallOriginManager, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>([&](auto&& f) { return f.IsSupported(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> {};
}
#endif
