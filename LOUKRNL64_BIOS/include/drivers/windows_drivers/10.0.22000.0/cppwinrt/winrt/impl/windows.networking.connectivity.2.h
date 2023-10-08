// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Connectivity_2_H
#define WINRT_Windows_Networking_Connectivity_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkStatusChangedEventHandler : Windows::Foundation::IUnknown
    {
        NetworkStatusChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NetworkStatusChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NetworkStatusChangedEventHandler(L lambda);
        template <typename F> NetworkStatusChangedEventHandler(F* function);
        template <typename O, typename M> NetworkStatusChangedEventHandler(O* object, M method);
        template <typename O, typename M> NetworkStatusChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NetworkStatusChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender) const;
    };
    struct NetworkUsageStates
    {
        Windows::Networking::Connectivity::TriStates Roaming;
        Windows::Networking::Connectivity::TriStates Shared;
    };
    inline bool operator==(NetworkUsageStates const& left, NetworkUsageStates const& right) noexcept
    {
        return left.Roaming == right.Roaming && left.Shared == right.Shared;
    }
    inline bool operator!=(NetworkUsageStates const& left, NetworkUsageStates const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AttributedNetworkUsage : Windows::Networking::Connectivity::IAttributedNetworkUsage
    {
        AttributedNetworkUsage(std::nullptr_t) noexcept {}
        AttributedNetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IAttributedNetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CellularApnContext : Windows::Networking::Connectivity::ICellularApnContext,
        impl::require<CellularApnContext, Windows::Networking::Connectivity::ICellularApnContext2>
    {
        CellularApnContext(std::nullptr_t) noexcept {}
        CellularApnContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::ICellularApnContext(ptr, take_ownership_from_abi) {}
        CellularApnContext();
    };
    struct __declspec(empty_bases) ConnectionCost : Windows::Networking::Connectivity::IConnectionCost,
        impl::require<ConnectionCost, Windows::Networking::Connectivity::IConnectionCost2>
    {
        ConnectionCost(std::nullptr_t) noexcept {}
        ConnectionCost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IConnectionCost(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConnectionProfile : Windows::Networking::Connectivity::IConnectionProfile,
        impl::require<ConnectionProfile, Windows::Networking::Connectivity::IConnectionProfile2, Windows::Networking::Connectivity::IConnectionProfile3, Windows::Networking::Connectivity::IConnectionProfile4, Windows::Networking::Connectivity::IConnectionProfile5>
    {
        ConnectionProfile(std::nullptr_t) noexcept {}
        ConnectionProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IConnectionProfile(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConnectionProfileFilter : Windows::Networking::Connectivity::IConnectionProfileFilter,
        impl::require<ConnectionProfileFilter, Windows::Networking::Connectivity::IConnectionProfileFilter2, Windows::Networking::Connectivity::IConnectionProfileFilter3>
    {
        ConnectionProfileFilter(std::nullptr_t) noexcept {}
        ConnectionProfileFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IConnectionProfileFilter(ptr, take_ownership_from_abi) {}
        ConnectionProfileFilter();
    };
    struct __declspec(empty_bases) ConnectionSession : Windows::Networking::Connectivity::IConnectionSession
    {
        ConnectionSession(std::nullptr_t) noexcept {}
        ConnectionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IConnectionSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConnectivityInterval : Windows::Networking::Connectivity::IConnectivityInterval
    {
        ConnectivityInterval(std::nullptr_t) noexcept {}
        ConnectivityInterval(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IConnectivityInterval(ptr, take_ownership_from_abi) {}
    };
    struct ConnectivityManager
    {
        ConnectivityManager() = delete;
        static auto AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext);
        static auto AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy);
        static auto RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy);
    };
    struct __declspec(empty_bases) DataPlanStatus : Windows::Networking::Connectivity::IDataPlanStatus
    {
        DataPlanStatus(std::nullptr_t) noexcept {}
        DataPlanStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IDataPlanStatus(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataPlanUsage : Windows::Networking::Connectivity::IDataPlanUsage
    {
        DataPlanUsage(std::nullptr_t) noexcept {}
        DataPlanUsage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IDataPlanUsage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataUsage : Windows::Networking::Connectivity::IDataUsage
    {
        DataUsage(std::nullptr_t) noexcept {}
        DataUsage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IDataUsage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPInformation : Windows::Networking::Connectivity::IIPInformation
    {
        IPInformation(std::nullptr_t) noexcept {}
        IPInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IIPInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LanIdentifier : Windows::Networking::Connectivity::ILanIdentifier
    {
        LanIdentifier(std::nullptr_t) noexcept {}
        LanIdentifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::ILanIdentifier(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LanIdentifierData : Windows::Networking::Connectivity::ILanIdentifierData
    {
        LanIdentifierData(std::nullptr_t) noexcept {}
        LanIdentifierData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::ILanIdentifierData(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkAdapter : Windows::Networking::Connectivity::INetworkAdapter
    {
        NetworkAdapter(std::nullptr_t) noexcept {}
        NetworkAdapter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::INetworkAdapter(ptr, take_ownership_from_abi) {}
    };
    struct NetworkInformation
    {
        NetworkInformation() = delete;
        static auto GetConnectionProfiles();
        static auto GetInternetConnectionProfile();
        static auto GetLanIdentifiers();
        static auto GetHostNames();
        static auto GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri);
        static auto GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions);
        static auto NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler);
        using NetworkStatusChanged_revoker = impl::factory_event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics, &impl::abi_t<Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged>;
        [[nodiscard]] static NetworkStatusChanged_revoker NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler);
        static auto NetworkStatusChanged(winrt::event_token const& eventCookie);
        static auto FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter);
    };
    struct __declspec(empty_bases) NetworkItem : Windows::Networking::Connectivity::INetworkItem
    {
        NetworkItem(std::nullptr_t) noexcept {}
        NetworkItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::INetworkItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkSecuritySettings : Windows::Networking::Connectivity::INetworkSecuritySettings
    {
        NetworkSecuritySettings(std::nullptr_t) noexcept {}
        NetworkSecuritySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::INetworkSecuritySettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkStateChangeEventDetails : Windows::Networking::Connectivity::INetworkStateChangeEventDetails,
        impl::require<NetworkStateChangeEventDetails, Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
    {
        NetworkStateChangeEventDetails(std::nullptr_t) noexcept {}
        NetworkStateChangeEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::INetworkStateChangeEventDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NetworkUsage : Windows::Networking::Connectivity::INetworkUsage
    {
        NetworkUsage(std::nullptr_t) noexcept {}
        NetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::INetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProviderNetworkUsage : Windows::Networking::Connectivity::IProviderNetworkUsage
    {
        ProviderNetworkUsage(std::nullptr_t) noexcept {}
        ProviderNetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IProviderNetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProxyConfiguration : Windows::Networking::Connectivity::IProxyConfiguration
    {
        ProxyConfiguration(std::nullptr_t) noexcept {}
        ProxyConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IProxyConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RoutePolicy : Windows::Networking::Connectivity::IRoutePolicy
    {
        RoutePolicy(std::nullptr_t) noexcept {}
        RoutePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IRoutePolicy(ptr, take_ownership_from_abi) {}
        RoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type);
    };
    struct __declspec(empty_bases) WlanConnectionProfileDetails : Windows::Networking::Connectivity::IWlanConnectionProfileDetails
    {
        WlanConnectionProfileDetails(std::nullptr_t) noexcept {}
        WlanConnectionProfileDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IWlanConnectionProfileDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WwanConnectionProfileDetails : Windows::Networking::Connectivity::IWwanConnectionProfileDetails,
        impl::require<WwanConnectionProfileDetails, Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
    {
        WwanConnectionProfileDetails(std::nullptr_t) noexcept {}
        WwanConnectionProfileDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Connectivity::IWwanConnectionProfileDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
