// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Casting_1_H
#define WINRT_Windows_Media_Casting_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Casting.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Casting
{
    struct __declspec(empty_bases) ICastingConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingConnection>,
        impl::require<Windows::Media::Casting::ICastingConnection, Windows::Foundation::IClosable>
    {
        ICastingConnection(std::nullptr_t = nullptr) noexcept {}
        ICastingConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingConnectionErrorOccurredEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingConnectionErrorOccurredEventArgs>
    {
        ICastingConnectionErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICastingConnectionErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevice>
    {
        ICastingDevice(std::nullptr_t = nullptr) noexcept {}
        ICastingDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingDevicePicker :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevicePicker>
    {
        ICastingDevicePicker(std::nullptr_t = nullptr) noexcept {}
        ICastingDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingDevicePickerFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevicePickerFilter>
    {
        ICastingDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
        ICastingDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingDeviceSelectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDeviceSelectedEventArgs>
    {
        ICastingDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICastingDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDeviceStatics>
    {
        ICastingDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ICastingDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICastingSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICastingSource>
    {
        ICastingSource(std::nullptr_t = nullptr) noexcept {}
        ICastingSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
