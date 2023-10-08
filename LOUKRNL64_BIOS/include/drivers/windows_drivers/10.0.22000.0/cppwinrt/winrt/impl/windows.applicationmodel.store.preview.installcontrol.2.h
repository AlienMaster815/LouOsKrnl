// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_2_H
#define WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_2_H
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.InstallControl.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl
{
    struct __declspec(empty_bases) AppInstallItem : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem,
        impl::require<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        AppInstallItem(std::nullptr_t) noexcept {}
        AppInstallItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Cancel;
        using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Cancel;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Pause;
        using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Pause;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem::Restart;
        using impl::consume_t<AppInstallItem, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>::Restart;
    };
    struct __declspec(empty_bases) AppInstallManager : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager,
        impl::require<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        AppInstallManager(std::nullptr_t) noexcept {}
        AppInstallManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager(ptr, take_ownership_from_abi) {}
        AppInstallManager();
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Cancel;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Cancel;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::GetIsAppAllowedToInstallAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::GetIsAppAllowedToInstallAsync;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Pause;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Pause;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::Restart;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::Restart;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::SearchForAllUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::SearchForAllUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::SearchForAllUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>::SearchForAllUpdatesForUserAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::SearchForAllUpdatesForUserAsync;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::SearchForUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::SearchForUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::SearchForUpdatesAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>::SearchForUpdatesForUserAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::SearchForUpdatesForUserAsync;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::StartAppInstallAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::StartAppInstallAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>::StartProductInstallAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::StartProductInstallAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>::StartProductInstallForUserAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>::StartProductInstallForUserAsync;
        using Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager::UpdateAppByPackageFamilyNameAsync;
        using impl::consume_t<AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>::UpdateAppByPackageFamilyNameAsync;
    };
    struct __declspec(empty_bases) AppInstallManagerItemEventArgs : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs
    {
        AppInstallManagerItemEventArgs(std::nullptr_t) noexcept {}
        AppInstallManagerItemEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppInstallOptions : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions,
        impl::require<AppInstallOptions, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        AppInstallOptions(std::nullptr_t) noexcept {}
        AppInstallOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions(ptr, take_ownership_from_abi) {}
        AppInstallOptions();
    };
    struct __declspec(empty_bases) AppInstallStatus : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus,
        impl::require<AppInstallStatus, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2, Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        AppInstallStatus(std::nullptr_t) noexcept {}
        AppInstallStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppUpdateOptions : Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions,
        impl::require<AppUpdateOptions, Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        AppUpdateOptions(std::nullptr_t) noexcept {}
        AppUpdateOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions(ptr, take_ownership_from_abi) {}
        AppUpdateOptions();
    };
    struct __declspec(empty_bases) GetEntitlementResult : Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult
    {
        GetEntitlementResult(std::nullptr_t) noexcept {}
        GetEntitlementResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
