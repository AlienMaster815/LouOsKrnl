// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_Diagnostics_H
#define WINRT_Windows_System_Power_Diagnostics_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.Power.h"
#include "winrt/impl/Windows.System.Power.Diagnostics.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->get_DeviceSpecificConversionFactor(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->ComputeTotalEnergyUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics)->ResetTotalEnergyUsage());
    }
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->get_DeviceSpecificConversionFactor(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->ComputeTotalEnergyUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics)->ResetTotalEnergyUsage());
    }
    template <typename D>
    struct produce<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>
    {
        int32_t __stdcall get_DeviceSpecificConversionFactor(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DeviceSpecificConversionFactor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ComputeTotalEnergyUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ComputeTotalEnergyUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetTotalEnergyUsage() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTotalEnergyUsage();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>
    {
        int32_t __stdcall get_DeviceSpecificConversionFactor(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DeviceSpecificConversionFactor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ComputeTotalEnergyUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ComputeTotalEnergyUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetTotalEnergyUsage() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTotalEnergyUsage();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::System::Power::Diagnostics
{
    inline auto BackgroundEnergyDiagnostics::DeviceSpecificConversionFactor()
    {
        return impl::call_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.DeviceSpecificConversionFactor(); });
    }
    inline auto BackgroundEnergyDiagnostics::ComputeTotalEnergyUsage()
    {
        return impl::call_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.ComputeTotalEnergyUsage(); });
    }
    inline auto BackgroundEnergyDiagnostics::ResetTotalEnergyUsage()
    {
        impl::call_factory<BackgroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.ResetTotalEnergyUsage(); });
    }
    inline auto ForegroundEnergyDiagnostics::DeviceSpecificConversionFactor()
    {
        return impl::call_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.DeviceSpecificConversionFactor(); });
    }
    inline auto ForegroundEnergyDiagnostics::ComputeTotalEnergyUsage()
    {
        return impl::call_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.ComputeTotalEnergyUsage(); });
    }
    inline auto ForegroundEnergyDiagnostics::ResetTotalEnergyUsage()
    {
        impl::call_factory<ForegroundEnergyDiagnostics, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>([&](auto&& f) { return f.ResetTotalEnergyUsage(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> : winrt::impl::hash_base<winrt::Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> {};
    template<> struct hash<winrt::Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> : winrt::impl::hash_base<winrt::Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> {};
    template<> struct hash<winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics> : winrt::impl::hash_base<winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics> {};
    template<> struct hash<winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics> : winrt::impl::hash_base<winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics> {};
}
#endif
