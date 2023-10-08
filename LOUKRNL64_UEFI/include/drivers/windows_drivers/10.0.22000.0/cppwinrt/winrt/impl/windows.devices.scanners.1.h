// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Scanners_1_H
#define WINRT_Windows_Devices_Scanners_1_H
#include "winrt/impl/Windows.Devices.Scanners.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Scanners
{
    struct __declspec(empty_bases) IImageScanner :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScanner>
    {
        IImageScanner(std::nullptr_t = nullptr) noexcept {}
        IImageScanner(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerFeederConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerFeederConfiguration>,
        impl::require<Windows::Devices::Scanners::IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
    {
        IImageScannerFeederConfiguration(std::nullptr_t = nullptr) noexcept {}
        IImageScannerFeederConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerFormatConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerFormatConfiguration>
    {
        IImageScannerFormatConfiguration(std::nullptr_t = nullptr) noexcept {}
        IImageScannerFormatConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerPreviewResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerPreviewResult>
    {
        IImageScannerPreviewResult(std::nullptr_t = nullptr) noexcept {}
        IImageScannerPreviewResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerScanResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerScanResult>
    {
        IImageScannerScanResult(std::nullptr_t = nullptr) noexcept {}
        IImageScannerScanResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerSourceConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerSourceConfiguration>,
        impl::require<Windows::Devices::Scanners::IImageScannerSourceConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration>
    {
        IImageScannerSourceConfiguration(std::nullptr_t = nullptr) noexcept {}
        IImageScannerSourceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageScannerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageScannerStatics>
    {
        IImageScannerStatics(std::nullptr_t = nullptr) noexcept {}
        IImageScannerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
