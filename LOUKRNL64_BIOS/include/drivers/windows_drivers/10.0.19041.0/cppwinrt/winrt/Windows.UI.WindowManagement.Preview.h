// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WindowManagement_Preview_H
#define WINRT_Windows_UI_WindowManagement_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.WindowManagement.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.WindowManagement.2.h"
#include "winrt/impl/Windows.UI.WindowManagement.Preview.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics<D>::SetPreferredMinSize(Windows::UI::WindowManagement::AppWindow const& window, Windows::Foundation::Size const& preferredFrameMinSize) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics)->SetPreferredMinSize(*(void**)(&window), impl::bind_in(preferredFrameMinSize)));
    }
    template <typename D>
    struct produce<D, Windows::UI::WindowManagement::Preview::IWindowManagementPreview> : produce_base<D, Windows::UI::WindowManagement::Preview::IWindowManagementPreview>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics> : produce_base<D, Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>
    {
        int32_t __stdcall SetPreferredMinSize(void* window, Windows::Foundation::Size preferredFrameMinSize) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreferredMinSize(*reinterpret_cast<Windows::UI::WindowManagement::AppWindow const*>(&window), *reinterpret_cast<Windows::Foundation::Size const*>(&preferredFrameMinSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::WindowManagement::Preview
{
    inline auto WindowManagementPreview::SetPreferredMinSize(Windows::UI::WindowManagement::AppWindow const& window, Windows::Foundation::Size const& preferredFrameMinSize)
    {
        impl::call_factory<WindowManagementPreview, Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>([&](auto&& f) { return f.SetPreferredMinSize(window, preferredFrameMinSize); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreview> : winrt::impl::hash_base<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreview> {};
    template<> struct hash<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics> : winrt::impl::hash_base<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics> {};
    template<> struct hash<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview> : winrt::impl::hash_base<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview> {};
}
#endif
