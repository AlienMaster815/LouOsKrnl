// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_0_H
#define WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Management::Deployment
{
    struct PackageVolume;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl
{
    enum class AppInstallState : int32_t
    {
        Pending = 0,
        Starting = 1,
        AcquiringLicense = 2,
        Downloading = 3,
        RestoringData = 4,
        Installing = 5,
        Completed = 6,
        Canceled = 7,
        Paused = 8,
        Error = 9,
        PausedLowBattery = 10,
        PausedWiFiRecommended = 11,
        PausedWiFiRequired = 12,
        ReadyToDownload = 13,
    };
    enum class AppInstallType : int32_t
    {
        Install = 0,
        Update = 1,
        Repair = 2,
    };
    enum class AppInstallationToastNotificationMode : int32_t
    {
        Default = 0,
        Toast = 1,
        ToastWithoutPopup = 2,
        NoToast = 3,
    };
    enum class AutoUpdateSetting : int32_t
    {
        Disabled = 0,
        Enabled = 1,
        DisabledByPolicy = 2,
        EnabledByPolicy = 3,
    };
    enum class GetEntitlementStatus : int32_t
    {
        Succeeded = 0,
        NoStoreAccount = 1,
        NetworkError = 2,
        ServerError = 3,
    };
    struct IAppInstallItem;
    struct IAppInstallItem2;
    struct IAppInstallItem3;
    struct IAppInstallItem4;
    struct IAppInstallItem5;
    struct IAppInstallManager;
    struct IAppInstallManager2;
    struct IAppInstallManager3;
    struct IAppInstallManager4;
    struct IAppInstallManager5;
    struct IAppInstallManager6;
    struct IAppInstallManager7;
    struct IAppInstallManagerItemEventArgs;
    struct IAppInstallOptions;
    struct IAppInstallOptions2;
    struct IAppInstallStatus;
    struct IAppInstallStatus2;
    struct IAppInstallStatus3;
    struct IAppUpdateOptions;
    struct IAppUpdateOptions2;
    struct IGetEntitlementResult;
    struct AppInstallItem;
    struct AppInstallManager;
    struct AppInstallManagerItemEventArgs;
    struct AppInstallOptions;
    struct AppInstallStatus;
    struct AppUpdateOptions;
    struct GetEntitlementResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem4" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem5" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager6" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager7" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus3" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppUpdateOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallationToastNotificationMode" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting" };
    };
    template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        static constexpr guid value{ 0x49D3DFAB,0x168A,0x4CBF,{ 0xA9,0x3A,0x9E,0x44,0x8C,0x82,0x73,0x7D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        static constexpr guid value{ 0xD3972AF8,0x40C0,0x4FD7,{ 0xAA,0x6C,0x0A,0xA1,0x3C,0xA6,0x18,0x8C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        static constexpr guid value{ 0x6F3DC998,0xDD47,0x433C,{ 0x92,0x34,0x56,0x01,0x72,0xD6,0x7A,0x45 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        static constexpr guid value{ 0xC2D1CE12,0x71FF,0x4FC8,{ 0xB5,0x40,0x45,0x3D,0x4B,0x37,0xE1,0xD1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        static constexpr guid value{ 0x5510E7CC,0x4076,0x4A0B,{ 0x94,0x72,0xC2,0x1D,0x9D,0x38,0x0E,0x55 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        static constexpr guid value{ 0x9353E170,0x8441,0x4B45,{ 0xBD,0x72,0x7C,0x2F,0xA9,0x25,0xBE,0xEE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        static constexpr guid value{ 0x16937851,0xED37,0x480D,{ 0x83,0x14,0x52,0xE2,0x7C,0x03,0xF0,0x4A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        static constexpr guid value{ 0x95B24B17,0xE96A,0x4D0E,{ 0x84,0xE1,0xC8,0xCB,0x41,0x7A,0x01,0x78 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        static constexpr guid value{ 0x260A2A16,0x5A9E,0x4EBD,{ 0xB9,0x44,0xF2,0xBA,0x75,0xC3,0x11,0x59 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        static constexpr guid value{ 0x3CD7BE4C,0x1BE9,0x4F7F,{ 0xB6,0x75,0xAA,0x1D,0x64,0xA5,0x29,0xB2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        static constexpr guid value{ 0xC9E7D408,0xF27A,0x4471,{ 0xB2,0xF4,0xE7,0x6E,0xFC,0xBE,0xBC,0xCA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        static constexpr guid value{ 0xA5EE7B30,0xD5E4,0x49A3,{ 0x98,0x53,0x3D,0xB0,0x32,0x03,0x32,0x1D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        static constexpr guid value{ 0xBC505743,0x4674,0x4DD1,{ 0x95,0x7E,0xC2,0x56,0x82,0x08,0x6A,0x14 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        static constexpr guid value{ 0xC9808300,0x1CB8,0x4EB6,{ 0x8C,0x9F,0x6A,0x30,0xC6,0x4A,0x5B,0x51 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        static constexpr guid value{ 0x8A04C0D7,0xC94B,0x425E,{ 0x95,0xB4,0xBF,0x27,0xFA,0xEA,0xEE,0x89 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        static constexpr guid value{ 0x936DCCFA,0x2450,0x4126,{ 0x88,0xB1,0x61,0x27,0xA6,0x44,0xDD,0x5C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        static constexpr guid value{ 0x96E7818A,0x5E92,0x4AA9,{ 0x8E,0xDC,0x58,0xFE,0xD4,0xB8,0x7E,0x00 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        static constexpr guid value{ 0xCB880C56,0x837B,0x4B4C,{ 0x9E,0xBB,0x6D,0x44,0xA0,0xA9,0x63,0x07 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        static constexpr guid value{ 0x26F0B02F,0xC2F3,0x4AEA,{ 0xAF,0x8C,0x63,0x08,0xDD,0x9D,0xB8,0x5F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        static constexpr guid value{ 0xF4646E08,0xED26,0x4BF9,{ 0x96,0x79,0x48,0xF6,0x28,0xE5,0x3D,0xF8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        static constexpr guid value{ 0x74FC843F,0x1A9E,0x4609,{ 0x8E,0x4D,0x81,0x90,0x86,0xD0,0x8A,0x3D } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>
    {
        using type = Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult;
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserInitiated(bool*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentStatus(void**) noexcept = 0;
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Restart() noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelWithTelemetry(void*) noexcept = 0;
            virtual int32_t __stdcall PauseWithTelemetry(void*) noexcept = 0;
            virtual int32_t __stdcall RestartWithTelemetry(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemOperationsMightAffectOtherItems(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LaunchAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LaunchAfterInstall(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinToDesktopAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToDesktopAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToStartAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToStartAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToTaskbarAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToTaskbarAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CompletedInstallToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletedInstallToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallInProgressToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallInProgressToastNotificationMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInstallItems(void**) noexcept = 0;
            virtual int32_t __stdcall Cancel(void*) noexcept = 0;
            virtual int32_t __stdcall Pause(void*) noexcept = 0;
            virtual int32_t __stdcall Restart(void*) noexcept = 0;
            virtual int32_t __stdcall add_ItemCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ItemStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AutoUpdateSetting(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoUpdateSetting(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AcquisitionIdentity(void**) noexcept = 0;
            virtual int32_t __stdcall put_AcquisitionIdentity(void*) noexcept = 0;
            virtual int32_t __stdcall GetIsApplicableAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartAppInstallAsync(void*, void*, bool, bool, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsStoreBlockedByPolicyAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAppInstallWithTelemetryAsync(void*, void*, bool, bool, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameWithTelemetryAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithTelemetryAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesWithTelemetryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallWithTelemetryAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CancelWithTelemetry(void*, void*) noexcept = 0;
            virtual int32_t __stdcall PauseWithTelemetry(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RestartWithTelemetry(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartProductInstallAsync(void*, void*, void*, void*, bool, bool, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallForUserAsync(void*, void*, void*, void*, void*, bool, bool, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesForUserAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallForUserAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsApplicableForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall MoveToFrontOfDownloadQueue(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFreeUserEntitlementAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFreeUserEntitlementForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFreeDeviceEntitlementAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInstallItemsWithGroupSupport(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SearchForAllUpdatesWithUpdateOptionsAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesWithUpdateOptionsForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithUpdateOptionsAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithUpdateOptionsForUserAsync(void*, void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallWithOptionsAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallWithOptionsForUserAsync(void*, void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsPackageIdentityAllowedToInstallAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsPackageIdentityAllowedToInstallForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanInstallForAllUsers(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CatalogId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CatalogId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ForceUseOfNonRemovableStorage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceUseOfNonRemovableStorage(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowForcedAppRestart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowForcedAppRestart(bool) noexcept = 0;
            virtual int32_t __stdcall get_Repair(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Repair(bool) noexcept = 0;
            virtual int32_t __stdcall get_TargetVolume(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetVolume(void*) noexcept = 0;
            virtual int32_t __stdcall get_LaunchAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LaunchAfterInstall(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinToDesktopAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToDesktopAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToStartAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToStartAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToTaskbarAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToTaskbarAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CompletedInstallToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletedInstallToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallInProgressToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallInProgressToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallForAllUsers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_InstallForAllUsers(bool) noexcept = 0;
            virtual int32_t __stdcall get_StageButDoNotInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StageButDoNotInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CampaignId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CampaignId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedCampaignId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExtendedCampaignId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstallState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesDownloaded(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PercentComplete(double*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadyForLaunch(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CatalogId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CatalogId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowForcedAppRestart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowForcedAppRestart(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutomaticallyDownloadAndInstallUpdateIfFound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutomaticallyDownloadAndInstallUpdateIfFound(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem
    {
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto PackageFamilyName() const;
        [[nodiscard]] auto InstallType() const;
        [[nodiscard]] auto IsUserInitiated() const;
        auto GetCurrentStatus() const;
        auto Cancel() const;
        auto Pause() const;
        auto Restart() const;
        auto Completed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem, &impl::abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
        auto Completed(winrt::event_token const& token) const noexcept;
        auto StatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem, &impl::abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_StatusChanged>;
        StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2
    {
        auto Cancel(param::hstring const& correlationVector) const;
        auto Pause(param::hstring const& correlationVector) const;
        auto Restart(param::hstring const& correlationVector) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3
    {
        [[nodiscard]] auto Children() const;
        [[nodiscard]] auto ItemOperationsMightAffectOtherItems() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4
    {
        [[nodiscard]] auto LaunchAfterInstall() const;
        auto LaunchAfterInstall(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5
    {
        [[nodiscard]] auto PinToDesktopAfterInstall() const;
        auto PinToDesktopAfterInstall(bool value) const;
        [[nodiscard]] auto PinToStartAfterInstall() const;
        auto PinToStartAfterInstall(bool value) const;
        [[nodiscard]] auto PinToTaskbarAfterInstall() const;
        auto PinToTaskbarAfterInstall(bool value) const;
        [[nodiscard]] auto CompletedInstallToastNotificationMode() const;
        auto CompletedInstallToastNotificationMode(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallInProgressToastNotificationMode() const;
        auto InstallInProgressToastNotificationMode(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager
    {
        [[nodiscard]] auto AppInstallItems() const;
        auto Cancel(param::hstring const& productId) const;
        auto Pause(param::hstring const& productId) const;
        auto Restart(param::hstring const& productId) const;
        auto ItemCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        using ItemCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager, &impl::abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemCompleted>;
        ItemCompleted_revoker ItemCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        auto ItemCompleted(winrt::event_token const& token) const noexcept;
        auto ItemStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        using ItemStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager, &impl::abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemStatusChanged>;
        ItemStatusChanged_revoker ItemStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        auto ItemStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AutoUpdateSetting() const;
        auto AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const& value) const;
        [[nodiscard]] auto AcquisitionIdentity() const;
        auto AcquisitionIdentity(param::hstring const& value) const;
        auto GetIsApplicableAsync(param::hstring const& productId, param::hstring const& skuId) const;
        auto StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage) const;
        auto UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId) const;
        auto SearchForAllUpdatesAsync() const;
        auto IsStoreBlockedByPolicyAsync(param::hstring const& storeClientName, param::hstring const& storeClientPublisher) const;
        auto GetIsAppAllowedToInstallAsync(param::hstring const& productId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2
    {
        auto StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& catalogId, param::hstring const& bundleId, param::hstring const& correlationVector) const;
        auto UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto SearchForAllUpdatesAsync(param::hstring const& correlationVector) const;
        auto GetIsAppAllowedToInstallAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto Cancel(param::hstring const& productId, param::hstring const& correlationVector) const;
        auto Pause(param::hstring const& productId, param::hstring const& correlationVector) const;
        auto Restart(param::hstring const& productId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3
    {
        auto StartProductInstallAsync(param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto UpdateAppByPackageFamilyNameForUserAsync(Windows::System::User const& user, param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
        auto SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector) const;
        auto GetIsAppAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto GetIsApplicableForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId) const;
        auto MoveToFrontOfDownloadQueue(param::hstring const& productId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4
    {
        auto GetFreeUserEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
        auto GetFreeUserEntitlementForUserAsync(Windows::System::User const& user, param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
        auto GetFreeDeviceEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5
    {
        [[nodiscard]] auto AppInstallItemsWithGroupSupport() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6
    {
        auto SearchForAllUpdatesAsync(param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto StartProductInstallAsync(param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
        auto StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
        auto GetIsPackageIdentityAllowedToInstallAsync(param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
        auto GetIsPackageIdentityAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager7
    {
        [[nodiscard]] auto CanInstallForAllUsers() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager7<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs
    {
        [[nodiscard]] auto Item() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions
    {
        [[nodiscard]] auto CatalogId() const;
        auto CatalogId(param::hstring const& value) const;
        [[nodiscard]] auto ForceUseOfNonRemovableStorage() const;
        auto ForceUseOfNonRemovableStorage(bool value) const;
        [[nodiscard]] auto AllowForcedAppRestart() const;
        auto AllowForcedAppRestart(bool value) const;
        [[nodiscard]] auto Repair() const;
        auto Repair(bool value) const;
        [[nodiscard]] auto TargetVolume() const;
        auto TargetVolume(Windows::Management::Deployment::PackageVolume const& value) const;
        [[nodiscard]] auto LaunchAfterInstall() const;
        auto LaunchAfterInstall(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions2
    {
        [[nodiscard]] auto PinToDesktopAfterInstall() const;
        auto PinToDesktopAfterInstall(bool value) const;
        [[nodiscard]] auto PinToStartAfterInstall() const;
        auto PinToStartAfterInstall(bool value) const;
        [[nodiscard]] auto PinToTaskbarAfterInstall() const;
        auto PinToTaskbarAfterInstall(bool value) const;
        [[nodiscard]] auto CompletedInstallToastNotificationMode() const;
        auto CompletedInstallToastNotificationMode(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallInProgressToastNotificationMode() const;
        auto InstallInProgressToastNotificationMode(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallForAllUsers() const;
        auto InstallForAllUsers(bool value) const;
        [[nodiscard]] auto StageButDoNotInstall() const;
        auto StageButDoNotInstall(bool value) const;
        [[nodiscard]] auto CampaignId() const;
        auto CampaignId(param::hstring const& value) const;
        [[nodiscard]] auto ExtendedCampaignId() const;
        auto ExtendedCampaignId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus
    {
        [[nodiscard]] auto InstallState() const;
        [[nodiscard]] auto DownloadSizeInBytes() const;
        [[nodiscard]] auto BytesDownloaded() const;
        [[nodiscard]] auto PercentComplete() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2
    {
        [[nodiscard]] auto User() const;
        [[nodiscard]] auto ReadyForLaunch() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3
    {
        [[nodiscard]] auto IsStaged() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions
    {
        [[nodiscard]] auto CatalogId() const;
        auto CatalogId(param::hstring const& value) const;
        [[nodiscard]] auto AllowForcedAppRestart() const;
        auto AllowForcedAppRestart(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions2
    {
        [[nodiscard]] auto AutomaticallyDownloadAndInstallUpdateIfFound() const;
        auto AutomaticallyDownloadAndInstallUpdateIfFound(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult<D>;
    };
}
#endif
