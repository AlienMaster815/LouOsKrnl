// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Maps_OfflineMaps_1_H
#define WINRT_Windows_Services_Maps_OfflineMaps_1_H
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.0.h"
WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps
{
    struct __declspec(empty_bases) IOfflineMapPackage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOfflineMapPackage>
    {
        IOfflineMapPackage(std::nullptr_t = nullptr) noexcept {}
        IOfflineMapPackage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOfflineMapPackageQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOfflineMapPackageQueryResult>
    {
        IOfflineMapPackageQueryResult(std::nullptr_t = nullptr) noexcept {}
        IOfflineMapPackageQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOfflineMapPackageStartDownloadResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOfflineMapPackageStartDownloadResult>
    {
        IOfflineMapPackageStartDownloadResult(std::nullptr_t = nullptr) noexcept {}
        IOfflineMapPackageStartDownloadResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOfflineMapPackageStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOfflineMapPackageStatics>
    {
        IOfflineMapPackageStatics(std::nullptr_t = nullptr) noexcept {}
        IOfflineMapPackageStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
