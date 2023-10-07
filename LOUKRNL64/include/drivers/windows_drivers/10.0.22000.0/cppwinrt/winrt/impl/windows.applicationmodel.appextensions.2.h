// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_AppExtensions_2_H
#define WINRT_Windows_ApplicationModel_AppExtensions_2_H
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct __declspec(empty_bases) AppExtension : Windows::ApplicationModel::AppExtensions::IAppExtension,
        impl::require<AppExtension, Windows::ApplicationModel::AppExtensions::IAppExtension2>
    {
        AppExtension(std::nullptr_t) noexcept {}
        AppExtension(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtension(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppExtensionCatalog : Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog
    {
        AppExtensionCatalog(std::nullptr_t) noexcept {}
        AppExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog(ptr, take_ownership_from_abi) {}
        static auto Open(param::hstring const& appExtensionName);
    };
    struct __declspec(empty_bases) AppExtensionPackageInstalledEventArgs : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs
    {
        AppExtensionPackageInstalledEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppExtensionPackageStatusChangedEventArgs : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs
    {
        AppExtensionPackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppExtensionPackageUninstallingEventArgs : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs
    {
        AppExtensionPackageUninstallingEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppExtensionPackageUpdatedEventArgs : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs
    {
        AppExtensionPackageUpdatedEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppExtensionPackageUpdatingEventArgs : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs
    {
        AppExtensionPackageUpdatingEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
