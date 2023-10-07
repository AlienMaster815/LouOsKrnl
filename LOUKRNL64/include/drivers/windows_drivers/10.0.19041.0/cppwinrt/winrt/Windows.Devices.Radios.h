// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Radios_H
#define WINRT_Windows_Devices_Radios_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Devices.Radios.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::SetStateAsync(Windows::Devices::Radios::RadioState const& value) const
    {
        void* retval{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->SetStateAsync(static_cast<int32_t>(value), &retval));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>{ retval, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->add_StateChanged(*(void**)(&handler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Devices_Radios_IRadio<D>::StateChanged_revoker consume_Windows_Devices_Radios_IRadio<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::StateChanged(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->remove_StateChanged(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::State() const
    {
        Windows::Devices::Radios::RadioState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->get_State(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadio<D>::Kind() const
    {
        Windows::Devices::Radios::RadioKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadio)->get_Kind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadioStatics<D>::GetRadiosAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadioStatics)->GetRadiosAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadioStatics<D>::GetDeviceSelector() const
    {
        void* deviceSelector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadioStatics)->GetDeviceSelector(&deviceSelector));
        return hstring{ deviceSelector, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadioStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadioStatics)->FromIdAsync(*(void**)(&deviceId), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Radios_IRadioStatics<D>::RequestAccessAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Radios::IRadioStatics)->RequestAccessAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::Radios::IRadio> : produce_base<D, Windows::Devices::Radios::IRadio>
    {
        int32_t __stdcall SetStateAsync(int32_t value, void** retval) noexcept final try
        {
            clear_abi(retval);
            typename D::abi_guard guard(this->shim());
            *retval = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>>(this->shim().SetStateAsync(*reinterpret_cast<Windows::Devices::Radios::RadioState const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Radios::RadioState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Radios::RadioKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Radios::IRadioStatics> : produce_base<D, Windows::Devices::Radios::IRadioStatics>
    {
        int32_t __stdcall GetRadiosAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>>>(this->shim().GetRadiosAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelector(void** deviceSelector) noexcept final try
        {
            clear_abi(deviceSelector);
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_from<hstring>(this->shim().GetDeviceSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* deviceId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Radios
{
    inline auto Radio::GetRadiosAsync()
    {
        return impl::call_factory<Radio, Windows::Devices::Radios::IRadioStatics>([&](auto&& f) { return f.GetRadiosAsync(); });
    }
    inline auto Radio::GetDeviceSelector()
    {
        return impl::call_factory<Radio, Windows::Devices::Radios::IRadioStatics>([&](auto&& f) { return f.GetDeviceSelector(); });
    }
    inline auto Radio::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<Radio, Windows::Devices::Radios::IRadioStatics>([&](auto&& f) { return f.FromIdAsync(deviceId); });
    }
    inline auto Radio::RequestAccessAsync()
    {
        return impl::call_factory<Radio, Windows::Devices::Radios::IRadioStatics>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Radios::IRadio> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::IRadio> {};
    template<> struct hash<winrt::Windows::Devices::Radios::IRadioStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::IRadioStatics> {};
    template<> struct hash<winrt::Windows::Devices::Radios::Radio> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::Radio> {};
}
#endif
