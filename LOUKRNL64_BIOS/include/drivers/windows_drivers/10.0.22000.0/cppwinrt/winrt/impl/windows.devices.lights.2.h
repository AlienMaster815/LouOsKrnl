// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Lights_2_H
#define WINRT_Windows_Devices_Lights_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Lights.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Lights
{
    struct __declspec(empty_bases) Lamp : Windows::Devices::Lights::ILamp
    {
        Lamp(std::nullptr_t) noexcept {}
        Lamp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::ILamp(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
    };
    struct __declspec(empty_bases) LampArray : Windows::Devices::Lights::ILampArray
    {
        LampArray(std::nullptr_t) noexcept {}
        LampArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::ILampArray(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) LampAvailabilityChangedEventArgs : Windows::Devices::Lights::ILampAvailabilityChangedEventArgs
    {
        LampAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
        LampAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::ILampAvailabilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LampInfo : Windows::Devices::Lights::ILampInfo
    {
        LampInfo(std::nullptr_t) noexcept {}
        LampInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::ILampInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
