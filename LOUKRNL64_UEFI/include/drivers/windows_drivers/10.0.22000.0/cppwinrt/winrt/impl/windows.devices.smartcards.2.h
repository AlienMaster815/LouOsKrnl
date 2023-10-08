// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_SmartCards_2_H
#define WINRT_Windows_Devices_SmartCards_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.SmartCards.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::SmartCards
{
    struct SmartCardPinResetHandler : Windows::Foundation::IUnknown
    {
        SmartCardPinResetHandler(std::nullptr_t = nullptr) noexcept {}
        SmartCardPinResetHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SmartCardPinResetHandler(L lambda);
        template <typename F> SmartCardPinResetHandler(F* function);
        template <typename O, typename M> SmartCardPinResetHandler(O* object, M method);
        template <typename O, typename M> SmartCardPinResetHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SmartCardPinResetHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Devices::SmartCards::SmartCardProvisioning const& sender, Windows::Devices::SmartCards::SmartCardPinResetRequest const& request) const;
    };
    struct __declspec(empty_bases) CardAddedEventArgs : Windows::Devices::SmartCards::ICardAddedEventArgs
    {
        CardAddedEventArgs(std::nullptr_t) noexcept {}
        CardAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ICardAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CardRemovedEventArgs : Windows::Devices::SmartCards::ICardRemovedEventArgs
    {
        CardRemovedEventArgs(std::nullptr_t) noexcept {}
        CardRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ICardRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct KnownSmartCardAppletIds
    {
        KnownSmartCardAppletIds() = delete;
        [[nodiscard]] static auto PaymentSystemEnvironment();
        [[nodiscard]] static auto ProximityPaymentSystemEnvironment();
    };
    struct __declspec(empty_bases) SmartCard : Windows::Devices::SmartCards::ISmartCard,
        impl::require<SmartCard, Windows::Devices::SmartCards::ISmartCardConnect>
    {
        SmartCard(std::nullptr_t) noexcept {}
        SmartCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCard(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardAppletIdGroup : Windows::Devices::SmartCards::ISmartCardAppletIdGroup,
        impl::require<SmartCardAppletIdGroup, Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        SmartCardAppletIdGroup(std::nullptr_t) noexcept {}
        SmartCardAppletIdGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAppletIdGroup(ptr, take_ownership_from_abi) {}
        SmartCardAppletIdGroup();
        SmartCardAppletIdGroup(param::hstring const& displayName, param::vector<Windows::Storage::Streams::IBuffer> const& appletIds, Windows::Devices::SmartCards::SmartCardEmulationCategory const& emulationCategory, Windows::Devices::SmartCards::SmartCardEmulationType const& emulationType);
        [[nodiscard]] static auto MaxAppletIds();
    };
    struct __declspec(empty_bases) SmartCardAppletIdGroupRegistration : Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration,
        impl::require<SmartCardAppletIdGroupRegistration, Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        SmartCardAppletIdGroupRegistration(std::nullptr_t) noexcept {}
        SmartCardAppletIdGroupRegistration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardAutomaticResponseApdu : Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu,
        impl::require<SmartCardAutomaticResponseApdu, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        SmartCardAutomaticResponseApdu(std::nullptr_t) noexcept {}
        SmartCardAutomaticResponseApdu(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu(ptr, take_ownership_from_abi) {}
        SmartCardAutomaticResponseApdu(Windows::Storage::Streams::IBuffer const& commandApdu, Windows::Storage::Streams::IBuffer const& responseApdu);
    };
    struct __declspec(empty_bases) SmartCardChallengeContext : Windows::Devices::SmartCards::ISmartCardChallengeContext
    {
        SmartCardChallengeContext(std::nullptr_t) noexcept {}
        SmartCardChallengeContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardChallengeContext(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardConnection : Windows::Devices::SmartCards::ISmartCardConnection
    {
        SmartCardConnection(std::nullptr_t) noexcept {}
        SmartCardConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardCryptogramGenerator : Windows::Devices::SmartCards::ISmartCardCryptogramGenerator,
        impl::require<SmartCardCryptogramGenerator, Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        SmartCardCryptogramGenerator(std::nullptr_t) noexcept {}
        SmartCardCryptogramGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGenerator(ptr, take_ownership_from_abi) {}
        static auto GetSmartCardCryptogramGeneratorAsync();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult();
    };
    struct __declspec(empty_bases) SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult();
    };
    struct __declspec(empty_bases) SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult();
    };
    struct __declspec(empty_bases) SmartCardCryptogramMaterialCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics
    {
        SmartCardCryptogramMaterialCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramMaterialCharacteristics();
    };
    struct __declspec(empty_bases) SmartCardCryptogramMaterialPackageCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics
    {
        SmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialPackageCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramMaterialPackageCharacteristics();
    };
    struct __declspec(empty_bases) SmartCardCryptogramMaterialPossessionProof : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof
    {
        SmartCardCryptogramMaterialPossessionProof(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialPossessionProof(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardCryptogramPlacementStep : Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep
    {
        SmartCardCryptogramPlacementStep(std::nullptr_t) noexcept {}
        SmartCardCryptogramPlacementStep(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramPlacementStep();
    };
    struct __declspec(empty_bases) SmartCardCryptogramStorageKeyCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics
    {
        SmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramStorageKeyCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramStorageKeyCharacteristics();
    };
    struct __declspec(empty_bases) SmartCardCryptogramStorageKeyInfo : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo,
        impl::require<SmartCardCryptogramStorageKeyInfo, Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        SmartCardCryptogramStorageKeyInfo(std::nullptr_t) noexcept {}
        SmartCardCryptogramStorageKeyInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardEmulator : Windows::Devices::SmartCards::ISmartCardEmulator,
        impl::require<SmartCardEmulator, Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        SmartCardEmulator(std::nullptr_t) noexcept {}
        SmartCardEmulator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulator(ptr, take_ownership_from_abi) {}
        static auto GetDefaultAsync();
        static auto GetAppletIdGroupRegistrationsAsync();
        static auto RegisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroup const& appletIdGroup);
        static auto UnregisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration const& registration);
        [[nodiscard]] static auto MaxAppletIdGroupRegistrations();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) SmartCardEmulatorApduReceivedEventArgs : Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs,
        impl::require<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        SmartCardEmulatorApduReceivedEventArgs(std::nullptr_t) noexcept {}
        SmartCardEmulatorApduReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs(ptr, take_ownership_from_abi) {}
        using Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs::TryRespondAsync;
        using impl::consume_t<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>::TryRespondAsync;
    };
    struct __declspec(empty_bases) SmartCardEmulatorConnectionDeactivatedEventArgs : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs
    {
        SmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t) noexcept {}
        SmartCardEmulatorConnectionDeactivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardEmulatorConnectionProperties : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties
    {
        SmartCardEmulatorConnectionProperties(std::nullptr_t) noexcept {}
        SmartCardEmulatorConnectionProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardPinPolicy : Windows::Devices::SmartCards::ISmartCardPinPolicy
    {
        SmartCardPinPolicy(std::nullptr_t) noexcept {}
        SmartCardPinPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinPolicy(ptr, take_ownership_from_abi) {}
        SmartCardPinPolicy();
    };
    struct __declspec(empty_bases) SmartCardPinResetDeferral : Windows::Devices::SmartCards::ISmartCardPinResetDeferral
    {
        SmartCardPinResetDeferral(std::nullptr_t) noexcept {}
        SmartCardPinResetDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinResetDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardPinResetRequest : Windows::Devices::SmartCards::ISmartCardPinResetRequest
    {
        SmartCardPinResetRequest(std::nullptr_t) noexcept {}
        SmartCardPinResetRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinResetRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SmartCardProvisioning : Windows::Devices::SmartCards::ISmartCardProvisioning,
        impl::require<SmartCardProvisioning, Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        SmartCardProvisioning(std::nullptr_t) noexcept {}
        SmartCardProvisioning(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardProvisioning(ptr, take_ownership_from_abi) {}
        static auto FromSmartCardAsync(Windows::Devices::SmartCards::SmartCard const& card);
        static auto RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
        static auto RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId);
        static auto RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::SmartCard const& card);
        static auto RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
        static auto RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId);
    };
    struct __declspec(empty_bases) SmartCardReader : Windows::Devices::SmartCards::ISmartCardReader
    {
        SmartCardReader(std::nullptr_t) noexcept {}
        SmartCardReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardReader(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind const& kind);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) SmartCardTriggerDetails : Windows::Devices::SmartCards::ISmartCardTriggerDetails,
        impl::require<SmartCardTriggerDetails, Windows::Devices::SmartCards::ISmartCardTriggerDetails2, Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        SmartCardTriggerDetails(std::nullptr_t) noexcept {}
        SmartCardTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardTriggerDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
