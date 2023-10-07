// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_Diagnostics_1_H
#define WINRT_Windows_System_Power_Diagnostics_1_H
#include "winrt/impl/Windows.System.Power.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics
{
    struct __declspec(empty_bases) IBackgroundEnergyDiagnosticsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
    {
        IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IForegroundEnergyDiagnosticsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForegroundEnergyDiagnosticsStatics>
    {
        IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IForegroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
