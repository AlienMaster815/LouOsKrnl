// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Custom_1_H
#define WINRT_Windows_Devices_Custom_1_H
#include "winrt/impl/Windows.Devices.Custom.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Custom
{
    struct __declspec(empty_bases) ICustomDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomDevice>
    {
        ICustomDevice(std::nullptr_t = nullptr) noexcept {}
        ICustomDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICustomDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomDeviceStatics>
    {
        ICustomDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ICustomDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IIOControlCode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIOControlCode>
    {
        IIOControlCode(std::nullptr_t = nullptr) noexcept {}
        IIOControlCode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IIOControlCodeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIOControlCodeFactory>
    {
        IIOControlCodeFactory(std::nullptr_t = nullptr) noexcept {}
        IIOControlCodeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownDeviceTypesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownDeviceTypesStatics>
    {
        IKnownDeviceTypesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownDeviceTypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
