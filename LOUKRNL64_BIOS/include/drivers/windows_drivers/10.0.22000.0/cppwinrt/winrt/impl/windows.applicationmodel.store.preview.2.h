// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_Preview_2_H
#define WINRT_Windows_ApplicationModel_Store_Preview_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview
{
    struct __declspec(empty_bases) DeliveryOptimizationSettings : Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings
    {
        DeliveryOptimizationSettings(std::nullptr_t) noexcept {}
        DeliveryOptimizationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings(ptr, take_ownership_from_abi) {}
        static auto GetCurrentSettings();
    };
    struct StoreConfiguration
    {
        StoreConfiguration() = delete;
        static auto SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor);
        static auto SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes);
        static auto SetStoreWebAccountId(param::hstring const& webAccountId);
        static auto IsStoreWebAccountId(param::hstring const& webAccountId);
        [[nodiscard]] static auto HardwareManufacturerInfo();
        static auto FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures);
        [[nodiscard]] static auto PurchasePromptingPolicy();
        static auto PurchasePromptingPolicy(Windows::Foundation::IReference<uint32_t> const& value);
        static auto HasStoreWebAccount();
        static auto HasStoreWebAccountForUser(Windows::System::User const& user);
        static auto GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options);
        static auto SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
        static auto IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
        static auto GetPurchasePromptingPolicyForUser(Windows::System::User const& user);
        static auto SetPurchasePromptingPolicyForUser(Windows::System::User const& user, Windows::Foundation::IReference<uint32_t> const& value);
        static auto GetStoreWebAccountId();
        static auto GetStoreWebAccountIdForUser(Windows::System::User const& user);
        static auto SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId);
        static auto SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId);
        static auto GetEnterpriseStoreWebAccountId();
        static auto GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user);
        static auto ShouldRestrictToEnterpriseStoreOnly();
        static auto ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user);
        static auto IsPinToDesktopSupported();
        static auto IsPinToTaskbarSupported();
        static auto IsPinToStartSupported();
        static auto PinToDesktop(param::hstring const& appPackageFamilyName);
        static auto PinToDesktopForUser(Windows::System::User const& user, param::hstring const& appPackageFamilyName);
    };
    struct __declspec(empty_bases) StoreHardwareManufacturerInfo : Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo
    {
        StoreHardwareManufacturerInfo(std::nullptr_t) noexcept {}
        StoreHardwareManufacturerInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo(ptr, take_ownership_from_abi) {}
    };
    struct StorePreview
    {
        StorePreview() = delete;
        static auto RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId);
        static auto LoadAddOnProductInfosAsync();
    };
    struct __declspec(empty_bases) StorePreviewProductInfo : Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo
    {
        StorePreviewProductInfo(std::nullptr_t) noexcept {}
        StorePreviewProductInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePreviewPurchaseResults : Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults
    {
        StorePreviewPurchaseResults(std::nullptr_t) noexcept {}
        StorePreviewPurchaseResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePreviewSkuInfo : Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo
    {
        StorePreviewSkuInfo(std::nullptr_t) noexcept {}
        StorePreviewSkuInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo(ptr, take_ownership_from_abi) {}
    };
    struct WebAuthenticationCoreManagerHelper
    {
        WebAuthenticationCoreManagerHelper() = delete;
        static auto RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement);
        static auto RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement);
    };
}
#endif
