// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Deployment_2_H
#define WINRT_Windows_Management_Deployment_2_H
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Management.Deployment.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Deployment
{
    struct DeploymentProgress
    {
        Windows::Management::Deployment::DeploymentProgressState state;
        uint32_t percentage;
    };
    inline bool operator==(DeploymentProgress const& left, DeploymentProgress const& right) noexcept
    {
        return left.state == right.state && left.percentage == right.percentage;
    }
    inline bool operator!=(DeploymentProgress const& left, DeploymentProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AddPackageOptions : Windows::Management::Deployment::IAddPackageOptions
    {
        AddPackageOptions(std::nullptr_t) noexcept {}
        AddPackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IAddPackageOptions(ptr, take_ownership_from_abi) {}
        AddPackageOptions();
    };
    struct __declspec(empty_bases) AppInstallerManager : Windows::Management::Deployment::IAppInstallerManager
    {
        AppInstallerManager(std::nullptr_t) noexcept {}
        AppInstallerManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IAppInstallerManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForSystem();
    };
    struct __declspec(empty_bases) AutoUpdateSettingsOptions : Windows::Management::Deployment::IAutoUpdateSettingsOptions
    {
        AutoUpdateSettingsOptions(std::nullptr_t) noexcept {}
        AutoUpdateSettingsOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IAutoUpdateSettingsOptions(ptr, take_ownership_from_abi) {}
        AutoUpdateSettingsOptions();
        static auto CreateFromAppInstallerInfo(Windows::ApplicationModel::AppInstallerInfo const& appInstallerInfo);
    };
    struct __declspec(empty_bases) CreateSharedPackageContainerOptions : Windows::Management::Deployment::ICreateSharedPackageContainerOptions
    {
        CreateSharedPackageContainerOptions(std::nullptr_t) noexcept {}
        CreateSharedPackageContainerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::ICreateSharedPackageContainerOptions(ptr, take_ownership_from_abi) {}
        CreateSharedPackageContainerOptions();
    };
    struct __declspec(empty_bases) CreateSharedPackageContainerResult : Windows::Management::Deployment::ICreateSharedPackageContainerResult
    {
        CreateSharedPackageContainerResult(std::nullptr_t) noexcept {}
        CreateSharedPackageContainerResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::ICreateSharedPackageContainerResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeleteSharedPackageContainerOptions : Windows::Management::Deployment::IDeleteSharedPackageContainerOptions
    {
        DeleteSharedPackageContainerOptions(std::nullptr_t) noexcept {}
        DeleteSharedPackageContainerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IDeleteSharedPackageContainerOptions(ptr, take_ownership_from_abi) {}
        DeleteSharedPackageContainerOptions();
    };
    struct __declspec(empty_bases) DeleteSharedPackageContainerResult : Windows::Management::Deployment::IDeleteSharedPackageContainerResult
    {
        DeleteSharedPackageContainerResult(std::nullptr_t) noexcept {}
        DeleteSharedPackageContainerResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IDeleteSharedPackageContainerResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeploymentResult : Windows::Management::Deployment::IDeploymentResult,
        impl::require<DeploymentResult, Windows::Management::Deployment::IDeploymentResult2>
    {
        DeploymentResult(std::nullptr_t) noexcept {}
        DeploymentResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IDeploymentResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FindSharedPackageContainerOptions : Windows::Management::Deployment::IFindSharedPackageContainerOptions
    {
        FindSharedPackageContainerOptions(std::nullptr_t) noexcept {}
        FindSharedPackageContainerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IFindSharedPackageContainerOptions(ptr, take_ownership_from_abi) {}
        FindSharedPackageContainerOptions();
    };
    struct __declspec(empty_bases) PackageAllUserProvisioningOptions : Windows::Management::Deployment::IPackageAllUserProvisioningOptions
    {
        PackageAllUserProvisioningOptions(std::nullptr_t) noexcept {}
        PackageAllUserProvisioningOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IPackageAllUserProvisioningOptions(ptr, take_ownership_from_abi) {}
        PackageAllUserProvisioningOptions();
    };
    struct __declspec(empty_bases) PackageManager : Windows::Management::Deployment::IPackageManager,
        impl::require<PackageManager, Windows::Management::Deployment::IPackageManager2, Windows::Management::Deployment::IPackageManager3, Windows::Management::Deployment::IPackageManager4, Windows::Management::Deployment::IPackageManager5, Windows::Management::Deployment::IPackageManager6, Windows::Management::Deployment::IPackageManager7, Windows::Management::Deployment::IPackageManager8, Windows::Management::Deployment::IPackageManager9, Windows::Management::Deployment::IPackageManager10>
    {
        PackageManager(std::nullptr_t) noexcept {}
        PackageManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IPackageManager(ptr, take_ownership_from_abi) {}
        PackageManager();
        using Windows::Management::Deployment::IPackageManager::AddPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::AddPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager5>::AddPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager6>::AddPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager10>::ProvisionPackageForAllUsersAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager6>::ProvisionPackageForAllUsersAsync;
        using Windows::Management::Deployment::IPackageManager::RegisterPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::RegisterPackageAsync;
        using Windows::Management::Deployment::IPackageManager::RemovePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::RemovePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager6>::RequestAddPackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager7>::RequestAddPackageAsync;
        using Windows::Management::Deployment::IPackageManager::StagePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::StagePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::StagePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager5>::StagePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager6>::StagePackageAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager2>::StageUserDataAsync;
        using impl::consume_t<PackageManager, Windows::Management::Deployment::IPackageManager3>::StageUserDataAsync;
    };
    struct __declspec(empty_bases) PackageManagerDebugSettings : Windows::Management::Deployment::IPackageManagerDebugSettings
    {
        PackageManagerDebugSettings(std::nullptr_t) noexcept {}
        PackageManagerDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IPackageManagerDebugSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageUserInformation : Windows::Management::Deployment::IPackageUserInformation
    {
        PackageUserInformation(std::nullptr_t) noexcept {}
        PackageUserInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IPackageUserInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageVolume : Windows::Management::Deployment::IPackageVolume,
        impl::require<PackageVolume, Windows::Management::Deployment::IPackageVolume2>
    {
        PackageVolume(std::nullptr_t) noexcept {}
        PackageVolume(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IPackageVolume(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RegisterPackageOptions : Windows::Management::Deployment::IRegisterPackageOptions
    {
        RegisterPackageOptions(std::nullptr_t) noexcept {}
        RegisterPackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IRegisterPackageOptions(ptr, take_ownership_from_abi) {}
        RegisterPackageOptions();
    };
    struct __declspec(empty_bases) SharedPackageContainer : Windows::Management::Deployment::ISharedPackageContainer
    {
        SharedPackageContainer(std::nullptr_t) noexcept {}
        SharedPackageContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::ISharedPackageContainer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SharedPackageContainerManager : Windows::Management::Deployment::ISharedPackageContainerManager
    {
        SharedPackageContainerManager(std::nullptr_t) noexcept {}
        SharedPackageContainerManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::ISharedPackageContainerManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(param::hstring const& userSid);
        static auto GetForProvisioning();
    };
    struct __declspec(empty_bases) SharedPackageContainerMember : Windows::Management::Deployment::ISharedPackageContainerMember
    {
        SharedPackageContainerMember(std::nullptr_t) noexcept {}
        SharedPackageContainerMember(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::ISharedPackageContainerMember(ptr, take_ownership_from_abi) {}
        explicit SharedPackageContainerMember(param::hstring const& packageFamilyName);
    };
    struct __declspec(empty_bases) StagePackageOptions : Windows::Management::Deployment::IStagePackageOptions
    {
        StagePackageOptions(std::nullptr_t) noexcept {}
        StagePackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IStagePackageOptions(ptr, take_ownership_from_abi) {}
        StagePackageOptions();
    };
    struct __declspec(empty_bases) UpdateSharedPackageContainerOptions : Windows::Management::Deployment::IUpdateSharedPackageContainerOptions
    {
        UpdateSharedPackageContainerOptions(std::nullptr_t) noexcept {}
        UpdateSharedPackageContainerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IUpdateSharedPackageContainerOptions(ptr, take_ownership_from_abi) {}
        UpdateSharedPackageContainerOptions();
    };
    struct __declspec(empty_bases) UpdateSharedPackageContainerResult : Windows::Management::Deployment::IUpdateSharedPackageContainerResult
    {
        UpdateSharedPackageContainerResult(std::nullptr_t) noexcept {}
        UpdateSharedPackageContainerResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Deployment::IUpdateSharedPackageContainerResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
