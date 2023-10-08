// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Profile_0_H
#define WINRT_Windows_System_Profile_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::System::Profile
{
    enum class PlatformDataCollectionLevel : int32_t
    {
        Security = 0,
        Basic = 1,
        Enhanced = 2,
        Full = 3,
    };
    enum class SystemIdentificationSource : int32_t
    {
        None = 0,
        Tpm = 1,
        Uefi = 2,
        Registry = 3,
    };
    enum class SystemOutOfBoxExperienceState : int32_t
    {
        NotStarted = 0,
        InProgress = 1,
        Completed = 2,
    };
    enum class UnsupportedAppRequirementReasons : uint32_t
    {
        Unknown = 0,
        DeniedBySystem = 0x1,
    };
    struct IAnalyticsInfoStatics;
    struct IAnalyticsInfoStatics2;
    struct IAnalyticsVersionInfo;
    struct IAppApplicabilityStatics;
    struct IEducationSettingsStatics;
    struct IHardwareIdentificationStatics;
    struct IHardwareToken;
    struct IKnownRetailInfoPropertiesStatics;
    struct IPlatformDiagnosticsAndUsageDataSettingsStatics;
    struct IRetailInfoStatics;
    struct ISharedModeSettingsStatics;
    struct ISharedModeSettingsStatics2;
    struct ISystemIdentificationInfo;
    struct ISystemIdentificationStatics;
    struct ISystemSetupInfoStatics;
    struct IUnsupportedAppRequirement;
    struct IWindowsIntegrityPolicyStatics;
    struct AnalyticsInfo;
    struct AnalyticsVersionInfo;
    struct AppApplicability;
    struct EducationSettings;
    struct HardwareIdentification;
    struct HardwareToken;
    struct KnownRetailInfoProperties;
    struct PlatformDiagnosticsAndUsageDataSettings;
    struct RetailInfo;
    struct SharedModeSettings;
    struct SystemIdentification;
    struct SystemIdentificationInfo;
    struct SystemSetupInfo;
    struct UnsupportedAppRequirement;
    struct WindowsIntegrityPolicy;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Profile::IAnalyticsInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IAnalyticsVersionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IAppApplicabilityStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IEducationSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IHardwareIdentificationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IHardwareToken>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IRetailInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::ISharedModeSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::ISystemIdentificationInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::ISystemIdentificationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::ISystemSetupInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IUnsupportedAppRequirement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::AnalyticsInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::AnalyticsVersionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::AppApplicability>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::EducationSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::HardwareIdentification>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::HardwareToken>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::KnownRetailInfoProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::RetailInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SharedModeSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemIdentification>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemIdentificationInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemSetupInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::UnsupportedAppRequirement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::WindowsIntegrityPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::PlatformDataCollectionLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Profile::SystemIdentificationSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Profile::SystemOutOfBoxExperienceState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::System::Profile::UnsupportedAppRequirementReasons>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::System::Profile::IAnalyticsInfoStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IAnalyticsInfoStatics" };
    };
    template <> struct name<Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IAnalyticsInfoStatics2" };
    };
    template <> struct name<Windows::System::Profile::IAnalyticsVersionInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IAnalyticsVersionInfo" };
    };
    template <> struct name<Windows::System::Profile::IAppApplicabilityStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IAppApplicabilityStatics" };
    };
    template <> struct name<Windows::System::Profile::IEducationSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IEducationSettingsStatics" };
    };
    template <> struct name<Windows::System::Profile::IHardwareIdentificationStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IHardwareIdentificationStatics" };
    };
    template <> struct name<Windows::System::Profile::IHardwareToken>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IHardwareToken" };
    };
    template <> struct name<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IKnownRetailInfoPropertiesStatics" };
    };
    template <> struct name<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics" };
    };
    template <> struct name<Windows::System::Profile::IRetailInfoStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IRetailInfoStatics" };
    };
    template <> struct name<Windows::System::Profile::ISharedModeSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.ISharedModeSettingsStatics" };
    };
    template <> struct name<Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        static constexpr auto & value{ L"Windows.System.Profile.ISharedModeSettingsStatics2" };
    };
    template <> struct name<Windows::System::Profile::ISystemIdentificationInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.ISystemIdentificationInfo" };
    };
    template <> struct name<Windows::System::Profile::ISystemIdentificationStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.ISystemIdentificationStatics" };
    };
    template <> struct name<Windows::System::Profile::ISystemSetupInfoStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.ISystemSetupInfoStatics" };
    };
    template <> struct name<Windows::System::Profile::IUnsupportedAppRequirement>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IUnsupportedAppRequirement" };
    };
    template <> struct name<Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.IWindowsIntegrityPolicyStatics" };
    };
    template <> struct name<Windows::System::Profile::AnalyticsInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.AnalyticsInfo" };
    };
    template <> struct name<Windows::System::Profile::AnalyticsVersionInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.AnalyticsVersionInfo" };
    };
    template <> struct name<Windows::System::Profile::AppApplicability>
    {
        static constexpr auto & value{ L"Windows.System.Profile.AppApplicability" };
    };
    template <> struct name<Windows::System::Profile::EducationSettings>
    {
        static constexpr auto & value{ L"Windows.System.Profile.EducationSettings" };
    };
    template <> struct name<Windows::System::Profile::HardwareIdentification>
    {
        static constexpr auto & value{ L"Windows.System.Profile.HardwareIdentification" };
    };
    template <> struct name<Windows::System::Profile::HardwareToken>
    {
        static constexpr auto & value{ L"Windows.System.Profile.HardwareToken" };
    };
    template <> struct name<Windows::System::Profile::KnownRetailInfoProperties>
    {
        static constexpr auto & value{ L"Windows.System.Profile.KnownRetailInfoProperties" };
    };
    template <> struct name<Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings>
    {
        static constexpr auto & value{ L"Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings" };
    };
    template <> struct name<Windows::System::Profile::RetailInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.RetailInfo" };
    };
    template <> struct name<Windows::System::Profile::SharedModeSettings>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SharedModeSettings" };
    };
    template <> struct name<Windows::System::Profile::SystemIdentification>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemIdentification" };
    };
    template <> struct name<Windows::System::Profile::SystemIdentificationInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemIdentificationInfo" };
    };
    template <> struct name<Windows::System::Profile::SystemSetupInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemSetupInfo" };
    };
    template <> struct name<Windows::System::Profile::UnsupportedAppRequirement>
    {
        static constexpr auto & value{ L"Windows.System.Profile.UnsupportedAppRequirement" };
    };
    template <> struct name<Windows::System::Profile::WindowsIntegrityPolicy>
    {
        static constexpr auto & value{ L"Windows.System.Profile.WindowsIntegrityPolicy" };
    };
    template <> struct name<Windows::System::Profile::PlatformDataCollectionLevel>
    {
        static constexpr auto & value{ L"Windows.System.Profile.PlatformDataCollectionLevel" };
    };
    template <> struct name<Windows::System::Profile::SystemIdentificationSource>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemIdentificationSource" };
    };
    template <> struct name<Windows::System::Profile::SystemOutOfBoxExperienceState>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemOutOfBoxExperienceState" };
    };
    template <> struct name<Windows::System::Profile::UnsupportedAppRequirementReasons>
    {
        static constexpr auto & value{ L"Windows.System.Profile.UnsupportedAppRequirementReasons" };
    };
    template <> struct guid_storage<Windows::System::Profile::IAnalyticsInfoStatics>
    {
        static constexpr guid value{ 0x1D5EE066,0x188D,0x5BA9,{ 0x43,0x87,0xAC,0xAE,0xB0,0xE7,0xE3,0x05 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        static constexpr guid value{ 0x101704EA,0xA7F9,0x46D2,{ 0xAB,0x94,0x01,0x68,0x65,0xAF,0xDB,0x25 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IAnalyticsVersionInfo>
    {
        static constexpr guid value{ 0x926130B8,0x9955,0x4C74,{ 0xBD,0xC1,0x7C,0xD0,0xDE,0xCF,0x9B,0x03 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IAppApplicabilityStatics>
    {
        static constexpr guid value{ 0x1664A082,0x0F38,0x5C99,{ 0x83,0xE4,0x48,0x99,0x59,0x70,0x86,0x1C } };
    };
    template <> struct guid_storage<Windows::System::Profile::IEducationSettingsStatics>
    {
        static constexpr guid value{ 0xFC53F0EF,0x4D3E,0x4E13,{ 0x9B,0x23,0x50,0x5F,0x4D,0x09,0x1E,0x92 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IHardwareIdentificationStatics>
    {
        static constexpr guid value{ 0x971260E0,0xF170,0x4A42,{ 0xBD,0x55,0xA9,0x00,0xB2,0x12,0xDA,0xE2 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IHardwareToken>
    {
        static constexpr guid value{ 0x28F6D4C0,0xFB12,0x40A4,{ 0x81,0x67,0x7F,0x4E,0x03,0xD2,0x72,0x4C } };
    };
    template <> struct guid_storage<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        static constexpr guid value{ 0x99571178,0x500F,0x487E,{ 0x8E,0x75,0x29,0xE5,0x51,0x72,0x87,0x12 } };
    };
    template <> struct guid_storage<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        static constexpr guid value{ 0xB6E24C1B,0x7B1C,0x4B32,{ 0x8C,0x62,0xA6,0x65,0x97,0xCE,0x72,0x3A } };
    };
    template <> struct guid_storage<Windows::System::Profile::IRetailInfoStatics>
    {
        static constexpr guid value{ 0x0712C6B8,0x8B92,0x4F2A,{ 0x84,0x99,0x03,0x1F,0x17,0x98,0xD6,0xEF } };
    };
    template <> struct guid_storage<Windows::System::Profile::ISharedModeSettingsStatics>
    {
        static constexpr guid value{ 0x893DF40E,0xCAD6,0x4D50,{ 0x8C,0x49,0x6F,0xCF,0xC0,0x3E,0xDB,0x29 } };
    };
    template <> struct guid_storage<Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        static constexpr guid value{ 0x608988A4,0xCCF1,0x4EE8,{ 0xA5,0xE2,0xFD,0x6A,0x1D,0x0C,0xFA,0xC8 } };
    };
    template <> struct guid_storage<Windows::System::Profile::ISystemIdentificationInfo>
    {
        static constexpr guid value{ 0x0C659E7D,0xC3C2,0x4D33,{ 0xA2,0xDF,0x21,0xBC,0x41,0x91,0x6E,0xB3 } };
    };
    template <> struct guid_storage<Windows::System::Profile::ISystemIdentificationStatics>
    {
        static constexpr guid value{ 0x5581F42A,0xD3DF,0x4D93,{ 0xA3,0x7D,0xC4,0x1A,0x61,0x6C,0x6D,0x01 } };
    };
    template <> struct guid_storage<Windows::System::Profile::ISystemSetupInfoStatics>
    {
        static constexpr guid value{ 0x2C9620A8,0x1D88,0x5E2D,{ 0xA3,0x24,0xA5,0x43,0xAF,0x42,0x47,0xEE } };
    };
    template <> struct guid_storage<Windows::System::Profile::IUnsupportedAppRequirement>
    {
        static constexpr guid value{ 0x6182445C,0x894B,0x5CBC,{ 0x89,0x76,0xA9,0x8E,0x0A,0x9B,0x99,0x8D } };
    };
    template <> struct guid_storage<Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        static constexpr guid value{ 0x7D1D81DB,0x8D63,0x4789,{ 0x9E,0xA5,0xDD,0xCF,0x65,0xA9,0x4F,0x3C } };
    };
    template <> struct default_interface<Windows::System::Profile::AnalyticsVersionInfo>
    {
        using type = Windows::System::Profile::IAnalyticsVersionInfo;
    };
    template <> struct default_interface<Windows::System::Profile::HardwareToken>
    {
        using type = Windows::System::Profile::IHardwareToken;
    };
    template <> struct default_interface<Windows::System::Profile::SystemIdentificationInfo>
    {
        using type = Windows::System::Profile::ISystemIdentificationInfo;
    };
    template <> struct default_interface<Windows::System::Profile::UnsupportedAppRequirement>
    {
        using type = Windows::System::Profile::IUnsupportedAppRequirement;
    };
    template <> struct abi<Windows::System::Profile::IAnalyticsInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VersionInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceForm(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSystemPropertiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IAnalyticsVersionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceFamily(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceFamilyVersion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IAppApplicabilityStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUnsupportedAppRequirements(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IEducationSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEducationEnvironment(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IHardwareIdentificationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPackageSpecificToken(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IHardwareToken>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Signature(void**) noexcept = 0;
            virtual int32_t __stdcall get_Certificate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RetailAccessCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManufacturerName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModelName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayModelName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Price(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFeatured(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormFactor(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScreenSize(void**) noexcept = 0;
            virtual int32_t __stdcall get_Weight(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_BatteryLifeDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProcessorDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_Memory(void**) noexcept = 0;
            virtual int32_t __stdcall get_StorageDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_GraphicsDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrontCameraDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_RearCameraDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasNfc(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasSdSlot(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasOpticalDrive(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOfficeInstalled(void**) noexcept = 0;
            virtual int32_t __stdcall get_WindowsEdition(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_CollectionLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CollectionLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CanCollectDiagnostics(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IRetailInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDemoModeEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::ISharedModeSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldAvoidLocalStorage(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::ISystemIdentificationInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Source(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::ISystemIdentificationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSystemIdForPublisher(void**) noexcept = 0;
            virtual int32_t __stdcall GetSystemIdForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::ISystemSetupInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutOfBoxExperienceState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_OutOfBoxExperienceStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OutOfBoxExperienceStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IUnsupportedAppRequirement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Requirement(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reasons(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabledForTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDisable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisableSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall add_PolicyChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PolicyChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Profile_IAnalyticsInfoStatics
    {
        [[nodiscard]] auto VersionInfo() const;
        [[nodiscard]] auto DeviceForm() const;
    };
    template <> struct consume<Windows::System::Profile::IAnalyticsInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IAnalyticsInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IAnalyticsInfoStatics2
    {
        auto GetSystemPropertiesAsync(param::async_iterable<hstring> const& attributeNames) const;
    };
    template <> struct consume<Windows::System::Profile::IAnalyticsInfoStatics2>
    {
        template <typename D> using type = consume_Windows_System_Profile_IAnalyticsInfoStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IAnalyticsVersionInfo
    {
        [[nodiscard]] auto DeviceFamily() const;
        [[nodiscard]] auto DeviceFamilyVersion() const;
    };
    template <> struct consume<Windows::System::Profile::IAnalyticsVersionInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_IAnalyticsVersionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IAppApplicabilityStatics
    {
        auto GetUnsupportedAppRequirements(param::iterable<hstring> const& capabilities) const;
    };
    template <> struct consume<Windows::System::Profile::IAppApplicabilityStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IAppApplicabilityStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IEducationSettingsStatics
    {
        [[nodiscard]] auto IsEducationEnvironment() const;
    };
    template <> struct consume<Windows::System::Profile::IEducationSettingsStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IEducationSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IHardwareIdentificationStatics
    {
        auto GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce) const;
    };
    template <> struct consume<Windows::System::Profile::IHardwareIdentificationStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IHardwareIdentificationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IHardwareToken
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Signature() const;
        [[nodiscard]] auto Certificate() const;
    };
    template <> struct consume<Windows::System::Profile::IHardwareToken>
    {
        template <typename D> using type = consume_Windows_System_Profile_IHardwareToken<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics
    {
        [[nodiscard]] auto RetailAccessCode() const;
        [[nodiscard]] auto ManufacturerName() const;
        [[nodiscard]] auto ModelName() const;
        [[nodiscard]] auto DisplayModelName() const;
        [[nodiscard]] auto Price() const;
        [[nodiscard]] auto IsFeatured() const;
        [[nodiscard]] auto FormFactor() const;
        [[nodiscard]] auto ScreenSize() const;
        [[nodiscard]] auto Weight() const;
        [[nodiscard]] auto DisplayDescription() const;
        [[nodiscard]] auto BatteryLifeDescription() const;
        [[nodiscard]] auto ProcessorDescription() const;
        [[nodiscard]] auto Memory() const;
        [[nodiscard]] auto StorageDescription() const;
        [[nodiscard]] auto GraphicsDescription() const;
        [[nodiscard]] auto FrontCameraDescription() const;
        [[nodiscard]] auto RearCameraDescription() const;
        [[nodiscard]] auto HasNfc() const;
        [[nodiscard]] auto HasSdSlot() const;
        [[nodiscard]] auto HasOpticalDrive() const;
        [[nodiscard]] auto IsOfficeInstalled() const;
        [[nodiscard]] auto WindowsEdition() const;
    };
    template <> struct consume<Windows::System::Profile::IKnownRetailInfoPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IKnownRetailInfoPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics
    {
        [[nodiscard]] auto CollectionLevel() const;
        auto CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using CollectionLevelChanged_revoker = impl::event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics, &impl::abi_t<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>::remove_CollectionLevelChanged>;
        CollectionLevelChanged_revoker CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto CollectionLevelChanged(winrt::event_token const& token) const noexcept;
        auto CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level) const;
    };
    template <> struct consume<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IRetailInfoStatics
    {
        [[nodiscard]] auto IsDemoModeEnabled() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::System::Profile::IRetailInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IRetailInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_ISharedModeSettingsStatics
    {
        [[nodiscard]] auto IsEnabled() const;
    };
    template <> struct consume<Windows::System::Profile::ISharedModeSettingsStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_ISharedModeSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_ISharedModeSettingsStatics2
    {
        [[nodiscard]] auto ShouldAvoidLocalStorage() const;
    };
    template <> struct consume<Windows::System::Profile::ISharedModeSettingsStatics2>
    {
        template <typename D> using type = consume_Windows_System_Profile_ISharedModeSettingsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_ISystemIdentificationInfo
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Source() const;
    };
    template <> struct consume<Windows::System::Profile::ISystemIdentificationInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_ISystemIdentificationInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_ISystemIdentificationStatics
    {
        auto GetSystemIdForPublisher() const;
        auto GetSystemIdForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::System::Profile::ISystemIdentificationStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_ISystemIdentificationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_ISystemSetupInfoStatics
    {
        [[nodiscard]] auto OutOfBoxExperienceState() const;
        auto OutOfBoxExperienceStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using OutOfBoxExperienceStateChanged_revoker = impl::event_revoker<Windows::System::Profile::ISystemSetupInfoStatics, &impl::abi_t<Windows::System::Profile::ISystemSetupInfoStatics>::remove_OutOfBoxExperienceStateChanged>;
        OutOfBoxExperienceStateChanged_revoker OutOfBoxExperienceStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto OutOfBoxExperienceStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Profile::ISystemSetupInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_ISystemSetupInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IUnsupportedAppRequirement
    {
        [[nodiscard]] auto Requirement() const;
        [[nodiscard]] auto Reasons() const;
    };
    template <> struct consume<Windows::System::Profile::IUnsupportedAppRequirement>
    {
        template <typename D> using type = consume_Windows_System_Profile_IUnsupportedAppRequirement<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics
    {
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto IsEnabledForTrial() const;
        [[nodiscard]] auto CanDisable() const;
        [[nodiscard]] auto IsDisableSupported() const;
        auto PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PolicyChanged_revoker = impl::event_revoker<Windows::System::Profile::IWindowsIntegrityPolicyStatics, &impl::abi_t<Windows::System::Profile::IWindowsIntegrityPolicyStatics>::remove_PolicyChanged>;
        PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto PolicyChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Profile::IWindowsIntegrityPolicyStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_IWindowsIntegrityPolicyStatics<D>;
    };
}
#endif
