// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_Preview_0_H
#define WINRT_Windows_ApplicationModel_Store_Preview_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Security::Authentication::Web::Core
{
    struct WebTokenRequest;
}
namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI::Xaml
{
    struct UIElement;
}
namespace winrt::Windows::ApplicationModel::Store::Preview
{
    enum class DeliveryOptimizationDownloadMode : int32_t
    {
        Simple = 0,
        HttpOnly = 1,
        Lan = 2,
        Group = 3,
        Internet = 4,
        Bypass = 5,
    };
    enum class DeliveryOptimizationDownloadModeSource : int32_t
    {
        Default = 0,
        Policy = 1,
    };
    enum class StoreLogOptions : uint32_t
    {
        None = 0,
        TryElevate = 0x1,
    };
    enum class StorePreviewProductPurchaseStatus : int32_t
    {
        Succeeded = 0,
        AlreadyPurchased = 1,
        NotFulfilled = 2,
        NotPurchased = 3,
    };
    enum class StoreSystemFeature : int32_t
    {
        ArchitectureX86 = 0,
        ArchitectureX64 = 1,
        ArchitectureArm = 2,
        DirectX9 = 3,
        DirectX10 = 4,
        DirectX11 = 5,
        D3D12HardwareFL11 = 6,
        D3D12HardwareFL12 = 7,
        Memory300MB = 8,
        Memory750MB = 9,
        Memory1GB = 10,
        Memory2GB = 11,
        CameraFront = 12,
        CameraRear = 13,
        Gyroscope = 14,
        Hover = 15,
        Magnetometer = 16,
        Nfc = 17,
        Resolution720P = 18,
        ResolutionWvga = 19,
        ResolutionWvgaOr720P = 20,
        ResolutionWxga = 21,
        ResolutionWvgaOrWxga = 22,
        ResolutionWxgaOr720P = 23,
        Memory4GB = 24,
        Memory6GB = 25,
        Memory8GB = 26,
        Memory12GB = 27,
        Memory16GB = 28,
        Memory20GB = 29,
        VideoMemory2GB = 30,
        VideoMemory4GB = 31,
        VideoMemory6GB = 32,
        VideoMemory1GB = 33,
        ArchitectureArm64 = 34,
    };
    struct IDeliveryOptimizationSettings;
    struct IDeliveryOptimizationSettingsStatics;
    struct IStoreConfigurationStatics;
    struct IStoreConfigurationStatics2;
    struct IStoreConfigurationStatics3;
    struct IStoreConfigurationStatics4;
    struct IStoreConfigurationStatics5;
    struct IStoreHardwareManufacturerInfo;
    struct IStorePreview;
    struct IStorePreviewProductInfo;
    struct IStorePreviewPurchaseResults;
    struct IStorePreviewSkuInfo;
    struct IWebAuthenticationCoreManagerHelper;
    struct DeliveryOptimizationSettings;
    struct StoreConfiguration;
    struct StoreHardwareManufacturerInfo;
    struct StorePreview;
    struct StorePreviewProductInfo;
    struct StorePreviewPurchaseResults;
    struct StorePreviewSkuInfo;
    struct WebAuthenticationCoreManagerHelper;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StoreConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadModeSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StoreLogOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IDeliveryOptimizationSettings" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IDeliveryOptimizationSettingsStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics5" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreview>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreview" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationSettings>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.DeliveryOptimizationSettings" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StoreConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreview>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreview" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.DeliveryOptimizationDownloadMode" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadModeSource>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.DeliveryOptimizationDownloadModeSource" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StoreLogOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreLogOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StorePreviewProductPurchaseStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.StoreSystemFeature" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings>
    {
        static constexpr guid value{ 0x1810FDA0,0xE853,0x565E,{ 0xB8,0x74,0x7A,0x8A,0x7B,0x9A,0x0E,0x0F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettingsStatics>
    {
        static constexpr guid value{ 0x5C817CAF,0xAED5,0x5999,{ 0xB4,0xC9,0x8C,0x60,0x89,0x8B,0xC4,0xF3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
    {
        static constexpr guid value{ 0x728F7FC0,0x8628,0x42EC,{ 0x84,0xA2,0x07,0x78,0x0E,0xB4,0x4D,0x8B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
    {
        static constexpr guid value{ 0x657C4595,0xC8B7,0x4FE9,{ 0x9F,0x4C,0x4D,0x71,0x02,0x7D,0x34,0x7E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
    {
        static constexpr guid value{ 0x6D45F57C,0xF144,0x4CB5,{ 0x9D,0x3F,0x4E,0xB0,0x5E,0x30,0xB6,0xD3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
    {
        static constexpr guid value{ 0x20FF56D2,0x4EE3,0x4CF0,{ 0x9B,0x12,0x55,0x2C,0x03,0x31,0x0F,0x75 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics5>
    {
        static constexpr guid value{ 0xF7613191,0x8FA9,0x49DB,{ 0x82,0x2B,0x01,0x60,0xE7,0xE4,0xE5,0xC5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
    {
        static constexpr guid value{ 0xF292DC08,0xC654,0x43AC,{ 0xA2,0x1F,0x34,0x80,0x1C,0x9D,0x33,0x88 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStorePreview>
    {
        static constexpr guid value{ 0x8A157241,0x840E,0x49A9,{ 0xBC,0x01,0x5D,0x5B,0x01,0xFB,0xC8,0xE9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
    {
        static constexpr guid value{ 0x1937DBB3,0x6C01,0x4C9D,{ 0x85,0xCD,0x5B,0xAB,0xAA,0xC2,0xB3,0x51 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
    {
        static constexpr guid value{ 0xB0DAAED1,0xD6C5,0x4E53,{ 0xA0,0x43,0xFB,0xA0,0xD8,0xE6,0x12,0x31 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
    {
        static constexpr guid value{ 0x81FD76E2,0x0B26,0x48D9,{ 0x98,0xCE,0x27,0x46,0x1C,0x66,0x9D,0x6C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
    {
        static constexpr guid value{ 0x06A50525,0xE715,0x4123,{ 0x92,0x76,0x9D,0x6F,0x86,0x5B,0xA5,0x5F } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::DeliveryOptimizationSettings>
    {
        using type = Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>
    {
        using type = Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>
    {
        using type = Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>
    {
        using type = Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>
    {
        using type = Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo;
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DownloadMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadModeSource(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSystemConfiguration(void*, void*, int64_t, void*) noexcept = 0;
            virtual int32_t __stdcall SetMobileOperatorConfiguration(void*, uint32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetStoreWebAccountId(void*) noexcept = 0;
            virtual int32_t __stdcall IsStoreWebAccountId(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareManufacturerInfo(void**) noexcept = 0;
            virtual int32_t __stdcall FilterUnsupportedSystemFeaturesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PurchasePromptingPolicy(void**) noexcept = 0;
            virtual int32_t __stdcall put_PurchasePromptingPolicy(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall HasStoreWebAccount(bool*) noexcept = 0;
            virtual int32_t __stdcall HasStoreWebAccountForUser(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall GetStoreLogDataAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetStoreWebAccountIdForUser(void*, void*) noexcept = 0;
            virtual int32_t __stdcall IsStoreWebAccountIdForUser(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall GetPurchasePromptingPolicyForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPurchasePromptingPolicyForUser(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStoreWebAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreWebAccountIdForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetEnterpriseStoreWebAccountId(void*) noexcept = 0;
            virtual int32_t __stdcall SetEnterpriseStoreWebAccountIdForUser(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetEnterpriseStoreWebAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall GetEnterpriseStoreWebAccountIdForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShouldRestrictToEnterpriseStoreOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall ShouldRestrictToEnterpriseStoreOnlyForUser(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPinToDesktopSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsPinToTaskbarSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsPinToStartSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall PinToDesktop(void*) noexcept = 0;
            virtual int32_t __stdcall PinToDesktopForUser(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HardwareManufacturerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_StoreContentModifierId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModelName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManufacturerName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestProductPurchaseByProductIdAndSkuIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadAddOnProductInfosAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProductType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkuInfoList(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductPurchaseStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkuId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkuType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomDeveloperData(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrencyCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormattedListPrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestTokenWithUIElementHostingAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestTokenWithUIElementHostingAndWebAccountAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettings
    {
        [[nodiscard]] auto DownloadMode() const;
        [[nodiscard]] auto DownloadModeSource() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettings<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettingsStatics
    {
        auto GetCurrentSettings() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettingsStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics
    {
        auto SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor) const;
        auto SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes) const;
        auto SetStoreWebAccountId(param::hstring const& webAccountId) const;
        auto IsStoreWebAccountId(param::hstring const& webAccountId) const;
        [[nodiscard]] auto HardwareManufacturerInfo() const;
        auto FilterUnsupportedSystemFeaturesAsync(param::async_iterable<Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2
    {
        [[nodiscard]] auto PurchasePromptingPolicy() const;
        auto PurchasePromptingPolicy(Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3
    {
        auto HasStoreWebAccount() const;
        auto HasStoreWebAccountForUser(Windows::System::User const& user) const;
        auto GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options) const;
        auto SetStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
        auto IsStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
        auto GetPurchasePromptingPolicyForUser(Windows::System::User const& user) const;
        auto SetPurchasePromptingPolicyForUser(Windows::System::User const& user, Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4
    {
        auto GetStoreWebAccountId() const;
        auto GetStoreWebAccountIdForUser(Windows::System::User const& user) const;
        auto SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId) const;
        auto SetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user, param::hstring const& webAccountId) const;
        auto GetEnterpriseStoreWebAccountId() const;
        auto GetEnterpriseStoreWebAccountIdForUser(Windows::System::User const& user) const;
        auto ShouldRestrictToEnterpriseStoreOnly() const;
        auto ShouldRestrictToEnterpriseStoreOnlyForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics5
    {
        auto IsPinToDesktopSupported() const;
        auto IsPinToTaskbarSupported() const;
        auto IsPinToStartSupported() const;
        auto PinToDesktop(param::hstring const& appPackageFamilyName) const;
        auto PinToDesktopForUser(Windows::System::User const& user, param::hstring const& appPackageFamilyName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo
    {
        [[nodiscard]] auto HardwareManufacturerId() const;
        [[nodiscard]] auto StoreContentModifierId() const;
        [[nodiscard]] auto ModelName() const;
        [[nodiscard]] auto ManufacturerName() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStorePreview
    {
        auto RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId) const;
        auto LoadAddOnProductInfosAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreview>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreview<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo
    {
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto ProductType() const;
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto SkuInfoList() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults
    {
        [[nodiscard]] auto ProductPurchaseStatus() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo
    {
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto SkuId() const;
        [[nodiscard]] auto SkuType() const;
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto CustomDeveloperData() const;
        [[nodiscard]] auto CurrencyCode() const;
        [[nodiscard]] auto FormattedListPrice() const;
        [[nodiscard]] auto ExtendedData() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper
    {
        auto RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::UI::Xaml::UIElement const& uiElement) const;
        auto RequestTokenWithUIElementHostingAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::Xaml::UIElement const& uiElement) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper<D>;
    };
}
#endif
