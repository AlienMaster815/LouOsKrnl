// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_I2c_Provider_1_H
#define WINRT_Windows_Devices_I2c_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider
{
    struct __declspec(empty_bases) II2cControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cControllerProvider>
    {
        II2cControllerProvider(std::nullptr_t = nullptr) noexcept {}
        II2cControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cDeviceProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cDeviceProvider>,
        impl::require<Windows::Devices::I2c::Provider::II2cDeviceProvider, Windows::Foundation::IClosable>
    {
        II2cDeviceProvider(std::nullptr_t = nullptr) noexcept {}
        II2cDeviceProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cProvider>
    {
        II2cProvider(std::nullptr_t = nullptr) noexcept {}
        II2cProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProviderI2cConnectionSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProviderI2cConnectionSettings>
    {
        IProviderI2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        IProviderI2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
