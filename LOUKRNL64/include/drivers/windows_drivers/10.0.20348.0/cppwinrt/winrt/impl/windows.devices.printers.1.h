// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_1_H
#define WINRT_Windows_Devices_Printers_1_H
#include "winrt/impl/Windows.Devices.Printers.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct __declspec(empty_bases) IPrint3DDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DDevice>
    {
        IPrint3DDevice(std::nullptr_t = nullptr) noexcept {}
        IPrint3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrint3DDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DDeviceStatics>
    {
        IPrint3DDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IPrint3DDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintSchema :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintSchema>
    {
        IPrintSchema(std::nullptr_t = nullptr) noexcept {}
        IPrintSchema(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
