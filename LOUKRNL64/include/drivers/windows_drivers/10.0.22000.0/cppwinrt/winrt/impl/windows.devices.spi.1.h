// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Spi_1_H
#define WINRT_Windows_Devices_Spi_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi
{
    struct __declspec(empty_bases) ISpiBusInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiBusInfo>
    {
        ISpiBusInfo(std::nullptr_t = nullptr) noexcept {}
        ISpiBusInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiConnectionSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettings>
    {
        ISpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        ISpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiConnectionSettingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettingsFactory>
    {
        ISpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        ISpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiController :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiController>
    {
        ISpiController(std::nullptr_t = nullptr) noexcept {}
        ISpiController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerStatics>
    {
        ISpiControllerStatics(std::nullptr_t = nullptr) noexcept {}
        ISpiControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDevice>,
        impl::require<Windows::Devices::Spi::ISpiDevice, Windows::Foundation::IClosable>
    {
        ISpiDevice(std::nullptr_t = nullptr) noexcept {}
        ISpiDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpiDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceStatics>
    {
        ISpiDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ISpiDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
