// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_1_H
#define WINRT_Windows_ApplicationModel_Store_1_H
#include "winrt/impl/Windows.ApplicationModel.Store.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store
{
    struct __declspec(empty_bases) ICurrentApp :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentApp>
    {
        ICurrentApp(std::nullptr_t = nullptr) noexcept {}
        ICurrentApp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentApp2Statics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentApp2Statics>
    {
        ICurrentApp2Statics(std::nullptr_t = nullptr) noexcept {}
        ICurrentApp2Statics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppSimulator :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppSimulator>
    {
        ICurrentAppSimulator(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppSimulator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppSimulatorStaticsWithFiltering :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppSimulatorStaticsWithFiltering>
    {
        ICurrentAppSimulatorStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppSimulatorStaticsWithFiltering(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppSimulatorWithCampaignId :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppSimulatorWithCampaignId>
    {
        ICurrentAppSimulatorWithCampaignId(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppSimulatorWithCampaignId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppSimulatorWithConsumables :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppSimulatorWithConsumables>
    {
        ICurrentAppSimulatorWithConsumables(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppSimulatorWithConsumables(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppStaticsWithFiltering :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppStaticsWithFiltering>
    {
        ICurrentAppStaticsWithFiltering(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppStaticsWithFiltering(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppWithCampaignId :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppWithCampaignId>
    {
        ICurrentAppWithCampaignId(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppWithCampaignId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentAppWithConsumables :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentAppWithConsumables>
    {
        ICurrentAppWithConsumables(std::nullptr_t = nullptr) noexcept {}
        ICurrentAppWithConsumables(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILicenseInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILicenseInformation>
    {
        ILicenseInformation(std::nullptr_t = nullptr) noexcept {}
        ILicenseInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IListingInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IListingInformation>
    {
        IListingInformation(std::nullptr_t = nullptr) noexcept {}
        IListingInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IListingInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IListingInformation2>
    {
        IListingInformation2(std::nullptr_t = nullptr) noexcept {}
        IListingInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductLicense :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductLicense>
    {
        IProductLicense(std::nullptr_t = nullptr) noexcept {}
        IProductLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductLicenseWithFulfillment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductLicenseWithFulfillment>,
        impl::require<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment, Windows::ApplicationModel::Store::IProductLicense>
    {
        IProductLicenseWithFulfillment(std::nullptr_t = nullptr) noexcept {}
        IProductLicenseWithFulfillment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductListing :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductListing>
    {
        IProductListing(std::nullptr_t = nullptr) noexcept {}
        IProductListing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductListing2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductListing2>
    {
        IProductListing2(std::nullptr_t = nullptr) noexcept {}
        IProductListing2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductListingWithConsumables :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductListingWithConsumables>
    {
        IProductListingWithConsumables(std::nullptr_t = nullptr) noexcept {}
        IProductListingWithConsumables(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductListingWithMetadata :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductListingWithMetadata>,
        impl::require<Windows::ApplicationModel::Store::IProductListingWithMetadata, Windows::ApplicationModel::Store::IProductListing>
    {
        IProductListingWithMetadata(std::nullptr_t = nullptr) noexcept {}
        IProductListingWithMetadata(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductPurchaseDisplayProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductPurchaseDisplayProperties>
    {
        IProductPurchaseDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IProductPurchaseDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProductPurchaseDisplayPropertiesFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProductPurchaseDisplayPropertiesFactory>
    {
        IProductPurchaseDisplayPropertiesFactory(std::nullptr_t = nullptr) noexcept {}
        IProductPurchaseDisplayPropertiesFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPurchaseResults :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPurchaseResults>
    {
        IPurchaseResults(std::nullptr_t = nullptr) noexcept {}
        IPurchaseResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUnfulfilledConsumable :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUnfulfilledConsumable>
    {
        IUnfulfilledConsumable(std::nullptr_t = nullptr) noexcept {}
        IUnfulfilledConsumable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
