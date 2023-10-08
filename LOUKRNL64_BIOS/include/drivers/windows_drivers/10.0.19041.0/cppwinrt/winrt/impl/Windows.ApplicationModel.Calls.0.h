// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Calls_0_H
#define WINRT_Windows_ApplicationModel_Calls_0_H
namespace winrt::Windows::ApplicationModel::Contacts
{
    struct Contact;
    struct ContactPhone;
}
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::ApplicationModel::Calls
{
    enum class CellularDtmfMode : int32_t
    {
        Continuous = 0,
        Burst = 1,
    };
    enum class PhoneAudioRoutingEndpoint : int32_t
    {
        Default = 0,
        Bluetooth = 1,
        Speakerphone = 2,
    };
    enum class PhoneCallHistoryEntryMedia : int32_t
    {
        Audio = 0,
        Video = 1,
    };
    enum class PhoneCallHistoryEntryOtherAppReadAccess : int32_t
    {
        Full = 0,
        SystemOnly = 1,
    };
    enum class PhoneCallHistoryEntryQueryDesiredMedia : uint32_t
    {
        None = 0,
        Audio = 0x1,
        Video = 0x2,
        All = 0xffffffff,
    };
    enum class PhoneCallHistoryEntryRawAddressKind : int32_t
    {
        PhoneNumber = 0,
        Custom = 1,
    };
    enum class PhoneCallHistorySourceIdKind : int32_t
    {
        CellularPhoneLineId = 0,
        PackageFamilyName = 1,
    };
    enum class PhoneCallHistoryStoreAccessType : int32_t
    {
        AppEntriesReadWrite = 0,
        AllEntriesLimitedReadWrite = 1,
        AllEntriesReadWrite = 2,
    };
    enum class PhoneCallMedia : int32_t
    {
        Audio = 0,
        AudioAndVideo = 1,
        AudioAndRealTimeText = 2,
    };
    enum class PhoneLineNetworkOperatorDisplayTextLocation : int32_t
    {
        Default = 0,
        Tile = 1,
        Dialer = 2,
        InCallUI = 3,
    };
    enum class PhoneLineTransport : int32_t
    {
        Cellular = 0,
        VoipApp = 1,
        Bluetooth = 2,
    };
    enum class PhoneLineWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopped = 3,
    };
    enum class PhoneNetworkState : int32_t
    {
        Unknown = 0,
        NoSignal = 1,
        Deregistered = 2,
        Denied = 3,
        Searching = 4,
        Home = 5,
        RoamingInternational = 6,
        RoamingDomestic = 7,
    };
    enum class PhoneSimState : int32_t
    {
        Unknown = 0,
        PinNotRequired = 1,
        PinUnlocked = 2,
        PinLocked = 3,
        PukLocked = 4,
        NotInserted = 5,
        Invalid = 6,
        Disabled = 7,
    };
    enum class PhoneVoicemailType : int32_t
    {
        None = 0,
        Traditional = 1,
        Visual = 2,
    };
    enum class VoipPhoneCallMedia : uint32_t
    {
        None = 0,
        Audio = 0x1,
        Video = 0x2,
    };
    enum class VoipPhoneCallRejectReason : int32_t
    {
        UserIgnored = 0,
        TimedOut = 1,
        OtherIncomingCall = 2,
        EmergencyCallExists = 3,
        InvalidCallState = 4,
    };
    enum class VoipPhoneCallResourceReservationStatus : int32_t
    {
        Success = 0,
        ResourcesNotAvailable = 1,
    };
    enum class VoipPhoneCallState : int32_t
    {
        Ended = 0,
        Held = 1,
        Active = 2,
        Incoming = 3,
        Outgoing = 4,
    };
    struct ICallAnswerEventArgs;
    struct ICallRejectEventArgs;
    struct ICallStateChangeEventArgs;
    struct ILockScreenCallEndCallDeferral;
    struct ILockScreenCallEndRequestedEventArgs;
    struct ILockScreenCallUI;
    struct IMuteChangeEventArgs;
    struct IPhoneCallBlockingStatics;
    struct IPhoneCallHistoryEntry;
    struct IPhoneCallHistoryEntryAddress;
    struct IPhoneCallHistoryEntryAddressFactory;
    struct IPhoneCallHistoryEntryQueryOptions;
    struct IPhoneCallHistoryEntryReader;
    struct IPhoneCallHistoryManagerForUser;
    struct IPhoneCallHistoryManagerStatics;
    struct IPhoneCallHistoryManagerStatics2;
    struct IPhoneCallHistoryStore;
    struct IPhoneCallManagerStatics;
    struct IPhoneCallManagerStatics2;
    struct IPhoneCallStore;
    struct IPhoneCallVideoCapabilities;
    struct IPhoneCallVideoCapabilitiesManagerStatics;
    struct IPhoneDialOptions;
    struct IPhoneLine;
    struct IPhoneLine2;
    struct IPhoneLineCellularDetails;
    struct IPhoneLineConfiguration;
    struct IPhoneLineStatics;
    struct IPhoneLineTransportDevice;
    struct IPhoneLineTransportDeviceStatics;
    struct IPhoneLineWatcher;
    struct IPhoneLineWatcherEventArgs;
    struct IPhoneVoicemail;
    struct IVoipCallCoordinator;
    struct IVoipCallCoordinator2;
    struct IVoipCallCoordinator3;
    struct IVoipCallCoordinator4;
    struct IVoipCallCoordinatorStatics;
    struct IVoipPhoneCall;
    struct IVoipPhoneCall2;
    struct IVoipPhoneCall3;
    struct CallAnswerEventArgs;
    struct CallRejectEventArgs;
    struct CallStateChangeEventArgs;
    struct LockScreenCallEndCallDeferral;
    struct LockScreenCallEndRequestedEventArgs;
    struct LockScreenCallUI;
    struct MuteChangeEventArgs;
    struct PhoneCallBlocking;
    struct PhoneCallHistoryEntry;
    struct PhoneCallHistoryEntryAddress;
    struct PhoneCallHistoryEntryQueryOptions;
    struct PhoneCallHistoryEntryReader;
    struct PhoneCallHistoryManager;
    struct PhoneCallHistoryManagerForUser;
    struct PhoneCallHistoryStore;
    struct PhoneCallManager;
    struct PhoneCallStore;
    struct PhoneCallVideoCapabilities;
    struct PhoneCallVideoCapabilitiesManager;
    struct PhoneDialOptions;
    struct PhoneLine;
    struct PhoneLineCellularDetails;
    struct PhoneLineConfiguration;
    struct PhoneLineTransportDevice;
    struct PhoneLineWatcher;
    struct PhoneLineWatcherEventArgs;
    struct PhoneVoicemail;
    struct VoipCallCoordinator;
    struct VoipPhoneCall;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLine>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::CallAnswerEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::CallRejectEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::MuteChangeEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallBlocking>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneDialOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLine>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneVoicemail>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipCallCoordinator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCall>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::CellularDtmfMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneCallMedia>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineTransport>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcherStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneNetworkState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneSimState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::PhoneVoicemailType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallMedia>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallAnswerEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallRejectEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallStateChangeEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallEndCallDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallEndRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallUI" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IMuteChangeEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallBlockingStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntry" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddressFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryQueryOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryReader" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryStore" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallStore" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilities" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilitiesManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneDialOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLine>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLine" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLine2" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineCellularDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineTransportDevice" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineTransportDeviceStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineWatcher" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineWatcherEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneVoicemail" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator2" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator3" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator4" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinatorStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall2" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall3" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::CallAnswerEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallAnswerEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::CallRejectEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallRejectEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallStateChangeEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallEndCallDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallEndRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallUI>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallUI" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::MuteChangeEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.MuteChangeEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallBlocking>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallBlocking" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntry" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryReader" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryManager" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryStore" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallManager" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallStore" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilities" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilitiesManager" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneDialOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneDialOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLine>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLine" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineCellularDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineConfiguration>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineConfiguration" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineTransportDevice" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcher>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcher" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcherEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneVoicemail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneVoicemail" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipCallCoordinator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipCallCoordinator" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCall>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCall" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::CellularDtmfMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CellularDtmfMode" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneAudioRoutingEndpoint" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryMedia" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryOtherAppReadAccess" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryDesiredMedia" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryRawAddressKind" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistorySourceIdKind" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryStoreAccessType" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneCallMedia>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallMedia" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineNetworkOperatorDisplayTextLocation" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineTransport>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineTransport" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcherStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcherStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneNetworkState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneNetworkState" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneSimState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneSimState" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::PhoneVoicemailType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneVoicemailType" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallMedia>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallMedia" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallRejectReason" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallResourceReservationStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallState" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        static constexpr guid value{ 0xFD789617,0x2DD7,0x4C8C,{ 0xB2,0xBD,0x95,0xD1,0x7A,0x5B,0xB7,0x33 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        static constexpr guid value{ 0xDA47FAD7,0x13D4,0x4D92,{ 0xA1,0xC2,0xB7,0x78,0x11,0xEE,0x37,0xEC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        static constexpr guid value{ 0xEAB2349E,0x66F5,0x47F9,{ 0x9F,0xB5,0x45,0x9C,0x51,0x98,0xC7,0x20 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        static constexpr guid value{ 0x2DD7ED0D,0x98ED,0x4041,{ 0x96,0x32,0x50,0xFF,0x81,0x2B,0x77,0x3F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        static constexpr guid value{ 0x8190A363,0x6F27,0x46E9,{ 0xAE,0xB6,0xC0,0xAE,0x83,0xE4,0x7D,0xC7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        static constexpr guid value{ 0xC596FD8D,0x73C9,0x4A14,{ 0xB0,0x21,0xEC,0x1C,0x50,0xA3,0xB7,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        static constexpr guid value{ 0x8585E159,0x0C41,0x432C,{ 0x81,0x4D,0xC5,0xF1,0xFD,0xF5,0x30,0xBE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        static constexpr guid value{ 0x19646F84,0x2B79,0x26F1,{ 0xA4,0x6F,0x69,0x4B,0xE0,0x43,0xF3,0x13 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        static constexpr guid value{ 0xFAB0E129,0x32A4,0x4B85,{ 0x83,0xD1,0xF9,0x0D,0x8C,0x23,0xA8,0x57 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        static constexpr guid value{ 0x30F159DA,0x3955,0x4042,{ 0x84,0xE6,0x66,0xEE,0xBF,0x82,0xE6,0x7F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        static constexpr guid value{ 0xFB0FADBA,0xC7F0,0x4BB6,{ 0x9F,0x6B,0xBA,0x5D,0x73,0x20,0x9A,0xCA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        static constexpr guid value{ 0x9C5FE15C,0x8BED,0x40CA,{ 0xB0,0x6E,0xC4,0xCA,0x8E,0xAE,0x5C,0x87 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        static constexpr guid value{ 0x61ECE4BE,0x8D86,0x479F,{ 0x84,0x04,0xA9,0x84,0x69,0x20,0xFE,0xE6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        static constexpr guid value{ 0xD925C523,0xF55F,0x4353,{ 0x9D,0xB4,0x02,0x05,0xA5,0x26,0x5A,0x55 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        static constexpr guid value{ 0xF5A6DA39,0xB31F,0x4F45,{ 0xAC,0x8E,0x1B,0x08,0x89,0x3C,0x1B,0x50 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        static constexpr guid value{ 0xEFD474F0,0xA2DB,0x4188,{ 0x9E,0x92,0xBC,0x3C,0xFA,0x68,0x13,0xCF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        static constexpr guid value{ 0x2F907DB8,0xB40E,0x422B,{ 0x85,0x45,0xCB,0x19,0x10,0xA6,0x1C,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        static constexpr guid value{ 0x60EDAC78,0x78A6,0x4872,{ 0xA3,0xEF,0x98,0x32,0x5E,0xC8,0xB8,0x43 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        static constexpr guid value{ 0xC7E3C8BC,0x2370,0x431C,{ 0x98,0xFD,0x43,0xBE,0x5F,0x03,0x08,0x6D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        static constexpr guid value{ 0x5F610748,0x18A6,0x4173,{ 0x86,0xD1,0x28,0xBE,0x9D,0xC6,0x2D,0xBA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        static constexpr guid value{ 0x02382786,0xB16A,0x4FDB,{ 0xBE,0x3B,0xC4,0x24,0x0E,0x13,0xAD,0x0D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        static constexpr guid value{ 0xF3C64B56,0xF00B,0x4A1C,{ 0xA0,0xC6,0xEE,0x19,0x10,0x74,0x9C,0xE7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        static constexpr guid value{ 0xB639C4B8,0xF06F,0x36CB,{ 0xA8,0x63,0x82,0x37,0x42,0xB5,0xF2,0xD4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLine>
    {
        static constexpr guid value{ 0x27C66F30,0x6A69,0x34CA,{ 0xA2,0xBA,0x65,0x30,0x25,0x30,0xC3,0x11 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        static constexpr guid value{ 0x0167F56A,0x5344,0x5D64,{ 0x8A,0xF3,0xA3,0x1A,0x95,0x0E,0x91,0x6A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        static constexpr guid value{ 0x192601D5,0x147C,0x4769,{ 0xB6,0x73,0x98,0xA5,0xEC,0x84,0x26,0xCB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        static constexpr guid value{ 0xFE265862,0xF64F,0x4312,{ 0xB2,0xA8,0x4E,0x25,0x77,0x21,0xAA,0x95 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        static constexpr guid value{ 0xF38B5F23,0xCEB0,0x404F,{ 0xBC,0xF2,0xBA,0x9F,0x69,0x7D,0x8A,0xDF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        static constexpr guid value{ 0xEFA8F889,0xCFFA,0x59F4,{ 0x97,0xE4,0x74,0x70,0x5B,0x7D,0xC4,0x90 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        static constexpr guid value{ 0x0F3121AC,0xD609,0x51A1,{ 0x96,0xF3,0xFB,0x00,0xD1,0x81,0x92,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        static constexpr guid value{ 0x8A45CD0A,0x6323,0x44E0,{ 0xA6,0xF6,0x9F,0x21,0xF6,0x4D,0xC9,0x0A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        static constexpr guid value{ 0xD07C753E,0x9E12,0x4A37,{ 0x82,0xB7,0xAD,0x53,0x5D,0xAD,0x6A,0x67 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        static constexpr guid value{ 0xC9CE77F6,0x6E9F,0x3A8B,{ 0xB7,0x27,0x6E,0x0C,0xF6,0x99,0x82,0x24 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        static constexpr guid value{ 0x4F118BCF,0xE8EF,0x4434,{ 0x9C,0x5F,0xA8,0xD8,0x93,0xFA,0xFE,0x79 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        static constexpr guid value{ 0xBEB4A9F3,0xC704,0x4234,{ 0x89,0xCE,0xE8,0x8C,0xC0,0xD2,0x8F,0xBE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        static constexpr guid value{ 0x338D0CBF,0x9B55,0x4021,{ 0x87,0xCA,0xE6,0x4B,0x9B,0xD6,0x66,0xC7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        static constexpr guid value{ 0x83737239,0x9311,0x468F,{ 0xBB,0x49,0x47,0xE0,0xDF,0xB5,0xD9,0x3E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        static constexpr guid value{ 0x7F5D1F2B,0xE04A,0x4D10,{ 0xB3,0x1A,0xA5,0x5C,0x92,0x2C,0xC2,0xFB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        static constexpr guid value{ 0x6CF1F19A,0x7794,0x4A5A,{ 0x8C,0x68,0xAE,0x87,0x94,0x7A,0x69,0x90 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        static constexpr guid value{ 0x741B46E1,0x245F,0x41F3,{ 0x93,0x99,0x31,0x41,0xD2,0x5B,0x52,0xE3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        static constexpr guid value{ 0x0D891522,0xE258,0x4AA9,{ 0x90,0x7A,0x1A,0xA4,0x13,0xC2,0x55,0x23 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::CallAnswerEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::ICallAnswerEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::CallRejectEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::ICallRejectEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::ICallStateChangeEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>
    {
        using type = Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallUI>
    {
        using type = Windows::ApplicationModel::Calls::ILockScreenCallUI;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::MuteChangeEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::IMuteChangeEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallStore>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneDialOptions>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneDialOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLine>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLine;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLineCellularDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineConfiguration>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLineConfiguration;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLineTransportDevice;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineWatcher>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLineWatcher;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneVoicemail>
    {
        using type = Windows::ApplicationModel::Calls::IPhoneVoicemail;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::VoipCallCoordinator>
    {
        using type = Windows::ApplicationModel::Calls::IVoipCallCoordinator;
    };
    template <> struct default_interface<Windows::ApplicationModel::Calls::VoipPhoneCall>
    {
        using type = Windows::ApplicationModel::Calls::IVoipPhoneCall;
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AcceptedMedia(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RejectReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Dismiss() noexcept = 0;
            virtual int32_t __stdcall add_EndRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EndRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CallTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_CallTitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Muted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BlockUnknownNumbers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BlockUnknownNumbers(bool) noexcept = 0;
            virtual int32_t __stdcall get_BlockPrivateNumbers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BlockPrivateNumbers(bool) noexcept = 0;
            virtual int32_t __stdcall SetCallBlockingListAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCallerIdBlocked(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCallerIdBlocked(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEmergency(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEmergency(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsIncoming(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIncoming(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMissed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMissed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRinging(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRinging(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSeen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSeen(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSuppressed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSuppressed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsVoicemail(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVoicemail(bool) noexcept = 0;
            virtual int32_t __stdcall get_Media(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Media(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceIdKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SourceIdKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactId(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_RawAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_RawAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_RawAddressKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RawAddressKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredMedia(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredMedia(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SourceIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEntryReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetEntryReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteEntriesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkEntryAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkEntriesAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUnseenCountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall MarkAllAsSeenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSourcesUnseenCountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkSourcesAsSeenAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowPhoneCallUI(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CallStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CallStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsCallActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCallIncoming(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowPhoneCallSettingsUI() noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsEmergencyPhoneNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultLineAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestLineWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsVideoCallingCapable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCapabilitiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall put_Number(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall put_Contact(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContactPhone(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactPhone(void*) noexcept = 0;
            virtual int32_t __stdcall get_Media(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Media(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEndpoint(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioEndpoint(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_LineChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Voicemail(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularDetails(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transport(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanDial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsTile(bool*) noexcept = 0;
            virtual int32_t __stdcall get_VideoCallingCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall IsImmediateDialNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Dial(void*, void*) noexcept = 0;
            virtual int32_t __stdcall DialWithOptions(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall EnableTextReply(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransportDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SimSlotIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsModemOn(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationRejectCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNetworkOperatorDisplayText(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsVideoCallingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transport(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterApp() noexcept = 0;
            virtual int32_t __stdcall RegisterAppForUser(void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterApp() noexcept = 0;
            virtual int32_t __stdcall UnregisterAppForUser(void*) noexcept = 0;
            virtual int32_t __stdcall IsRegistered(bool*) noexcept = 0;
            virtual int32_t __stdcall Connect(bool*) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForPhoneLineTransport(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_LineAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LineRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LineUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall get_MessageCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DialVoicemailAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReserveCallResourcesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_MuteStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MuteStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestNewIncomingCall(void*, void*, void*, void*, void*, void*, void*, void*, uint32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestNewOutgoingCall(void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall NotifyMuted() noexcept = 0;
            virtual int32_t __stdcall NotifyUnmuted() noexcept = 0;
            virtual int32_t __stdcall RequestOutgoingUpgradeToVideoCall(winrt::guid, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestIncomingUpgradeToVideoCall(void*, void*, void*, void*, void*, void*, void*, void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall TerminateCellularCall(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall CancelUpgrade(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetupNewAcceptedCall(void*, void*, void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestNewAppInitiatedCall(void*, void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestNewIncomingCallWithContactRemoteId(void*, void*, void*, void*, void*, void*, void*, void*, uint32_t, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReserveOneProcessCallResourcesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_EndRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EndRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HoldRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HoldRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResumeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResumeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AnswerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AnswerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RejectRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RejectRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyCallHeld() noexcept = 0;
            virtual int32_t __stdcall NotifyCallActive() noexcept = 0;
            virtual int32_t __stdcall NotifyCallEnded() noexcept = 0;
            virtual int32_t __stdcall get_ContactName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactName(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_CallMedia(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CallMedia(uint32_t) noexcept = 0;
            virtual int32_t __stdcall NotifyCallReady() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShowAppUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall NotifyCallAccepted(uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs
    {
        [[nodiscard]] auto AcceptedMedia() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs
    {
        [[nodiscard]] auto RejectReason() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs
    {
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto Deadline() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallUI
    {
        auto Dismiss() const;
        auto EndRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
        using EndRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_EndRequested>;
        EndRequested_revoker EndRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
        auto EndRequested(winrt::event_token const& token) const noexcept;
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::Foundation::IInspectable> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CallTitle() const;
        auto CallTitle(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallUI<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs
    {
        [[nodiscard]] auto Muted() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics
    {
        [[nodiscard]] auto BlockUnknownNumbers() const;
        auto BlockUnknownNumbers(bool value) const;
        [[nodiscard]] auto BlockPrivateNumbers() const;
        auto BlockPrivateNumbers(bool value) const;
        auto SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Address() const;
        auto Address(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto IsCallerIdBlocked() const;
        auto IsCallerIdBlocked(bool value) const;
        [[nodiscard]] auto IsEmergency() const;
        auto IsEmergency(bool value) const;
        [[nodiscard]] auto IsIncoming() const;
        auto IsIncoming(bool value) const;
        [[nodiscard]] auto IsMissed() const;
        auto IsMissed(bool value) const;
        [[nodiscard]] auto IsRinging() const;
        auto IsRinging(bool value) const;
        [[nodiscard]] auto IsSeen() const;
        auto IsSeen(bool value) const;
        [[nodiscard]] auto IsSuppressed() const;
        auto IsSuppressed(bool value) const;
        [[nodiscard]] auto IsVoicemail() const;
        auto IsVoicemail(bool value) const;
        [[nodiscard]] auto Media() const;
        auto Media(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia const& value) const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess const& value) const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto SourceDisplayName() const;
        [[nodiscard]] auto SourceId() const;
        auto SourceId(param::hstring const& value) const;
        [[nodiscard]] auto SourceIdKind() const;
        auto SourceIdKind(Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress
    {
        [[nodiscard]] auto ContactId() const;
        auto ContactId(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto RawAddress() const;
        auto RawAddress(param::hstring const& value) const;
        [[nodiscard]] auto RawAddressKind() const;
        auto RawAddressKind(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory
    {
        auto Create(param::hstring const& rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions
    {
        [[nodiscard]] auto DesiredMedia() const;
        auto DesiredMedia(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia const& value) const;
        [[nodiscard]] auto SourceIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader
    {
        auto ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser
    {
        auto RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics
    {
        auto RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore
    {
        auto GetEntryAsync(param::hstring const& callHistoryEntryId) const;
        auto GetEntryReader() const;
        auto GetEntryReader(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions const& queryOptions) const;
        auto SaveEntryAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto DeleteEntryAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto DeleteEntriesAsync(param::async_iterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
        auto MarkEntryAsSeenAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto MarkEntriesAsSeenAsync(param::async_iterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
        auto GetUnseenCountAsync() const;
        auto MarkAllAsSeenAsync() const;
        auto GetSourcesUnseenCountAsync(param::async_iterable<hstring> const& sourceIds) const;
        auto MarkSourcesAsSeenAsync(param::async_iterable<hstring> const& sourceIds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics
    {
        auto ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2
    {
        auto CallStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using CallStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>::remove_CallStateChanged>;
        CallStateChanged_revoker CallStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto CallStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto IsCallActive() const;
        [[nodiscard]] auto IsCallIncoming() const;
        auto ShowPhoneCallSettingsUI() const;
        auto RequestStoreAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallStore
    {
        auto IsEmergencyPhoneNumberAsync(param::hstring const& number) const;
        auto GetDefaultLineAsync() const;
        auto RequestLineWatcher() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities
    {
        [[nodiscard]] auto IsVideoCallingCapable() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics
    {
        auto GetCapabilitiesAsync(param::hstring const& phoneNumber) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneDialOptions
    {
        [[nodiscard]] auto Number() const;
        auto Number(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto Contact() const;
        auto Contact(Windows::ApplicationModel::Contacts::Contact const& value) const;
        [[nodiscard]] auto ContactPhone() const;
        auto ContactPhone(Windows::ApplicationModel::Contacts::ContactPhone const& value) const;
        [[nodiscard]] auto Media() const;
        auto Media(Windows::ApplicationModel::Calls::PhoneCallMedia const& value) const;
        [[nodiscard]] auto AudioEndpoint() const;
        auto AudioEndpoint(Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneDialOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLine
    {
        auto LineChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLine, Windows::Foundation::IInspectable> const& handler) const;
        using LineChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLine, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLine>::remove_LineChanged>;
        LineChanged_revoker LineChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLine, Windows::Foundation::IInspectable> const& handler) const;
        auto LineChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayColor() const;
        [[nodiscard]] auto NetworkState() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Voicemail() const;
        [[nodiscard]] auto NetworkName() const;
        [[nodiscard]] auto CellularDetails() const;
        [[nodiscard]] auto Transport() const;
        [[nodiscard]] auto CanDial() const;
        [[nodiscard]] auto SupportsTile() const;
        [[nodiscard]] auto VideoCallingCapabilities() const;
        [[nodiscard]] auto LineConfiguration() const;
        auto IsImmediateDialNumberAsync(param::hstring const& number) const;
        auto Dial(param::hstring const& number, param::hstring const& displayName) const;
        auto DialWithOptions(Windows::ApplicationModel::Calls::PhoneDialOptions const& options) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLine>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLine2
    {
        auto EnableTextReply(bool value) const;
        [[nodiscard]] auto TransportDeviceId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails
    {
        [[nodiscard]] auto SimState() const;
        [[nodiscard]] auto SimSlotIndex() const;
        [[nodiscard]] auto IsModemOn() const;
        [[nodiscard]] auto RegistrationRejectCode() const;
        auto GetNetworkOperatorDisplayText(Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation const& location) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration
    {
        [[nodiscard]] auto IsVideoCallingEnabled() const;
        [[nodiscard]] auto ExtendedProperties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineStatics
    {
        auto FromIdAsync(winrt::guid const& lineId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Transport() const;
        auto RequestAccessAsync() const;
        auto RegisterApp() const;
        auto RegisterAppForUser(Windows::System::User const& user) const;
        auto UnregisterApp() const;
        auto UnregisterAppForUser(Windows::System::User const& user) const;
        auto IsRegistered() const;
        auto Connect() const;
        auto ConnectAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics
    {
        auto FromId(param::hstring const& id) const;
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(Windows::ApplicationModel::Calls::PhoneLineTransport const& transport) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher
    {
        auto Start() const;
        auto Stop() const;
        auto LineAdded(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineAdded_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineAdded>;
        LineAdded_revoker LineAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineAdded(winrt::event_token const& token) const noexcept;
        auto LineRemoved(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineRemoved_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineRemoved>;
        LineRemoved_revoker LineRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineRemoved(winrt::event_token const& token) const noexcept;
        auto LineUpdated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineUpdated_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineUpdated>;
        LineUpdated_revoker LineUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineUpdated(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Stopped(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_Stopped>;
        Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs
    {
        [[nodiscard]] auto LineId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneVoicemail
    {
        [[nodiscard]] auto Number() const;
        [[nodiscard]] auto MessageCount() const;
        [[nodiscard]] auto Type() const;
        auto DialVoicemailAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneVoicemail<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator
    {
        auto ReserveCallResourcesAsync(param::hstring const& taskEntryPoint) const;
        auto MuteStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
        using MuteStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipCallCoordinator, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipCallCoordinator>::remove_MuteStateChanged>;
        MuteStateChanged_revoker MuteStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
        auto MuteStateChanged(winrt::event_token const& token) const noexcept;
        auto RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, Windows::Foundation::TimeSpan const& ringTimeout) const;
        auto RequestNewOutgoingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
        auto NotifyMuted() const;
        auto NotifyUnmuted() const;
        auto RequestOutgoingUpgradeToVideoCall(winrt::guid const& callUpgradeGuid, param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName) const;
        auto RequestIncomingUpgradeToVideoCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::Foundation::TimeSpan const& ringTimeout) const;
        auto TerminateCellularCall(winrt::guid const& callUpgradeGuid) const;
        auto CancelUpgrade(winrt::guid const& callUpgradeGuid) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2
    {
        auto SetupNewAcceptedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3
    {
        auto RequestNewAppInitiatedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
        auto RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, Windows::Foundation::TimeSpan const& ringTimeout, param::hstring const& contactRemoteId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4
    {
        auto ReserveCallResourcesAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall
    {
        auto EndRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using EndRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_EndRequested>;
        EndRequested_revoker EndRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto EndRequested(winrt::event_token const& token) const noexcept;
        auto HoldRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using HoldRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_HoldRequested>;
        HoldRequested_revoker HoldRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto HoldRequested(winrt::event_token const& token) const noexcept;
        auto ResumeRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using ResumeRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_ResumeRequested>;
        ResumeRequested_revoker ResumeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto ResumeRequested(winrt::event_token const& token) const noexcept;
        auto AnswerRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
        using AnswerRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_AnswerRequested>;
        AnswerRequested_revoker AnswerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
        auto AnswerRequested(winrt::event_token const& token) const noexcept;
        auto RejectRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
        using RejectRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_RejectRequested>;
        RejectRequested_revoker RejectRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
        auto RejectRequested(winrt::event_token const& token) const noexcept;
        auto NotifyCallHeld() const;
        auto NotifyCallActive() const;
        auto NotifyCallEnded() const;
        [[nodiscard]] auto ContactName() const;
        auto ContactName(param::hstring const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto CallMedia() const;
        auto CallMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& value) const;
        auto NotifyCallReady() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2
    {
        auto TryShowAppUI() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3
    {
        auto NotifyCallAccepted(Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3<D>;
    };
}
#endif
