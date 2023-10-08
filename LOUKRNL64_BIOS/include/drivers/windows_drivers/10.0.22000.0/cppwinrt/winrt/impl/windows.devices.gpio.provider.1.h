// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Gpio_Provider_1_H
#define WINRT_Windows_Devices_Gpio_Provider_1_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider
{
    struct __declspec(empty_bases) IGpioControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioControllerProvider>
    {
        IGpioControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGpioPinProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProvider>
    {
        IGpioPinProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGpioPinProviderValueChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProviderValueChangedEventArgs>
    {
        IGpioPinProviderValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProviderValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGpioPinProviderValueChangedEventArgsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProviderValueChangedEventArgsFactory>
    {
        IGpioPinProviderValueChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProviderValueChangedEventArgsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGpioProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioProvider>
    {
        IGpioProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
