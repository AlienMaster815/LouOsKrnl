// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Deployment_Preview_H
#define WINRT_Windows_Management_Deployment_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Management.Deployment.h"
#include "winrt/impl/Windows.Management.Deployment.Preview.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics<D>::FindInstalledApp(param::hstring const& appUninstallKey) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Deployment::Preview::IClassicAppManagerStatics)->FindInstalledApp(*(void**)(&appUninstallKey), &result));
        return Windows::Management::Deployment::Preview::InstalledClassicAppInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : produce_base<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
    {
        int32_t __stdcall FindInstalledApp(void* appUninstallKey, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>(this->shim().FindInstalledApp(*reinterpret_cast<hstring const*>(&appUninstallKey)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : produce_base<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Management::Deployment::Preview
{
    inline auto ClassicAppManager::FindInstalledApp(param::hstring const& appUninstallKey)
    {
        return impl::call_factory<ClassicAppManager, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>([&](auto&& f) { return f.FindInstalledApp(appUninstallKey); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> {};
    template<> struct hash<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> {};
    template<> struct hash<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> {};
    template<> struct hash<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> {};
}
#endif
