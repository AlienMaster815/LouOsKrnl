// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Spi_Provider_1_H
#define WINRT_Windows_Devices_Spi_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    struct __declspec(empty_bases) IProviderSpiConnectionSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettings>
    {
        IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProviderSpiConnectionSettingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettingsFactory>
    {
        IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerProvider>
    {
        ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiDeviceProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceProvider>,
        impl::require<Windows::Devices::Spi::Provider::ISpiDeviceProvider, Windows::Foundation::IClosable>
    {
        ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiDeviceProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiProvider>
    {
        ISpiProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
