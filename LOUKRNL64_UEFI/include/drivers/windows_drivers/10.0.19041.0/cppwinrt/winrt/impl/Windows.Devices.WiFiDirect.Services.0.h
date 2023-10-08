// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_Services_0_H
#define WINRT_Windows_Devices_WiFiDirect_Services_0_H
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Networking::Sockets
{
    struct DatagramSocket;
    struct StreamSocketListener;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Devices::WiFiDirect::Services
{
    enum class WiFiDirectServiceAdvertisementStatus : int32_t
    {
        Created = 0,
        Started = 1,
        Stopped = 2,
        Aborted = 3,
    };
    enum class WiFiDirectServiceConfigurationMethod : int32_t
    {
        Default = 0,
        PinDisplay = 1,
        PinEntry = 2,
    };
    enum class WiFiDirectServiceError : int32_t
    {
        Success = 0,
        RadioNotAvailable = 1,
        ResourceInUse = 2,
        UnsupportedHardware = 3,
        NoHardware = 4,
    };
    enum class WiFiDirectServiceIPProtocol : int32_t
    {
        Tcp = 6,
        Udp = 17,
    };
    enum class WiFiDirectServiceSessionErrorStatus : int32_t
    {
        Ok = 0,
        Disassociated = 1,
        LocalClose = 2,
        RemoteClose = 3,
        SystemFailure = 4,
        NoResponseFromRemote = 5,
    };
    enum class WiFiDirectServiceSessionStatus : int32_t
    {
        Closed = 0,
        Initiated = 1,
        Requested = 2,
        Open = 3,
    };
    enum class WiFiDirectServiceStatus : int32_t
    {
        Available = 0,
        Busy = 1,
        Custom = 2,
    };
    struct IWiFiDirectService;
    struct IWiFiDirectServiceAdvertiser;
    struct IWiFiDirectServiceAdvertiserFactory;
    struct IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
    struct IWiFiDirectServiceProvisioningInfo;
    struct IWiFiDirectServiceRemotePortAddedEventArgs;
    struct IWiFiDirectServiceSession;
    struct IWiFiDirectServiceSessionDeferredEventArgs;
    struct IWiFiDirectServiceSessionRequest;
    struct IWiFiDirectServiceSessionRequestedEventArgs;
    struct IWiFiDirectServiceStatics;
    struct WiFiDirectService;
    struct WiFiDirectServiceAdvertiser;
    struct WiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
    struct WiFiDirectServiceProvisioningInfo;
    struct WiFiDirectServiceRemotePortAddedEventArgs;
    struct WiFiDirectServiceSession;
    struct WiFiDirectServiceSessionDeferredEventArgs;
    struct WiFiDirectServiceSessionRequest;
    struct WiFiDirectServiceSessionRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectService" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiser" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiserFactory" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceProvisioningInfo" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceRemotePortAddedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSession" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionDeferredEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequest" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceStatics" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectService>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectService" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertiser" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAutoAcceptSessionConnectedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceProvisioningInfo" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceRemotePortAddedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSession" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionDeferredEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequest" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertisementStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertisementStatus" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceConfigurationMethod" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceError>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceError" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceIPProtocol>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceIPProtocol" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionErrorStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionErrorStatus" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionStatus" };
    };
    template <> struct name<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceStatus" };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
    {
        static constexpr guid value{ 0x50AABBB8,0x5F71,0x45EC,{ 0x84,0xF1,0xA1,0xE4,0xFC,0x78,0x79,0xA3 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
    {
        static constexpr guid value{ 0xA4AA1EE1,0x9D8F,0x4F4F,{ 0x93,0xEE,0x7D,0xDE,0xA2,0xE3,0x7F,0x46 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
    {
        static constexpr guid value{ 0x3106AC0D,0xB446,0x4F13,{ 0x9F,0x9A,0x8A,0xE9,0x25,0xFE,0xBA,0x2B } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        static constexpr guid value{ 0xDCD9E01E,0x83DF,0x43E5,{ 0x8F,0x43,0xCB,0xE8,0x47,0x9E,0x84,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
    {
        static constexpr guid value{ 0x8BDB7CFE,0x97D9,0x45A2,{ 0x8E,0x99,0xDB,0x50,0x91,0x0F,0xB6,0xA6 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        static constexpr guid value{ 0xD4CEBAC1,0x3FD3,0x4F0E,{ 0xB7,0xBD,0x78,0x29,0x06,0xF4,0x44,0x11 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
    {
        static constexpr guid value{ 0x81142163,0xE426,0x47CB,{ 0x86,0x40,0xE1,0xB3,0x58,0x8B,0xF2,0x6F } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
    {
        static constexpr guid value{ 0x8DFC197F,0x1201,0x4F1F,{ 0xB6,0xF4,0x5D,0xF1,0xB7,0xB9,0xFB,0x2E } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
    {
        static constexpr guid value{ 0xA0E27C8B,0x50CB,0x4A58,{ 0x9B,0xCF,0xE4,0x72,0xB9,0x9F,0xBA,0x04 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
    {
        static constexpr guid value{ 0x74BDCC11,0x53D6,0x4999,{ 0xB4,0xF8,0x6C,0x8E,0xCC,0x17,0x71,0xE7 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
    {
        static constexpr guid value{ 0x7DB40045,0xFD74,0x4688,{ 0xB7,0x25,0x5D,0xCE,0x86,0xAC,0xF2,0x33 } };
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectService>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectService;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceProvisioningInfo>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequest>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest;
    };
    template <> struct default_interface<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs>
    {
        using type = Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs;
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteServiceInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedConfigurationMethods(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreferGroupOwnerMode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PreferGroupOwnerMode(bool) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_SessionInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceError(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SessionDeferred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionDeferred(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetProvisioningInfoAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsyncWithPin(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceNamePrefixes(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServiceInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_AutoAcceptSession(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoAcceptSession(bool) noexcept = 0;
            virtual int32_t __stdcall get_PreferGroupOwnerMode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PreferGroupOwnerMode(bool) noexcept = 0;
            virtual int32_t __stdcall get_PreferredConfigurationMethods(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ServiceStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomServiceStatusCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomServiceStatusCode(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeferredSessionInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeferredSessionInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisementStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceError(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SessionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AutoAcceptSessionConnected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutoAcceptSessionConnected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AdvertisementStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvertisementStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsyncWithPin(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWiFiDirectServiceAdvertiser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedConfigurationMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsGroupFormationNeeded(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointPairs(void**) noexcept = 0;
            virtual int32_t __stdcall get_Protocol(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisementId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionAddress(void**) noexcept = 0;
            virtual int32_t __stdcall GetConnectionEndpointPairs(void**) noexcept = 0;
            virtual int32_t __stdcall add_SessionStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall AddStreamSocketListenerAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddDatagramSocketAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_RemotePortAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemotePortAdded(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeferredSessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProvisioningInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSessionRequest(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSelector(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSelectorWithFilter(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService
    {
        [[nodiscard]] auto RemoteServiceInfo() const;
        [[nodiscard]] auto SupportedConfigurationMethods() const;
        [[nodiscard]] auto PreferGroupOwnerMode() const;
        auto PreferGroupOwnerMode(bool value) const;
        [[nodiscard]] auto SessionInfo() const;
        auto SessionInfo(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto ServiceError() const;
        auto SessionDeferred(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const;
        using SessionDeferred_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectService, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>::remove_SessionDeferred>;
        SessionDeferred_revoker SessionDeferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectService, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionDeferredEventArgs> const& handler) const;
        auto SessionDeferred(winrt::event_token const& token) const noexcept;
        auto GetProvisioningInfoAsync(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceConfigurationMethod const& selectedConfigurationMethod) const;
        auto ConnectAsync() const;
        auto ConnectAsync(param::hstring const& pin) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectService>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectService<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser
    {
        [[nodiscard]] auto ServiceName() const;
        [[nodiscard]] auto ServiceNamePrefixes() const;
        [[nodiscard]] auto ServiceInfo() const;
        auto ServiceInfo(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto AutoAcceptSession() const;
        auto AutoAcceptSession(bool value) const;
        [[nodiscard]] auto PreferGroupOwnerMode() const;
        auto PreferGroupOwnerMode(bool value) const;
        [[nodiscard]] auto PreferredConfigurationMethods() const;
        [[nodiscard]] auto ServiceStatus() const;
        auto ServiceStatus(Windows::Devices::WiFiDirect::Services::WiFiDirectServiceStatus const& value) const;
        [[nodiscard]] auto CustomServiceStatusCode() const;
        auto CustomServiceStatusCode(uint32_t value) const;
        [[nodiscard]] auto DeferredSessionInfo() const;
        auto DeferredSessionInfo(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto AdvertisementStatus() const;
        [[nodiscard]] auto ServiceError() const;
        auto SessionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const;
        using SessionRequested_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_SessionRequested>;
        SessionRequested_revoker SessionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSessionRequestedEventArgs> const& handler) const;
        auto SessionRequested(winrt::event_token const& token) const noexcept;
        auto AutoAcceptSessionConnected(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const;
        using AutoAcceptSessionConnected_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_AutoAcceptSessionConnected>;
        AutoAcceptSessionConnected_revoker AutoAcceptSessionConnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAutoAcceptSessionConnectedEventArgs> const& handler) const;
        auto AutoAcceptSessionConnected(winrt::event_token const& token) const noexcept;
        auto AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const;
        using AdvertisementStatusChanged_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>::remove_AdvertisementStatusChanged>;
        AdvertisementStatusChanged_revoker AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceAdvertiser, Windows::Foundation::IInspectable> const& handler) const;
        auto AdvertisementStatusChanged(winrt::event_token const& token) const noexcept;
        auto ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo) const;
        auto ConnectAsync(Windows::Devices::Enumeration::DeviceInformation const& deviceInfo, param::hstring const& pin) const;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory
    {
        auto CreateWiFiDirectServiceAdvertiser(param::hstring const& serviceName) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiserFactory>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
    {
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo
    {
        [[nodiscard]] auto SelectedConfigurationMethod() const;
        [[nodiscard]] auto IsGroupFormationNeeded() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs
    {
        [[nodiscard]] auto EndpointPairs() const;
        [[nodiscard]] auto Protocol() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession
    {
        [[nodiscard]] auto ServiceName() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ErrorStatus() const;
        [[nodiscard]] auto SessionId() const;
        [[nodiscard]] auto AdvertisementId() const;
        [[nodiscard]] auto ServiceAddress() const;
        [[nodiscard]] auto SessionAddress() const;
        auto GetConnectionEndpointPairs() const;
        auto SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const;
        using SessionStatusChanged_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>::remove_SessionStatusChanged>;
        SessionStatusChanged_revoker SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Foundation::IInspectable> const& handler) const;
        auto SessionStatusChanged(winrt::event_token const& token) const noexcept;
        auto AddStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& value) const;
        auto AddDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& value) const;
        auto RemotePortAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const;
        using RemotePortAdded_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession, &impl::abi_t<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>::remove_RemotePortAdded>;
        RemotePortAdded_revoker RemotePortAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::Services::WiFiDirectServiceSession, Windows::Devices::WiFiDirect::Services::WiFiDirectServiceRemotePortAddedEventArgs> const& handler) const;
        auto RemotePortAdded(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs
    {
        [[nodiscard]] auto DeferredSessionInfo() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest
    {
        [[nodiscard]] auto DeviceInformation() const;
        [[nodiscard]] auto ProvisioningInfo() const;
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs
    {
        auto GetSessionRequest() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics
    {
        auto GetSelector(param::hstring const& serviceName) const;
        auto GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter) const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics<D>;
    };
}
#endif
