// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Scanners_2_H
#define WINRT_Windows_Devices_Scanners_2_H
#include "winrt/impl/Windows.Devices.Scanners.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Scanners
{
    struct ImageScannerResolution
    {
        float DpiX;
        float DpiY;
    };
    inline bool operator==(ImageScannerResolution const& left, ImageScannerResolution const& right) noexcept
    {
        return left.DpiX == right.DpiX && left.DpiY == right.DpiY;
    }
    inline bool operator!=(ImageScannerResolution const& left, ImageScannerResolution const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ImageScanner : Windows::Devices::Scanners::IImageScanner
    {
        ImageScanner(std::nullptr_t) noexcept {}
        ImageScanner(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScanner(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) ImageScannerAutoConfiguration : Windows::Devices::Scanners::IImageScannerFormatConfiguration
    {
        ImageScannerAutoConfiguration(std::nullptr_t) noexcept {}
        ImageScannerAutoConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScannerFormatConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageScannerFeederConfiguration : Windows::Devices::Scanners::IImageScannerFormatConfiguration,
        impl::require<ImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration, Windows::Devices::Scanners::IImageScannerFeederConfiguration>
    {
        ImageScannerFeederConfiguration(std::nullptr_t) noexcept {}
        ImageScannerFeederConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScannerFormatConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageScannerFlatbedConfiguration : Windows::Devices::Scanners::IImageScannerFormatConfiguration,
        impl::require<ImageScannerFlatbedConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
    {
        ImageScannerFlatbedConfiguration(std::nullptr_t) noexcept {}
        ImageScannerFlatbedConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScannerFormatConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageScannerPreviewResult : Windows::Devices::Scanners::IImageScannerPreviewResult
    {
        ImageScannerPreviewResult(std::nullptr_t) noexcept {}
        ImageScannerPreviewResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScannerPreviewResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageScannerScanResult : Windows::Devices::Scanners::IImageScannerScanResult
    {
        ImageScannerScanResult(std::nullptr_t) noexcept {}
        ImageScannerScanResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Scanners::IImageScannerScanResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
