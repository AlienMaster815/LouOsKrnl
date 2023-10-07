// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_NetworkOperators_2_H
#define WINRT_Windows_Networking_NetworkOperators_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Networking.NetworkOperators.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::NetworkOperators
{
    struct ESimProfileInstallProgress
    {
        int32_t TotalSizeInBytes;
        int32_t InstalledSizeInBytes;
    };
    inline bool operator==(ESimProfileInstallProgress const& left, ESimProfileInstallProgress const& right) noexcept
    {
        return left.TotalSizeInBytes == right.TotalSizeInBytes && left.InstalledSizeInBytes == right.InstalledSizeInBytes;
    }
    inline bool operator!=(ESimProfileInstallProgress const& left, ESimProfileInstallProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct ProfileUsage
    {
        uint32_t UsageInMegabytes;
        Windows::Foundation::DateTime LastSyncTime;
    };
    inline bool operator==(ProfileUsage const& left, ProfileUsage const& right) noexcept
    {
        return left.UsageInMegabytes == right.UsageInMegabytes && left.LastSyncTime == right.LastSyncTime;
    }
    inline bool operator!=(ProfileUsage const& left, ProfileUsage const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ESim : Windows::Networking::NetworkOperators::IESim,
        impl::require<ESim, Windows::Networking::NetworkOperators::IESim2>
    {
        ESim(std::nullptr_t) noexcept {}
        ESim(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESim(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimAddedEventArgs : Windows::Networking::NetworkOperators::IESimAddedEventArgs
    {
        ESimAddedEventArgs(std::nullptr_t) noexcept {}
        ESimAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimDiscoverEvent : Windows::Networking::NetworkOperators::IESimDiscoverEvent
    {
        ESimDiscoverEvent(std::nullptr_t) noexcept {}
        ESimDiscoverEvent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimDiscoverEvent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimDiscoverResult : Windows::Networking::NetworkOperators::IESimDiscoverResult
    {
        ESimDiscoverResult(std::nullptr_t) noexcept {}
        ESimDiscoverResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimDiscoverResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimDownloadProfileMetadataResult : Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult
    {
        ESimDownloadProfileMetadataResult(std::nullptr_t) noexcept {}
        ESimDownloadProfileMetadataResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult(ptr, take_ownership_from_abi) {}
    };
    struct ESimManager
    {
        ESimManager() = delete;
        [[nodiscard]] static auto ServiceInfo();
        static auto TryCreateESimWatcher();
        static auto ServiceInfoChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ServiceInfoChanged_revoker = impl::factory_event_revoker<Windows::Networking::NetworkOperators::IESimManagerStatics, &impl::abi_t<Windows::Networking::NetworkOperators::IESimManagerStatics>::remove_ServiceInfoChanged>;
        [[nodiscard]] static ServiceInfoChanged_revoker ServiceInfoChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto ServiceInfoChanged(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) ESimOperationResult : Windows::Networking::NetworkOperators::IESimOperationResult
    {
        ESimOperationResult(std::nullptr_t) noexcept {}
        ESimOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimPolicy : Windows::Networking::NetworkOperators::IESimPolicy
    {
        ESimPolicy(std::nullptr_t) noexcept {}
        ESimPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimPolicy(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimProfile : Windows::Networking::NetworkOperators::IESimProfile
    {
        ESimProfile(std::nullptr_t) noexcept {}
        ESimProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimProfile(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimProfileMetadata : Windows::Networking::NetworkOperators::IESimProfileMetadata
    {
        ESimProfileMetadata(std::nullptr_t) noexcept {}
        ESimProfileMetadata(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimProfileMetadata(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimProfilePolicy : Windows::Networking::NetworkOperators::IESimProfilePolicy
    {
        ESimProfilePolicy(std::nullptr_t) noexcept {}
        ESimProfilePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimProfilePolicy(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimRemovedEventArgs : Windows::Networking::NetworkOperators::IESimRemovedEventArgs
    {
        ESimRemovedEventArgs(std::nullptr_t) noexcept {}
        ESimRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimServiceInfo : Windows::Networking::NetworkOperators::IESimServiceInfo
    {
        ESimServiceInfo(std::nullptr_t) noexcept {}
        ESimServiceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimServiceInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimUpdatedEventArgs : Windows::Networking::NetworkOperators::IESimUpdatedEventArgs
    {
        ESimUpdatedEventArgs(std::nullptr_t) noexcept {}
        ESimUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ESimWatcher : Windows::Networking::NetworkOperators::IESimWatcher
    {
        ESimWatcher(std::nullptr_t) noexcept {}
        ESimWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IESimWatcher(ptr, take_ownership_from_abi) {}
    };
    struct FdnAccessManager
    {
        FdnAccessManager() = delete;
        static auto RequestUnlockAsync(param::hstring const& contactListId);
    };
    struct __declspec(empty_bases) HotspotAuthenticationContext : Windows::Networking::NetworkOperators::IHotspotAuthenticationContext,
        impl::require<HotspotAuthenticationContext, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        HotspotAuthenticationContext(std::nullptr_t) noexcept {}
        HotspotAuthenticationContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IHotspotAuthenticationContext(ptr, take_ownership_from_abi) {}
        static auto TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context);
    };
    struct __declspec(empty_bases) HotspotAuthenticationEventDetails : Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails
    {
        HotspotAuthenticationEventDetails(std::nullptr_t) noexcept {}
        HotspotAuthenticationEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HotspotCredentialsAuthenticationResult : Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult
    {
        HotspotCredentialsAuthenticationResult(std::nullptr_t) noexcept {}
        HotspotCredentialsAuthenticationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult(ptr, take_ownership_from_abi) {}
    };
    struct KnownCSimFilePaths
    {
        KnownCSimFilePaths() = delete;
        [[nodiscard]] static auto EFSpn();
        [[nodiscard]] static auto Gid1();
        [[nodiscard]] static auto Gid2();
    };
    struct KnownRuimFilePaths
    {
        KnownRuimFilePaths() = delete;
        [[nodiscard]] static auto EFSpn();
        [[nodiscard]] static auto Gid1();
        [[nodiscard]] static auto Gid2();
    };
    struct KnownSimFilePaths
    {
        KnownSimFilePaths() = delete;
        [[nodiscard]] static auto EFOns();
        [[nodiscard]] static auto EFSpn();
        [[nodiscard]] static auto Gid1();
        [[nodiscard]] static auto Gid2();
    };
    struct KnownUSimFilePaths
    {
        KnownUSimFilePaths() = delete;
        [[nodiscard]] static auto EFSpn();
        [[nodiscard]] static auto EFOpl();
        [[nodiscard]] static auto EFPnn();
        [[nodiscard]] static auto Gid1();
        [[nodiscard]] static auto Gid2();
    };
    struct __declspec(empty_bases) MobileBroadbandAccount : Windows::Networking::NetworkOperators::IMobileBroadbandAccount,
        impl::require<MobileBroadbandAccount, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2, Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        MobileBroadbandAccount(std::nullptr_t) noexcept {}
        MobileBroadbandAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandAccount(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AvailableNetworkAccountIds();
        static auto CreateFromNetworkAccountId(param::hstring const& networkAccountId);
    };
    struct __declspec(empty_bases) MobileBroadbandAccountEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs
    {
        MobileBroadbandAccountEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandAccountEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandAccountUpdatedEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs
    {
        MobileBroadbandAccountUpdatedEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandAccountUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandAccountWatcher : Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher
    {
        MobileBroadbandAccountWatcher(std::nullptr_t) noexcept {}
        MobileBroadbandAccountWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher(ptr, take_ownership_from_abi) {}
        MobileBroadbandAccountWatcher();
    };
    struct __declspec(empty_bases) MobileBroadbandAntennaSar : Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar
    {
        MobileBroadbandAntennaSar(std::nullptr_t) noexcept {}
        MobileBroadbandAntennaSar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar(ptr, take_ownership_from_abi) {}
        MobileBroadbandAntennaSar(int32_t antennaIndex, int32_t sarBackoffIndex);
    };
    struct __declspec(empty_bases) MobileBroadbandCellCdma : Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma
    {
        MobileBroadbandCellCdma(std::nullptr_t) noexcept {}
        MobileBroadbandCellCdma(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellGsm : Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm
    {
        MobileBroadbandCellGsm(std::nullptr_t) noexcept {}
        MobileBroadbandCellGsm(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellLte : Windows::Networking::NetworkOperators::IMobileBroadbandCellLte
    {
        MobileBroadbandCellLte(std::nullptr_t) noexcept {}
        MobileBroadbandCellLte(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellLte(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellNR : Windows::Networking::NetworkOperators::IMobileBroadbandCellNR
    {
        MobileBroadbandCellNR(std::nullptr_t) noexcept {}
        MobileBroadbandCellNR(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellNR(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellTdscdma : Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma
    {
        MobileBroadbandCellTdscdma(std::nullptr_t) noexcept {}
        MobileBroadbandCellTdscdma(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellUmts : Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts
    {
        MobileBroadbandCellUmts(std::nullptr_t) noexcept {}
        MobileBroadbandCellUmts(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCellsInfo : Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo,
        impl::require<MobileBroadbandCellsInfo, Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2>
    {
        MobileBroadbandCellsInfo(std::nullptr_t) noexcept {}
        MobileBroadbandCellsInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandCurrentSlotIndexChangedEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs
    {
        MobileBroadbandCurrentSlotIndexChangedEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandCurrentSlotIndexChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceInformation : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation,
        impl::require<MobileBroadbandDeviceInformation, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4>
    {
        MobileBroadbandDeviceInformation(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceService : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService
    {
        MobileBroadbandDeviceService(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceCommandResult : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult
    {
        MobileBroadbandDeviceServiceCommandResult(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceCommandResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceCommandSession : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession
    {
        MobileBroadbandDeviceServiceCommandSession(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceCommandSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceDataReceivedEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs
    {
        MobileBroadbandDeviceServiceDataReceivedEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceDataReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceDataSession : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession
    {
        MobileBroadbandDeviceServiceDataSession(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceDataSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceInformation : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation
    {
        MobileBroadbandDeviceServiceInformation(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandDeviceServiceTriggerDetails : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails
    {
        MobileBroadbandDeviceServiceTriggerDetails(std::nullptr_t) noexcept {}
        MobileBroadbandDeviceServiceTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandModem : Windows::Networking::NetworkOperators::IMobileBroadbandModem,
        impl::require<MobileBroadbandModem, Windows::Networking::NetworkOperators::IMobileBroadbandModem2, Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        MobileBroadbandModem(std::nullptr_t) noexcept {}
        MobileBroadbandModem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandModem(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromId(param::hstring const& deviceId);
        static auto GetDefault();
    };
    struct __declspec(empty_bases) MobileBroadbandModemConfiguration : Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration,
        impl::require<MobileBroadbandModemConfiguration, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        MobileBroadbandModemConfiguration(std::nullptr_t) noexcept {}
        MobileBroadbandModemConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandModemIsolation : Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation
    {
        MobileBroadbandModemIsolation(std::nullptr_t) noexcept {}
        MobileBroadbandModemIsolation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation(ptr, take_ownership_from_abi) {}
        MobileBroadbandModemIsolation(param::hstring const& modemDeviceId, param::hstring const& ruleGroupId);
    };
    struct __declspec(empty_bases) MobileBroadbandNetwork : Windows::Networking::NetworkOperators::IMobileBroadbandNetwork,
        impl::require<MobileBroadbandNetwork, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        MobileBroadbandNetwork(std::nullptr_t) noexcept {}
        MobileBroadbandNetwork(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandNetwork(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandNetworkRegistrationStateChange : Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange
    {
        MobileBroadbandNetworkRegistrationStateChange(std::nullptr_t) noexcept {}
        MobileBroadbandNetworkRegistrationStateChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandNetworkRegistrationStateChangeTriggerDetails : Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
    {
        MobileBroadbandNetworkRegistrationStateChangeTriggerDetails(std::nullptr_t) noexcept {}
        MobileBroadbandNetworkRegistrationStateChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPco : Windows::Networking::NetworkOperators::IMobileBroadbandPco
    {
        MobileBroadbandPco(std::nullptr_t) noexcept {}
        MobileBroadbandPco(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPco(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPcoDataChangeTriggerDetails : Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails
    {
        MobileBroadbandPcoDataChangeTriggerDetails(std::nullptr_t) noexcept {}
        MobileBroadbandPcoDataChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPin : Windows::Networking::NetworkOperators::IMobileBroadbandPin
    {
        MobileBroadbandPin(std::nullptr_t) noexcept {}
        MobileBroadbandPin(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPin(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPinLockStateChange : Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange
    {
        MobileBroadbandPinLockStateChange(std::nullptr_t) noexcept {}
        MobileBroadbandPinLockStateChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPinLockStateChangeTriggerDetails : Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails
    {
        MobileBroadbandPinLockStateChangeTriggerDetails(std::nullptr_t) noexcept {}
        MobileBroadbandPinLockStateChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPinManager : Windows::Networking::NetworkOperators::IMobileBroadbandPinManager
    {
        MobileBroadbandPinManager(std::nullptr_t) noexcept {}
        MobileBroadbandPinManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPinManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandPinOperationResult : Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult
    {
        MobileBroadbandPinOperationResult(std::nullptr_t) noexcept {}
        MobileBroadbandPinOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandRadioStateChange : Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange
    {
        MobileBroadbandRadioStateChange(std::nullptr_t) noexcept {}
        MobileBroadbandRadioStateChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandRadioStateChangeTriggerDetails : Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails
    {
        MobileBroadbandRadioStateChangeTriggerDetails(std::nullptr_t) noexcept {}
        MobileBroadbandRadioStateChangeTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandSarManager : Windows::Networking::NetworkOperators::IMobileBroadbandSarManager
    {
        MobileBroadbandSarManager(std::nullptr_t) noexcept {}
        MobileBroadbandSarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandSarManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandSlotInfo : Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo
    {
        MobileBroadbandSlotInfo(std::nullptr_t) noexcept {}
        MobileBroadbandSlotInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandSlotInfoChangedEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs
    {
        MobileBroadbandSlotInfoChangedEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandSlotInfoChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandSlotManager : Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager
    {
        MobileBroadbandSlotManager(std::nullptr_t) noexcept {}
        MobileBroadbandSlotManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandTransmissionStateChangedEventArgs : Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs
    {
        MobileBroadbandTransmissionStateChangedEventArgs(std::nullptr_t) noexcept {}
        MobileBroadbandTransmissionStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandUicc : Windows::Networking::NetworkOperators::IMobileBroadbandUicc
    {
        MobileBroadbandUicc(std::nullptr_t) noexcept {}
        MobileBroadbandUicc(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandUicc(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandUiccApp : Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp
    {
        MobileBroadbandUiccApp(std::nullptr_t) noexcept {}
        MobileBroadbandUiccApp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandUiccAppReadRecordResult : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult
    {
        MobileBroadbandUiccAppReadRecordResult(std::nullptr_t) noexcept {}
        MobileBroadbandUiccAppReadRecordResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandUiccAppRecordDetailsResult : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult
    {
        MobileBroadbandUiccAppRecordDetailsResult(std::nullptr_t) noexcept {}
        MobileBroadbandUiccAppRecordDetailsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MobileBroadbandUiccAppsResult : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult
    {
        MobileBroadbandUiccAppsResult(std::nullptr_t) noexcept {}
        MobileBroadbandUiccAppsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkOperatorDataUsageTriggerDetails : Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails
    {
        NetworkOperatorDataUsageTriggerDetails(std::nullptr_t) noexcept {}
        NetworkOperatorDataUsageTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkOperatorNotificationEventDetails : Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails,
        impl::require<NetworkOperatorNotificationEventDetails, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        NetworkOperatorNotificationEventDetails(std::nullptr_t) noexcept {}
        NetworkOperatorNotificationEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkOperatorTetheringAccessPointConfiguration : Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration,
        impl::require<NetworkOperatorTetheringAccessPointConfiguration, Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        NetworkOperatorTetheringAccessPointConfiguration(std::nullptr_t) noexcept {}
        NetworkOperatorTetheringAccessPointConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration(ptr, take_ownership_from_abi) {}
        NetworkOperatorTetheringAccessPointConfiguration();
    };
    struct __declspec(empty_bases) NetworkOperatorTetheringClient : Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient
    {
        NetworkOperatorTetheringClient(std::nullptr_t) noexcept {}
        NetworkOperatorTetheringClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkOperatorTetheringManager : Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager,
        impl::require<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        NetworkOperatorTetheringManager(std::nullptr_t) noexcept {}
        NetworkOperatorTetheringManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager(ptr, take_ownership_from_abi) {}
        static auto GetTetheringCapability(param::hstring const& networkAccountId);
        static auto CreateFromNetworkAccountId(param::hstring const& networkAccountId);
        static auto GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile);
        static auto CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile);
        static auto CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter);
        static auto IsNoConnectionsTimeoutEnabled();
        static auto EnableNoConnectionsTimeout();
        static auto EnableNoConnectionsTimeoutAsync();
        static auto DisableNoConnectionsTimeout();
        static auto DisableNoConnectionsTimeoutAsync();
    };
    struct __declspec(empty_bases) NetworkOperatorTetheringOperationResult : Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult
    {
        NetworkOperatorTetheringOperationResult(std::nullptr_t) noexcept {}
        NetworkOperatorTetheringOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProvisionFromXmlDocumentResults : Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults
    {
        ProvisionFromXmlDocumentResults(std::nullptr_t) noexcept {}
        ProvisionFromXmlDocumentResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProvisionedProfile : Windows::Networking::NetworkOperators::IProvisionedProfile
    {
        ProvisionedProfile(std::nullptr_t) noexcept {}
        ProvisionedProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IProvisionedProfile(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProvisioningAgent : Windows::Networking::NetworkOperators::IProvisioningAgent
    {
        ProvisioningAgent(std::nullptr_t) noexcept {}
        ProvisioningAgent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IProvisioningAgent(ptr, take_ownership_from_abi) {}
        ProvisioningAgent();
        static auto CreateFromNetworkAccountId(param::hstring const& networkAccountId);
    };
    struct __declspec(empty_bases) TetheringEntitlementCheckTriggerDetails : Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails
    {
        TetheringEntitlementCheckTriggerDetails(std::nullptr_t) noexcept {}
        TetheringEntitlementCheckTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UssdMessage : Windows::Networking::NetworkOperators::IUssdMessage
    {
        UssdMessage(std::nullptr_t) noexcept {}
        UssdMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IUssdMessage(ptr, take_ownership_from_abi) {}
        explicit UssdMessage(param::hstring const& messageText);
    };
    struct __declspec(empty_bases) UssdReply : Windows::Networking::NetworkOperators::IUssdReply
    {
        UssdReply(std::nullptr_t) noexcept {}
        UssdReply(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IUssdReply(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UssdSession : Windows::Networking::NetworkOperators::IUssdSession
    {
        UssdSession(std::nullptr_t) noexcept {}
        UssdSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::NetworkOperators::IUssdSession(ptr, take_ownership_from_abi) {}
        static auto CreateFromNetworkAccountId(param::hstring const& networkAccountId);
        static auto CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId);
    };
}
#endif
