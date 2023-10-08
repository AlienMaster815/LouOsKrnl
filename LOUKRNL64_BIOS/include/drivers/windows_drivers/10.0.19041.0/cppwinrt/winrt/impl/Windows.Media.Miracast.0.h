// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Miracast_0_H
#define WINRT_Windows_Media_Miracast_0_H
namespace winrt::Windows::ApplicationModel::Core
{
    struct CoreApplicationView;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics
{
    struct PointInt32;
    struct SizeInt32;
}
namespace winrt::Windows::Media::Core
{
    struct MediaSource;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
namespace winrt::Windows::Media::Miracast
{
    enum class MiracastReceiverApplySettingsStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        MiracastNotSupported = 2,
        AccessDenied = 3,
        FriendlyNameTooLong = 4,
        ModelNameTooLong = 5,
        ModelNumberTooLong = 6,
        InvalidSettings = 7,
    };
    enum class MiracastReceiverAuthorizationMethod : int32_t
    {
        None = 0,
        ConfirmConnection = 1,
        PinDisplayIfRequested = 2,
        PinDisplayRequired = 3,
    };
    enum class MiracastReceiverDisconnectReason : int32_t
    {
        Finished = 0,
        AppSpecificError = 1,
        ConnectionNotAccepted = 2,
        DisconnectedByUser = 3,
        FailedToStartStreaming = 4,
        MediaDecodingError = 5,
        MediaStreamingError = 6,
        MediaDecryptionError = 7,
    };
    enum class MiracastReceiverGameControllerDeviceUsageMode : int32_t
    {
        AsGameController = 0,
        AsMouseAndKeyboard = 1,
    };
    enum class MiracastReceiverListeningStatus : int32_t
    {
        NotListening = 0,
        Listening = 1,
        ConnectionPending = 2,
        Connected = 3,
        DisabledByPolicy = 4,
        TemporarilyDisabled = 5,
    };
    enum class MiracastReceiverSessionStartStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        MiracastNotSupported = 2,
        AccessDenied = 3,
    };
    enum class MiracastReceiverWiFiStatus : int32_t
    {
        MiracastSupportUndetermined = 0,
        MiracastNotSupported = 1,
        MiracastSupportNotOptimized = 2,
        MiracastSupported = 3,
    };
    enum class MiracastTransmitterAuthorizationStatus : int32_t
    {
        Undecided = 0,
        Allowed = 1,
        AlwaysPrompt = 2,
        Blocked = 3,
    };
    struct IMiracastReceiver;
    struct IMiracastReceiverApplySettingsResult;
    struct IMiracastReceiverConnection;
    struct IMiracastReceiverConnectionCreatedEventArgs;
    struct IMiracastReceiverCursorImageChannel;
    struct IMiracastReceiverCursorImageChannelSettings;
    struct IMiracastReceiverDisconnectedEventArgs;
    struct IMiracastReceiverGameControllerDevice;
    struct IMiracastReceiverInputDevices;
    struct IMiracastReceiverKeyboardDevice;
    struct IMiracastReceiverMediaSourceCreatedEventArgs;
    struct IMiracastReceiverSession;
    struct IMiracastReceiverSessionStartResult;
    struct IMiracastReceiverSettings;
    struct IMiracastReceiverStatus;
    struct IMiracastReceiverStreamControl;
    struct IMiracastReceiverVideoStreamSettings;
    struct IMiracastTransmitter;
    struct MiracastReceiver;
    struct MiracastReceiverApplySettingsResult;
    struct MiracastReceiverConnection;
    struct MiracastReceiverConnectionCreatedEventArgs;
    struct MiracastReceiverCursorImageChannel;
    struct MiracastReceiverCursorImageChannelSettings;
    struct MiracastReceiverDisconnectedEventArgs;
    struct MiracastReceiverGameControllerDevice;
    struct MiracastReceiverInputDevices;
    struct MiracastReceiverKeyboardDevice;
    struct MiracastReceiverMediaSourceCreatedEventArgs;
    struct MiracastReceiverSession;
    struct MiracastReceiverSessionStartResult;
    struct MiracastReceiverSettings;
    struct MiracastReceiverStatus;
    struct MiracastReceiverStreamControl;
    struct MiracastReceiverVideoStreamSettings;
    struct MiracastTransmitter;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Miracast::IMiracastReceiver>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverApplySettingsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverInputDevices>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverSessionStartResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverStatus>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverStreamControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::IMiracastTransmitter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiver>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverApplySettingsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverConnectionCreatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverCursorImageChannel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverCursorImageChannelSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverDisconnectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverGameControllerDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverInputDevices>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverKeyboardDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverMediaSourceCreatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverSessionStartResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverStatus>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverStreamControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverVideoStreamSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastTransmitter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverApplySettingsStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverAuthorizationMethod>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverDisconnectReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverGameControllerDeviceUsageMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverListeningStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverSessionStartStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastReceiverWiFiStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Miracast::MiracastTransmitterAuthorizationStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiver>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiver" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverApplySettingsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverApplySettingsResult" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverConnection" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverConnectionCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverCursorImageChannel" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverCursorImageChannelSettings" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverDisconnectedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverGameControllerDevice" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverInputDevices>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverInputDevices" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverKeyboardDevice" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverMediaSourceCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverSession>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverSession" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverSessionStartResult>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverSessionStartResult" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverSettings" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverStatus" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverStreamControl>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverStreamControl" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastReceiverVideoStreamSettings" };
    };
    template <> struct name<Windows::Media::Miracast::IMiracastTransmitter>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.IMiracastTransmitter" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiver>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiver" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverApplySettingsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverApplySettingsResult" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverConnection>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverConnection" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverConnectionCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverConnectionCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverCursorImageChannel>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverCursorImageChannel" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverCursorImageChannelSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverCursorImageChannelSettings" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverDisconnectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverDisconnectedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverGameControllerDevice>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverGameControllerDevice" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverInputDevices>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverInputDevices" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverKeyboardDevice>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverKeyboardDevice" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverMediaSourceCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverMediaSourceCreatedEventArgs" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverSession>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverSession" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverSessionStartResult>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverSessionStartResult" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverSettings" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverStatus" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverStreamControl>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverStreamControl" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverVideoStreamSettings>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverVideoStreamSettings" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastTransmitter>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastTransmitter" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverApplySettingsStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverApplySettingsStatus" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverAuthorizationMethod>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverAuthorizationMethod" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverDisconnectReason>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverDisconnectReason" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverGameControllerDeviceUsageMode>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverGameControllerDeviceUsageMode" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverListeningStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverListeningStatus" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverSessionStartStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverSessionStartStatus" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastReceiverWiFiStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastReceiverWiFiStatus" };
    };
    template <> struct name<Windows::Media::Miracast::MiracastTransmitterAuthorizationStatus>
    {
        static constexpr auto & value{ L"Windows.Media.Miracast.MiracastTransmitterAuthorizationStatus" };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiver>
    {
        static constexpr guid value{ 0x7A315258,0xE444,0x51B4,{ 0xAF,0xF7,0xB8,0x8D,0xAA,0x12,0x29,0xE0 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverApplySettingsResult>
    {
        static constexpr guid value{ 0xD0AA6272,0x09CD,0x58E1,{ 0xA4,0xF2,0x5D,0x51,0x43,0xD3,0x12,0xF9 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverConnection>
    {
        static constexpr guid value{ 0x704B2F36,0xD2E5,0x551F,{ 0xA8,0x54,0xF8,0x22,0xB7,0x91,0x7D,0x28 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs>
    {
        static constexpr guid value{ 0x7D8DFA39,0x307A,0x5C0F,{ 0x94,0xBD,0xD0,0xC6,0x9D,0x16,0x99,0x82 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>
    {
        static constexpr guid value{ 0xD9AC332D,0x723A,0x5A9D,{ 0xB9,0x0A,0x81,0x15,0x3E,0xFA,0x2A,0x0F } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings>
    {
        static constexpr guid value{ 0xCCDBEDFF,0xBD00,0x5B9C,{ 0x8E,0x4C,0x00,0xCA,0xCF,0x86,0xB6,0x34 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs>
    {
        static constexpr guid value{ 0xD9A15E5E,0x5FEE,0x57E6,{ 0xB4,0xB0,0x04,0x72,0x7D,0xB9,0x32,0x29 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>
    {
        static constexpr guid value{ 0x2D7171E8,0xBED4,0x5118,{ 0xA0,0x58,0xE2,0x47,0x7E,0xB5,0x88,0x8D } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverInputDevices>
    {
        static constexpr guid value{ 0xDA35BB02,0x28AA,0x5EE8,{ 0x96,0xF5,0xA4,0x29,0x01,0xC6,0x6F,0x00 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>
    {
        static constexpr guid value{ 0xBEB67272,0x06C0,0x54FF,{ 0xAC,0x96,0x21,0x74,0x64,0xFF,0x25,0x01 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs>
    {
        static constexpr guid value{ 0x17CF519E,0x1246,0x531D,{ 0x94,0x5A,0x6B,0x15,0x8E,0x39,0xC3,0xAA } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverSession>
    {
        static constexpr guid value{ 0x1D2BCDB4,0xEF8B,0x5209,{ 0xBF,0xC9,0xC3,0x21,0x16,0x50,0x48,0x03 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverSessionStartResult>
    {
        static constexpr guid value{ 0xB7C573EE,0x40CA,0x51FF,{ 0x95,0xF2,0xC9,0xDE,0x34,0xF2,0xE9,0x0E } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverSettings>
    {
        static constexpr guid value{ 0x57CD2F24,0xC55A,0x5FBE,{ 0x94,0x64,0xEB,0x05,0x30,0x77,0x05,0xDD } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverStatus>
    {
        static constexpr guid value{ 0xC28A5591,0x23AB,0x519E,{ 0xAD,0x09,0x90,0xBF,0xF6,0xDC,0xC8,0x7E } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverStreamControl>
    {
        static constexpr guid value{ 0x38EA2D8B,0x2769,0x5AD7,{ 0x8A,0x8A,0x25,0x4B,0x9D,0xF7,0xBA,0x82 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings>
    {
        static constexpr guid value{ 0x169B5E1B,0x149D,0x52D0,{ 0xB1,0x26,0x6F,0x89,0x74,0x4E,0x4F,0x50 } };
    };
    template <> struct guid_storage<Windows::Media::Miracast::IMiracastTransmitter>
    {
        static constexpr guid value{ 0x342D79FD,0x2E64,0x5508,{ 0x8A,0x30,0x83,0x3D,0x1E,0xAC,0x70,0xD0 } };
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiver>
    {
        using type = Windows::Media::Miracast::IMiracastReceiver;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverApplySettingsResult>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverApplySettingsResult;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverConnection>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverConnection;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverConnectionCreatedEventArgs>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverCursorImageChannel>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverCursorImageChannel;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverCursorImageChannelSettings>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverDisconnectedEventArgs>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverGameControllerDevice>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverGameControllerDevice;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverInputDevices>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverInputDevices;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverKeyboardDevice>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverKeyboardDevice;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverMediaSourceCreatedEventArgs>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverSession>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverSession;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverSessionStartResult>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverSessionStartResult;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverSettings>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverSettings;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverStatus>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverStatus;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverStreamControl>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverStreamControl;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastReceiverVideoStreamSettings>
    {
        using type = Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings;
    };
    template <> struct default_interface<Windows::Media::Miracast::MiracastTransmitter>
    {
        using type = Windows::Media::Miracast::IMiracastTransmitter;
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultSettings(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSettings(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSettingsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectAllAndApplySettings(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectAllAndApplySettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetStatus(void**) noexcept = 0;
            virtual int32_t __stdcall GetStatusAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateSession(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSessionAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearKnownTransmitters() noexcept = 0;
            virtual int32_t __stdcall RemoveKnownTransmitter(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverApplySettingsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Disconnect(int32_t) noexcept = 0;
            virtual int32_t __stdcall DisconnectWithMessage(int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall PauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall ResumeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transmitter(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputDevices(void**) noexcept = 0;
            virtual int32_t __stdcall get_CursorImageChannel(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreamControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pin(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxImageSize(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall get_Position(struct struct_Windows_Graphics_PointInt32*) noexcept = 0;
            virtual int32_t __stdcall get_ImageStream(void**) noexcept = 0;
            virtual int32_t __stdcall add_ImageStreamChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageStreamChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxImageSize(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall put_MaxImageSize(struct struct_Windows_Graphics_SizeInt32) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransmitInput(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransmitInput(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRequestedByTransmitter(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTransmittingInput(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverInputDevices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Keyboard(void**) noexcept = 0;
            virtual int32_t __stdcall get_GameController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransmitInput(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransmitInput(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRequestedByTransmitter(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTransmittingInput(bool*) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_CursorImageChannelSettings(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ConnectionCreated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionCreated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaSourceCreated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaSourceCreated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Disconnected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Disconnected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AllowConnectionTakeover(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowConnectionTakeover(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxSimultaneousConnections(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSimultaneousConnections(int32_t) noexcept = 0;
            virtual int32_t __stdcall Start(void**) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverSessionStartResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ModelName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ModelName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ModelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_ModelNumber(void*) noexcept = 0;
            virtual int32_t __stdcall get_AuthorizationMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AuthorizationMethod(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequireAuthorizationFromKnownTransmitters(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequireAuthorizationFromKnownTransmitters(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ListeningStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WiFiStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsConnectionTakeoverSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSimultaneousConnections(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KnownTransmitters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverStreamControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetVideoStreamSettings(void**) noexcept = 0;
            virtual int32_t __stdcall GetVideoStreamSettingsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SuggestVideoStreamSettings(void*) noexcept = 0;
            virtual int32_t __stdcall SuggestVideoStreamSettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MuteAudio(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MuteAudio(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall put_Size(struct struct_Windows_Graphics_SizeInt32) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Bitrate(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Miracast::IMiracastTransmitter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_AuthorizationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AuthorizationStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetConnections(void**) noexcept = 0;
            virtual int32_t __stdcall get_MacAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastConnectionTime(int64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiver
    {
        auto GetDefaultSettings() const;
        auto GetCurrentSettings() const;
        auto GetCurrentSettingsAsync() const;
        auto DisconnectAllAndApplySettings(Windows::Media::Miracast::MiracastReceiverSettings const& settings) const;
        auto DisconnectAllAndApplySettingsAsync(Windows::Media::Miracast::MiracastReceiverSettings const& settings) const;
        auto GetStatus() const;
        auto GetStatusAsync() const;
        auto StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiver, Windows::Foundation::IInspectable> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiver, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiver>::remove_StatusChanged>;
        StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiver, Windows::Foundation::IInspectable> const& handler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
        auto CreateSession(Windows::ApplicationModel::Core::CoreApplicationView const& view) const;
        auto CreateSessionAsync(Windows::ApplicationModel::Core::CoreApplicationView const& view) const;
        auto ClearKnownTransmitters() const;
        auto RemoveKnownTransmitter(Windows::Media::Miracast::MiracastTransmitter const& transmitter) const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiver>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiver<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverApplySettingsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverApplySettingsResult>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverApplySettingsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverConnection
    {
        auto Disconnect(Windows::Media::Miracast::MiracastReceiverDisconnectReason const& reason) const;
        auto Disconnect(Windows::Media::Miracast::MiracastReceiverDisconnectReason const& reason, param::hstring const& message) const;
        auto Pause() const;
        auto PauseAsync() const;
        auto Resume() const;
        auto ResumeAsync() const;
        [[nodiscard]] auto Transmitter() const;
        [[nodiscard]] auto InputDevices() const;
        [[nodiscard]] auto CursorImageChannel() const;
        [[nodiscard]] auto StreamControl() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverConnection>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverConnectionCreatedEventArgs
    {
        [[nodiscard]] auto Connection() const;
        [[nodiscard]] auto Pin() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverConnectionCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverCursorImageChannel
    {
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto MaxImageSize() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto ImageStream() const;
        auto ImageStreamChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverCursorImageChannel, Windows::Foundation::IInspectable> const& handler) const;
        using ImageStreamChanged_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>::remove_ImageStreamChanged>;
        ImageStreamChanged_revoker ImageStreamChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverCursorImageChannel, Windows::Foundation::IInspectable> const& handler) const;
        auto ImageStreamChanged(winrt::event_token const& token) const noexcept;
        auto PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverCursorImageChannel, Windows::Foundation::IInspectable> const& handler) const;
        using PositionChanged_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>::remove_PositionChanged>;
        PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverCursorImageChannel, Windows::Foundation::IInspectable> const& handler) const;
        auto PositionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverCursorImageChannel>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverCursorImageChannel<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverCursorImageChannelSettings
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto MaxImageSize() const;
        auto MaxImageSize(Windows::Graphics::SizeInt32 const& value) const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverCursorImageChannelSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverDisconnectedEventArgs
    {
        [[nodiscard]] auto Connection() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverDisconnectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverGameControllerDevice
    {
        [[nodiscard]] auto TransmitInput() const;
        auto TransmitInput(bool value) const;
        [[nodiscard]] auto IsRequestedByTransmitter() const;
        [[nodiscard]] auto IsTransmittingInput() const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Miracast::MiracastReceiverGameControllerDeviceUsageMode const& value) const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverGameControllerDevice, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverGameControllerDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverGameControllerDevice>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverGameControllerDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverInputDevices
    {
        [[nodiscard]] auto Keyboard() const;
        [[nodiscard]] auto GameController() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverInputDevices>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverInputDevices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverKeyboardDevice
    {
        [[nodiscard]] auto TransmitInput() const;
        auto TransmitInput(bool value) const;
        [[nodiscard]] auto IsRequestedByTransmitter() const;
        [[nodiscard]] auto IsTransmittingInput() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverKeyboardDevice, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverKeyboardDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverKeyboardDevice>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverKeyboardDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverMediaSourceCreatedEventArgs
    {
        [[nodiscard]] auto Connection() const;
        [[nodiscard]] auto MediaSource() const;
        [[nodiscard]] auto CursorImageChannelSettings() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverMediaSourceCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverSession
    {
        auto ConnectionCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverConnectionCreatedEventArgs> const& handler) const;
        using ConnectionCreated_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverSession, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverSession>::remove_ConnectionCreated>;
        ConnectionCreated_revoker ConnectionCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverConnectionCreatedEventArgs> const& handler) const;
        auto ConnectionCreated(winrt::event_token const& token) const noexcept;
        auto MediaSourceCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverMediaSourceCreatedEventArgs> const& handler) const;
        using MediaSourceCreated_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverSession, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverSession>::remove_MediaSourceCreated>;
        MediaSourceCreated_revoker MediaSourceCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverMediaSourceCreatedEventArgs> const& handler) const;
        auto MediaSourceCreated(winrt::event_token const& token) const noexcept;
        auto Disconnected(Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverDisconnectedEventArgs> const& handler) const;
        using Disconnected_revoker = impl::event_revoker<Windows::Media::Miracast::IMiracastReceiverSession, &impl::abi_t<Windows::Media::Miracast::IMiracastReceiverSession>::remove_Disconnected>;
        Disconnected_revoker Disconnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Miracast::MiracastReceiverSession, Windows::Media::Miracast::MiracastReceiverDisconnectedEventArgs> const& handler) const;
        auto Disconnected(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AllowConnectionTakeover() const;
        auto AllowConnectionTakeover(bool value) const;
        [[nodiscard]] auto MaxSimultaneousConnections() const;
        auto MaxSimultaneousConnections(int32_t value) const;
        auto Start() const;
        auto StartAsync() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverSession>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverSessionStartResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverSessionStartResult>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverSessionStartResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverSettings
    {
        [[nodiscard]] auto FriendlyName() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto ModelName() const;
        auto ModelName(param::hstring const& value) const;
        [[nodiscard]] auto ModelNumber() const;
        auto ModelNumber(param::hstring const& value) const;
        [[nodiscard]] auto AuthorizationMethod() const;
        auto AuthorizationMethod(Windows::Media::Miracast::MiracastReceiverAuthorizationMethod const& value) const;
        [[nodiscard]] auto RequireAuthorizationFromKnownTransmitters() const;
        auto RequireAuthorizationFromKnownTransmitters(bool value) const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverSettings>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverStatus
    {
        [[nodiscard]] auto ListeningStatus() const;
        [[nodiscard]] auto WiFiStatus() const;
        [[nodiscard]] auto IsConnectionTakeoverSupported() const;
        [[nodiscard]] auto MaxSimultaneousConnections() const;
        [[nodiscard]] auto KnownTransmitters() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverStatus>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverStreamControl
    {
        auto GetVideoStreamSettings() const;
        auto GetVideoStreamSettingsAsync() const;
        auto SuggestVideoStreamSettings(Windows::Media::Miracast::MiracastReceiverVideoStreamSettings const& settings) const;
        auto SuggestVideoStreamSettingsAsync(Windows::Media::Miracast::MiracastReceiverVideoStreamSettings const& settings) const;
        [[nodiscard]] auto MuteAudio() const;
        auto MuteAudio(bool value) const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverStreamControl>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverStreamControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastReceiverVideoStreamSettings
    {
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Graphics::SizeInt32 const& value) const;
        [[nodiscard]] auto Bitrate() const;
        auto Bitrate(int32_t value) const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastReceiverVideoStreamSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Miracast_IMiracastTransmitter
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto AuthorizationStatus() const;
        auto AuthorizationStatus(Windows::Media::Miracast::MiracastTransmitterAuthorizationStatus const& value) const;
        auto GetConnections() const;
        [[nodiscard]] auto MacAddress() const;
        [[nodiscard]] auto LastConnectionTime() const;
    };
    template <> struct consume<Windows::Media::Miracast::IMiracastTransmitter>
    {
        template <typename D> using type = consume_Windows_Media_Miracast_IMiracastTransmitter<D>;
    };
}
#endif
