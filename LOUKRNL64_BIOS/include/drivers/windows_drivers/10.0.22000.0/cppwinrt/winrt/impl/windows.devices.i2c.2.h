// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_I2c_2_H
#define WINRT_Windows_Devices_I2c_2_H
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.I2c.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::I2c
{
    struct I2cTransferResult
    {
        Windows::Devices::I2c::I2cTransferStatus Status;
        uint32_t BytesTransferred;
    };
    inline bool operator==(I2cTransferResult const& left, I2cTransferResult const& right) noexcept
    {
        return left.Status == right.Status && left.BytesTransferred == right.BytesTransferred;
    }
    inline bool operator!=(I2cTransferResult const& left, I2cTransferResult const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) I2cConnectionSettings : Windows::Devices::I2c::II2cConnectionSettings
    {
        I2cConnectionSettings(std::nullptr_t) noexcept {}
        I2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::I2c::II2cConnectionSettings(ptr, take_ownership_from_abi) {}
        explicit I2cConnectionSettings(int32_t slaveAddress);
    };
    struct __declspec(empty_bases) I2cController : Windows::Devices::I2c::II2cController
    {
        I2cController(std::nullptr_t) noexcept {}
        I2cController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::I2c::II2cController(ptr, take_ownership_from_abi) {}
        static auto GetControllersAsync(Windows::Devices::I2c::Provider::II2cProvider const& provider);
        static auto GetDefaultAsync();
    };
    struct __declspec(empty_bases) I2cDevice : Windows::Devices::I2c::II2cDevice
    {
        I2cDevice(std::nullptr_t) noexcept {}
        I2cDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::I2c::II2cDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto GetDeviceSelector(param::hstring const& friendlyName);
        static auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::I2c::I2cConnectionSettings const& settings);
    };
}
#endif
