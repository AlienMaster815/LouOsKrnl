// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Deployment_0_H
#define WINRT_Windows_Management_Deployment_0_H
namespace winrt::Windows::ApplicationModel
{
    struct Package;
    enum class PackageContentGroupState : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Management::Deployment
{
    enum class AddPackageByAppInstallerOptions : uint32_t
    {
        None = 0,
        InstallAllResources = 0x20,
        ForceTargetAppShutdown = 0x40,
        RequiredContentGroupOnly = 0x100,
        LimitToExistingPackages = 0x200,
    };
    enum class DeploymentOptions : uint32_t
    {
        None = 0,
        ForceApplicationShutdown = 0x1,
        DevelopmentMode = 0x2,
        InstallAllResources = 0x20,
        ForceTargetApplicationShutdown = 0x40,
        RequiredContentGroupOnly = 0x100,
        ForceUpdateFromAnyVersion = 0x40000,
        RetainFilesOnFailure = 0x200000,
        StageInPlace = 0x400000,
    };
    enum class DeploymentProgressState : int32_t
    {
        Queued = 0,
        Processing = 1,
    };
    enum class PackageInstallState : int32_t
    {
        NotInstalled = 0,
        Staged = 1,
        Installed = 2,
        Paused = 6,
    };
    enum class PackageState : int32_t
    {
        Normal = 0,
        LicenseInvalid = 1,
        Modified = 2,
        Tampered = 3,
    };
    enum class PackageStatus : uint32_t
    {
        OK = 0,
        LicenseIssue = 0x1,
        Modified = 0x2,
        Tampered = 0x4,
        Disabled = 0x8,
    };
    enum class PackageStubPreference : int32_t
    {
        Full = 0,
        Stub = 1,
    };
    enum class PackageTypes : uint32_t
    {
        None = 0,
        Main = 0x1,
        Framework = 0x2,
        Resource = 0x4,
        Bundle = 0x8,
        Xap = 0x10,
        Optional = 0x20,
        All = 0xffffffff,
    };
    enum class RemovalOptions : uint32_t
    {
        None = 0,
        PreserveApplicationData = 0x1000,
        PreserveRoamableApplicationData = 0x80,
        RemoveForAllUsers = 0x80000,
    };
    enum class StubPackageOption : int32_t
    {
        Default = 0,
        InstallFull = 1,
        InstallStub = 2,
        UsePreference = 3,
    };
    struct IAddPackageOptions;
    struct IDeploymentResult;
    struct IDeploymentResult2;
    struct IPackageManager;
    struct IPackageManager2;
    struct IPackageManager3;
    struct IPackageManager4;
    struct IPackageManager5;
    struct IPackageManager6;
    struct IPackageManager7;
    struct IPackageManager8;
    struct IPackageManager9;
    struct IPackageManagerDebugSettings;
    struct IPackageUserInformation;
    struct IPackageVolume;
    struct IPackageVolume2;
    struct IRegisterPackageOptions;
    struct IStagePackageOptions;
    struct AddPackageOptions;
    struct DeploymentResult;
    struct PackageManager;
    struct PackageManagerDebugSettings;
    struct PackageUserInformation;
    struct PackageVolume;
    struct RegisterPackageOptions;
    struct StagePackageOptions;
    struct DeploymentProgress;
}
namespace winrt::impl
{
    template <> struct category<Windows::Management::Deployment::IAddPackageOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IDeploymentResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IDeploymentResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManager9>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageUserInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageVolume>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IPackageVolume2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IRegisterPackageOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::IStagePackageOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Deployment::AddPackageOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::DeploymentResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageManagerDebugSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageUserInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageVolume>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::RegisterPackageOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::StagePackageOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Deployment::AddPackageByAppInstallerOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::DeploymentOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::DeploymentProgressState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageInstallState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageStubPreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::PackageTypes>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::RemovalOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::StubPackageOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::Deployment::DeploymentProgress>
    {
        using type = struct_category<Windows::Management::Deployment::DeploymentProgressState, uint32_t>;
    };
    template <> struct name<Windows::Management::Deployment::IAddPackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IAddPackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::IDeploymentResult>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IDeploymentResult" };
    };
    template <> struct name<Windows::Management::Deployment::IDeploymentResult2>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IDeploymentResult2" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager2>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager2" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager3>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager3" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager4>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager4" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager5>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager5" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager6>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager6" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager7>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager7" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager8>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager8" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManager9>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManager9" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageManagerDebugSettings" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageUserInformation>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageUserInformation" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageVolume>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageVolume" };
    };
    template <> struct name<Windows::Management::Deployment::IPackageVolume2>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IPackageVolume2" };
    };
    template <> struct name<Windows::Management::Deployment::IRegisterPackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IRegisterPackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::IStagePackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.IStagePackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::AddPackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.AddPackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::DeploymentResult>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentResult" };
    };
    template <> struct name<Windows::Management::Deployment::PackageManager>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageManager" };
    };
    template <> struct name<Windows::Management::Deployment::PackageManagerDebugSettings>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageManagerDebugSettings" };
    };
    template <> struct name<Windows::Management::Deployment::PackageUserInformation>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageUserInformation" };
    };
    template <> struct name<Windows::Management::Deployment::PackageVolume>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageVolume" };
    };
    template <> struct name<Windows::Management::Deployment::RegisterPackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.RegisterPackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::StagePackageOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.StagePackageOptions" };
    };
    template <> struct name<Windows::Management::Deployment::AddPackageByAppInstallerOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.AddPackageByAppInstallerOptions" };
    };
    template <> struct name<Windows::Management::Deployment::DeploymentOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentOptions" };
    };
    template <> struct name<Windows::Management::Deployment::DeploymentProgressState>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentProgressState" };
    };
    template <> struct name<Windows::Management::Deployment::PackageInstallState>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageInstallState" };
    };
    template <> struct name<Windows::Management::Deployment::PackageState>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageState" };
    };
    template <> struct name<Windows::Management::Deployment::PackageStatus>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageStatus" };
    };
    template <> struct name<Windows::Management::Deployment::PackageStubPreference>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageStubPreference" };
    };
    template <> struct name<Windows::Management::Deployment::PackageTypes>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.PackageTypes" };
    };
    template <> struct name<Windows::Management::Deployment::RemovalOptions>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.RemovalOptions" };
    };
    template <> struct name<Windows::Management::Deployment::StubPackageOption>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.StubPackageOption" };
    };
    template <> struct name<Windows::Management::Deployment::DeploymentProgress>
    {
        static constexpr auto & value{ L"Windows.Management.Deployment.DeploymentProgress" };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IAddPackageOptions>
    {
        static constexpr guid value{ 0x05CEE018,0xF68F,0x422B,{ 0x95,0xA4,0x66,0x67,0x9E,0xC7,0x7F,0xC0 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IDeploymentResult>
    {
        static constexpr guid value{ 0x2563B9AE,0xB77D,0x4C1F,{ 0x8A,0x7B,0x20,0xE6,0xAD,0x51,0x5E,0xF3 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IDeploymentResult2>
    {
        static constexpr guid value{ 0xFC0E715C,0x5A01,0x4BD7,{ 0xBC,0xF1,0x38,0x1C,0x8C,0x82,0xE0,0x4A } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager>
    {
        static constexpr guid value{ 0x9A7D4B65,0x5E8F,0x4FC7,{ 0xA2,0xE5,0x7F,0x69,0x25,0xCB,0x8B,0x53 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager2>
    {
        static constexpr guid value{ 0xF7AAD08D,0x0840,0x46F2,{ 0xB5,0xD8,0xCA,0xD4,0x76,0x93,0xA0,0x95 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager3>
    {
        static constexpr guid value{ 0xDAAD9948,0x36F1,0x41A7,{ 0x91,0x88,0xBC,0x26,0x3E,0x0D,0xCB,0x72 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager4>
    {
        static constexpr guid value{ 0x3C719963,0xBAB6,0x46BF,{ 0x8F,0xF7,0xDA,0x47,0x19,0x23,0x0A,0xE6 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager5>
    {
        static constexpr guid value{ 0x711F3117,0x1AFD,0x4313,{ 0x97,0x8C,0x9B,0xB6,0xE1,0xB8,0x64,0xA7 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager6>
    {
        static constexpr guid value{ 0x0847E909,0x53CD,0x4E4F,{ 0x83,0x2E,0x57,0xD1,0x80,0xF6,0xE4,0x47 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager7>
    {
        static constexpr guid value{ 0xF28654F4,0x2BA7,0x4B80,{ 0x88,0xD6,0xBE,0x15,0xF9,0xA2,0x3F,0xBA } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager8>
    {
        static constexpr guid value{ 0xB8575330,0x1298,0x4EE2,{ 0x80,0xEE,0x7F,0x65,0x9C,0x5D,0x27,0x82 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManager9>
    {
        static constexpr guid value{ 0x1AA79035,0xCC71,0x4B2E,{ 0x80,0xA6,0xC7,0x04,0x1D,0x85,0x79,0xA7 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        static constexpr guid value{ 0x1A611683,0xA988,0x4FCF,{ 0x8F,0x0F,0xCE,0x17,0x58,0x98,0xE8,0xEB } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageUserInformation>
    {
        static constexpr guid value{ 0xF6383423,0xFA09,0x4CBC,{ 0x90,0x55,0x15,0xCA,0x27,0x5E,0x2E,0x7E } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageVolume>
    {
        static constexpr guid value{ 0xCF2672C3,0x1A40,0x4450,{ 0x97,0x39,0x2A,0xCE,0x2E,0x89,0x88,0x53 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IPackageVolume2>
    {
        static constexpr guid value{ 0x46ABCF2E,0x9DD4,0x47A2,{ 0xAB,0x8C,0xC6,0x40,0x83,0x49,0xBC,0xD8 } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IRegisterPackageOptions>
    {
        static constexpr guid value{ 0x677112A7,0x50D4,0x496C,{ 0x84,0x15,0x06,0x02,0xB4,0xC6,0xD3,0xBF } };
    };
    template <> struct guid_storage<Windows::Management::Deployment::IStagePackageOptions>
    {
        static constexpr guid value{ 0x0B110C9C,0xB95D,0x4C56,{ 0xBD,0x36,0x6D,0x65,0x68,0x00,0xD0,0x6B } };
    };
    template <> struct default_interface<Windows::Management::Deployment::AddPackageOptions>
    {
        using type = Windows::Management::Deployment::IAddPackageOptions;
    };
    template <> struct default_interface<Windows::Management::Deployment::DeploymentResult>
    {
        using type = Windows::Management::Deployment::IDeploymentResult;
    };
    template <> struct default_interface<Windows::Management::Deployment::PackageManager>
    {
        using type = Windows::Management::Deployment::IPackageManager;
    };
    template <> struct default_interface<Windows::Management::Deployment::PackageManagerDebugSettings>
    {
        using type = Windows::Management::Deployment::IPackageManagerDebugSettings;
    };
    template <> struct default_interface<Windows::Management::Deployment::PackageUserInformation>
    {
        using type = Windows::Management::Deployment::IPackageUserInformation;
    };
    template <> struct default_interface<Windows::Management::Deployment::PackageVolume>
    {
        using type = Windows::Management::Deployment::IPackageVolume;
    };
    template <> struct default_interface<Windows::Management::Deployment::RegisterPackageOptions>
    {
        using type = Windows::Management::Deployment::IRegisterPackageOptions;
    };
    template <> struct default_interface<Windows::Management::Deployment::StagePackageOptions>
    {
        using type = Windows::Management::Deployment::IStagePackageOptions;
    };
    template <> struct abi<Windows::Management::Deployment::IAddPackageOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DependencyPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetVolume(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetVolume(void*) noexcept = 0;
            virtual int32_t __stdcall get_OptionalPackageFamilyNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_OptionalPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_RelatedPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExternalLocationUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExternalLocationUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_StubPackageOption(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StubPackageOption(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeveloperMode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DeveloperMode(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceAppShutdown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceAppShutdown(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceTargetAppShutdown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceTargetAppShutdown(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceUpdateFromAnyVersion(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceUpdateFromAnyVersion(bool) noexcept = 0;
            virtual int32_t __stdcall get_InstallAllResources(bool*) noexcept = 0;
            virtual int32_t __stdcall put_InstallAllResources(bool) noexcept = 0;
            virtual int32_t __stdcall get_RequiredContentGroupOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequiredContentGroupOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_RetainFilesOnFailure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RetainFilesOnFailure(bool) noexcept = 0;
            virtual int32_t __stdcall get_StageInPlace(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StageInPlace(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowUnsigned(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowUnsigned(bool) noexcept = 0;
            virtual int32_t __stdcall get_DeferRegistrationWhenPackagesAreInUse(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DeferRegistrationWhenPackagesAreInUse(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IDeploymentResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorText(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IDeploymentResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRegistered(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddPackageAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall UpdatePackageAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RemovePackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterPackageAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackages(void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByNamePublisher(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdNamePublisher(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindUsers(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPackageState(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall FindPackageByPackageFullName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CleanupPackageForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByPackageFamilyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyName(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackageByUserSecurityIdPackageFullName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RemovePackageWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageWithOptionsAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterPackageByFullNameAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesWithPackageTypes(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdWithPackageTypes(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByNamePublisherWithPackageTypes(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StageUserDataAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddPackageVolumeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddPackageToVolumeAsync(void*, void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearPackageStatus(void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall RegisterPackageWithAppDataVolumeAsync(void*, void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackageVolumeByName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackageVolumes(void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultPackageVolume(void**) noexcept = 0;
            virtual int32_t __stdcall MovePackageToVolumeAsync(void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemovePackageVolumeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultPackageVolume(void*) noexcept = 0;
            virtual int32_t __stdcall SetPackageStatus(void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetPackageVolumeOfflineAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPackageVolumeOnlineAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageToVolumeAsync(void*, void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StageUserDataWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPackageVolumesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddPackageToVolumeAndOptionalPackagesAsync(void*, void*, uint32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageToVolumeAndOptionalPackagesAsync(void*, void*, uint32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterPackageByFamilyNameAndOptionalPackagesAsync(void*, void*, uint32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_DebugSettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProvisionPackageForAllUsersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddPackageByAppInstallerFileAsync(void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAddPackageByAppInstallerFileAsync(void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddPackageToVolumeAndRelatedSetAsync(void*, void*, uint32_t, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageToVolumeAndRelatedSetAsync(void*, void*, uint32_t, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAddPackageAsync(void*, void*, uint32_t, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAddPackageAndRelatedSetAsync(void*, void*, uint32_t, void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DeprovisionPackageForAllUsersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManager9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindProvisionedPackages(void**) noexcept = 0;
            virtual int32_t __stdcall AddPackageByUriAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StagePackageByUriAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterPackageByUriAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterPackagesByFullNameAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPackageStubPreference(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall GetPackageStubPreference(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetContentGroupStateAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetContentGroupStateWithPercentageAsync(void*, void*, int32_t, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageUserInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserSecurityId(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageVolume>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsOffline(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSystemVolume(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MountPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageStorePath(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportsHardLinks(bool*) noexcept = 0;
            virtual int32_t __stdcall FindPackages(void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByNamePublisher(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByPackageFamilyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesWithPackageTypes(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByNamePublisherWithPackagesTypes(uint32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackageByPackageFullName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdNamePublisher(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyName(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdWithPackageTypes(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(void*, uint32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackageByUserSecurityIdPackageFullName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IPackageVolume2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFullTrustPackageSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAppxInstallSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetAvailableSpaceAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IRegisterPackageOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DependencyPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppDataVolume(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppDataVolume(void*) noexcept = 0;
            virtual int32_t __stdcall get_OptionalPackageFamilyNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExternalLocationUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExternalLocationUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeveloperMode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DeveloperMode(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceAppShutdown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceAppShutdown(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceTargetAppShutdown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceTargetAppShutdown(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceUpdateFromAnyVersion(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceUpdateFromAnyVersion(bool) noexcept = 0;
            virtual int32_t __stdcall get_InstallAllResources(bool*) noexcept = 0;
            virtual int32_t __stdcall put_InstallAllResources(bool) noexcept = 0;
            virtual int32_t __stdcall get_StageInPlace(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StageInPlace(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowUnsigned(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowUnsigned(bool) noexcept = 0;
            virtual int32_t __stdcall get_DeferRegistrationWhenPackagesAreInUse(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DeferRegistrationWhenPackagesAreInUse(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::IStagePackageOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DependencyPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetVolume(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetVolume(void*) noexcept = 0;
            virtual int32_t __stdcall get_OptionalPackageFamilyNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_OptionalPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_RelatedPackageUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExternalLocationUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExternalLocationUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_StubPackageOption(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StubPackageOption(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeveloperMode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DeveloperMode(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForceUpdateFromAnyVersion(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceUpdateFromAnyVersion(bool) noexcept = 0;
            virtual int32_t __stdcall get_InstallAllResources(bool*) noexcept = 0;
            virtual int32_t __stdcall put_InstallAllResources(bool) noexcept = 0;
            virtual int32_t __stdcall get_RequiredContentGroupOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequiredContentGroupOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_StageInPlace(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StageInPlace(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowUnsigned(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowUnsigned(bool) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IAddPackageOptions
    {
        [[nodiscard]] auto DependencyPackageUris() const;
        [[nodiscard]] auto TargetVolume() const;
        auto TargetVolume(Windows::Management::Deployment::PackageVolume const& value) const;
        [[nodiscard]] auto OptionalPackageFamilyNames() const;
        [[nodiscard]] auto OptionalPackageUris() const;
        [[nodiscard]] auto RelatedPackageUris() const;
        [[nodiscard]] auto ExternalLocationUri() const;
        auto ExternalLocationUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto StubPackageOption() const;
        auto StubPackageOption(Windows::Management::Deployment::StubPackageOption const& value) const;
        [[nodiscard]] auto DeveloperMode() const;
        auto DeveloperMode(bool value) const;
        [[nodiscard]] auto ForceAppShutdown() const;
        auto ForceAppShutdown(bool value) const;
        [[nodiscard]] auto ForceTargetAppShutdown() const;
        auto ForceTargetAppShutdown(bool value) const;
        [[nodiscard]] auto ForceUpdateFromAnyVersion() const;
        auto ForceUpdateFromAnyVersion(bool value) const;
        [[nodiscard]] auto InstallAllResources() const;
        auto InstallAllResources(bool value) const;
        [[nodiscard]] auto RequiredContentGroupOnly() const;
        auto RequiredContentGroupOnly(bool value) const;
        [[nodiscard]] auto RetainFilesOnFailure() const;
        auto RetainFilesOnFailure(bool value) const;
        [[nodiscard]] auto StageInPlace() const;
        auto StageInPlace(bool value) const;
        [[nodiscard]] auto AllowUnsigned() const;
        auto AllowUnsigned(bool value) const;
        [[nodiscard]] auto DeferRegistrationWhenPackagesAreInUse() const;
        auto DeferRegistrationWhenPackagesAreInUse(bool value) const;
    };
    template <> struct consume<Windows::Management::Deployment::IAddPackageOptions>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IAddPackageOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IDeploymentResult
    {
        [[nodiscard]] auto ErrorText() const;
        [[nodiscard]] auto ActivityId() const;
        [[nodiscard]] auto ExtendedErrorCode() const;
    };
    template <> struct consume<Windows::Management::Deployment::IDeploymentResult>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IDeploymentResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IDeploymentResult2
    {
        [[nodiscard]] auto IsRegistered() const;
    };
    template <> struct consume<Windows::Management::Deployment::IDeploymentResult2>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IDeploymentResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager
    {
        auto AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
        auto UpdatePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
        auto RemovePackageAsync(param::hstring const& packageFullName) const;
        auto StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris) const;
        auto RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
        auto FindPackages() const;
        auto FindPackagesForUser(param::hstring const& userSecurityId) const;
        auto FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindUsers(param::hstring const& packageFullName) const;
        auto SetPackageState(param::hstring const& packageFullName, Windows::Management::Deployment::PackageState const& packageState) const;
        auto FindPackage(param::hstring const& packageFullName) const;
        auto CleanupPackageForUserAsync(param::hstring const& packageName, param::hstring const& userSecurityId) const;
        auto FindPackages(param::hstring const& packageFamilyName) const;
        auto FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const;
        auto FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager2
    {
        auto RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const;
        auto StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
        auto RegisterPackageByFullNameAsync(param::hstring const& mainPackageFullName, param::async_iterable<hstring> const& dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
        auto FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesWithPackageTypes(param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesWithPackageTypes(param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto StageUserDataAsync(param::hstring const& packageFullName) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager2>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager3
    {
        auto AddPackageVolumeAsync(param::hstring const& packageStorePath) const;
        auto AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto ClearPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const;
        auto RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume) const;
        auto FindPackageVolume(param::hstring const& volumeName) const;
        auto FindPackageVolumes() const;
        auto GetDefaultPackageVolume() const;
        auto MovePackageToVolumeAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto RemovePackageVolumeAsync(Windows::Management::Deployment::PackageVolume const& volume) const;
        auto SetDefaultPackageVolume(Windows::Management::Deployment::PackageVolume const& volume) const;
        auto SetPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const;
        auto SetPackageVolumeOfflineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const;
        auto SetPackageVolumeOnlineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const;
        auto StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto StageUserDataAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager3>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager3<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager4
    {
        auto GetPackageVolumesAsync() const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager4>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager4<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager5
    {
        auto AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const;
        auto StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const;
        auto RegisterPackageByFamilyNameAsync(param::hstring const& mainPackageFamilyName, param::async_iterable<hstring> const& dependencyPackageFamilyNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames) const;
        [[nodiscard]] auto DebugSettings() const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager5>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager5<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager6
    {
        auto ProvisionPackageForAllUsersAsync(param::hstring const& packageFamilyName) const;
        auto AddPackageByAppInstallerFileAsync(Windows::Foundation::Uri const& appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto RequestAddPackageByAppInstallerFileAsync(Windows::Foundation::Uri const& appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const;
        auto StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const;
        auto RequestAddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager6>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager6<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager7
    {
        auto RequestAddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager7>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager7<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager8
    {
        auto DeprovisionPackageForAllUsersAsync(param::hstring const& packageFamilyName) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager8>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager8<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManager9
    {
        auto FindProvisionedPackages() const;
        auto AddPackageByUriAsync(Windows::Foundation::Uri const& packageUri, Windows::Management::Deployment::AddPackageOptions const& options) const;
        auto StagePackageByUriAsync(Windows::Foundation::Uri const& packageUri, Windows::Management::Deployment::StagePackageOptions const& options) const;
        auto RegisterPackageByUriAsync(Windows::Foundation::Uri const& manifestUri, Windows::Management::Deployment::RegisterPackageOptions const& options) const;
        auto RegisterPackagesByFullNameAsync(param::async_iterable<hstring> const& packageFullNames, Windows::Management::Deployment::RegisterPackageOptions const& options) const;
        auto SetPackageStubPreference(param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageStubPreference const& useStub) const;
        auto GetPackageStubPreference(param::hstring const& packageFamilyName) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManager9>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManager9<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageManagerDebugSettings
    {
        auto SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state) const;
        auto SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state, double completionPercentage) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageUserInformation
    {
        [[nodiscard]] auto UserSecurityId() const;
        [[nodiscard]] auto InstallState() const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageUserInformation>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageUserInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageVolume
    {
        [[nodiscard]] auto IsOffline() const;
        [[nodiscard]] auto IsSystemVolume() const;
        [[nodiscard]] auto MountPoint() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto PackageStorePath() const;
        [[nodiscard]] auto SupportsHardLinks() const;
        auto FindPackages() const;
        auto FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindPackages(param::hstring const& packageFamilyName) const;
        auto FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const;
        auto FindPackage(param::hstring const& packageFullName) const;
        auto FindPackagesForUser(param::hstring const& userSecurityId) const;
        auto FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const;
        auto FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const;
        auto FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageVolume>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageVolume<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IPackageVolume2
    {
        [[nodiscard]] auto IsFullTrustPackageSupported() const;
        [[nodiscard]] auto IsAppxInstallSupported() const;
        auto GetAvailableSpaceAsync() const;
    };
    template <> struct consume<Windows::Management::Deployment::IPackageVolume2>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IPackageVolume2<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IRegisterPackageOptions
    {
        [[nodiscard]] auto DependencyPackageUris() const;
        [[nodiscard]] auto AppDataVolume() const;
        auto AppDataVolume(Windows::Management::Deployment::PackageVolume const& value) const;
        [[nodiscard]] auto OptionalPackageFamilyNames() const;
        [[nodiscard]] auto ExternalLocationUri() const;
        auto ExternalLocationUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto DeveloperMode() const;
        auto DeveloperMode(bool value) const;
        [[nodiscard]] auto ForceAppShutdown() const;
        auto ForceAppShutdown(bool value) const;
        [[nodiscard]] auto ForceTargetAppShutdown() const;
        auto ForceTargetAppShutdown(bool value) const;
        [[nodiscard]] auto ForceUpdateFromAnyVersion() const;
        auto ForceUpdateFromAnyVersion(bool value) const;
        [[nodiscard]] auto InstallAllResources() const;
        auto InstallAllResources(bool value) const;
        [[nodiscard]] auto StageInPlace() const;
        auto StageInPlace(bool value) const;
        [[nodiscard]] auto AllowUnsigned() const;
        auto AllowUnsigned(bool value) const;
        [[nodiscard]] auto DeferRegistrationWhenPackagesAreInUse() const;
        auto DeferRegistrationWhenPackagesAreInUse(bool value) const;
    };
    template <> struct consume<Windows::Management::Deployment::IRegisterPackageOptions>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IRegisterPackageOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_IStagePackageOptions
    {
        [[nodiscard]] auto DependencyPackageUris() const;
        [[nodiscard]] auto TargetVolume() const;
        auto TargetVolume(Windows::Management::Deployment::PackageVolume const& value) const;
        [[nodiscard]] auto OptionalPackageFamilyNames() const;
        [[nodiscard]] auto OptionalPackageUris() const;
        [[nodiscard]] auto RelatedPackageUris() const;
        [[nodiscard]] auto ExternalLocationUri() const;
        auto ExternalLocationUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto StubPackageOption() const;
        auto StubPackageOption(Windows::Management::Deployment::StubPackageOption const& value) const;
        [[nodiscard]] auto DeveloperMode() const;
        auto DeveloperMode(bool value) const;
        [[nodiscard]] auto ForceUpdateFromAnyVersion() const;
        auto ForceUpdateFromAnyVersion(bool value) const;
        [[nodiscard]] auto InstallAllResources() const;
        auto InstallAllResources(bool value) const;
        [[nodiscard]] auto RequiredContentGroupOnly() const;
        auto RequiredContentGroupOnly(bool value) const;
        [[nodiscard]] auto StageInPlace() const;
        auto StageInPlace(bool value) const;
        [[nodiscard]] auto AllowUnsigned() const;
        auto AllowUnsigned(bool value) const;
    };
    template <> struct consume<Windows::Management::Deployment::IStagePackageOptions>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_IStagePackageOptions<D>;
    };
    struct struct_Windows_Management_Deployment_DeploymentProgress
    {
        int32_t state;
        uint32_t percentage;
    };
    template <> struct abi<Windows::Management::Deployment::DeploymentProgress>
    {
        using type = struct_Windows_Management_Deployment_DeploymentProgress;
    };
}
#endif
