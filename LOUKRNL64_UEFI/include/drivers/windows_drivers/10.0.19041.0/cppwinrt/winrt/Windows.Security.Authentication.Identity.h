// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_H
#define WINRT_Windows_Security_Authentication_Identity_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_TenantId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::TenantName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_TenantName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::Subject() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_Subject(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_KeyId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>::KeyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo)->get_KeyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager<D>::GetRegistrationsAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager)->GetRegistrationsAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics)->get_Current(&value));
        return Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        int32_t __stdcall get_TenantId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TenantId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TenantName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TenantName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Subject(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        int32_t __stdcall GetRegistrationsAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>>>(this->shim().GetRegistrationsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> : produce_base<D, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Authentication::Identity
{
    inline auto EnterpriseKeyCredentialRegistrationManager::Current()
    {
        return impl::call_factory<EnterpriseKeyCredentialRegistrationManager, Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>([&](auto&& f) { return f.Current(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> {};
}
#endif
