// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Desktop_H
#define WINRT_Windows_UI_Composition_Desktop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Composition.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Composition.Desktop.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Composition_Desktop_IDesktopWindowTarget<D>::IsTopmost() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Desktop::IDesktopWindowTarget)->get_IsTopmost(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::UI::Composition::Desktop::IDesktopWindowTarget> : produce_base<D, Windows::UI::Composition::Desktop::IDesktopWindowTarget>
    {
        int32_t __stdcall get_IsTopmost(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTopmost());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Composition::Desktop
{
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> {};
    template<> struct hash<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> {};
}
#endif
