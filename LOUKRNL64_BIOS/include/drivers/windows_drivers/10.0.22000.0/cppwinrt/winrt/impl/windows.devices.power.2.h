// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Power_2_H
#define WINRT_Windows_Devices_Power_2_H
#include "winrt/impl/Windows.Devices.Power.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) Battery : Windows::Devices::Power::IBattery
    {
        Battery(std::nullptr_t) noexcept {}
        Battery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Power::IBattery(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AggregateBattery();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) BatteryReport : Windows::Devices::Power::IBatteryReport
    {
        BatteryReport(std::nullptr_t) noexcept {}
        BatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Power::IBatteryReport(ptr, take_ownership_from_abi) {}
    };
}
#endif
