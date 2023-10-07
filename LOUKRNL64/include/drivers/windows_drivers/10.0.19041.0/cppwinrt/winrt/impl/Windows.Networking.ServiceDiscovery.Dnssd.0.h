// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_ServiceDiscovery_Dnssd_0_H
#define WINRT_Windows_Networking_ServiceDiscovery_Dnssd_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkAdapter;
}
namespace winrt::Windows::Networking::Sockets
{
    struct DatagramSocket;
    struct StreamSocketListener;
}
namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd
{
    enum class DnssdRegistrationStatus : int32_t
    {
        Success = 0,
        InvalidServiceName = 1,
        ServerError = 2,
        SecurityError = 3,
    };
    enum class DnssdServiceWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    struct IDnssdRegistrationResult;
    struct IDnssdServiceInstance;
    struct IDnssdServiceInstanceFactory;
    struct IDnssdServiceWatcher;
    struct DnssdRegistrationResult;
    struct DnssdServiceInstance;
    struct DnssdServiceInstanceCollection;
    struct DnssdServiceWatcher;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationStatus" };
    };
    template <> struct name<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcherStatus" };
    };
    template <> struct guid_storage<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        static constexpr guid value{ 0x3D786AD2,0xE606,0x5350,{ 0x73,0xEA,0x7E,0x97,0xF0,0x66,0x16,0x2F } };
    };
    template <> struct guid_storage<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        static constexpr guid value{ 0xE246DB7E,0x98A5,0x4CA1,{ 0xB9,0xE4,0xC2,0x53,0xD3,0x3C,0x35,0xFF } };
    };
    template <> struct guid_storage<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        static constexpr guid value{ 0x6CB061A1,0xC478,0x4331,{ 0x96,0x84,0x4A,0xF2,0x18,0x6C,0x0A,0x2B } };
    };
    template <> struct guid_storage<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        static constexpr guid value{ 0xCC34D9C1,0xDB7D,0x4B69,{ 0x98,0x3D,0xC6,0xF8,0x3F,0x20,0x56,0x82 } };
    };
    template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>
    {
        using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult;
    };
    template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>
    {
        using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance;
    };
    template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>
    {
        using type = Windows::Foundation::Collections::IVectorView<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>;
    };
    template <> struct default_interface<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>
    {
        using type = Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher;
    };
    template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IPAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasInstanceNameChanged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DnssdServiceInstanceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DnssdServiceInstanceName(void*) noexcept = 0;
            virtual int32_t __stdcall get_HostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HostName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Port(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Port(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_Priority(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Priority(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_Weight(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Weight(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_TextAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterStreamSocketListenerAsync1(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterStreamSocketListenerAsync2(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterDatagramSocketAsync1(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterDatagramSocketAsync2(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IPAddress() const;
        [[nodiscard]] auto HasInstanceNameChanged() const;
    };
    template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance
    {
        [[nodiscard]] auto DnssdServiceInstanceName() const;
        auto DnssdServiceInstanceName(param::hstring const& value) const;
        [[nodiscard]] auto HostName() const;
        auto HostName(Windows::Networking::HostName const& value) const;
        [[nodiscard]] auto Port() const;
        auto Port(uint16_t value) const;
        [[nodiscard]] auto Priority() const;
        auto Priority(uint16_t value) const;
        [[nodiscard]] auto Weight() const;
        auto Weight(uint16_t value) const;
        [[nodiscard]] auto TextAttributes() const;
        auto RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket) const;
        auto RegisterStreamSocketListenerAsync(Windows::Networking::Sockets::StreamSocketListener const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
        auto RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket) const;
        auto RegisterDatagramSocketAsync(Windows::Networking::Sockets::DatagramSocket const& socket, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory
    {
        auto Create(param::hstring const& dnssdServiceInstanceName, Windows::Networking::HostName const& hostName, uint16_t port) const;
    };
    template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher
    {
        auto Added(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Added>;
        Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Stopped>;
        Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>;
    };
}
#endif
