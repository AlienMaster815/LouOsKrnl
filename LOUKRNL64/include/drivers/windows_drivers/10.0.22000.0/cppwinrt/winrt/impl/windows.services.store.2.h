// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Store_2_H
#define WINRT_Windows_Services_Store_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Services.Store.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Store
{
    struct StorePackageUpdateStatus
    {
        hstring PackageFamilyName;
        uint64_t PackageDownloadSizeInBytes;
        uint64_t PackageBytesDownloaded;
        double PackageDownloadProgress;
        double TotalDownloadProgress;
        Windows::Services::Store::StorePackageUpdateState PackageUpdateState;
    };
    inline bool operator==(StorePackageUpdateStatus const& left, StorePackageUpdateStatus const& right) noexcept
    {
        return left.PackageFamilyName == right.PackageFamilyName && left.PackageDownloadSizeInBytes == right.PackageDownloadSizeInBytes && left.PackageBytesDownloaded == right.PackageBytesDownloaded && left.PackageDownloadProgress == right.PackageDownloadProgress && left.TotalDownloadProgress == right.TotalDownloadProgress && left.PackageUpdateState == right.PackageUpdateState;
    }
    inline bool operator!=(StorePackageUpdateStatus const& left, StorePackageUpdateStatus const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) StoreAcquireLicenseResult : Windows::Services::Store::IStoreAcquireLicenseResult
    {
        StoreAcquireLicenseResult(std::nullptr_t) noexcept {}
        StoreAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreAcquireLicenseResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreAppLicense : Windows::Services::Store::IStoreAppLicense,
        impl::require<StoreAppLicense, Windows::Services::Store::IStoreAppLicense2>
    {
        StoreAppLicense(std::nullptr_t) noexcept {}
        StoreAppLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreAppLicense(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreAvailability : Windows::Services::Store::IStoreAvailability
    {
        StoreAvailability(std::nullptr_t) noexcept {}
        StoreAvailability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreAvailability(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreCanAcquireLicenseResult : Windows::Services::Store::IStoreCanAcquireLicenseResult
    {
        StoreCanAcquireLicenseResult(std::nullptr_t) noexcept {}
        StoreCanAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreCanAcquireLicenseResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreCollectionData : Windows::Services::Store::IStoreCollectionData
    {
        StoreCollectionData(std::nullptr_t) noexcept {}
        StoreCollectionData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreCollectionData(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreConsumableResult : Windows::Services::Store::IStoreConsumableResult
    {
        StoreConsumableResult(std::nullptr_t) noexcept {}
        StoreConsumableResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreConsumableResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreContext : Windows::Services::Store::IStoreContext,
        impl::require<StoreContext, Windows::Services::Store::IStoreContext2, Windows::Services::Store::IStoreContext3, Windows::Services::Store::IStoreContext4>
    {
        StoreContext(std::nullptr_t) noexcept {}
        StoreContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreContext(ptr, take_ownership_from_abi) {}
        using Windows::Services::Store::IStoreContext::GetStoreProductsAsync;
        using impl::consume_t<StoreContext, Windows::Services::Store::IStoreContext3>::GetStoreProductsAsync;
        using Windows::Services::Store::IStoreContext::RequestDownloadAndInstallStorePackagesAsync;
        using impl::consume_t<StoreContext, Windows::Services::Store::IStoreContext3>::RequestDownloadAndInstallStorePackagesAsync;
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) StoreImage : Windows::Services::Store::IStoreImage
    {
        StoreImage(std::nullptr_t) noexcept {}
        StoreImage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreImage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreLicense : Windows::Services::Store::IStoreLicense
    {
        StoreLicense(std::nullptr_t) noexcept {}
        StoreLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreLicense(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePackageInstallOptions : Windows::Services::Store::IStorePackageInstallOptions
    {
        StorePackageInstallOptions(std::nullptr_t) noexcept {}
        StorePackageInstallOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePackageInstallOptions(ptr, take_ownership_from_abi) {}
        StorePackageInstallOptions();
    };
    struct __declspec(empty_bases) StorePackageLicense : Windows::Services::Store::IStorePackageLicense
    {
        StorePackageLicense(std::nullptr_t) noexcept {}
        StorePackageLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePackageLicense(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePackageUpdate : Windows::Services::Store::IStorePackageUpdate
    {
        StorePackageUpdate(std::nullptr_t) noexcept {}
        StorePackageUpdate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePackageUpdate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePackageUpdateResult : Windows::Services::Store::IStorePackageUpdateResult,
        impl::require<StorePackageUpdateResult, Windows::Services::Store::IStorePackageUpdateResult2>
    {
        StorePackageUpdateResult(std::nullptr_t) noexcept {}
        StorePackageUpdateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePackageUpdateResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePrice : Windows::Services::Store::IStorePrice
    {
        StorePrice(std::nullptr_t) noexcept {}
        StorePrice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePrice(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreProduct : Windows::Services::Store::IStoreProduct
    {
        StoreProduct(std::nullptr_t) noexcept {}
        StoreProduct(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreProduct(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreProductOptions : Windows::Services::Store::IStoreProductOptions
    {
        StoreProductOptions(std::nullptr_t) noexcept {}
        StoreProductOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreProductOptions(ptr, take_ownership_from_abi) {}
        StoreProductOptions();
    };
    struct __declspec(empty_bases) StoreProductPagedQueryResult : Windows::Services::Store::IStoreProductPagedQueryResult
    {
        StoreProductPagedQueryResult(std::nullptr_t) noexcept {}
        StoreProductPagedQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreProductPagedQueryResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreProductQueryResult : Windows::Services::Store::IStoreProductQueryResult
    {
        StoreProductQueryResult(std::nullptr_t) noexcept {}
        StoreProductQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreProductQueryResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreProductResult : Windows::Services::Store::IStoreProductResult
    {
        StoreProductResult(std::nullptr_t) noexcept {}
        StoreProductResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreProductResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePurchaseProperties : Windows::Services::Store::IStorePurchaseProperties
    {
        StorePurchaseProperties(std::nullptr_t) noexcept {}
        StorePurchaseProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePurchaseProperties(ptr, take_ownership_from_abi) {}
        StorePurchaseProperties();
        explicit StorePurchaseProperties(param::hstring const& name);
    };
    struct __declspec(empty_bases) StorePurchaseResult : Windows::Services::Store::IStorePurchaseResult
    {
        StorePurchaseResult(std::nullptr_t) noexcept {}
        StorePurchaseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStorePurchaseResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreQueueItem : Windows::Services::Store::IStoreQueueItem,
        impl::require<StoreQueueItem, Windows::Services::Store::IStoreQueueItem2>
    {
        StoreQueueItem(std::nullptr_t) noexcept {}
        StoreQueueItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreQueueItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreQueueItemCompletedEventArgs : Windows::Services::Store::IStoreQueueItemCompletedEventArgs
    {
        StoreQueueItemCompletedEventArgs(std::nullptr_t) noexcept {}
        StoreQueueItemCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreQueueItemCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreQueueItemStatus : Windows::Services::Store::IStoreQueueItemStatus
    {
        StoreQueueItemStatus(std::nullptr_t) noexcept {}
        StoreQueueItemStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreQueueItemStatus(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreRateAndReviewResult : Windows::Services::Store::IStoreRateAndReviewResult
    {
        StoreRateAndReviewResult(std::nullptr_t) noexcept {}
        StoreRateAndReviewResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreRateAndReviewResult(ptr, take_ownership_from_abi) {}
    };
    struct StoreRequestHelper
    {
        StoreRequestHelper() = delete;
        static auto SendRequestAsync(Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson);
    };
    struct __declspec(empty_bases) StoreSendRequestResult : Windows::Services::Store::IStoreSendRequestResult,
        impl::require<StoreSendRequestResult, Windows::Services::Store::IStoreSendRequestResult2>
    {
        StoreSendRequestResult(std::nullptr_t) noexcept {}
        StoreSendRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreSendRequestResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreSku : Windows::Services::Store::IStoreSku
    {
        StoreSku(std::nullptr_t) noexcept {}
        StoreSku(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreSku(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreSubscriptionInfo : Windows::Services::Store::IStoreSubscriptionInfo
    {
        StoreSubscriptionInfo(std::nullptr_t) noexcept {}
        StoreSubscriptionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreSubscriptionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreUninstallStorePackageResult : Windows::Services::Store::IStoreUninstallStorePackageResult
    {
        StoreUninstallStorePackageResult(std::nullptr_t) noexcept {}
        StoreUninstallStorePackageResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreUninstallStorePackageResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StoreVideo : Windows::Services::Store::IStoreVideo
    {
        StoreVideo(std::nullptr_t) noexcept {}
        StoreVideo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Store::IStoreVideo(ptr, take_ownership_from_abi) {}
    };
}
#endif
