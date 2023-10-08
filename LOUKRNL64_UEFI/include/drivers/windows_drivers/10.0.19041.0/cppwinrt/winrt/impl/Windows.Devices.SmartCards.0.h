// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_SmartCards_0_H
#define WINRT_Windows_Devices_SmartCards_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVector;
    struct ValueSet;
}
namespace winrt::Windows::Security::Cryptography::Core
{
    enum class CryptographicPublicKeyBlobType : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Devices::SmartCards
{
    enum class SmartCardActivationPolicyChangeResult : int32_t
    {
        Denied = 0,
        Allowed = 1,
    };
    enum class SmartCardAppletIdGroupActivationPolicy : int32_t
    {
        Disabled = 0,
        ForegroundOverride = 1,
        Enabled = 2,
    };
    enum class SmartCardAutomaticResponseStatus : int32_t
    {
        None = 0,
        Success = 1,
        UnknownError = 2,
    };
    enum class SmartCardCryptogramAlgorithm : int32_t
    {
        None = 0,
        CbcMac = 1,
        Cvc3Umd = 2,
        DecimalizedMsd = 3,
        Cvc3MD = 4,
        Sha1 = 5,
        SignedDynamicApplicationData = 6,
        RsaPkcs1 = 7,
        Sha256Hmac = 8,
    };
    enum class SmartCardCryptogramGeneratorOperationStatus : int32_t
    {
        Success = 0,
        AuthorizationFailed = 1,
        AuthorizationCanceled = 2,
        AuthorizationRequired = 3,
        CryptogramMaterialPackageStorageKeyExists = 4,
        NoCryptogramMaterialPackageStorageKey = 5,
        NoCryptogramMaterialPackage = 6,
        UnsupportedCryptogramMaterialPackage = 7,
        UnknownCryptogramMaterialName = 8,
        InvalidCryptogramMaterialUsage = 9,
        ApduResponseNotSent = 10,
        OtherError = 11,
        ValidationFailed = 12,
        NotSupported = 13,
    };
    enum class SmartCardCryptogramMaterialPackageConfirmationResponseFormat : int32_t
    {
        None = 0,
        VisaHmac = 1,
    };
    enum class SmartCardCryptogramMaterialPackageFormat : int32_t
    {
        None = 0,
        JweRsaPki = 1,
    };
    enum class SmartCardCryptogramMaterialProtectionMethod : int32_t
    {
        None = 0,
        WhiteBoxing = 1,
    };
    enum class SmartCardCryptogramMaterialType : int32_t
    {
        None = 0,
        StaticDataAuthentication = 1,
        TripleDes112 = 2,
        Aes = 3,
        RsaPkcs1 = 4,
    };
    enum class SmartCardCryptogramPlacementOptions : uint32_t
    {
        None = 0,
        UnitsAreInNibbles = 0x1,
        ChainOutput = 0x2,
    };
    enum class SmartCardCryptogramStorageKeyAlgorithm : int32_t
    {
        None = 0,
        Rsa2048 = 1,
    };
    enum class SmartCardCryptogramStorageKeyCapabilities : uint32_t
    {
        None = 0,
        HardwareProtection = 0x1,
        UnlockPrompt = 0x2,
    };
    enum class SmartCardCryptographicKeyAttestationStatus : int32_t
    {
        NoAttestation = 0,
        SoftwareKeyWithoutTpm = 1,
        SoftwareKeyWithTpm = 2,
        TpmKeyUnknownAttestationStatus = 3,
        TpmKeyWithoutAttestationCapability = 4,
        TpmKeyWithTemporaryAttestationFailure = 5,
        TpmKeyWithLongTermAttestationFailure = 6,
        TpmKeyWithAttestation = 7,
    };
    enum class SmartCardEmulationCategory : int32_t
    {
        Other = 0,
        Payment = 1,
    };
    enum class SmartCardEmulationType : int32_t
    {
        Host = 0,
        Uicc = 1,
        EmbeddedSE = 2,
    };
    enum class SmartCardEmulatorConnectionDeactivatedReason : int32_t
    {
        ConnectionLost = 0,
        ConnectionRedirected = 1,
    };
    enum class SmartCardEmulatorConnectionSource : int32_t
    {
        Unknown = 0,
        NfcReader = 1,
    };
    enum class SmartCardEmulatorEnablementPolicy : int32_t
    {
        Never = 0,
        Always = 1,
        ScreenOn = 2,
        ScreenUnlocked = 3,
    };
    enum class SmartCardLaunchBehavior : int32_t
    {
        Default = 0,
        AboveLock = 1,
    };
    enum class SmartCardPinCharacterPolicyOption : int32_t
    {
        Allow = 0,
        RequireAtLeastOne = 1,
        Disallow = 2,
    };
    enum class SmartCardReaderKind : int32_t
    {
        Any = 0,
        Generic = 1,
        Tpm = 2,
        Nfc = 3,
        Uicc = 4,
        EmbeddedSE = 5,
    };
    enum class SmartCardReaderStatus : int32_t
    {
        Disconnected = 0,
        Ready = 1,
        Exclusive = 2,
    };
    enum class SmartCardStatus : int32_t
    {
        Disconnected = 0,
        Ready = 1,
        Shared = 2,
        Exclusive = 3,
        Unresponsive = 4,
    };
    enum class SmartCardTriggerType : int32_t
    {
        EmulatorTransaction = 0,
        EmulatorNearFieldEntry = 1,
        EmulatorNearFieldExit = 2,
        EmulatorHostApplicationActivated = 3,
        EmulatorAppletIdGroupRegistrationChanged = 4,
        ReaderCardAdded = 5,
    };
    enum class SmartCardUnlockPromptingBehavior : int32_t
    {
        AllowUnlockPrompt = 0,
        RequireUnlockPrompt = 1,
        PreventUnlockPrompt = 2,
    };
    struct ICardAddedEventArgs;
    struct ICardRemovedEventArgs;
    struct IKnownSmartCardAppletIds;
    struct ISmartCard;
    struct ISmartCardAppletIdGroup;
    struct ISmartCardAppletIdGroup2;
    struct ISmartCardAppletIdGroupFactory;
    struct ISmartCardAppletIdGroupRegistration;
    struct ISmartCardAppletIdGroupRegistration2;
    struct ISmartCardAppletIdGroupStatics;
    struct ISmartCardAutomaticResponseApdu;
    struct ISmartCardAutomaticResponseApdu2;
    struct ISmartCardAutomaticResponseApdu3;
    struct ISmartCardAutomaticResponseApduFactory;
    struct ISmartCardChallengeContext;
    struct ISmartCardConnect;
    struct ISmartCardConnection;
    struct ISmartCardCryptogramGenerator;
    struct ISmartCardCryptogramGenerator2;
    struct ISmartCardCryptogramGeneratorStatics;
    struct ISmartCardCryptogramGeneratorStatics2;
    struct ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
    struct ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
    struct ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
    struct ISmartCardCryptogramMaterialCharacteristics;
    struct ISmartCardCryptogramMaterialPackageCharacteristics;
    struct ISmartCardCryptogramMaterialPossessionProof;
    struct ISmartCardCryptogramPlacementStep;
    struct ISmartCardCryptogramStorageKeyCharacteristics;
    struct ISmartCardCryptogramStorageKeyInfo;
    struct ISmartCardCryptogramStorageKeyInfo2;
    struct ISmartCardEmulator;
    struct ISmartCardEmulator2;
    struct ISmartCardEmulatorApduReceivedEventArgs;
    struct ISmartCardEmulatorApduReceivedEventArgs2;
    struct ISmartCardEmulatorApduReceivedEventArgsWithCryptograms;
    struct ISmartCardEmulatorConnectionDeactivatedEventArgs;
    struct ISmartCardEmulatorConnectionProperties;
    struct ISmartCardEmulatorStatics;
    struct ISmartCardEmulatorStatics2;
    struct ISmartCardEmulatorStatics3;
    struct ISmartCardPinPolicy;
    struct ISmartCardPinResetDeferral;
    struct ISmartCardPinResetRequest;
    struct ISmartCardProvisioning;
    struct ISmartCardProvisioning2;
    struct ISmartCardProvisioningStatics;
    struct ISmartCardProvisioningStatics2;
    struct ISmartCardReader;
    struct ISmartCardReaderStatics;
    struct ISmartCardTriggerDetails;
    struct ISmartCardTriggerDetails2;
    struct ISmartCardTriggerDetails3;
    struct CardAddedEventArgs;
    struct CardRemovedEventArgs;
    struct KnownSmartCardAppletIds;
    struct SmartCard;
    struct SmartCardAppletIdGroup;
    struct SmartCardAppletIdGroupRegistration;
    struct SmartCardAutomaticResponseApdu;
    struct SmartCardChallengeContext;
    struct SmartCardConnection;
    struct SmartCardCryptogramGenerator;
    struct SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
    struct SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
    struct SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
    struct SmartCardCryptogramMaterialCharacteristics;
    struct SmartCardCryptogramMaterialPackageCharacteristics;
    struct SmartCardCryptogramMaterialPossessionProof;
    struct SmartCardCryptogramPlacementStep;
    struct SmartCardCryptogramStorageKeyCharacteristics;
    struct SmartCardCryptogramStorageKeyInfo;
    struct SmartCardEmulator;
    struct SmartCardEmulatorApduReceivedEventArgs;
    struct SmartCardEmulatorConnectionDeactivatedEventArgs;
    struct SmartCardEmulatorConnectionProperties;
    struct SmartCardPinPolicy;
    struct SmartCardPinResetDeferral;
    struct SmartCardPinResetRequest;
    struct SmartCardProvisioning;
    struct SmartCardReader;
    struct SmartCardTriggerDetails;
    struct SmartCardPinResetHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::SmartCards::ICardAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ICardRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::IKnownSmartCardAppletIds>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCard>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroupFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAppletIdGroupStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApduFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardChallengeContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardConnect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardEmulatorStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardPinPolicy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardProvisioning>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardReaderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardTriggerDetails2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SmartCards::CardAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::CardRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::KnownSmartCardAppletIds>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCard>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardAppletIdGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardChallengeContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramGenerator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardPinPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardPinResetDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardPinResetRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardProvisioning>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardActivationPolicyChangeResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardAppletIdGroupActivationPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardAutomaticResponseStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramGeneratorOperationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageConfirmationResponseFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialProtectionMethod>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramMaterialType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramPlacementOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCapabilities>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardCryptographicKeyAttestationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulationCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulationType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorConnectionSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardEmulatorEnablementPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardLaunchBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardReaderKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardReaderStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardTriggerType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Devices::SmartCards::ICardAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ICardAddedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::ICardRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ICardRemovedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::IKnownSmartCardAppletIds>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.IKnownSmartCardAppletIds" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCard>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCard" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroup>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroup" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroup2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroupFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupFactory" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupRegistration" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupRegistration2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAppletIdGroupStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAppletIdGroupStatics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApdu3" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApduFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardAutomaticResponseApduFactory" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardChallengeContext>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardChallengeContext" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardConnect>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardConnect" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardConnection>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardConnection" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGenerator" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGenerator2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGeneratorStatics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGeneratorStatics2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialPackageCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramMaterialPossessionProof" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramPlacementStep" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyInfo" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardCryptogramStorageKeyInfo2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulator>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulator" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulator2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgs2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorApduReceivedEventArgsWithCryptograms" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorConnectionDeactivatedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorConnectionProperties" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardEmulatorStatics3>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardEmulatorStatics3" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardPinPolicy>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardPinPolicy" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardPinResetDeferral" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardPinResetRequest" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardProvisioning>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardProvisioning" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardProvisioning2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardProvisioningStatics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardProvisioningStatics2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardReader>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardReader" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardReaderStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardReaderStatics" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardTriggerDetails" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardTriggerDetails2>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardTriggerDetails2" };
    };
    template <> struct name<Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.ISmartCardTriggerDetails3" };
    };
    template <> struct name<Windows::Devices::SmartCards::CardAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.CardAddedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::CardRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.CardRemovedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::KnownSmartCardAppletIds>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.KnownSmartCardAppletIds" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCard>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCard" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardAppletIdGroup>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardAppletIdGroup" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardAppletIdGroupRegistration" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardAutomaticResponseApdu" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardChallengeContext>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardChallengeContext" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardConnection>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardConnection" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramGenerator>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramGenerator" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPackageCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPossessionProof" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramPlacementStep" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyCharacteristics" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyInfo" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulator>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulator" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorApduReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionDeactivatedEventArgs" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionProperties" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardPinPolicy>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardPinPolicy" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardPinResetDeferral>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardPinResetDeferral" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardPinResetRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardPinResetRequest" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardProvisioning>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardProvisioning" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardReader>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardReader" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardTriggerDetails" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardActivationPolicyChangeResult>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardActivationPolicyChangeResult" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardAppletIdGroupActivationPolicy>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardAppletIdGroupActivationPolicy" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardAutomaticResponseStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardAutomaticResponseStatus" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramAlgorithm" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramGeneratorOperationStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramGeneratorOperationStatus" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageConfirmationResponseFormat>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPackageConfirmationResponseFormat" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageFormat>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialPackageFormat" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialProtectionMethod>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialProtectionMethod" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramMaterialType>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramMaterialType" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramPlacementOptions>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramPlacementOptions" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyAlgorithm" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptogramStorageKeyCapabilities" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardCryptographicKeyAttestationStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardCryptographicKeyAttestationStatus" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulationCategory>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulationCategory" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulationType>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulationType" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedReason>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionDeactivatedReason" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorConnectionSource>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorConnectionSource" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardEmulatorEnablementPolicy>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardEmulatorEnablementPolicy" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardLaunchBehavior>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardLaunchBehavior" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardPinCharacterPolicyOption" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardReaderKind>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardReaderKind" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardReaderStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardReaderStatus" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardStatus" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardTriggerType>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardTriggerType" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardUnlockPromptingBehavior" };
    };
    template <> struct name<Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        static constexpr auto & value{ L"Windows.Devices.SmartCards.SmartCardPinResetHandler" };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ICardAddedEventArgs>
    {
        static constexpr guid value{ 0x18BBEF98,0xF18B,0x4DD3,{ 0xB1,0x18,0xDF,0xB2,0xC8,0xE2,0x3C,0xC6 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ICardRemovedEventArgs>
    {
        static constexpr guid value{ 0x15331AAF,0x22D7,0x4945,{ 0xAF,0xC9,0x03,0xB4,0x6F,0x42,0xA6,0xCD } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::IKnownSmartCardAppletIds>
    {
        static constexpr guid value{ 0x7B04D8D8,0x95B4,0x4C88,{ 0x8C,0xEA,0x41,0x1E,0x55,0x51,0x1E,0xFC } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCard>
    {
        static constexpr guid value{ 0x1B718871,0x6434,0x43F4,{ 0xB5,0x5A,0x6A,0x29,0x62,0x38,0x70,0xAA } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroup>
    {
        static constexpr guid value{ 0x7DB165E6,0x6264,0x56F4,{ 0x5E,0x03,0xC8,0x63,0x85,0x39,0x5E,0xB1 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        static constexpr guid value{ 0x6B0EF9DC,0x9956,0x4A62,{ 0x8D,0x4E,0xD3,0x7A,0x68,0xEB,0xC3,0xA6 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroupFactory>
    {
        static constexpr guid value{ 0x9105EB4D,0x4A65,0x4E41,{ 0x80,0x61,0xCB,0xE8,0x3F,0x36,0x95,0xE5 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration>
    {
        static constexpr guid value{ 0xDF1208D1,0x31BB,0x5596,{ 0x43,0xB1,0x6D,0x69,0xA0,0x25,0x7B,0x3A } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        static constexpr guid value{ 0x5F5508D8,0x98A7,0x4F2E,{ 0x91,0xD9,0x6C,0xFC,0xCE,0xDA,0x40,0x7F } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAppletIdGroupStatics>
    {
        static constexpr guid value{ 0xAB2899A9,0xE76C,0x45CF,{ 0xBF,0x1D,0x90,0xEA,0xA6,0x20,0x59,0x27 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu>
    {
        static constexpr guid value{ 0x52152BAB,0xC63E,0x4531,{ 0xA8,0x57,0xD7,0x56,0xD9,0x9B,0x98,0x6A } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2>
    {
        static constexpr guid value{ 0x44AEBB14,0x559D,0x4531,{ 0x4E,0x51,0x89,0xDB,0x6F,0xA8,0xA5,0x7A } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        static constexpr guid value{ 0xBF43DA74,0x6576,0x4392,{ 0x93,0x67,0xFE,0x3B,0xC9,0xE2,0xD4,0x96 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApduFactory>
    {
        static constexpr guid value{ 0xE97EA2FA,0xD02C,0x4C55,{ 0xB0,0x2A,0x8C,0xFF,0x7F,0xA9,0xF0,0x5B } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardChallengeContext>
    {
        static constexpr guid value{ 0x192A5319,0xC9C4,0x4947,{ 0x81,0xCC,0x44,0x79,0x4A,0x61,0xEF,0x91 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardConnect>
    {
        static constexpr guid value{ 0x2FDF87E5,0x028D,0x491E,{ 0xA0,0x58,0x33,0x82,0xC3,0x98,0x6F,0x40 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardConnection>
    {
        static constexpr guid value{ 0x7EDB991A,0xA81A,0x47BC,{ 0xA6,0x49,0x15,0x6B,0xE6,0xB7,0xF2,0x31 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator>
    {
        static constexpr guid value{ 0xE39F587B,0xEDD3,0x4E49,{ 0xB5,0x94,0x0F,0xF5,0xE4,0xD0,0xC7,0x6F } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        static constexpr guid value{ 0x7116AA34,0x5D6D,0x4B4A,{ 0x96,0xA3,0xEF,0xA4,0x7D,0x2A,0x7E,0x25 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics>
    {
        static constexpr guid value{ 0x09933910,0xCB9C,0x4015,{ 0x96,0x7D,0x52,0x34,0xF3,0xB0,0x29,0x00 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics2>
    {
        static constexpr guid value{ 0x09BDF5E5,0xB4BD,0x4E23,{ 0xA5,0x88,0x74,0x46,0x92,0x04,0xC1,0x28 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        static constexpr guid value{ 0x2798E029,0xD687,0x4C92,{ 0x86,0xC6,0x39,0x9E,0x9A,0x0E,0xCB,0x09 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        static constexpr guid value{ 0x4E6A8A5C,0x9773,0x46C4,{ 0xA3,0x2F,0xB1,0xE5,0x43,0x15,0x9E,0x04 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        static constexpr guid value{ 0x8C7CE857,0xA7E7,0x489D,{ 0xB9,0xD6,0x36,0x80,0x61,0x51,0x50,0x12 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics>
    {
        static constexpr guid value{ 0xFC9AC5CC,0xC1D7,0x4153,{ 0x92,0x3B,0xA2,0xD4,0x3C,0x6C,0x8D,0x49 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics>
    {
        static constexpr guid value{ 0xFFB58E1F,0x0692,0x4C47,{ 0x93,0xCF,0x34,0xD9,0x1F,0x9D,0xCD,0x00 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof>
    {
        static constexpr guid value{ 0xE5B9AB8C,0xA141,0x4135,{ 0x9A,0xDD,0xB0,0xD2,0xE3,0xAA,0x1F,0xC9 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep>
    {
        static constexpr guid value{ 0x947B03EB,0x8342,0x4792,{ 0xA2,0xE5,0x92,0x56,0x36,0x37,0x8A,0x53 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics>
    {
        static constexpr guid value{ 0x8552546E,0x4457,0x4825,{ 0xB4,0x64,0x63,0x54,0x71,0xA3,0x9F,0x5C } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo>
    {
        static constexpr guid value{ 0x77B0F00D,0xB097,0x4F61,{ 0xA2,0x6A,0x95,0x61,0x63,0x9C,0x9C,0x3A } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        static constexpr guid value{ 0x000440F9,0xF7FD,0x417D,{ 0x89,0xE1,0xFB,0xB0,0x38,0x2A,0xDC,0x4D } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulator>
    {
        static constexpr guid value{ 0xDFB906B2,0x875E,0x47E5,{ 0x80,0x77,0xE8,0xBF,0xF1,0xB1,0xC6,0xFB } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        static constexpr guid value{ 0xFE3FC0B8,0x8529,0x411A,{ 0x80,0x7B,0x48,0xED,0xC2,0xA0,0xAB,0x44 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs>
    {
        static constexpr guid value{ 0xD55D1576,0x69D2,0x5333,{ 0x5B,0x5F,0xF8,0xC0,0xD6,0xE9,0xF0,0x9F } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        static constexpr guid value{ 0x8BF93DF0,0x22E1,0x4238,{ 0x86,0x10,0x94,0xCE,0x4A,0x96,0x54,0x25 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
    {
        static constexpr guid value{ 0xD550BAC7,0xB7BF,0x4E29,{ 0x92,0x94,0x0C,0x4A,0xC3,0xC9,0x41,0xBD } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        static constexpr guid value{ 0x2186D8D3,0xC5EB,0x5262,{ 0x43,0xDF,0x62,0xA0,0xA1,0xB5,0x55,0x57 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties>
    {
        static constexpr guid value{ 0x4E2CA5EE,0xF969,0x507D,{ 0x6C,0xF9,0x34,0xE2,0xD1,0x8D,0xF3,0x11 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorStatics>
    {
        static constexpr guid value{ 0x7A9BFC4B,0xC4D3,0x494F,{ 0xB8,0xA2,0x62,0x15,0xD8,0x1E,0x85,0xB2 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorStatics2>
    {
        static constexpr guid value{ 0x69AE9F8A,0xB775,0x488B,{ 0x84,0x36,0x6C,0x1E,0x28,0xED,0x73,0x1F } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardEmulatorStatics3>
    {
        static constexpr guid value{ 0x59EA142A,0x9F09,0x43F5,{ 0x85,0x65,0xCF,0xA8,0x14,0x8E,0x4C,0xB2 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardPinPolicy>
    {
        static constexpr guid value{ 0x183CE184,0x4DB6,0x4841,{ 0xAC,0x9E,0x2A,0xC1,0xF3,0x9B,0x73,0x04 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
    {
        static constexpr guid value{ 0x18C94AAC,0x7805,0x4004,{ 0x85,0xE4,0xBB,0xEF,0xAC,0x8F,0x68,0x84 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
    {
        static constexpr guid value{ 0x12FE3C4D,0x5FB9,0x4E8E,{ 0x9F,0xF6,0x61,0xF4,0x75,0x12,0x4F,0xEF } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardProvisioning>
    {
        static constexpr guid value{ 0x19EEEDBD,0x1FAB,0x477C,{ 0xB7,0x12,0x1A,0x2C,0x5A,0xF1,0xFD,0x6E } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        static constexpr guid value{ 0x10FD28EB,0x3F79,0x4B66,{ 0x9B,0x7C,0x11,0xC1,0x49,0xB7,0xD0,0xBC } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
    {
        static constexpr guid value{ 0x13882848,0x0D13,0x4E70,{ 0x97,0x35,0x51,0xDA,0xEC,0xA5,0x25,0x4F } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
    {
        static constexpr guid value{ 0x3447C6A8,0xC9A0,0x4BD6,{ 0xB5,0x0D,0x25,0x1F,0x4E,0x8D,0x3A,0x62 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardReader>
    {
        static constexpr guid value{ 0x1074B4E0,0x54C2,0x4DF0,{ 0x81,0x7A,0x14,0xC1,0x43,0x78,0xF0,0x6C } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardReaderStatics>
    {
        static constexpr guid value{ 0x103C04E1,0xA1CA,0x48F2,{ 0xA2,0x81,0x5B,0x6F,0x66,0x9A,0xF1,0x07 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardTriggerDetails>
    {
        static constexpr guid value{ 0x5F9BF11E,0x39EF,0x4F2B,{ 0xB4,0x4F,0x0A,0x91,0x55,0xB1,0x77,0xBC } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardTriggerDetails2>
    {
        static constexpr guid value{ 0x2945C569,0x8975,0x4A51,{ 0x9E,0x1A,0x5F,0x8A,0x76,0xEE,0x51,0xAF } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        static constexpr guid value{ 0xB3E2C27D,0x18C6,0x4BA8,{ 0x83,0x76,0xEF,0x03,0xD4,0x91,0x26,0x66 } };
    };
    template <> struct guid_storage<Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        static constexpr guid value{ 0x138D5E40,0xF3BC,0x4A5C,{ 0xB4,0x1D,0x4B,0x4E,0xF6,0x84,0xE2,0x37 } };
    };
    template <> struct default_interface<Windows::Devices::SmartCards::CardAddedEventArgs>
    {
        using type = Windows::Devices::SmartCards::ICardAddedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::CardRemovedEventArgs>
    {
        using type = Windows::Devices::SmartCards::ICardRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCard>
    {
        using type = Windows::Devices::SmartCards::ISmartCard;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardAppletIdGroup>
    {
        using type = Windows::Devices::SmartCards::ISmartCardAppletIdGroup;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>
    {
        using type = Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>
    {
        using type = Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardChallengeContext>
    {
        using type = Windows::Devices::SmartCards::ISmartCardChallengeContext;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardConnection>
    {
        using type = Windows::Devices::SmartCards::ISmartCardConnection;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramGenerator>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramGenerator;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>
    {
        using type = Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardEmulator>
    {
        using type = Windows::Devices::SmartCards::ISmartCardEmulator;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>
    {
        using type = Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        using type = Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>
    {
        using type = Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardPinPolicy>
    {
        using type = Windows::Devices::SmartCards::ISmartCardPinPolicy;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardPinResetDeferral>
    {
        using type = Windows::Devices::SmartCards::ISmartCardPinResetDeferral;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardPinResetRequest>
    {
        using type = Windows::Devices::SmartCards::ISmartCardPinResetRequest;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardProvisioning>
    {
        using type = Windows::Devices::SmartCards::ISmartCardProvisioning;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardReader>
    {
        using type = Windows::Devices::SmartCards::ISmartCardReader;
    };
    template <> struct default_interface<Windows::Devices::SmartCards::SmartCardTriggerDetails>
    {
        using type = Windows::Devices::SmartCards::ISmartCardTriggerDetails;
    };
    template <> struct abi<Windows::Devices::SmartCards::ICardAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartCard(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ICardRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartCard(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::IKnownSmartCardAppletIds>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentSystemEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProximityPaymentSystemEnvironment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reader(void**) noexcept = 0;
            virtual int32_t __stdcall GetStatusAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAnswerToResetAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppletIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmartCardEmulationCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SmartCardEmulationCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SmartCardEmulationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SmartCardEmulationType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AutomaticEnablement(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutomaticEnablement(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecureUserAuthenticationRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SecureUserAuthenticationRequired(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivationPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppletIdGroup(void**) noexcept = 0;
            virtual int32_t __stdcall RequestActivationPolicyChangeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall SetAutomaticResponseApdusAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartCardReaderId(void**) noexcept = 0;
            virtual int32_t __stdcall SetPropertiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAppletIdGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxAppletIds(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommandApdu(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommandApdu(void*) noexcept = 0;
            virtual int32_t __stdcall get_CommandApduBitMask(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommandApduBitMask(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldMatchLength(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldMatchLength(bool) noexcept = 0;
            virtual int32_t __stdcall get_AppletId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppletId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseApdu(void**) noexcept = 0;
            virtual int32_t __stdcall put_ResponseApdu(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputState(void**) noexcept = 0;
            virtual int32_t __stdcall put_InputState(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutputState(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutputState(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowWhenCryptogramGeneratorNotPrepared(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowWhenCryptogramGeneratorNotPrepared(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApduFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardChallengeContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Challenge(void**) noexcept = 0;
            virtual int32_t __stdcall VerifyResponseAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProvisionAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall ProvisionAsyncWithNewCardId(void*, bool, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall ChangeAdministrativeKeyAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardConnect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConnectAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TransmitAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedCryptogramMaterialTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCryptogramAlgorithms(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCryptogramMaterialPackageFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCryptogramMaterialPackageConfirmationResponseFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedSmartCardCryptogramStorageKeyCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteCryptogramMaterialStorageKeyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCryptogramMaterialStorageKeyAsync(int32_t, void*, int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCryptogramMaterialStorageKeyInfoAsync(int32_t, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportCryptogramMaterialPackageAsync(int32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryProvePossessionOfCryptogramMaterialPackageAsync(int32_t, int32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestUnlockCryptogramMaterialForUseAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteCryptogramMaterialPackageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ValidateRequestApduAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAllCryptogramStorageKeyCharacteristicsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllCryptogramMaterialPackageCharacteristicsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllCryptogramMaterialPackageCharacteristicsWithStorageKeyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAllCryptogramMaterialCharacteristicsAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSmartCardCryptogramGeneratorAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Characteristics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Characteristics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Characteristics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaterialName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowedAlgorithms(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowedProofOfPossessionAlgorithms(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowedValidations(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionVersion(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaterialLength(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageName(void**) noexcept = 0;
            virtual int32_t __stdcall get_StorageKeyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateImported(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PackageFormat(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Proof(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Algorithm(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Algorithm(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SourceData(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceData(void*) noexcept = 0;
            virtual int32_t __stdcall get_CryptogramMaterialPackageName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CryptogramMaterialPackageName(void*) noexcept = 0;
            virtual int32_t __stdcall get_CryptogramMaterialName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CryptogramMaterialName(void*) noexcept = 0;
            virtual int32_t __stdcall get_TemplateOffset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TemplateOffset(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CryptogramOffset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CryptogramOffset(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CryptogramLength(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CryptogramLength(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CryptogramPlacementOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CryptogramPlacementOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ChainedOutputStep(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChainedOutputStep(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StorageKeyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateCreated(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Algorithm(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PublicKeyBlobType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PublicKey(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttestationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Attestation(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttestationCertificateChain(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationalRequirements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnablementPolicy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ApduReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ApduReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionDeactivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionDeactivated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall IsHostCardEmulationSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommandApdu(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall TryRespondAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_AutomaticResponseStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TryRespondWithStateAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryRespondWithCryptogramsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryRespondWithCryptogramsAndStateAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Source(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAppletIdGroupRegistrationsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterAppletIdGroupAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnregisterAppletIdGroupAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxAppletIdGroupRegistrations(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardEmulatorStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardPinPolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinLength(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxLength(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_UppercaseLetters(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UppercaseLetters(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LowercaseLetters(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LowercaseLetters(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Digits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Digits(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SpecialCharacters(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpecialCharacters(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Challenge(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetResponse(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardProvisioning>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartCard(void**) noexcept = 0;
            virtual int32_t __stdcall GetIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetNameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetChallengeContextAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinChangeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinResetAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAuthorityKeyContainerNameAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromSmartCardAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestVirtualSmartCardCreationAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestVirtualSmartCardCreationAsyncWithCardId(void*, void*, void*, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall RequestVirtualSmartCardDeletionAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAttestedVirtualSmartCardCreationAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAttestedVirtualSmartCardCreationAsyncWithCardId(void*, void*, void*, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetStatusAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllCardsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_CardAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CardAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CardRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CardRemoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardReaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorWithKind(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceAppletId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TriggerData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardTriggerDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Emulator(void**) noexcept = 0;
            virtual int32_t __stdcall TryLaunchCurrentAppAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryLaunchCurrentAppWithBehaviorAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartCard(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ICardAddedEventArgs
    {
        [[nodiscard]] auto SmartCard() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ICardAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ICardAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ICardRemovedEventArgs
    {
        [[nodiscard]] auto SmartCard() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ICardRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ICardRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_IKnownSmartCardAppletIds
    {
        [[nodiscard]] auto PaymentSystemEnvironment() const;
        [[nodiscard]] auto ProximityPaymentSystemEnvironment() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::IKnownSmartCardAppletIds>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_IKnownSmartCardAppletIds<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCard
    {
        [[nodiscard]] auto Reader() const;
        auto GetStatusAsync() const;
        auto GetAnswerToResetAsync() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCard>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCard<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroup
    {
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto AppletIds() const;
        [[nodiscard]] auto SmartCardEmulationCategory() const;
        auto SmartCardEmulationCategory(Windows::Devices::SmartCards::SmartCardEmulationCategory const& value) const;
        [[nodiscard]] auto SmartCardEmulationType() const;
        auto SmartCardEmulationType(Windows::Devices::SmartCards::SmartCardEmulationType const& value) const;
        [[nodiscard]] auto AutomaticEnablement() const;
        auto AutomaticEnablement(bool value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroup>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroup2
    {
        [[nodiscard]] auto Logo() const;
        auto Logo(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto SecureUserAuthenticationRequired() const;
        auto SecureUserAuthenticationRequired(bool value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroup2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupFactory
    {
        auto Create(param::hstring const& displayName, param::vector<Windows::Storage::Streams::IBuffer> const& appletIds, Windows::Devices::SmartCards::SmartCardEmulationCategory const& emulationCategory, Windows::Devices::SmartCards::SmartCardEmulationType const& emulationType) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroupFactory>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration
    {
        [[nodiscard]] auto ActivationPolicy() const;
        [[nodiscard]] auto AppletIdGroup() const;
        auto RequestActivationPolicyChangeAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupActivationPolicy const& policy) const;
        [[nodiscard]] auto Id() const;
        auto SetAutomaticResponseApdusAsync(param::async_iterable<Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu> const& apdus) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration2
    {
        [[nodiscard]] auto SmartCardReaderId() const;
        auto SetPropertiesAsync(Windows::Foundation::Collections::ValueSet const& props) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupRegistration2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupStatics
    {
        [[nodiscard]] auto MaxAppletIds() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAppletIdGroupStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAppletIdGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu
    {
        [[nodiscard]] auto CommandApdu() const;
        auto CommandApdu(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto CommandApduBitMask() const;
        auto CommandApduBitMask(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto ShouldMatchLength() const;
        auto ShouldMatchLength(bool value) const;
        [[nodiscard]] auto AppletId() const;
        auto AppletId(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto ResponseApdu() const;
        auto ResponseApdu(Windows::Storage::Streams::IBuffer const& value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu2
    {
        [[nodiscard]] auto InputState() const;
        auto InputState(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto OutputState() const;
        auto OutputState(Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu3
    {
        [[nodiscard]] auto AllowWhenCryptogramGeneratorNotPrepared() const;
        auto AllowWhenCryptogramGeneratorNotPrepared(bool value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApdu3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApduFactory
    {
        auto Create(Windows::Storage::Streams::IBuffer const& commandApdu, Windows::Storage::Streams::IBuffer const& responseApdu) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardAutomaticResponseApduFactory>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardAutomaticResponseApduFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardChallengeContext
    {
        [[nodiscard]] auto Challenge() const;
        auto VerifyResponseAsync(Windows::Storage::Streams::IBuffer const& response) const;
        auto ProvisionAsync(Windows::Storage::Streams::IBuffer const& response, bool formatCard) const;
        auto ProvisionAsync(Windows::Storage::Streams::IBuffer const& response, bool formatCard, winrt::guid const& newCardId) const;
        auto ChangeAdministrativeKeyAsync(Windows::Storage::Streams::IBuffer const& response, Windows::Storage::Streams::IBuffer const& newAdministrativeKey) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardChallengeContext>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardChallengeContext<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardConnect
    {
        auto ConnectAsync() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardConnect>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardConnect<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardConnection
    {
        auto TransmitAsync(Windows::Storage::Streams::IBuffer const& command) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardConnection>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator
    {
        [[nodiscard]] auto SupportedCryptogramMaterialTypes() const;
        [[nodiscard]] auto SupportedCryptogramAlgorithms() const;
        [[nodiscard]] auto SupportedCryptogramMaterialPackageFormats() const;
        [[nodiscard]] auto SupportedCryptogramMaterialPackageConfirmationResponseFormats() const;
        [[nodiscard]] auto SupportedSmartCardCryptogramStorageKeyCapabilities() const;
        auto DeleteCryptogramMaterialStorageKeyAsync(param::hstring const& storageKeyName) const;
        auto CreateCryptogramMaterialStorageKeyAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior, param::hstring const& storageKeyName, Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyAlgorithm const& algorithm, Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCapabilities const& capabilities) const;
        auto RequestCryptogramMaterialStorageKeyInfoAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior, param::hstring const& storageKeyName, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& format) const;
        auto ImportCryptogramMaterialPackageAsync(Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageFormat const& format, param::hstring const& storageKeyName, param::hstring const& materialPackageName, Windows::Storage::Streams::IBuffer const& cryptogramMaterialPackage) const;
        auto TryProvePossessionOfCryptogramMaterialPackageAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior, Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageConfirmationResponseFormat const& responseFormat, param::hstring const& materialPackageName, param::hstring const& materialName, Windows::Storage::Streams::IBuffer const& challenge) const;
        auto RequestUnlockCryptogramMaterialForUseAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior) const;
        auto DeleteCryptogramMaterialPackageAsync(param::hstring const& materialPackageName) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator2
    {
        auto ValidateRequestApduAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior, Windows::Storage::Streams::IBuffer const& apduToValidate, param::async_iterable<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep> const& cryptogramPlacementSteps) const;
        auto GetAllCryptogramStorageKeyCharacteristicsAsync() const;
        auto GetAllCryptogramMaterialPackageCharacteristicsAsync() const;
        auto GetAllCryptogramMaterialPackageCharacteristicsAsync(param::hstring const& storageKeyName) const;
        auto GetAllCryptogramMaterialCharacteristicsAsync(Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior const& promptingBehavior, param::hstring const& materialPackageName) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGenerator2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics
    {
        auto GetSmartCardCryptogramGeneratorAsync() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGeneratorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGeneratorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto Characteristics() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto Characteristics() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto Characteristics() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialCharacteristics
    {
        [[nodiscard]] auto MaterialName() const;
        [[nodiscard]] auto AllowedAlgorithms() const;
        [[nodiscard]] auto AllowedProofOfPossessionAlgorithms() const;
        [[nodiscard]] auto AllowedValidations() const;
        [[nodiscard]] auto MaterialType() const;
        [[nodiscard]] auto ProtectionMethod() const;
        [[nodiscard]] auto ProtectionVersion() const;
        [[nodiscard]] auto MaterialLength() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialCharacteristics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPackageCharacteristics
    {
        [[nodiscard]] auto PackageName() const;
        [[nodiscard]] auto StorageKeyName() const;
        [[nodiscard]] auto DateImported() const;
        [[nodiscard]] auto PackageFormat() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPackageCharacteristics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPossessionProof
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto Proof() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramMaterialPossessionProof<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramPlacementStep
    {
        [[nodiscard]] auto Algorithm() const;
        auto Algorithm(Windows::Devices::SmartCards::SmartCardCryptogramAlgorithm const& value) const;
        [[nodiscard]] auto SourceData() const;
        auto SourceData(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto CryptogramMaterialPackageName() const;
        auto CryptogramMaterialPackageName(param::hstring const& value) const;
        [[nodiscard]] auto CryptogramMaterialName() const;
        auto CryptogramMaterialName(param::hstring const& value) const;
        [[nodiscard]] auto TemplateOffset() const;
        auto TemplateOffset(int32_t value) const;
        [[nodiscard]] auto CryptogramOffset() const;
        auto CryptogramOffset(int32_t value) const;
        [[nodiscard]] auto CryptogramLength() const;
        auto CryptogramLength(int32_t value) const;
        [[nodiscard]] auto CryptogramPlacementOptions() const;
        auto CryptogramPlacementOptions(Windows::Devices::SmartCards::SmartCardCryptogramPlacementOptions const& value) const;
        [[nodiscard]] auto ChainedOutputStep() const;
        auto ChainedOutputStep(Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep const& value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramPlacementStep<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyCharacteristics
    {
        [[nodiscard]] auto StorageKeyName() const;
        [[nodiscard]] auto DateCreated() const;
        [[nodiscard]] auto Algorithm() const;
        [[nodiscard]] auto Capabilities() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyCharacteristics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto PublicKeyBlobType() const;
        [[nodiscard]] auto PublicKey() const;
        [[nodiscard]] auto AttestationStatus() const;
        [[nodiscard]] auto Attestation() const;
        [[nodiscard]] auto AttestationCertificateChain() const;
        [[nodiscard]] auto Capabilities() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo2
    {
        [[nodiscard]] auto OperationalRequirements() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardCryptogramStorageKeyInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulator
    {
        [[nodiscard]] auto EnablementPolicy() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulator>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulator<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulator2
    {
        auto ApduReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardEmulator, Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs> const& value) const;
        using ApduReceived_revoker = impl::event_revoker<Windows::Devices::SmartCards::ISmartCardEmulator2, &impl::abi_t<Windows::Devices::SmartCards::ISmartCardEmulator2>::remove_ApduReceived>;
        ApduReceived_revoker ApduReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardEmulator, Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs> const& value) const;
        auto ApduReceived(winrt::event_token const& value) const noexcept;
        auto ConnectionDeactivated(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardEmulator, Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs> const& value) const;
        using ConnectionDeactivated_revoker = impl::event_revoker<Windows::Devices::SmartCards::ISmartCardEmulator2, &impl::abi_t<Windows::Devices::SmartCards::ISmartCardEmulator2>::remove_ConnectionDeactivated>;
        ConnectionDeactivated_revoker ConnectionDeactivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardEmulator, Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs> const& value) const;
        auto ConnectionDeactivated(winrt::event_token const& value) const noexcept;
        auto Start() const;
        auto IsHostCardEmulationSupported() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulator2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs
    {
        [[nodiscard]] auto CommandApdu() const;
        [[nodiscard]] auto ConnectionProperties() const;
        auto TryRespondAsync(Windows::Storage::Streams::IBuffer const& responseApdu) const;
        [[nodiscard]] auto AutomaticResponseStatus() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs2
    {
        [[nodiscard]] auto State() const;
        auto TryRespondAsync(Windows::Storage::Streams::IBuffer const& responseApdu, Windows::Foundation::IReference<uint32_t> const& nextState) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgsWithCryptograms
    {
        auto TryRespondWithCryptogramsAsync(Windows::Storage::Streams::IBuffer const& responseTemplate, param::async_iterable<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep> const& cryptogramPlacementSteps) const;
        auto TryRespondWithCryptogramsAsync(Windows::Storage::Streams::IBuffer const& responseTemplate, param::async_iterable<Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep> const& cryptogramPlacementSteps, Windows::Foundation::IReference<uint32_t> const& nextState) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorApduReceivedEventArgsWithCryptograms<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionDeactivatedEventArgs
    {
        [[nodiscard]] auto ConnectionProperties() const;
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionDeactivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionProperties
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Source() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorConnectionProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics
    {
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics2
    {
        auto GetAppletIdGroupRegistrationsAsync() const;
        auto RegisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroup const& appletIdGroup) const;
        auto UnregisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration const& registration) const;
        [[nodiscard]] auto MaxAppletIdGroupRegistrations() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics3
    {
        auto IsSupported() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardEmulatorStatics3>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardEmulatorStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardPinPolicy
    {
        [[nodiscard]] auto MinLength() const;
        auto MinLength(uint32_t value) const;
        [[nodiscard]] auto MaxLength() const;
        auto MaxLength(uint32_t value) const;
        [[nodiscard]] auto UppercaseLetters() const;
        auto UppercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption const& value) const;
        [[nodiscard]] auto LowercaseLetters() const;
        auto LowercaseLetters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption const& value) const;
        [[nodiscard]] auto Digits() const;
        auto Digits(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption const& value) const;
        [[nodiscard]] auto SpecialCharacters() const;
        auto SpecialCharacters(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption const& value) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardPinPolicy>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardPinPolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardPinResetDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardPinResetDeferral>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardPinResetDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardPinResetRequest
    {
        [[nodiscard]] auto Challenge() const;
        [[nodiscard]] auto Deadline() const;
        auto GetDeferral() const;
        auto SetResponse(Windows::Storage::Streams::IBuffer const& response) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardPinResetRequest>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardPinResetRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardProvisioning
    {
        [[nodiscard]] auto SmartCard() const;
        auto GetIdAsync() const;
        auto GetNameAsync() const;
        auto GetChallengeContextAsync() const;
        auto RequestPinChangeAsync() const;
        auto RequestPinResetAsync(Windows::Devices::SmartCards::SmartCardPinResetHandler const& handler) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardProvisioning>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardProvisioning<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardProvisioning2
    {
        auto GetAuthorityKeyContainerNameAsync() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardProvisioning2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardProvisioningStatics
    {
        auto FromSmartCardAsync(Windows::Devices::SmartCards::SmartCard const& card) const;
        auto RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy) const;
        auto RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId) const;
        auto RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::SmartCard const& card) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardProvisioningStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardProvisioningStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardProvisioningStatics2
    {
        auto RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy) const;
        auto RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardProvisioningStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardProvisioningStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardReader
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Kind() const;
        auto GetStatusAsync() const;
        auto FindAllCardsAsync() const;
        auto CardAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> const& handler) const;
        using CardAdded_revoker = impl::event_revoker<Windows::Devices::SmartCards::ISmartCardReader, &impl::abi_t<Windows::Devices::SmartCards::ISmartCardReader>::remove_CardAdded>;
        CardAdded_revoker CardAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardAddedEventArgs> const& handler) const;
        auto CardAdded(winrt::event_token const& token) const noexcept;
        auto CardRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> const& handler) const;
        using CardRemoved_revoker = impl::event_revoker<Windows::Devices::SmartCards::ISmartCardReader, &impl::abi_t<Windows::Devices::SmartCards::ISmartCardReader>::remove_CardRemoved>;
        CardRemoved_revoker CardRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SmartCards::SmartCardReader, Windows::Devices::SmartCards::CardRemovedEventArgs> const& handler) const;
        auto CardRemoved(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardReader>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardReaderStatics
    {
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind const& kind) const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardReaderStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardReaderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails
    {
        [[nodiscard]] auto TriggerType() const;
        [[nodiscard]] auto SourceAppletId() const;
        [[nodiscard]] auto TriggerData() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails2
    {
        [[nodiscard]] auto Emulator() const;
        auto TryLaunchCurrentAppAsync(param::hstring const& arguments) const;
        auto TryLaunchCurrentAppAsync(param::hstring const& arguments, Windows::Devices::SmartCards::SmartCardLaunchBehavior const& behavior) const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardTriggerDetails2>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails3
    {
        [[nodiscard]] auto SmartCard() const;
    };
    template <> struct consume<Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        template <typename D> using type = consume_Windows_Devices_SmartCards_ISmartCardTriggerDetails3<D>;
    };
}
#endif
