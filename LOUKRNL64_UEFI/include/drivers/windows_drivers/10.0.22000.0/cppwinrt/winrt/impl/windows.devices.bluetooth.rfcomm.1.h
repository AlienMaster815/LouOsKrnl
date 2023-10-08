// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_Rfcomm_1_H
#define WINRT_Windows_Devices_Bluetooth_Rfcomm_1_H
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm
{
    struct __declspec(empty_bases) IRfcommDeviceService :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceService>
    {
        IRfcommDeviceService(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommDeviceService2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceService2>,
        impl::require<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
    {
        IRfcommDeviceService2(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceService2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommDeviceService3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceService3>,
        impl::require<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
    {
        IRfcommDeviceService3(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceService3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommDeviceServiceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceServiceStatics>
    {
        IRfcommDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceServiceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommDeviceServiceStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceServiceStatics2>,
        impl::require<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
    {
        IRfcommDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceServiceStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommDeviceServicesResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommDeviceServicesResult>
    {
        IRfcommDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
        IRfcommDeviceServicesResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommServiceId :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommServiceId>
    {
        IRfcommServiceId(std::nullptr_t = nullptr) noexcept {}
        IRfcommServiceId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommServiceIdStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommServiceIdStatics>
    {
        IRfcommServiceIdStatics(std::nullptr_t = nullptr) noexcept {}
        IRfcommServiceIdStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommServiceProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommServiceProvider>
    {
        IRfcommServiceProvider(std::nullptr_t = nullptr) noexcept {}
        IRfcommServiceProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommServiceProvider2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommServiceProvider2>,
        impl::require<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
    {
        IRfcommServiceProvider2(std::nullptr_t = nullptr) noexcept {}
        IRfcommServiceProvider2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IRfcommServiceProvider2, IRfcommServiceProvider2>::StartAdvertising;
        using impl::consume_t<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>::StartAdvertising;
    };
    struct __declspec(empty_bases) IRfcommServiceProviderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommServiceProviderStatics>
    {
        IRfcommServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
        IRfcommServiceProviderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
