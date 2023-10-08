// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Core_H
#define WINRT_Windows_Management_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Management.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Management.Core.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Core_IApplicationDataManagerStatics<D>::CreateForPackageFamily(param::hstring const& packageFamilyName) const
    {
        void* applicationData{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Management::Core::IApplicationDataManagerStatics)->CreateForPackageFamily(*(void**)(&packageFamilyName), &applicationData));
        return Windows::Storage::ApplicationData{ applicationData, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Management::Core::IApplicationDataManager> : produce_base<D, Windows::Management::Core::IApplicationDataManager>
    {
    };
    template <typename D>
    struct produce<D, Windows::Management::Core::IApplicationDataManagerStatics> : produce_base<D, Windows::Management::Core::IApplicationDataManagerStatics>
    {
        int32_t __stdcall CreateForPackageFamily(void* packageFamilyName, void** applicationData) noexcept final try
        {
            clear_abi(applicationData);
            typename D::abi_guard guard(this->shim());
            *applicationData = detach_from<Windows::Storage::ApplicationData>(this->shim().CreateForPackageFamily(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Management::Core
{
    inline auto ApplicationDataManager::CreateForPackageFamily(param::hstring const& packageFamilyName)
    {
        return impl::call_factory<ApplicationDataManager, Windows::Management::Core::IApplicationDataManagerStatics>([&](auto&& f) { return f.CreateForPackageFamily(packageFamilyName); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Management::Core::IApplicationDataManager> : winrt::impl::hash_base<winrt::Windows::Management::Core::IApplicationDataManager> {};
    template<> struct hash<winrt::Windows::Management::Core::IApplicationDataManagerStatics> : winrt::impl::hash_base<winrt::Windows::Management::Core::IApplicationDataManagerStatics> {};
    template<> struct hash<winrt::Windows::Management::Core::ApplicationDataManager> : winrt::impl::hash_base<winrt::Windows::Management::Core::ApplicationDataManager> {};
}
#endif
