// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Workplace_H
#define WINRT_Windows_Management_Workplace_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Management.h"
#include "winrt/impl/Windows.Management.Workplace.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsBrowserAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsBrowserAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsCameraAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsCameraAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsMicrosoftAccountAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsMicrosoftAccountAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsStoreAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsStoreAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Workplace_IMdmPolicyStatics2<D>::GetMessagingSyncPolicy() const
    {
        Windows::Management::Workplace::MessagingSyncPolicy value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IMdmPolicyStatics2)->GetMessagingSyncPolicy(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Workplace_IWorkplaceSettingsStatics<D>::IsMicrosoftAccountOptional() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Workplace::IWorkplaceSettingsStatics)->get_IsMicrosoftAccountOptional(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Management::Workplace::IMdmAllowPolicyStatics> : produce_base<D, Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        int32_t __stdcall IsBrowserAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBrowserAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCameraAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCameraAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsMicrosoftAccountAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMicrosoftAccountAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsStoreAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStoreAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Management::Workplace::IMdmPolicyStatics2> : produce_base<D, Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        int32_t __stdcall GetMessagingSyncPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Workplace::MessagingSyncPolicy>(this->shim().GetMessagingSyncPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Management::Workplace::IWorkplaceSettingsStatics> : produce_base<D, Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        int32_t __stdcall get_IsMicrosoftAccountOptional(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMicrosoftAccountOptional());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Management::Workplace
{
    inline auto MdmPolicy::IsBrowserAllowed()
    {
        return impl::call_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>([&](auto&& f) { return f.IsBrowserAllowed(); });
    }
    inline auto MdmPolicy::IsCameraAllowed()
    {
        return impl::call_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>([&](auto&& f) { return f.IsCameraAllowed(); });
    }
    inline auto MdmPolicy::IsMicrosoftAccountAllowed()
    {
        return impl::call_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>([&](auto&& f) { return f.IsMicrosoftAccountAllowed(); });
    }
    inline auto MdmPolicy::IsStoreAllowed()
    {
        return impl::call_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>([&](auto&& f) { return f.IsStoreAllowed(); });
    }
    inline auto MdmPolicy::GetMessagingSyncPolicy()
    {
        return impl::call_factory<MdmPolicy, Windows::Management::Workplace::IMdmPolicyStatics2>([&](auto&& f) { return f.GetMessagingSyncPolicy(); });
    }
    inline auto WorkplaceSettings::IsMicrosoftAccountOptional()
    {
        return impl::call_factory<WorkplaceSettings, Windows::Management::Workplace::IWorkplaceSettingsStatics>([&](auto&& f) { return f.IsMicrosoftAccountOptional(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics> : winrt::impl::hash_base<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics> {};
    template<> struct hash<winrt::Windows::Management::Workplace::IMdmPolicyStatics2> : winrt::impl::hash_base<winrt::Windows::Management::Workplace::IMdmPolicyStatics2> {};
    template<> struct hash<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics> : winrt::impl::hash_base<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics> {};
    template<> struct hash<winrt::Windows::Management::Workplace::MdmPolicy> : winrt::impl::hash_base<winrt::Windows::Management::Workplace::MdmPolicy> {};
    template<> struct hash<winrt::Windows::Management::Workplace::WorkplaceSettings> : winrt::impl::hash_base<winrt::Windows::Management::Workplace::WorkplaceSettings> {};
}
#endif
