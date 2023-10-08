// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_I2c_1_H
#define WINRT_Windows_Devices_I2c_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.I2c.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::I2c
{
    struct __declspec(empty_bases) II2cConnectionSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cConnectionSettings>
    {
        II2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        II2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cConnectionSettingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cConnectionSettingsFactory>
    {
        II2cConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        II2cConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cController :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cController>
    {
        II2cController(std::nullptr_t = nullptr) noexcept {}
        II2cController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cControllerStatics>
    {
        II2cControllerStatics(std::nullptr_t = nullptr) noexcept {}
        II2cControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cDevice>,
        impl::require<Windows::Devices::I2c::II2cDevice, Windows::Foundation::IClosable>
    {
        II2cDevice(std::nullptr_t = nullptr) noexcept {}
        II2cDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) II2cDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<II2cDeviceStatics>
    {
        II2cDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        II2cDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
