// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_2_H
#define WINRT_Windows_Devices_Printers_2_H
#include "winrt/impl/Windows.Devices.Printers.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct __declspec(empty_bases) Print3DDevice : Windows::Devices::Printers::IPrint3DDevice
    {
        Print3DDevice(std::nullptr_t) noexcept {}
        Print3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IPrint3DDevice(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) PrintSchema : Windows::Devices::Printers::IPrintSchema
    {
        PrintSchema(std::nullptr_t) noexcept {}
        PrintSchema(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IPrintSchema(ptr, take_ownership_from_abi) {}
    };
}
#endif
