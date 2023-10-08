// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_RemoteDesktop_H
#define WINRT_Windows_System_RemoteDesktop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.h"
#include "winrt/impl/Windows.System.RemoteDesktop.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics<D>::IsRemote() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::RemoteDesktop::IInteractiveSessionStatics)->get_IsRemote(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics> : produce_base<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics>
    {
        int32_t __stdcall get_IsRemote(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRemote());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::System::RemoteDesktop
{
    inline auto InteractiveSession::IsRemote()
    {
        return impl::call_factory<InteractiveSession, Windows::System::RemoteDesktop::IInteractiveSessionStatics>([&](auto&& f) { return f.IsRemote(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> : winrt::impl::hash_base<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::InteractiveSession> : winrt::impl::hash_base<winrt::Windows::System::RemoteDesktop::InteractiveSession> {};
}
#endif
