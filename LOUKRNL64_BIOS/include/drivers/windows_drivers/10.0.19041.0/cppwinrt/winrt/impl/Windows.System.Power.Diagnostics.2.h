// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_Diagnostics_2_H
#define WINRT_Windows_System_Power_Diagnostics_2_H
#include "winrt/impl/Windows.System.Power.Diagnostics.1.h"
namespace winrt::Windows::System::Power::Diagnostics
{
    struct BackgroundEnergyDiagnostics
    {
        BackgroundEnergyDiagnostics() = delete;
        [[nodiscard]] static auto DeviceSpecificConversionFactor();
        static auto ComputeTotalEnergyUsage();
        static auto ResetTotalEnergyUsage();
    };
    struct ForegroundEnergyDiagnostics
    {
        ForegroundEnergyDiagnostics() = delete;
        [[nodiscard]] static auto DeviceSpecificConversionFactor();
        static auto ComputeTotalEnergyUsage();
        static auto ResetTotalEnergyUsage();
    };
}
#endif
