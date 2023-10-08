// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_NetworkOperators_0_H
#define WINRT_Windows_Networking_NetworkOperators_0_H
namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
namespace winrt::Windows::Devices::Sms
{
    enum class CellularClass : int32_t;
    struct ISmsMessage;
}
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Networking::Connectivity
{
    struct ConnectionProfile;
    struct NetworkAdapter;
    enum class NetworkCostType : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Networking::NetworkOperators
{
    enum class DataClasses : uint32_t
    {
        None = 0,
        Gprs = 0x1,
        Edge = 0x2,
        Umts = 0x4,
        Hsdpa = 0x8,
        Hsupa = 0x10,
        LteAdvanced = 0x20,
        Cdma1xRtt = 0x10000,
        Cdma1xEvdo = 0x20000,
        Cdma1xEvdoRevA = 0x40000,
        Cdma1xEvdv = 0x80000,
        Cdma3xRtt = 0x100000,
        Cdma1xEvdoRevB = 0x200000,
        CdmaUmb = 0x400000,
        Custom = 0x80000000,
    };
    enum class ESimAuthenticationPreference : int32_t
    {
        OnEntry = 0,
        OnAction = 1,
        Never = 2,
    };
    enum class ESimDiscoverResultKind : int32_t
    {
        None = 0,
        Events = 1,
        ProfileMetadata = 2,
    };
    enum class ESimOperationStatus : int32_t
    {
        Success = 0,
        NotAuthorized = 1,
        NotFound = 2,
        PolicyViolation = 3,
        InsufficientSpaceOnCard = 4,
        ServerFailure = 5,
        ServerNotReachable = 6,
        TimeoutWaitingForUserConsent = 7,
        IncorrectConfirmationCode = 8,
        ConfirmationCodeMaxRetriesExceeded = 9,
        CardRemoved = 10,
        CardBusy = 11,
        Other = 12,
        CardGeneralFailure = 13,
        ConfirmationCodeMissing = 14,
        InvalidMatchingId = 15,
        NoEligibleProfileForThisDevice = 16,
        OperationAborted = 17,
        EidMismatch = 18,
        ProfileNotAvailableForNewBinding = 19,
        ProfileNotReleasedByOperator = 20,
        OperationProhibitedByProfileClass = 21,
        ProfileNotPresent = 22,
        NoCorrespondingRequest = 23,
    };
    enum class ESimProfileClass : int32_t
    {
        Operational = 0,
        Test = 1,
        Provisioning = 2,
    };
    enum class ESimProfileMetadataState : int32_t
    {
        Unknown = 0,
        WaitingForInstall = 1,
        Downloading = 2,
        Installing = 3,
        Expired = 4,
        RejectingDownload = 5,
        NoLongerAvailable = 6,
        DeniedByPolicy = 7,
    };
    enum class ESimProfileState : int32_t
    {
        Unknown = 0,
        Disabled = 1,
        Enabled = 2,
        Deleted = 3,
    };
    enum class ESimState : int32_t
    {
        Unknown = 0,
        Idle = 1,
        Removed = 2,
        Busy = 3,
    };
    enum class ESimWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
    };
    enum class HotspotAuthenticationResponseCode : int32_t
    {
        NoError = 0,
        LoginSucceeded = 50,
        LoginFailed = 100,
        RadiusServerError = 102,
        NetworkAdministratorError = 105,
        LoginAborted = 151,
        AccessGatewayInternalError = 255,
    };
    enum class MobileBroadbandAccountWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopped = 3,
        Aborted = 4,
    };
    enum class MobileBroadbandDeviceType : int32_t
    {
        Unknown = 0,
        Embedded = 1,
        Removable = 2,
        Remote = 3,
    };
    enum class MobileBroadbandModemStatus : int32_t
    {
        Success = 0,
        OtherFailure = 1,
        Busy = 2,
        NoDeviceSupport = 3,
    };
    enum class MobileBroadbandPinFormat : int32_t
    {
        Unknown = 0,
        Numeric = 1,
        Alphanumeric = 2,
    };
    enum class MobileBroadbandPinLockState : int32_t
    {
        Unknown = 0,
        Unlocked = 1,
        PinRequired = 2,
        PinUnblockKeyRequired = 3,
    };
    enum class MobileBroadbandPinType : int32_t
    {
        None = 0,
        Custom = 1,
        Pin1 = 2,
        Pin2 = 3,
        SimPin = 4,
        FirstSimPin = 5,
        NetworkPin = 6,
        NetworkSubsetPin = 7,
        ServiceProviderPin = 8,
        CorporatePin = 9,
        SubsidyLock = 10,
    };
    enum class MobileBroadbandRadioState : int32_t
    {
        Off = 0,
        On = 1,
    };
    enum class MobileBroadbandUiccAppOperationStatus : int32_t
    {
        Success = 0,
        InvalidUiccFilePath = 1,
        AccessConditionNotHeld = 2,
        UiccBusy = 3,
    };
    enum class NetworkDeviceStatus : int32_t
    {
        DeviceNotReady = 0,
        DeviceReady = 1,
        SimNotInserted = 2,
        BadSim = 3,
        DeviceHardwareFailure = 4,
        AccountNotActivated = 5,
        DeviceLocked = 6,
        DeviceBlocked = 7,
    };
    enum class NetworkOperatorDataUsageNotificationKind : int32_t
    {
        DataUsageProgress = 0,
    };
    enum class NetworkOperatorEventMessageType : int32_t
    {
        Gsm = 0,
        Cdma = 1,
        Ussd = 2,
        DataPlanThresholdReached = 3,
        DataPlanReset = 4,
        DataPlanDeleted = 5,
        ProfileConnected = 6,
        ProfileDisconnected = 7,
        RegisteredRoaming = 8,
        RegisteredHome = 9,
        TetheringEntitlementCheck = 10,
        TetheringOperationalStateChanged = 11,
        TetheringNumberOfClientsChanged = 12,
    };
    enum class NetworkRegistrationState : int32_t
    {
        None = 0,
        Deregistered = 1,
        Searching = 2,
        Home = 3,
        Roaming = 4,
        Partner = 5,
        Denied = 6,
    };
    enum class ProfileMediaType : int32_t
    {
        Wlan = 0,
        Wwan = 1,
    };
    enum class TetheringCapability : int32_t
    {
        Enabled = 0,
        DisabledByGroupPolicy = 1,
        DisabledByHardwareLimitation = 2,
        DisabledByOperator = 3,
        DisabledBySku = 4,
        DisabledByRequiredAppNotInstalled = 5,
        DisabledDueToUnknownCause = 6,
        DisabledBySystemCapability = 7,
    };
    enum class TetheringOperationStatus : int32_t
    {
        Success = 0,
        Unknown = 1,
        MobileBroadbandDeviceOff = 2,
        WiFiDeviceOff = 3,
        EntitlementCheckTimeout = 4,
        EntitlementCheckFailure = 5,
        OperationInProgress = 6,
        BluetoothDeviceOff = 7,
        NetworkLimitedConnectivity = 8,
    };
    enum class TetheringOperationalState : int32_t
    {
        Unknown = 0,
        On = 1,
        Off = 2,
        InTransition = 3,
    };
    enum class TetheringWiFiBand : int32_t
    {
        Auto = 0,
        TwoPointFourGigahertz = 1,
        FiveGigahertz = 2,
    };
    enum class UiccAccessCondition : int32_t
    {
        AlwaysAllowed = 0,
        Pin1 = 1,
        Pin2 = 2,
        Pin3 = 3,
        Pin4 = 4,
        Administrative5 = 5,
        Administrative6 = 6,
        NeverAllowed = 7,
    };
    enum class UiccAppKind : int32_t
    {
        Unknown = 0,
        MF = 1,
        MFSim = 2,
        MFRuim = 3,
        USim = 4,
        CSim = 5,
        ISim = 6,
    };
    enum class UiccAppRecordKind : int32_t
    {
        Unknown = 0,
        Transparent = 1,
        RecordOriented = 2,
    };
    enum class UssdResultCode : int32_t
    {
        NoActionRequired = 0,
        ActionRequired = 1,
        Terminated = 2,
        OtherLocalClient = 3,
        OperationNotSupported = 4,
        NetworkTimeout = 5,
    };
    struct IESim;
    struct IESim2;
    struct IESimAddedEventArgs;
    struct IESimDiscoverEvent;
    struct IESimDiscoverResult;
    struct IESimDownloadProfileMetadataResult;
    struct IESimManagerStatics;
    struct IESimOperationResult;
    struct IESimPolicy;
    struct IESimProfile;
    struct IESimProfileMetadata;
    struct IESimProfilePolicy;
    struct IESimRemovedEventArgs;
    struct IESimServiceInfo;
    struct IESimUpdatedEventArgs;
    struct IESimWatcher;
    struct IFdnAccessManagerStatics;
    struct IHotspotAuthenticationContext;
    struct IHotspotAuthenticationContext2;
    struct IHotspotAuthenticationContextStatics;
    struct IHotspotAuthenticationEventDetails;
    struct IHotspotCredentialsAuthenticationResult;
    struct IKnownCSimFilePathsStatics;
    struct IKnownRuimFilePathsStatics;
    struct IKnownSimFilePathsStatics;
    struct IKnownUSimFilePathsStatics;
    struct IMobileBroadbandAccount;
    struct IMobileBroadbandAccount2;
    struct IMobileBroadbandAccount3;
    struct IMobileBroadbandAccountEventArgs;
    struct IMobileBroadbandAccountStatics;
    struct IMobileBroadbandAccountUpdatedEventArgs;
    struct IMobileBroadbandAccountWatcher;
    struct IMobileBroadbandAntennaSar;
    struct IMobileBroadbandAntennaSarFactory;
    struct IMobileBroadbandCellCdma;
    struct IMobileBroadbandCellGsm;
    struct IMobileBroadbandCellLte;
    struct IMobileBroadbandCellTdscdma;
    struct IMobileBroadbandCellUmts;
    struct IMobileBroadbandCellsInfo;
    struct IMobileBroadbandDeviceInformation;
    struct IMobileBroadbandDeviceInformation2;
    struct IMobileBroadbandDeviceInformation3;
    struct IMobileBroadbandDeviceService;
    struct IMobileBroadbandDeviceServiceCommandResult;
    struct IMobileBroadbandDeviceServiceCommandSession;
    struct IMobileBroadbandDeviceServiceDataReceivedEventArgs;
    struct IMobileBroadbandDeviceServiceDataSession;
    struct IMobileBroadbandDeviceServiceInformation;
    struct IMobileBroadbandDeviceServiceTriggerDetails;
    struct IMobileBroadbandModem;
    struct IMobileBroadbandModem2;
    struct IMobileBroadbandModem3;
    struct IMobileBroadbandModemConfiguration;
    struct IMobileBroadbandModemConfiguration2;
    struct IMobileBroadbandModemIsolation;
    struct IMobileBroadbandModemIsolationFactory;
    struct IMobileBroadbandModemStatics;
    struct IMobileBroadbandNetwork;
    struct IMobileBroadbandNetwork2;
    struct IMobileBroadbandNetwork3;
    struct IMobileBroadbandNetworkRegistrationStateChange;
    struct IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    struct IMobileBroadbandPco;
    struct IMobileBroadbandPcoDataChangeTriggerDetails;
    struct IMobileBroadbandPin;
    struct IMobileBroadbandPinLockStateChange;
    struct IMobileBroadbandPinLockStateChangeTriggerDetails;
    struct IMobileBroadbandPinManager;
    struct IMobileBroadbandPinOperationResult;
    struct IMobileBroadbandRadioStateChange;
    struct IMobileBroadbandRadioStateChangeTriggerDetails;
    struct IMobileBroadbandSarManager;
    struct IMobileBroadbandTransmissionStateChangedEventArgs;
    struct IMobileBroadbandUicc;
    struct IMobileBroadbandUiccApp;
    struct IMobileBroadbandUiccAppReadRecordResult;
    struct IMobileBroadbandUiccAppRecordDetailsResult;
    struct IMobileBroadbandUiccAppsResult;
    struct INetworkOperatorDataUsageTriggerDetails;
    struct INetworkOperatorNotificationEventDetails;
    struct INetworkOperatorTetheringAccessPointConfiguration;
    struct INetworkOperatorTetheringAccessPointConfiguration2;
    struct INetworkOperatorTetheringClient;
    struct INetworkOperatorTetheringClientManager;
    struct INetworkOperatorTetheringEntitlementCheck;
    struct INetworkOperatorTetheringManager;
    struct INetworkOperatorTetheringManagerStatics;
    struct INetworkOperatorTetheringManagerStatics2;
    struct INetworkOperatorTetheringManagerStatics3;
    struct INetworkOperatorTetheringManagerStatics4;
    struct INetworkOperatorTetheringOperationResult;
    struct IProvisionFromXmlDocumentResults;
    struct IProvisionedProfile;
    struct IProvisioningAgent;
    struct IProvisioningAgentStaticMethods;
    struct ITetheringEntitlementCheckTriggerDetails;
    struct IUssdMessage;
    struct IUssdMessageFactory;
    struct IUssdReply;
    struct IUssdSession;
    struct IUssdSessionStatics;
    struct ESim;
    struct ESimAddedEventArgs;
    struct ESimDiscoverEvent;
    struct ESimDiscoverResult;
    struct ESimDownloadProfileMetadataResult;
    struct ESimManager;
    struct ESimOperationResult;
    struct ESimPolicy;
    struct ESimProfile;
    struct ESimProfileMetadata;
    struct ESimProfilePolicy;
    struct ESimRemovedEventArgs;
    struct ESimServiceInfo;
    struct ESimUpdatedEventArgs;
    struct ESimWatcher;
    struct FdnAccessManager;
    struct HotspotAuthenticationContext;
    struct HotspotAuthenticationEventDetails;
    struct HotspotCredentialsAuthenticationResult;
    struct KnownCSimFilePaths;
    struct KnownRuimFilePaths;
    struct KnownSimFilePaths;
    struct KnownUSimFilePaths;
    struct MobileBroadbandAccount;
    struct MobileBroadbandAccountEventArgs;
    struct MobileBroadbandAccountUpdatedEventArgs;
    struct MobileBroadbandAccountWatcher;
    struct MobileBroadbandAntennaSar;
    struct MobileBroadbandCellCdma;
    struct MobileBroadbandCellGsm;
    struct MobileBroadbandCellLte;
    struct MobileBroadbandCellTdscdma;
    struct MobileBroadbandCellUmts;
    struct MobileBroadbandCellsInfo;
    struct MobileBroadbandDeviceInformation;
    struct MobileBroadbandDeviceService;
    struct MobileBroadbandDeviceServiceCommandResult;
    struct MobileBroadbandDeviceServiceCommandSession;
    struct MobileBroadbandDeviceServiceDataReceivedEventArgs;
    struct MobileBroadbandDeviceServiceDataSession;
    struct MobileBroadbandDeviceServiceInformation;
    struct MobileBroadbandDeviceServiceTriggerDetails;
    struct MobileBroadbandModem;
    struct MobileBroadbandModemConfiguration;
    struct MobileBroadbandModemIsolation;
    struct MobileBroadbandNetwork;
    struct MobileBroadbandNetworkRegistrationStateChange;
    struct MobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    struct MobileBroadbandPco;
    struct MobileBroadbandPcoDataChangeTriggerDetails;
    struct MobileBroadbandPin;
    struct MobileBroadbandPinLockStateChange;
    struct MobileBroadbandPinLockStateChangeTriggerDetails;
    struct MobileBroadbandPinManager;
    struct MobileBroadbandPinOperationResult;
    struct MobileBroadbandRadioStateChange;
    struct MobileBroadbandRadioStateChangeTriggerDetails;
    struct MobileBroadbandSarManager;
    struct MobileBroadbandTransmissionStateChangedEventArgs;
    struct MobileBroadbandUicc;
    struct MobileBroadbandUiccApp;
    struct MobileBroadbandUiccAppReadRecordResult;
    struct MobileBroadbandUiccAppRecordDetailsResult;
    struct MobileBroadbandUiccAppsResult;
    struct NetworkOperatorDataUsageTriggerDetails;
    struct NetworkOperatorNotificationEventDetails;
    struct NetworkOperatorTetheringAccessPointConfiguration;
    struct NetworkOperatorTetheringClient;
    struct NetworkOperatorTetheringManager;
    struct NetworkOperatorTetheringOperationResult;
    struct ProvisionFromXmlDocumentResults;
    struct ProvisionedProfile;
    struct ProvisioningAgent;
    struct TetheringEntitlementCheckTriggerDetails;
    struct UssdMessage;
    struct UssdReply;
    struct UssdSession;
    struct ESimProfileInstallProgress;
    struct ProfileUsage;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::NetworkOperators::IESim>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESim2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdReply>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESim>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverEvent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimOperationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileMetadata>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfilePolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimServiceInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::FdnAccessManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::KnownCSimFilePaths>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::KnownRuimFilePaths>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::KnownSimFilePaths>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::KnownUSimFilePaths>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccount>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPco>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPin>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSarManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUicc>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisionedProfile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisioningAgent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UssdMessage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UssdReply>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UssdSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::DataClasses>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimAuthenticationPreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverResultKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimOperationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileClass>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileMetadataState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimWatcherStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkDeviceStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkRegistrationState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ProfileMediaType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringCapability>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationalState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringWiFiBand>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAccessCondition>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAppKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAppRecordKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::UssdResultCode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        using type = struct_category<int32_t, int32_t>;
    };
    template <> struct category<Windows::Networking::NetworkOperators::ProfileUsage>
    {
        using type = struct_category<uint32_t, Windows::Foundation::DateTime>;
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESim>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESim" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESim2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESim2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimAddedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimDiscoverEvent" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimDiscoverResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimDownloadProfileMetadataResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimManagerStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimPolicy" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimProfile>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimProfile" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimProfileMetadata" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimProfilePolicy" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimRemovedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimServiceInfo" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimUpdatedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IESimWatcher" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IFdnAccessManagerStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContextStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotAuthenticationEventDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IHotspotCredentialsAuthenticationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownCSimFilePathsStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownRuimFilePathsStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownSimFilePathsStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IKnownUSimFilePathsStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount3" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountUpdatedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountWatcher" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSar" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSarFactory" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellCdma" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellGsm" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellLte" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellTdscdma" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellUmts" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandCellsInfo" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation3" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceService" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceInformation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModem" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModem2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModem3" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolationFactory" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandModemStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork3" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPco" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPcoDataChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPin" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandPinOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandSarManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandTransmissionStateChangedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUicc" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccApp" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppReadRecordResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppRecordDetailsResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppsResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorDataUsageTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorNotificationEventDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClient" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClientManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringEntitlementCheck" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics2" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics3" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics4" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisionFromXmlDocumentResults" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisionedProfile" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisioningAgent" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IProvisioningAgentStaticMethods" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ITetheringEntitlementCheckTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdMessage" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdMessageFactory" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IUssdReply>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdReply" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IUssdSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.IUssdSessionStatics" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESim>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESim" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimAddedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimDiscoverEvent>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimDiscoverEvent" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimDiscoverResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimDiscoverResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimDownloadProfileMetadataResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimPolicy>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimPolicy" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfile>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfile" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfileMetadata>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfileMetadata" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfilePolicy>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfilePolicy" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimRemovedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimServiceInfo>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimServiceInfo" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimUpdatedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimWatcher" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::FdnAccessManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.FdnAccessManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationContext" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::KnownCSimFilePaths>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownCSimFilePaths" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::KnownRuimFilePaths>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownRuimFilePaths" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::KnownSimFilePaths>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownSimFilePaths" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::KnownUSimFilePaths>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.KnownUSimFilePaths" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccount>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccount" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAntennaSar" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellCdma" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellGsm" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellLte" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellTdscdma" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellUmts" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandCellsInfo" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceService" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModem>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModem" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModemIsolation" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetwork" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPco>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPco" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPcoDataChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPin>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPin" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandSarManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandSarManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandTransmissionStateChangedEventArgs" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUicc>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUicc" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccApp" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorDataUsageTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ProvisionedProfile>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisionedProfile" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ProvisioningAgent>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProvisioningAgent" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringEntitlementCheckTriggerDetails" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UssdMessage>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdMessage" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UssdReply>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdReply" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UssdSession>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdSession" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::DataClasses>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.DataClasses" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimAuthenticationPreference>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimAuthenticationPreference" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimDiscoverResultKind>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimDiscoverResultKind" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimOperationStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimOperationStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfileClass>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfileClass" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfileMetadataState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfileMetadataState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfileState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfileState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimWatcherStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimWatcherStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.HotspotAuthenticationResponseCode" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcherStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceType" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandModemStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinFormat" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandPinType>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandPinType" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandRadioState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppOperationStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkDeviceStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkDeviceStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorDataUsageNotificationKind" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkOperatorEventMessageType" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::NetworkRegistrationState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.NetworkRegistrationState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ProfileMediaType>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProfileMediaType" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::TetheringCapability>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringCapability" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::TetheringOperationStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringOperationStatus" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::TetheringOperationalState>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringOperationalState" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::TetheringWiFiBand>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.TetheringWiFiBand" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UiccAccessCondition>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAccessCondition" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UiccAppKind>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAppKind" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UiccAppRecordKind>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UiccAppRecordKind" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::UssdResultCode>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.UssdResultCode" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ESimProfileInstallProgress" };
    };
    template <> struct name<Windows::Networking::NetworkOperators::ProfileUsage>
    {
        static constexpr auto & value{ L"Windows.Networking.NetworkOperators.ProfileUsage" };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESim>
    {
        static constexpr guid value{ 0x6F6E6E26,0xF123,0x437D,{ 0x8C,0xED,0xDC,0x1D,0x2B,0xC0,0xC3,0xA9 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESim2>
    {
        static constexpr guid value{ 0xBD4FD0A0,0xC68F,0x56EB,{ 0xB9,0x9B,0x8F,0x34,0xB8,0x10,0x02,0x99 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        static constexpr guid value{ 0x38BD0A58,0x4D5A,0x4D08,{ 0x8D,0xA7,0xE7,0x3E,0xFF,0x36,0x9D,0xDD } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        static constexpr guid value{ 0xE59AC3E3,0x39BC,0x5F6F,{ 0x93,0x21,0x0D,0x4A,0x18,0x2D,0x26,0x1B } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        static constexpr guid value{ 0x56B4BB5E,0xAB2F,0x5AC6,{ 0xB3,0x59,0xDD,0x5A,0x8E,0x23,0x79,0x26 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        static constexpr guid value{ 0xC4234D9E,0x5AD6,0x426D,{ 0x8D,0x00,0x44,0x34,0xF4,0x49,0xAF,0xEC } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        static constexpr guid value{ 0x0BFA2C0C,0xDF88,0x4631,{ 0xBF,0x04,0xC1,0x2E,0x28,0x1B,0x39,0x62 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        static constexpr guid value{ 0xA67B63B1,0x309B,0x4E77,{ 0x9E,0x7E,0xCD,0x93,0xF1,0xDD,0xC7,0xB9 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        static constexpr guid value{ 0x41E1B99D,0xCF7E,0x4315,{ 0x88,0x2B,0x6F,0x1E,0x74,0xB0,0xD3,0x8F } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimProfile>
    {
        static constexpr guid value{ 0xEE1E7880,0x06A9,0x4027,{ 0xB4,0xF8,0xDD,0xB2,0x3D,0x78,0x10,0xE0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        static constexpr guid value{ 0xED25831F,0x90DB,0x498D,{ 0xA7,0xB4,0xEB,0xCE,0x80,0x7D,0x3C,0x23 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        static constexpr guid value{ 0xE6DD0F1D,0x9C5C,0x46C5,{ 0xA2,0x89,0xA9,0x48,0x99,0x9B,0xF0,0x62 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        static constexpr guid value{ 0xDEC5277B,0x2FD9,0x4ED9,{ 0x83,0x76,0xD9,0xB5,0xE4,0x12,0x78,0xA3 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        static constexpr guid value{ 0xF16AABCF,0x7F59,0x4A51,{ 0x84,0x94,0xBD,0x89,0xD5,0xFF,0x50,0xEE } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        static constexpr guid value{ 0x4C125CEC,0x508D,0x4B88,{ 0x83,0xCB,0x68,0xBE,0xF8,0x16,0x8D,0x12 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        static constexpr guid value{ 0xC1F84CEB,0xA28D,0x4FBF,{ 0x97,0x71,0x6E,0x31,0xB8,0x1C,0xCF,0x22 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        static constexpr guid value{ 0xF2AA4395,0xF1E6,0x4319,{ 0xAA,0x3E,0x47,0x7C,0xA6,0x4B,0x2B,0xDF } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        static constexpr guid value{ 0xE756C791,0x1003,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        static constexpr guid value{ 0xE756C791,0x1004,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        static constexpr guid value{ 0xE756C791,0x1002,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        static constexpr guid value{ 0xE756C791,0x1001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        static constexpr guid value{ 0xE756C791,0x1005,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        static constexpr guid value{ 0xB458AEED,0x49F1,0x4C22,{ 0xB0,0x73,0x96,0xD5,0x11,0xBF,0x9C,0x35 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        static constexpr guid value{ 0x3883C8B9,0xFF24,0x4571,{ 0xA8,0x67,0x09,0xF9,0x60,0x42,0x6E,0x14 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        static constexpr guid value{ 0x80CD1A63,0x37A5,0x43D3,{ 0x80,0xA3,0xCC,0xD2,0x3E,0x8F,0xEC,0xEE } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        static constexpr guid value{ 0x7C34E581,0x1F1B,0x43F4,{ 0x95,0x30,0x8B,0x09,0x2D,0x32,0xD7,0x1F } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        static constexpr guid value{ 0x36C24CCD,0xCEE2,0x43E0,{ 0xA6,0x03,0xEE,0x86,0xA3,0x6D,0x65,0x70 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        static constexpr guid value{ 0x38F52F1C,0x1136,0x4257,{ 0x95,0x9F,0xB6,0x58,0xA3,0x52,0xB6,0xD4 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        static constexpr guid value{ 0x092A1E21,0x9379,0x4B9B,{ 0xAD,0x31,0xD5,0xFE,0xE2,0xF7,0x48,0xC6 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        static constexpr guid value{ 0x3853C880,0x77DE,0x4C04,{ 0xBE,0xAD,0xA1,0x23,0xB0,0x8C,0x9F,0x59 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        static constexpr guid value{ 0xAA7F4D24,0xAFC1,0x4FC8,{ 0xAE,0x9A,0xA9,0x17,0x53,0x10,0xFA,0xAD } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        static constexpr guid value{ 0x7BC31D88,0xA6BD,0x49E1,{ 0x80,0xAB,0x6B,0x91,0x35,0x4A,0x57,0xD4 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        static constexpr guid value{ 0x6BF3335E,0x23B5,0x449F,{ 0x92,0x8D,0x5E,0x0D,0x3E,0x04,0x47,0x1D } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        static constexpr guid value{ 0xB9AF4B7E,0xCBF9,0x4109,{ 0x90,0xBE,0x5C,0x06,0xBF,0xD5,0x13,0xB6 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        static constexpr guid value{ 0xA91E1716,0xC04D,0x4A21,{ 0x86,0x98,0x14,0x59,0xDC,0x67,0x2C,0x6E } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        static constexpr guid value{ 0x0601B3B4,0x411A,0x4F2E,{ 0x82,0x87,0x76,0xF5,0x65,0x0C,0x60,0xCD } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        static constexpr guid value{ 0xCC917F06,0x7EE0,0x47B8,{ 0x9E,0x1F,0xC3,0xB4,0x8D,0xF9,0xDF,0x5B } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        static constexpr guid value{ 0x9197C87B,0x2B78,0x456D,{ 0x8B,0x53,0xAA,0xA2,0x5D,0x0A,0xF7,0x41 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        static constexpr guid value{ 0x0EDA1655,0xDB0E,0x4182,{ 0x8C,0xDA,0xCC,0x41,0x9A,0x7B,0xDE,0x08 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        static constexpr guid value{ 0x77B4B5AE,0x49C8,0x4F15,{ 0xB2,0x85,0x4C,0x26,0xA7,0xF6,0x72,0x15 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        static constexpr guid value{ 0x89A9562A,0xE472,0x4DA5,{ 0x92,0x9C,0xDE,0x61,0x71,0x1D,0xD2,0x61 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        static constexpr guid value{ 0xE6D08168,0xE381,0x4C6E,{ 0x9B,0xE8,0xFE,0x15,0x69,0x69,0xA4,0x46 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        static constexpr guid value{ 0x2E467AF1,0xF932,0x4737,{ 0xA7,0x22,0x03,0xBA,0x72,0x37,0x0C,0xB8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        static constexpr guid value{ 0xE08BB4BD,0x5D30,0x4B5A,{ 0x92,0xCC,0xD5,0x4D,0xF8,0x81,0xD4,0x9E } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        static constexpr guid value{ 0x22BE1A52,0xBD80,0x40AC,{ 0x8E,0x1F,0x2E,0x07,0x83,0x6A,0x3D,0xBD } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        static constexpr guid value{ 0xB0F46ABB,0x94D6,0x44B9,{ 0xA5,0x38,0xF0,0x81,0x0B,0x64,0x53,0x89 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        static constexpr guid value{ 0xFC098A45,0x913B,0x4914,{ 0xB6,0xC3,0xAE,0x63,0x04,0x59,0x3E,0x75 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        static constexpr guid value{ 0xB6AA13DE,0x1380,0x40E3,{ 0x86,0x18,0x73,0xCB,0xCA,0x48,0x13,0x8C } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        static constexpr guid value{ 0xDAD62333,0x8BCF,0x4289,{ 0x8A,0x37,0x04,0x5C,0x21,0x69,0x48,0x6A } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        static constexpr guid value{ 0x53D69B5B,0xC4ED,0x45F0,{ 0x80,0x3A,0xD9,0x41,0x7A,0x6D,0x98,0x46 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        static constexpr guid value{ 0x4A055B70,0xB9AE,0x4458,{ 0x92,0x41,0xA6,0xA5,0xFB,0xF1,0x8A,0x0C } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        static constexpr guid value{ 0xD0356912,0xE9F9,0x4F67,{ 0xA0,0x3D,0x43,0x18,0x9A,0x31,0x6B,0xF1 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        static constexpr guid value{ 0x12862B28,0xB9EB,0x4EE2,{ 0xBB,0xE3,0x71,0x1F,0x53,0xEE,0xA3,0x73 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        static constexpr guid value{ 0xE9FEC6EA,0x2F34,0x4582,{ 0x91,0x02,0xC3,0x14,0xD2,0xA8,0x7E,0xEC } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        static constexpr guid value{ 0xFCE035A3,0xD6CD,0x4320,{ 0xB9,0x82,0xBE,0x9D,0x3E,0xC7,0x89,0x0F } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        static constexpr guid value{ 0x320FF5C5,0xE460,0x42AE,{ 0xAA,0x51,0x69,0x62,0x1E,0x7A,0x44,0x77 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        static constexpr guid value{ 0xB5618FEC,0xE661,0x4330,{ 0x9B,0xB4,0x34,0x80,0x21,0x2E,0xC3,0x54 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        static constexpr guid value{ 0x21D7EC58,0xC2B1,0x4C2F,{ 0xA0,0x30,0x72,0x82,0x0A,0x24,0xEC,0xD9 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        static constexpr guid value{ 0xF99ED637,0xD6F1,0x4A78,{ 0x8C,0xBC,0x64,0x21,0xA6,0x50,0x63,0xC8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        static constexpr guid value{ 0xCB63928C,0x0309,0x4CB6,{ 0xA8,0xC1,0x6A,0x5A,0x3C,0x8E,0x1F,0xF6 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        static constexpr guid value{ 0x5A55DB22,0x62F7,0x4BDD,{ 0xBA,0x1D,0x47,0x74,0x41,0x96,0x0B,0xA0 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        static constexpr guid value{ 0x33670A8A,0xC7EF,0x444C,{ 0xAB,0x6C,0xDF,0x7E,0xF7,0xA3,0x90,0xFE } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        static constexpr guid value{ 0xBEAF94E1,0x960F,0x49B4,{ 0xA0,0x8D,0x7D,0x85,0xE9,0x68,0xC7,0xEC } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        static constexpr guid value{ 0x89135CFF,0x28B8,0x46AA,{ 0xB1,0x37,0x1C,0x4B,0x0F,0x21,0xED,0xFE } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        static constexpr guid value{ 0xD4E4FCBE,0xE3A3,0x43C5,{ 0xA8,0x7B,0x6C,0x86,0xD2,0x29,0xD7,0xFA } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        static constexpr guid value{ 0x263F5114,0x64E0,0x4493,{ 0x90,0x9B,0x2D,0x14,0xA0,0x19,0x62,0xB1 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        static constexpr guid value{ 0xE661D709,0xE779,0x45BF,{ 0x82,0x81,0x75,0x32,0x3D,0xF9,0xE3,0x21 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        static constexpr guid value{ 0xBE16673E,0x1F04,0x4F95,{ 0x8B,0x90,0xE7,0xF5,0x59,0xDD,0xE7,0xE5 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        static constexpr guid value{ 0xD338C091,0x3E91,0x4D38,{ 0x90,0x36,0xAE,0xE8,0x3A,0x6E,0x79,0xAD } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        static constexpr guid value{ 0x83567EDD,0x6E1F,0x4B9B,{ 0xA4,0x13,0x2B,0x1F,0x50,0xCC,0x36,0xDF } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        static constexpr guid value{ 0x11DDDC32,0x31E7,0x49F5,{ 0xB6,0x63,0x12,0x3D,0x3B,0xEF,0x03,0x62 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        static constexpr guid value{ 0xB054A561,0x9833,0x4AED,{ 0x97,0x17,0x43,0x48,0xB2,0x1A,0x24,0xB3 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        static constexpr guid value{ 0x71301ACE,0x093C,0x42C6,{ 0xB0,0xDB,0xAD,0x1F,0x75,0xA6,0x54,0x45 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        static constexpr guid value{ 0xE5B26833,0x967E,0x40C9,{ 0xA4,0x85,0x19,0xC0,0xDD,0x20,0x9E,0x22 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        static constexpr guid value{ 0x612E3875,0x040A,0x4F99,{ 0xA4,0xF9,0x61,0xD7,0xC3,0x2D,0xA1,0x29 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        static constexpr guid value{ 0xE634F691,0x525A,0x4CE2,{ 0x8F,0xCE,0xAA,0x41,0x62,0x57,0x91,0x54 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        static constexpr guid value{ 0x4D170556,0x98A1,0x43DD,{ 0xB2,0xEC,0x50,0xC9,0x0C,0xF2,0x48,0xDF } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        static constexpr guid value{ 0x64C95285,0x358E,0x47C5,{ 0x82,0x49,0x69,0x5F,0x38,0x3B,0x2B,0xDB } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        static constexpr guid value{ 0xD919682F,0xBE14,0x4934,{ 0x98,0x1D,0x2F,0x57,0xB9,0xED,0x83,0xE6 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        static constexpr guid value{ 0x744930EB,0x8157,0x4A41,{ 0x84,0x94,0x6B,0xF5,0x4C,0x9B,0x1D,0x2B } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        static constexpr guid value{ 0x50E3126D,0xA465,0x4EEB,{ 0x93,0x17,0x28,0xA1,0x67,0x63,0x0C,0xEA } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        static constexpr guid value{ 0xBC68A9D1,0x82E1,0x4488,{ 0x9F,0x2C,0x12,0x76,0xC2,0x46,0x8F,0xAC } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        static constexpr guid value{ 0x0BCC0284,0x412E,0x403D,{ 0xAC,0xC6,0xB7,0x57,0xE3,0x47,0x74,0xA4 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        static constexpr guid value{ 0xB1809142,0x7238,0x59A0,{ 0x92,0x8B,0x74,0xAB,0x46,0xFD,0x64,0xB6 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        static constexpr guid value{ 0x709D254C,0x595F,0x4847,{ 0xBB,0x30,0x64,0x69,0x35,0x54,0x29,0x18 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        static constexpr guid value{ 0x91B14016,0x8DCA,0x4225,{ 0xBB,0xED,0xEE,0xF8,0xB8,0xD7,0x18,0xD7 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        static constexpr guid value{ 0x0108916D,0x9E9A,0x4AF6,{ 0x8D,0xA3,0x60,0x49,0x3B,0x19,0xC2,0x04 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        static constexpr guid value{ 0xD45A8DA0,0x0E86,0x4D98,{ 0x8B,0xA4,0xDD,0x70,0xD4,0xB7,0x64,0xD3 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        static constexpr guid value{ 0x3EBCBACC,0xF8C3,0x405C,{ 0x99,0x64,0x70,0xA1,0xEE,0xAB,0xE1,0x94 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        static constexpr guid value{ 0x5B235412,0x35F0,0x49E7,{ 0x9B,0x08,0x16,0xD2,0x78,0xFB,0xAA,0x42 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        static constexpr guid value{ 0x8FDAADB6,0x4AF9,0x4F21,{ 0x9B,0x58,0xD5,0x3E,0x9F,0x24,0x23,0x1E } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        static constexpr guid value{ 0xB3B9F9D0,0xEBFF,0x46A4,{ 0xA8,0x47,0xD6,0x63,0xD8,0xB0,0x97,0x7E } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        static constexpr guid value{ 0xEBD203A1,0x01BA,0x476D,{ 0xB4,0xB3,0xBF,0x3D,0x12,0xC8,0xF8,0x0C } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        static constexpr guid value{ 0x217700E0,0x8203,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        static constexpr guid value{ 0x217700E0,0x8202,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        static constexpr guid value{ 0x217700E0,0x8201,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        static constexpr guid value{ 0x217700E0,0x8101,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        static constexpr guid value{ 0x03C65E9D,0x5926,0x41F3,{ 0xA9,0x4E,0xB5,0x09,0x26,0xFC,0x42,0x1B } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        static constexpr guid value{ 0x2F9ACF82,0x2004,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        static constexpr guid value{ 0x2F9ACF82,0x1003,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IUssdReply>
    {
        static constexpr guid value{ 0x2F9ACF82,0x2005,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IUssdSession>
    {
        static constexpr guid value{ 0x2F9ACF82,0x2002,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } };
    };
    template <> struct guid_storage<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        static constexpr guid value{ 0x2F9ACF82,0x1001,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } };
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESim>
    {
        using type = Windows::Networking::NetworkOperators::IESim;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimAddedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IESimAddedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDiscoverEvent>
    {
        using type = Windows::Networking::NetworkOperators::IESimDiscoverEvent;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDiscoverResult>
    {
        using type = Windows::Networking::NetworkOperators::IESimDiscoverResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>
    {
        using type = Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimOperationResult>
    {
        using type = Windows::Networking::NetworkOperators::IESimOperationResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimPolicy>
    {
        using type = Windows::Networking::NetworkOperators::IESimPolicy;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfile>
    {
        using type = Windows::Networking::NetworkOperators::IESimProfile;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfileMetadata>
    {
        using type = Windows::Networking::NetworkOperators::IESimProfileMetadata;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfilePolicy>
    {
        using type = Windows::Networking::NetworkOperators::IESimProfilePolicy;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimRemovedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IESimRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimServiceInfo>
    {
        using type = Windows::Networking::NetworkOperators::IESimServiceInfo;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IESimUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimWatcher>
    {
        using type = Windows::Networking::NetworkOperators::IESimWatcher;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>
    {
        using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationContext;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>
    {
        using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>
    {
        using type = Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccount>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccount;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellLte;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModem>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandModem;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetwork;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPco>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPco;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPin>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPin;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinManager;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandSarManager>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandSarManager;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUicc>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandUicc;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>
    {
        using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>
    {
        using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>
    {
        using type = Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionedProfile>
    {
        using type = Windows::Networking::NetworkOperators::IProvisionedProfile;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisioningAgent>
    {
        using type = Windows::Networking::NetworkOperators::IProvisioningAgent;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>
    {
        using type = Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdMessage>
    {
        using type = Windows::Networking::NetworkOperators::IUssdMessage;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdReply>
    {
        using type = Windows::Networking::NetworkOperators::IUssdReply;
    };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdSession>
    {
        using type = Windows::Networking::NetworkOperators::IUssdSession;
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESim>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AvailableMemoryInBytes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Eid(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirmwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_MobileBroadbandModemDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteProfileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadProfileMetadataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProfileChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESim2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Discover(void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverWithServerAddressAndMatchingId(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverWithServerAddressAndMatchingIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MatchingId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RspServerAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Events(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfileMetadata(void**) noexcept = 0;
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProfileMetadata(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceInfo(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateESimWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall add_ServiceInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServiceInfoChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldEnableManagingUi(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Class(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Nickname(void**) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIcon(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetNicknameAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsConfirmationCodeRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIcon(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DenyInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ConfirmInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ConfirmInstallWithConfirmationCodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PostponeInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanDelete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDisable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsManagedByEnterprise(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AuthenticationPreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsESimUiEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestUnlockAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WirelessNetworkId(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall get_RedirectMessageUrl(void**) noexcept = 0;
            virtual int32_t __stdcall get_RedirectMessageXml(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationUrl(void**) noexcept = 0;
            virtual int32_t __stdcall IssueCredentials(void*, void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall AbortAuthentication(bool) noexcept = 0;
            virtual int32_t __stdcall SkipAuthentication() noexcept = 0;
            virtual int32_t __stdcall TriggerAttentionRequired(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IssueCredentialsAsync(void*, void*, void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetAuthenticationContext(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasNetworkErrorOccurred(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogoffUrl(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationReplyXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFOns(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFOpl(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFPnn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderGuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentNetwork(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentDeviceInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConnectionProfiles(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccountExperienceUrl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AvailableNetworkAccountIds(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasDeviceInformationChanged(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNetworkChanged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccountAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccountUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccountRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AntennaIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SarBackoffIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithIndex(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseStationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationPNCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLatitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLongitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLastBroadcastGpsTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PilotSignalStrengthInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseStationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalStrengthInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalCellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedPowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedQualityInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackingAreaCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellParameterId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PathLossInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalCodePowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PathLossInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryScramblingCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalCodePowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignalToNoiseRatioInDB(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NeighboringCellsCdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsGsm(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsLte(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsTdscdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsUmts(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsCdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsGsm(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsLte(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsTdscdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsUmts(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkDeviceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Manufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirmwareInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DataClasses(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CustomDataClass(void**) noexcept = 0;
            virtual int32_t __stdcall get_MobileEquipmentId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TelephoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubscriberId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimIccId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentRadioState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_Revision(void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimPnn(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimGid1(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCommands(void**) noexcept = 0;
            virtual int32_t __stdcall OpenDataSession(void**) noexcept = 0;
            virtual int32_t __stdcall OpenCommandSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatusCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendQueryCommandAsync(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendSetCommandAsync(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CloseSession() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReceivedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall WriteDataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CloseSession() noexcept = 0;
            virtual int32_t __stdcall add_DataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IsDataReadSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDataWriteSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServices(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceService(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResetSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall ResetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentConfigurationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentNetwork(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetIsPassthroughEnabledAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetIsPassthroughEnabledAsync(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetPcoAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsInEmergencyCallMode(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsInEmergencyCallModeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsInEmergencyCallModeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uicc(void**) noexcept = 0;
            virtual int32_t __stdcall get_HomeProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HomeProviderName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SarManager(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAllowedHost(void*) noexcept = 0;
            virtual int32_t __stdcall AddAllowedHostRange(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ApplyConfigurationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearConfigurationAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRegistrationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PacketAttachNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActivationNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AccessPointName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredDataClass(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall ShowConnectionUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetVoiceCallSupportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationUiccApps(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCellsInfoAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Network(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkRegistrationStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdatedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LockState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AttemptsRemaining(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EnterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ChangeAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnblockAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PinType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PinLockState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinLockStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedPins(void**) noexcept = 0;
            virtual int32_t __stdcall GetPin(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSuccessful(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AttemptsRemaining(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadioState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RadioStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBackoffEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsWiFiHardwareIntegrated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSarControlledByHardware(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Antennas(void**) noexcept = 0;
            virtual int32_t __stdcall get_HysteresisTimerPeriod(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_TransmissionStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransmissionStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall EnableBackoffAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableBackoffAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetConfigurationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RevertSarToHardwareControlAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetTransmissionStateChangedHysteresisAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsTransmittingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartTransmissionStateMonitoring() noexcept = 0;
            virtual int32_t __stdcall StopTransmissionStateMonitoring() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTransmitting(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimIccId(void**) noexcept = 0;
            virtual int32_t __stdcall GetUiccAppsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetRecordDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReadRecordAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecordCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecordSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadAccessCondition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteAccessCondition(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UiccApps(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NotificationKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NotificationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EncodingType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_RuleId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmsMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ssid(void**) noexcept = 0;
            virtual int32_t __stdcall put_Ssid(void*) noexcept = 0;
            virtual int32_t __stdcall get_Passphrase(void**) noexcept = 0;
            virtual int32_t __stdcall put_Passphrase(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsBandSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsBandSupportedAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Band(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Band(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MacAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_HostNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringClients(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AuthorizeTethering(bool, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxClientCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ClientCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TetheringOperationalState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentAccessPointConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall ConfigureAccessPointAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartTetheringAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopTetheringAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringCapability(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringCapabilityFromConnectionProfile(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFromConnectionProfile(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromConnectionProfileWithTargetAdapter(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsNoConnectionsTimeoutEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall EnableNoConnectionsTimeout() noexcept = 0;
            virtual int32_t __stdcall EnableNoConnectionsTimeoutAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableNoConnectionsTimeout() noexcept = 0;
            virtual int32_t __stdcall DisableNoConnectionsTimeoutAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalErrorMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllElementsProvisioned(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ProvisionResultsXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UpdateCost(int32_t) noexcept = 0;
            virtual int32_t __stdcall UpdateUsage(struct struct_Windows_Networking_NetworkOperators_ProfileUsage) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProvisionFromXmlDocumentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProvisionedProfile(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall AllowTethering() noexcept = 0;
            virtual int32_t __stdcall DenyTethering(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataCodingScheme(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataCodingScheme(uint8_t) noexcept = 0;
            virtual int32_t __stdcall GetPayload(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetPayload(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_PayloadAsText(void**) noexcept = 0;
            virtual int32_t __stdcall put_PayloadAsText(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMessage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdReply>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendMessageAndGetReplyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkInterfaceId(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESim
    {
        [[nodiscard]] auto AvailableMemoryInBytes() const;
        [[nodiscard]] auto Eid() const;
        [[nodiscard]] auto FirmwareVersion() const;
        [[nodiscard]] auto MobileBroadbandModemDeviceId() const;
        [[nodiscard]] auto Policy() const;
        [[nodiscard]] auto State() const;
        auto GetProfiles() const;
        auto DeleteProfileAsync(param::hstring const& profileId) const;
        auto DownloadProfileMetadataAsync(param::hstring const& activationCode) const;
        auto ResetAsync() const;
        auto ProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESim, Windows::Foundation::IInspectable> const& handler) const;
        using ProfileChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESim, &impl::abi_t<Windows::Networking::NetworkOperators::IESim>::remove_ProfileChanged>;
        ProfileChanged_revoker ProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESim, Windows::Foundation::IInspectable> const& handler) const;
        auto ProfileChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESim>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESim<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESim2
    {
        auto Discover() const;
        auto Discover(param::hstring const& serverAddress, param::hstring const& matchingId) const;
        auto DiscoverAsync() const;
        auto DiscoverAsync(param::hstring const& serverAddress, param::hstring const& matchingId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESim2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESim2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimAddedEventArgs
    {
        [[nodiscard]] auto ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDiscoverEvent
    {
        [[nodiscard]] auto MatchingId() const;
        [[nodiscard]] auto RspServerAddress() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDiscoverEvent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDiscoverResult
    {
        [[nodiscard]] auto Events() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto ProfileMetadata() const;
        [[nodiscard]] auto Result() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDiscoverResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDownloadProfileMetadataResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto ProfileMetadata() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDownloadProfileMetadataResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimManagerStatics
    {
        [[nodiscard]] auto ServiceInfo() const;
        auto TryCreateESimWatcher() const;
        auto ServiceInfoChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ServiceInfoChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimManagerStatics, &impl::abi_t<Windows::Networking::NetworkOperators::IESimManagerStatics>::remove_ServiceInfoChanged>;
        ServiceInfoChanged_revoker ServiceInfoChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto ServiceInfoChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimOperationResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimPolicy
    {
        [[nodiscard]] auto ShouldEnableManagingUi() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimPolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfile
    {
        [[nodiscard]] auto Class() const;
        [[nodiscard]] auto Nickname() const;
        [[nodiscard]] auto Policy() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ProviderIcon() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ProviderName() const;
        [[nodiscard]] auto State() const;
        auto DisableAsync() const;
        auto EnableAsync() const;
        auto SetNicknameAsync(param::hstring const& newNickname) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfile>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfileMetadata
    {
        [[nodiscard]] auto IsConfirmationCodeRequired() const;
        [[nodiscard]] auto Policy() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ProviderIcon() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ProviderName() const;
        [[nodiscard]] auto State() const;
        auto DenyInstallAsync() const;
        auto ConfirmInstallAsync() const;
        auto ConfirmInstallAsync(param::hstring const& confirmationCode) const;
        auto PostponeInstallAsync() const;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimProfileMetadata, Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimProfileMetadata, &impl::abi_t<Windows::Networking::NetworkOperators::IESimProfileMetadata>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimProfileMetadata, Windows::Foundation::IInspectable> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfileMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfilePolicy
    {
        [[nodiscard]] auto CanDelete() const;
        [[nodiscard]] auto CanDisable() const;
        [[nodiscard]] auto IsManagedByEnterprise() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfilePolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimRemovedEventArgs
    {
        [[nodiscard]] auto ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimServiceInfo
    {
        [[nodiscard]] auto AuthenticationPreference() const;
        [[nodiscard]] auto IsESimUiEnabled() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimServiceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimUpdatedEventArgs
    {
        [[nodiscard]] auto ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimWatcher
    {
        [[nodiscard]] auto Status() const;
        auto Start() const;
        auto Stop() const;
        auto Added(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Added>;
        Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimAddedEventArgs> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Removed(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Removed>;
        Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimRemovedEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
        auto Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Stopped>;
        Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
        auto Updated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimUpdatedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Updated>;
        Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimUpdatedEventArgs> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics
    {
        auto RequestUnlockAsync(param::hstring const& contactListId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext
    {
        [[nodiscard]] auto WirelessNetworkId() const;
        [[nodiscard]] auto NetworkAdapter() const;
        [[nodiscard]] auto RedirectMessageUrl() const;
        [[nodiscard]] auto RedirectMessageXml() const;
        [[nodiscard]] auto AuthenticationUrl() const;
        auto IssueCredentials(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
        auto AbortAuthentication(bool markAsManual) const;
        auto SkipAuthentication() const;
        auto TriggerAttentionRequired(param::hstring const& packageRelativeApplicationId, param::hstring const& applicationParameters) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2
    {
        auto IssueCredentialsAsync(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics
    {
        auto TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails
    {
        [[nodiscard]] auto EventToken() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult
    {
        [[nodiscard]] auto HasNetworkErrorOccurred() const;
        [[nodiscard]] auto ResponseCode() const;
        [[nodiscard]] auto LogoffUrl() const;
        [[nodiscard]] auto AuthenticationReplyXml() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics
    {
        [[nodiscard]] auto EFSpn() const;
        [[nodiscard]] auto Gid1() const;
        [[nodiscard]] auto Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics
    {
        [[nodiscard]] auto EFSpn() const;
        [[nodiscard]] auto Gid1() const;
        [[nodiscard]] auto Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics
    {
        [[nodiscard]] auto EFOns() const;
        [[nodiscard]] auto EFSpn() const;
        [[nodiscard]] auto Gid1() const;
        [[nodiscard]] auto Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics
    {
        [[nodiscard]] auto EFSpn() const;
        [[nodiscard]] auto EFOpl() const;
        [[nodiscard]] auto EFPnn() const;
        [[nodiscard]] auto Gid1() const;
        [[nodiscard]] auto Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount
    {
        [[nodiscard]] auto NetworkAccountId() const;
        [[nodiscard]] auto ServiceProviderGuid() const;
        [[nodiscard]] auto ServiceProviderName() const;
        [[nodiscard]] auto CurrentNetwork() const;
        [[nodiscard]] auto CurrentDeviceInformation() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2
    {
        auto GetConnectionProfiles() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3
    {
        [[nodiscard]] auto AccountExperienceUrl() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs
    {
        [[nodiscard]] auto NetworkAccountId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics
    {
        [[nodiscard]] auto AvailableNetworkAccountIds() const;
        auto CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs
    {
        [[nodiscard]] auto NetworkAccountId() const;
        [[nodiscard]] auto HasDeviceInformationChanged() const;
        [[nodiscard]] auto HasNetworkChanged() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher
    {
        auto AccountAdded(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        using AccountAdded_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountAdded>;
        AccountAdded_revoker AccountAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        auto AccountAdded(winrt::event_token const& cookie) const noexcept;
        auto AccountUpdated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
        using AccountUpdated_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountUpdated>;
        AccountUpdated_revoker AccountUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
        auto AccountUpdated(winrt::event_token const& cookie) const noexcept;
        auto AccountRemoved(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        using AccountRemoved_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountRemoved>;
        AccountRemoved_revoker AccountRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        auto AccountRemoved(winrt::event_token const& cookie) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& cookie) const noexcept;
        auto Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_Stopped>;
        Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto Status() const;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar
    {
        [[nodiscard]] auto AntennaIndex() const;
        [[nodiscard]] auto SarBackoffIndex() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSarFactory
    {
        auto CreateWithIndex(int32_t antennaIndex, int32_t sarBackoffIndex) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSarFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma
    {
        [[nodiscard]] auto BaseStationId() const;
        [[nodiscard]] auto BaseStationPNCode() const;
        [[nodiscard]] auto BaseStationLatitude() const;
        [[nodiscard]] auto BaseStationLongitude() const;
        [[nodiscard]] auto BaseStationLastBroadcastGpsTime() const;
        [[nodiscard]] auto NetworkId() const;
        [[nodiscard]] auto PilotSignalStrengthInDB() const;
        [[nodiscard]] auto SystemId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm
    {
        [[nodiscard]] auto BaseStationId() const;
        [[nodiscard]] auto CellId() const;
        [[nodiscard]] auto ChannelNumber() const;
        [[nodiscard]] auto LocationAreaCode() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ReceivedSignalStrengthInDBm() const;
        [[nodiscard]] auto TimingAdvanceInBitPeriods() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte
    {
        [[nodiscard]] auto CellId() const;
        [[nodiscard]] auto ChannelNumber() const;
        [[nodiscard]] auto PhysicalCellId() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ReferenceSignalReceivedPowerInDBm() const;
        [[nodiscard]] auto ReferenceSignalReceivedQualityInDBm() const;
        [[nodiscard]] auto TimingAdvanceInBitPeriods() const;
        [[nodiscard]] auto TrackingAreaCode() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma
    {
        [[nodiscard]] auto CellId() const;
        [[nodiscard]] auto CellParameterId() const;
        [[nodiscard]] auto ChannelNumber() const;
        [[nodiscard]] auto LocationAreaCode() const;
        [[nodiscard]] auto PathLossInDB() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ReceivedSignalCodePowerInDBm() const;
        [[nodiscard]] auto TimingAdvanceInBitPeriods() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts
    {
        [[nodiscard]] auto CellId() const;
        [[nodiscard]] auto ChannelNumber() const;
        [[nodiscard]] auto LocationAreaCode() const;
        [[nodiscard]] auto PathLossInDB() const;
        [[nodiscard]] auto PrimaryScramblingCode() const;
        [[nodiscard]] auto ProviderId() const;
        [[nodiscard]] auto ReceivedSignalCodePowerInDBm() const;
        [[nodiscard]] auto SignalToNoiseRatioInDB() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo
    {
        [[nodiscard]] auto NeighboringCellsCdma() const;
        [[nodiscard]] auto NeighboringCellsGsm() const;
        [[nodiscard]] auto NeighboringCellsLte() const;
        [[nodiscard]] auto NeighboringCellsTdscdma() const;
        [[nodiscard]] auto NeighboringCellsUmts() const;
        [[nodiscard]] auto ServingCellsCdma() const;
        [[nodiscard]] auto ServingCellsGsm() const;
        [[nodiscard]] auto ServingCellsLte() const;
        [[nodiscard]] auto ServingCellsTdscdma() const;
        [[nodiscard]] auto ServingCellsUmts() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation
    {
        [[nodiscard]] auto NetworkDeviceStatus() const;
        [[nodiscard]] auto Manufacturer() const;
        [[nodiscard]] auto Model() const;
        [[nodiscard]] auto FirmwareInformation() const;
        [[nodiscard]] auto CellularClass() const;
        [[nodiscard]] auto DataClasses() const;
        [[nodiscard]] auto CustomDataClass() const;
        [[nodiscard]] auto MobileEquipmentId() const;
        [[nodiscard]] auto TelephoneNumbers() const;
        [[nodiscard]] auto SubscriberId() const;
        [[nodiscard]] auto SimIccId() const;
        [[nodiscard]] auto DeviceType() const;
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto CurrentRadioState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2
    {
        [[nodiscard]] auto PinManager() const;
        [[nodiscard]] auto Revision() const;
        [[nodiscard]] auto SerialNumber() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3
    {
        [[nodiscard]] auto SimSpn() const;
        [[nodiscard]] auto SimPnn() const;
        [[nodiscard]] auto SimGid1() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService
    {
        [[nodiscard]] auto DeviceServiceId() const;
        [[nodiscard]] auto SupportedCommands() const;
        auto OpenDataSession() const;
        auto OpenCommandSession() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult
    {
        [[nodiscard]] auto StatusCode() const;
        [[nodiscard]] auto ResponseData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession
    {
        auto SendQueryCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
        auto SendSetCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
        auto CloseSession() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs
    {
        [[nodiscard]] auto ReceivedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession
    {
        auto WriteDataAsync(Windows::Storage::Streams::IBuffer const& value) const;
        auto CloseSession() const;
        auto DataReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
        using DataReceived_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>::remove_DataReceived>;
        DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
        auto DataReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation
    {
        [[nodiscard]] auto DeviceServiceId() const;
        [[nodiscard]] auto IsDataReadSupported() const;
        [[nodiscard]] auto IsDataWriteSupported() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto DeviceServiceId() const;
        [[nodiscard]] auto ReceivedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem
    {
        [[nodiscard]] auto CurrentAccount() const;
        [[nodiscard]] auto DeviceInformation() const;
        [[nodiscard]] auto MaxDeviceServiceCommandSizeInBytes() const;
        [[nodiscard]] auto MaxDeviceServiceDataSizeInBytes() const;
        [[nodiscard]] auto DeviceServices() const;
        auto GetDeviceService(winrt::guid const& deviceServiceId) const;
        [[nodiscard]] auto IsResetSupported() const;
        auto ResetAsync() const;
        auto GetCurrentConfigurationAsync() const;
        [[nodiscard]] auto CurrentNetwork() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2
    {
        auto GetIsPassthroughEnabledAsync() const;
        auto SetIsPassthroughEnabledAsync(bool value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem3
    {
        auto TryGetPcoAsync() const;
        [[nodiscard]] auto IsInEmergencyCallMode() const;
        auto IsInEmergencyCallModeChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandModem, Windows::Foundation::IInspectable> const& handler) const;
        using IsInEmergencyCallModeChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandModem3, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>::remove_IsInEmergencyCallModeChanged>;
        IsInEmergencyCallModeChanged_revoker IsInEmergencyCallModeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandModem, Windows::Foundation::IInspectable> const& handler) const;
        auto IsInEmergencyCallModeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration
    {
        [[nodiscard]] auto Uicc() const;
        [[nodiscard]] auto HomeProviderId() const;
        [[nodiscard]] auto HomeProviderName() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2
    {
        [[nodiscard]] auto SarManager() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolation
    {
        auto AddAllowedHost(Windows::Networking::HostName const& host) const;
        auto AddAllowedHostRange(Windows::Networking::HostName const& first, Windows::Networking::HostName const& last) const;
        auto ApplyConfigurationAsync() const;
        auto ClearConfigurationAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolationFactory
    {
        auto Create(param::hstring const& modemDeviceId, param::hstring const& ruleGroupId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics
    {
        auto GetDeviceSelector() const;
        auto FromId(param::hstring const& deviceId) const;
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork
    {
        [[nodiscard]] auto NetworkAdapter() const;
        [[nodiscard]] auto NetworkRegistrationState() const;
        [[nodiscard]] auto RegistrationNetworkError() const;
        [[nodiscard]] auto PacketAttachNetworkError() const;
        [[nodiscard]] auto ActivationNetworkError() const;
        [[nodiscard]] auto AccessPointName() const;
        [[nodiscard]] auto RegisteredDataClass() const;
        [[nodiscard]] auto RegisteredProviderId() const;
        [[nodiscard]] auto RegisteredProviderName() const;
        auto ShowConnectionUI() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2
    {
        auto GetVoiceCallSupportAsync() const;
        [[nodiscard]] auto RegistrationUiccApps() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3
    {
        auto GetCellsInfoAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Network() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
    {
        [[nodiscard]] auto NetworkRegistrationStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPco
    {
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto IsComplete() const;
        [[nodiscard]] auto DeviceId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPco<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPcoDataChangeTriggerDetails
    {
        [[nodiscard]] auto UpdatedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPcoDataChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto LockState() const;
        [[nodiscard]] auto Format() const;
        [[nodiscard]] auto Enabled() const;
        [[nodiscard]] auto MaxLength() const;
        [[nodiscard]] auto MinLength() const;
        [[nodiscard]] auto AttemptsRemaining() const;
        auto EnableAsync(param::hstring const& currentPin) const;
        auto DisableAsync(param::hstring const& currentPin) const;
        auto EnterAsync(param::hstring const& currentPin) const;
        auto ChangeAsync(param::hstring const& currentPin, param::hstring const& newPin) const;
        auto UnblockAsync(param::hstring const& pinUnblockKey, param::hstring const& newPin) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto PinType() const;
        [[nodiscard]] auto PinLockState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails
    {
        [[nodiscard]] auto PinLockStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager
    {
        [[nodiscard]] auto SupportedPins() const;
        auto GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType const& pinType) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult
    {
        [[nodiscard]] auto IsSuccessful() const;
        [[nodiscard]] auto AttemptsRemaining() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto RadioState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails
    {
        [[nodiscard]] auto RadioStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager
    {
        [[nodiscard]] auto IsBackoffEnabled() const;
        [[nodiscard]] auto IsWiFiHardwareIntegrated() const;
        [[nodiscard]] auto IsSarControlledByHardware() const;
        [[nodiscard]] auto Antennas() const;
        [[nodiscard]] auto HysteresisTimerPeriod() const;
        auto TransmissionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const;
        using TransmissionStateChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>::remove_TransmissionStateChanged>;
        TransmissionStateChanged_revoker TransmissionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const;
        auto TransmissionStateChanged(winrt::event_token const& token) const noexcept;
        auto EnableBackoffAsync() const;
        auto DisableBackoffAsync() const;
        auto SetConfigurationAsync(param::async_iterable<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> const& antennas) const;
        auto RevertSarToHardwareControlAsync() const;
        auto SetTransmissionStateChangedHysteresisAsync(Windows::Foundation::TimeSpan const& timerPeriod) const;
        auto GetIsTransmittingAsync() const;
        auto StartTransmissionStateMonitoring() const;
        auto StopTransmissionStateMonitoring() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs
    {
        [[nodiscard]] auto IsTransmitting() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc
    {
        [[nodiscard]] auto SimIccId() const;
        auto GetUiccAppsAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Kind() const;
        auto GetRecordDetailsAsync(param::async_iterable<uint32_t> const& uiccFilePath) const;
        auto ReadRecordAsync(param::async_iterable<uint32_t> const& uiccFilePath, int32_t recordIndex) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Data() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto RecordCount() const;
        [[nodiscard]] auto RecordSize() const;
        [[nodiscard]] auto ReadAccessCondition() const;
        [[nodiscard]] auto WriteAccessCondition() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto UiccApps() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorDataUsageTriggerDetails
    {
        [[nodiscard]] auto NotificationKind() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorDataUsageTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails
    {
        [[nodiscard]] auto NotificationType() const;
        [[nodiscard]] auto NetworkAccountId() const;
        [[nodiscard]] auto EncodingType() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto RuleId() const;
        [[nodiscard]] auto SmsMessage() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration
    {
        [[nodiscard]] auto Ssid() const;
        auto Ssid(param::hstring const& value) const;
        [[nodiscard]] auto Passphrase() const;
        auto Passphrase(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration2
    {
        auto IsBandSupported(Windows::Networking::NetworkOperators::TetheringWiFiBand const& band) const;
        auto IsBandSupportedAsync(Windows::Networking::NetworkOperators::TetheringWiFiBand const& band) const;
        [[nodiscard]] auto Band() const;
        auto Band(Windows::Networking::NetworkOperators::TetheringWiFiBand const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient
    {
        [[nodiscard]] auto MacAddress() const;
        [[nodiscard]] auto HostNames() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager
    {
        auto GetTetheringClients() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck
    {
        auto AuthorizeTethering(bool allow, param::hstring const& entitlementFailureReason) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager
    {
        [[nodiscard]] auto MaxClientCount() const;
        [[nodiscard]] auto ClientCount() const;
        [[nodiscard]] auto TetheringOperationalState() const;
        auto GetCurrentAccessPointConfiguration() const;
        auto ConfigureAccessPointAsync(Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration const& configuration) const;
        auto StartTetheringAsync() const;
        auto StopTetheringAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics
    {
        auto GetTetheringCapability(param::hstring const& networkAccountId) const;
        auto CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2
    {
        auto GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
        auto CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3
    {
        auto CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics4
    {
        auto IsNoConnectionsTimeoutEnabled() const;
        auto EnableNoConnectionsTimeout() const;
        auto EnableNoConnectionsTimeoutAsync() const;
        auto DisableNoConnectionsTimeout() const;
        auto DisableNoConnectionsTimeoutAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto AdditionalErrorMessage() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults
    {
        [[nodiscard]] auto AllElementsProvisioned() const;
        [[nodiscard]] auto ProvisionResultsXml() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisionedProfile
    {
        auto UpdateCost(Windows::Networking::Connectivity::NetworkCostType const& value) const;
        auto UpdateUsage(Windows::Networking::NetworkOperators::ProfileUsage const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionedProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisioningAgent
    {
        auto ProvisionFromXmlDocumentAsync(param::hstring const& provisioningXmlDocument) const;
        auto GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType const& mediaType, param::hstring const& profileName) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods
    {
        auto CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_ITetheringEntitlementCheckTriggerDetails
    {
        [[nodiscard]] auto NetworkAccountId() const;
        auto AllowTethering() const;
        auto DenyTethering(param::hstring const& entitlementFailureReason) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_ITetheringEntitlementCheckTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdMessage
    {
        [[nodiscard]] auto DataCodingScheme() const;
        auto DataCodingScheme(uint8_t value) const;
        auto GetPayload() const;
        auto SetPayload(array_view<uint8_t const> value) const;
        [[nodiscard]] auto PayloadAsText() const;
        auto PayloadAsText(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdMessageFactory
    {
        auto CreateMessage(param::hstring const& messageText) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdReply
    {
        [[nodiscard]] auto ResultCode() const;
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdReply>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdReply<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdSession
    {
        auto SendMessageAndGetReplyAsync(Windows::Networking::NetworkOperators::UssdMessage const& message) const;
        auto Close() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdSessionStatics
    {
        auto CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
        auto CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSessionStatics<D>;
    };
    struct struct_Windows_Networking_NetworkOperators_ESimProfileInstallProgress
    {
        int32_t TotalSizeInBytes;
        int32_t InstalledSizeInBytes;
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        using type = struct_Windows_Networking_NetworkOperators_ESimProfileInstallProgress;
    };
    struct struct_Windows_Networking_NetworkOperators_ProfileUsage
    {
        uint32_t UsageInMegabytes;
        int64_t LastSyncTime;
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ProfileUsage>
    {
        using type = struct_Windows_Networking_NetworkOperators_ProfileUsage;
    };
}
#endif
