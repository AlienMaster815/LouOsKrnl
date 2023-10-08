// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Store_1_H
#define WINRT_Windows_Services_Store_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Services.Store.0.h"
WINRT_EXPORT namespace winrt::Windows::Services::Store
{
    struct __declspec(empty_bases) IStoreAcquireLicenseResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreAcquireLicenseResult>
    {
        IStoreAcquireLicenseResult(std::nullptr_t = nullptr) noexcept {}
        IStoreAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreAppLicense :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreAppLicense>
    {
        IStoreAppLicense(std::nullptr_t = nullptr) noexcept {}
        IStoreAppLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreAppLicense2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreAppLicense2>
    {
        IStoreAppLicense2(std::nullptr_t = nullptr) noexcept {}
        IStoreAppLicense2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreAvailability :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreAvailability>
    {
        IStoreAvailability(std::nullptr_t = nullptr) noexcept {}
        IStoreAvailability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreCanAcquireLicenseResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreCanAcquireLicenseResult>
    {
        IStoreCanAcquireLicenseResult(std::nullptr_t = nullptr) noexcept {}
        IStoreCanAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreCollectionData :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreCollectionData>
    {
        IStoreCollectionData(std::nullptr_t = nullptr) noexcept {}
        IStoreCollectionData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreConsumableResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreConsumableResult>
    {
        IStoreConsumableResult(std::nullptr_t = nullptr) noexcept {}
        IStoreConsumableResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreContext>
    {
        IStoreContext(std::nullptr_t = nullptr) noexcept {}
        IStoreContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreContext2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreContext2>
    {
        IStoreContext2(std::nullptr_t = nullptr) noexcept {}
        IStoreContext2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreContext3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreContext3>
    {
        IStoreContext3(std::nullptr_t = nullptr) noexcept {}
        IStoreContext3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreContext4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreContext4>
    {
        IStoreContext4(std::nullptr_t = nullptr) noexcept {}
        IStoreContext4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreContextStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreContextStatics>
    {
        IStoreContextStatics(std::nullptr_t = nullptr) noexcept {}
        IStoreContextStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreImage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreImage>
    {
        IStoreImage(std::nullptr_t = nullptr) noexcept {}
        IStoreImage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreLicense :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreLicense>
    {
        IStoreLicense(std::nullptr_t = nullptr) noexcept {}
        IStoreLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePackageInstallOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePackageInstallOptions>
    {
        IStorePackageInstallOptions(std::nullptr_t = nullptr) noexcept {}
        IStorePackageInstallOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePackageLicense :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePackageLicense>,
        impl::require<Windows::Services::Store::IStorePackageLicense, Windows::Foundation::IClosable>
    {
        IStorePackageLicense(std::nullptr_t = nullptr) noexcept {}
        IStorePackageLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePackageUpdate :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePackageUpdate>
    {
        IStorePackageUpdate(std::nullptr_t = nullptr) noexcept {}
        IStorePackageUpdate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePackageUpdateResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePackageUpdateResult>
    {
        IStorePackageUpdateResult(std::nullptr_t = nullptr) noexcept {}
        IStorePackageUpdateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePackageUpdateResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePackageUpdateResult2>
    {
        IStorePackageUpdateResult2(std::nullptr_t = nullptr) noexcept {}
        IStorePackageUpdateResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePrice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePrice>
    {
        IStorePrice(std::nullptr_t = nullptr) noexcept {}
        IStorePrice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreProduct :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreProduct>
    {
        IStoreProduct(std::nullptr_t = nullptr) noexcept {}
        IStoreProduct(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreProductOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreProductOptions>
    {
        IStoreProductOptions(std::nullptr_t = nullptr) noexcept {}
        IStoreProductOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreProductPagedQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreProductPagedQueryResult>
    {
        IStoreProductPagedQueryResult(std::nullptr_t = nullptr) noexcept {}
        IStoreProductPagedQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreProductQueryResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreProductQueryResult>
    {
        IStoreProductQueryResult(std::nullptr_t = nullptr) noexcept {}
        IStoreProductQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreProductResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreProductResult>
    {
        IStoreProductResult(std::nullptr_t = nullptr) noexcept {}
        IStoreProductResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePurchaseProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePurchaseProperties>
    {
        IStorePurchaseProperties(std::nullptr_t = nullptr) noexcept {}
        IStorePurchaseProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePurchasePropertiesFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePurchasePropertiesFactory>
    {
        IStorePurchasePropertiesFactory(std::nullptr_t = nullptr) noexcept {}
        IStorePurchasePropertiesFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorePurchaseResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorePurchaseResult>
    {
        IStorePurchaseResult(std::nullptr_t = nullptr) noexcept {}
        IStorePurchaseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreQueueItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreQueueItem>
    {
        IStoreQueueItem(std::nullptr_t = nullptr) noexcept {}
        IStoreQueueItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreQueueItem2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreQueueItem2>
    {
        IStoreQueueItem2(std::nullptr_t = nullptr) noexcept {}
        IStoreQueueItem2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreQueueItemCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreQueueItemCompletedEventArgs>
    {
        IStoreQueueItemCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStoreQueueItemCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreQueueItemStatus :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreQueueItemStatus>
    {
        IStoreQueueItemStatus(std::nullptr_t = nullptr) noexcept {}
        IStoreQueueItemStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreRateAndReviewResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreRateAndReviewResult>
    {
        IStoreRateAndReviewResult(std::nullptr_t = nullptr) noexcept {}
        IStoreRateAndReviewResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreRequestHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreRequestHelperStatics>
    {
        IStoreRequestHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IStoreRequestHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreSendRequestResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreSendRequestResult>
    {
        IStoreSendRequestResult(std::nullptr_t = nullptr) noexcept {}
        IStoreSendRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreSendRequestResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreSendRequestResult2>
    {
        IStoreSendRequestResult2(std::nullptr_t = nullptr) noexcept {}
        IStoreSendRequestResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreSku :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreSku>
    {
        IStoreSku(std::nullptr_t = nullptr) noexcept {}
        IStoreSku(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreSubscriptionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreSubscriptionInfo>
    {
        IStoreSubscriptionInfo(std::nullptr_t = nullptr) noexcept {}
        IStoreSubscriptionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreUninstallStorePackageResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreUninstallStorePackageResult>
    {
        IStoreUninstallStorePackageResult(std::nullptr_t = nullptr) noexcept {}
        IStoreUninstallStorePackageResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStoreVideo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStoreVideo>
    {
        IStoreVideo(std::nullptr_t = nullptr) noexcept {}
        IStoreVideo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
