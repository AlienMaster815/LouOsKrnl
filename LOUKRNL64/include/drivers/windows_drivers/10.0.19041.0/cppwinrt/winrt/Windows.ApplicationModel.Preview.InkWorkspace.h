// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager<D>::SetThumbnailAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager)->SetThumbnailAsync(*(void**)(&bitmap), &action));
        return Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics<D>::GetForCurrentApp() const
    {
        void* current{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics)->GetForCurrentApp(&current));
        return Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager{ current, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> : produce_base<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
    {
        int32_t __stdcall SetThumbnailAsync(void* bitmap, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetThumbnailAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> : produce_base<D, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
    {
        int32_t __stdcall GetForCurrentApp(void** current) noexcept final try
        {
            clear_abi(current);
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>(this->shim().GetForCurrentApp());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    inline auto InkWorkspaceHostedAppManager::GetForCurrentApp()
    {
        return impl::call_factory<InkWorkspaceHostedAppManager, Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>([&](auto&& f) { return f.GetForCurrentApp(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> {};
}
#endif
