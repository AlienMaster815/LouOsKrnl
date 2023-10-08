// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFi_0_H
#define WINRT_Windows_Devices_WiFi_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkAdapter;
    struct NetworkSecuritySettings;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::Devices::WiFi
{
    enum class WiFiAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class WiFiConnectionMethod : int32_t
    {
        Default = 0,
        WpsPin = 1,
        WpsPushButton = 2,
    };
    enum class WiFiConnectionStatus : int32_t
    {
        UnspecifiedFailure = 0,
        Success = 1,
        AccessRevoked = 2,
        InvalidCredential = 3,
        NetworkNotAvailable = 4,
        Timeout = 5,
        UnsupportedAuthenticationProtocol = 6,
    };
    enum class WiFiNetworkKind : int32_t
    {
        Any = 0,
        Infrastructure = 1,
        Adhoc = 2,
    };
    enum class WiFiPhyKind : int32_t
    {
        Unknown = 0,
        Fhss = 1,
        Dsss = 2,
        IRBaseband = 3,
        Ofdm = 4,
        Hrdsss = 5,
        Erp = 6,
        HT = 7,
        Vht = 8,
        Dmg = 9,
        HE = 10,
    };
    enum class WiFiReconnectionKind : int32_t
    {
        Automatic = 0,
        Manual = 1,
    };
    enum class WiFiWpsConfigurationStatus : int32_t
    {
        UnspecifiedFailure = 0,
        Success = 1,
        Timeout = 2,
    };
    enum class WiFiWpsKind : int32_t
    {
        Unknown = 0,
        Pin = 1,
        PushButton = 2,
        Nfc = 3,
        Ethernet = 4,
        Usb = 5,
    };
    struct IWiFiAdapter;
    struct IWiFiAdapter2;
    struct IWiFiAdapterStatics;
    struct IWiFiAvailableNetwork;
    struct IWiFiConnectionResult;
    struct IWiFiNetworkReport;
    struct IWiFiWpsConfigurationResult;
    struct WiFiAdapter;
    struct WiFiAvailableNetwork;
    struct WiFiConnectionResult;
    struct WiFiNetworkReport;
    struct WiFiWpsConfigurationResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::WiFi::IWiFiAdapter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiAdapter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiAdapter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiAvailableNetwork>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiConnectionResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiNetworkReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiWpsConfigurationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiConnectionMethod>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiConnectionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiNetworkKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiPhyKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiReconnectionKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiWpsConfigurationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::WiFi::WiFiWpsKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiAdapter>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAdapter" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiAdapter2>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAdapter2" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAdapterStatics" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAvailableNetwork" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiConnectionResult" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiNetworkReport" };
    };
    template <> struct name<Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiWpsConfigurationResult" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiAdapter>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAdapter" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiAvailableNetwork>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAvailableNetwork" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiConnectionResult>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiConnectionResult" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiNetworkReport>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiNetworkReport" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiWpsConfigurationResult>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiWpsConfigurationResult" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAccessStatus" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiConnectionMethod>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiConnectionMethod" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiConnectionStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiConnectionStatus" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiNetworkKind>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiNetworkKind" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiPhyKind>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiPhyKind" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiReconnectionKind>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiReconnectionKind" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiWpsConfigurationStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiWpsConfigurationStatus" };
    };
    template <> struct name<Windows::Devices::WiFi::WiFiWpsKind>
    {
        static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiWpsKind" };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiAdapter>
    {
        static constexpr guid value{ 0xA6C4E423,0x3D75,0x43A4,{ 0xB9,0xDE,0x11,0xE2,0x6B,0x72,0xD9,0xB0 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiAdapter2>
    {
        static constexpr guid value{ 0x5BC4501D,0x81E4,0x453D,{ 0x94,0x30,0x1F,0xCA,0xFB,0xAD,0xD6,0xB6 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        static constexpr guid value{ 0xDA25FDDD,0xD24C,0x43E3,{ 0xAA,0xBD,0xC4,0x65,0x9F,0x73,0x0F,0x99 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        static constexpr guid value{ 0x26E96246,0x183E,0x4704,{ 0x98,0x26,0x71,0xB4,0xA2,0xF0,0xF6,0x68 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        static constexpr guid value{ 0x143BDFD9,0xC37D,0x40BE,{ 0xA5,0xC8,0x85,0x7B,0xCE,0x85,0xA9,0x31 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        static constexpr guid value{ 0x9524DED2,0x5911,0x445E,{ 0x81,0x94,0xBE,0x4F,0x1A,0x70,0x48,0x95 } };
    };
    template <> struct guid_storage<Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        static constexpr guid value{ 0x67B49871,0x17EE,0x42D1,{ 0xB1,0x4F,0x5A,0x11,0xF1,0x22,0x6F,0xB5 } };
    };
    template <> struct default_interface<Windows::Devices::WiFi::WiFiAdapter>
    {
        using type = Windows::Devices::WiFi::IWiFiAdapter;
    };
    template <> struct default_interface<Windows::Devices::WiFi::WiFiAvailableNetwork>
    {
        using type = Windows::Devices::WiFi::IWiFiAvailableNetwork;
    };
    template <> struct default_interface<Windows::Devices::WiFi::WiFiConnectionResult>
    {
        using type = Windows::Devices::WiFi::IWiFiConnectionResult;
    };
    template <> struct default_interface<Windows::Devices::WiFi::WiFiNetworkReport>
    {
        using type = Windows::Devices::WiFi::IWiFiNetworkReport;
    };
    template <> struct default_interface<Windows::Devices::WiFi::WiFiWpsConfigurationResult>
    {
        using type = Windows::Devices::WiFi::IWiFiWpsConfigurationResult;
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiAdapter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall ScanAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkReport(void**) noexcept = 0;
            virtual int32_t __stdcall add_AvailableNetworksChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailableNetworksChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAsync(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAndSsidAsync(void*, int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Disconnect() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiAdapter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetWpsConfigurationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(void*, int32_t, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAdaptersAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uptime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ssid(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bssid(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRssiInDecibelMilliwatts(double*) noexcept = 0;
            virtual int32_t __stdcall get_SignalBars(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhyKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SecuritySettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_BeaconInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsWiFiDirect(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AvailableNetworks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedWpsKinds(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapter
    {
        [[nodiscard]] auto NetworkAdapter() const;
        auto ScanAsync() const;
        [[nodiscard]] auto NetworkReport() const;
        auto AvailableNetworksChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const;
        using AvailableNetworksChanged_revoker = impl::event_revoker<Windows::Devices::WiFi::IWiFiAdapter, &impl::abi_t<Windows::Devices::WiFi::IWiFiAdapter>::remove_AvailableNetworksChanged>;
        AvailableNetworksChanged_revoker AvailableNetworksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const;
        auto AvailableNetworksChanged(winrt::event_token const& eventCookie) const noexcept;
        auto ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind) const;
        auto ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
        auto ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid) const;
        auto Disconnect() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiAdapter>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapter2
    {
        auto GetWpsConfigurationAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork) const;
        auto ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid, Windows::Devices::WiFi::WiFiConnectionMethod const& connectionMethod) const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiAdapter2>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapterStatics
    {
        auto FindAllAdaptersAsync() const;
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAvailableNetwork
    {
        [[nodiscard]] auto Uptime() const;
        [[nodiscard]] auto Ssid() const;
        [[nodiscard]] auto Bssid() const;
        [[nodiscard]] auto ChannelCenterFrequencyInKilohertz() const;
        [[nodiscard]] auto NetworkRssiInDecibelMilliwatts() const;
        [[nodiscard]] auto SignalBars() const;
        [[nodiscard]] auto NetworkKind() const;
        [[nodiscard]] auto PhyKind() const;
        [[nodiscard]] auto SecuritySettings() const;
        [[nodiscard]] auto BeaconInterval() const;
        [[nodiscard]] auto IsWiFiDirect() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiConnectionResult
    {
        [[nodiscard]] auto ConnectionStatus() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiConnectionResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiNetworkReport
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto AvailableNetworks() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto SupportedWpsKinds() const;
    };
    template <> struct consume<Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>;
    };
}
#endif
