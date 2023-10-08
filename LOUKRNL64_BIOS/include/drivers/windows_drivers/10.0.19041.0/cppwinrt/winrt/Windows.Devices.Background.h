// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Background_H
#define WINRT_Windows_Devices_Background_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Background.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Background_IDeviceServicingDetails<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Background_IDeviceServicingDetails<D>::Arguments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_Arguments(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Background_IDeviceServicingDetails<D>::ExpectedDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Background::IDeviceServicingDetails)->get_ExpectedDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Background_IDeviceUseDetails<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Background::IDeviceUseDetails)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Background_IDeviceUseDetails<D>::Arguments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Background::IDeviceUseDetails)->get_Arguments(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::Background::IDeviceServicingDetails> : produce_base<D, Windows::Devices::Background::IDeviceServicingDetails>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Arguments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExpectedDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().ExpectedDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Background::IDeviceUseDetails> : produce_base<D, Windows::Devices::Background::IDeviceUseDetails>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Arguments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Background
{
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Background::IDeviceServicingDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Background::IDeviceServicingDetails> {};
    template<> struct hash<winrt::Windows::Devices::Background::IDeviceUseDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Background::IDeviceUseDetails> {};
    template<> struct hash<winrt::Windows::Devices::Background::DeviceServicingDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Background::DeviceServicingDetails> {};
    template<> struct hash<winrt::Windows::Devices::Background::DeviceUseDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Background::DeviceUseDetails> {};
}
#endif
