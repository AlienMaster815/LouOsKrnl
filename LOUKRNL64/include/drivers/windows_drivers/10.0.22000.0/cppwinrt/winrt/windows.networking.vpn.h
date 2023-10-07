// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Vpn_H
#define WINRT_Windows_Networking_Vpn_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Networking.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.Vpn.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppIdType) consume_Windows_Networking_Vpn_IVpnAppId<D>::Type() const
    {
        Windows::Networking::Vpn::VpnAppIdType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnAppId)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnAppId<D>::Type(Windows::Networking::Vpn::VpnAppIdType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnAppId)->put_Type(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnAppId<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnAppId)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnAppId<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnAppId)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) consume_Windows_Networking_Vpn_IVpnAppIdFactory<D>::Create(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnAppIdFactory)->Create(static_cast<int32_t>(type), *(void**)(&value), &result));
        return Windows::Networking::Vpn::VpnAppId{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::AssociateTransport(Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->AssociateTransport(*(void**)(&mainOuterTunnelTransport), *(void**)(&optionalOuterTunnelTransport)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::Start(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& routeScope, Windows::Networking::Vpn::VpnNamespaceAssignment const& namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->Start(*(void**)(&assignedClientIPv4list), *(void**)(&assignedClientIPv6list), *(void**)(&vpnInterfaceId), *(void**)(&routeScope), *(void**)(&namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, *(void**)(&mainOuterTunnelTransport), *(void**)(&optionalOuterTunnelTransport)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->Stop());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPickedCredential) consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestCredentials(Windows::Networking::Vpn::VpnCredentialType const& credType, bool isRetry, bool isSingleSignOnCredential, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestCredentials(static_cast<int32_t>(credType), isRetry, isSingleSignOnCredential, *(void**)(&certificate), &credential));
        return Windows::Networking::Vpn::VpnPickedCredential{ credential, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType const& type, Windows::Networking::Vpn::VpnPacketBuffer& vpnPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestVpnPacketBuffer(static_cast<int32_t>(type), impl::bind_out(vpnPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::LogDiagnosticMessage(param::hstring const& message) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->LogDiagnosticMessage(*(void**)(&message)));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Vpn_IVpnChannel<D>::Id() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_Id(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelConfiguration) consume_Windows_Networking_Vpn_IVpnChannel<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_Configuration(&value));
        return Windows::Networking::Vpn::VpnChannelConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->add_ActivityChange(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange_revoker consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ActivityChange_revoker>(this, ActivityChange(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->remove_ActivityChange(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::PlugInContext(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->put_PlugInContext(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Networking_Vpn_IVpnChannel<D>::PlugInContext() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_PlugInContext(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnSystemHealth) consume_Windows_Networking_Vpn_IVpnChannel<D>::SystemHealth() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_SystemHealth(&value));
        return Windows::Networking::Vpn::VpnSystemHealth{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestCustomPrompt(param::vector_view<Windows::Networking::Vpn::IVpnCustomPrompt> const& customPrompt) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestCustomPrompt(*(void**)(&customPrompt)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::SetErrorMessage(param::hstring const& message) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->SetErrorMessage(*(void**)(&message)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel<D>::SetAllowedSslTlsVersions(Windows::Foundation::IInspectable const& tunnelTransport, bool useTls12) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel)->SetAllowedSslTlsVersions(*(void**)(&tunnelTransport), useTls12));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartWithMainTransport(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartWithMainTransport(*(void**)(&assignedClientIPv4list), *(void**)(&assignedClientIPv6list), *(void**)(&vpnInterfaceId), *(void**)(&assignedRoutes), *(void**)(&assignedDomainName), mtuSize, maxFrameSize, Reserved, *(void**)(&mainOuterTunnelTransport)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartExistingTransports(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartExistingTransports(*(void**)(&assignedClientIPv4list), *(void**)(&assignedClientIPv6list), *(void**)(&vpnInterfaceId), *(void**)(&assignedRoutes), *(void**)(&assignedDomainName), mtuSize, maxFrameSize, Reserved));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->add_ActivityStateChange(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange_revoker consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ActivityStateChange_revoker>(this, ActivityStateChange(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->remove_ActivityStateChange(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnChannel2<D>::GetVpnSendPacketBuffer() const
    {
        void* vpnSendPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->GetVpnSendPacketBuffer(&vpnSendPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ vpnSendPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnChannel2<D>::GetVpnReceivePacketBuffer() const
    {
        void* vpnReceivePacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->GetVpnReceivePacketBuffer(&vpnReceivePacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ vpnReceivePacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCustomPromptAsync(param::async_vector_view<Windows::Networking::Vpn::IVpnCustomPromptElement> const& customPromptElement) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCustomPromptAsync(*(void**)(&customPromptElement), &action));
        return Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsWithCertificateAsync(static_cast<int32_t>(credType), credOptions, *(void**)(&certificate), &credential));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>{ credential, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions) const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsWithOptionsAsync(static_cast<int32_t>(credType), credOptions, &credential));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>{ credential, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType) const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsSimpleAsync(static_cast<int32_t>(credType), &credential));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>{ credential, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel2<D>::TerminateConnection(param::hstring const& message) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->TerminateConnection(*(void**)(&message)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartWithTrafficFilter(param::vector_view<Windows::Networking::HostName> const& assignedClientIpv4List, param::vector_view<Windows::Networking::HostName> const& assignedClientIpv6List, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartWithTrafficFilter(*(void**)(&assignedClientIpv4List), *(void**)(&assignedClientIpv6List), *(void**)(&vpnInterfaceId), *(void**)(&assignedRoutes), *(void**)(&assignedNamespace), mtuSize, maxFrameSize, reserved, *(void**)(&mainOuterTunnelTransport), *(void**)(&optionalOuterTunnelTransport), *(void**)(&assignedTrafficFilters)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel4<D>::AddAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->AddAndAssociateTransport(*(void**)(&transport), *(void**)(&context)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel4<D>::StartWithTrafficFilter(param::iterable<Windows::Networking::HostName> const& assignedClientIpv4Addresses, param::iterable<Windows::Networking::HostName> const& assignedClientIpv6Addresses, Windows::Networking::Vpn::VpnInterfaceId const& vpninterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, param::iterable<Windows::Foundation::IInspectable> const& transports, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->StartWithMultipleTransports(*(void**)(&assignedClientIpv4Addresses), *(void**)(&assignedClientIpv6Addresses), *(void**)(&vpninterfaceId), *(void**)(&assignedRoutes), *(void**)(&assignedNamespace), mtuSize, maxFrameSize, reserved, *(void**)(&transports), *(void**)(&assignedTrafficFilters)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel4<D>::ReplaceAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->ReplaceAndAssociateTransport(*(void**)(&transport), *(void**)(&context)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel4<D>::StartReconnectingTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->StartReconnectingTransport(*(void**)(&transport), *(void**)(&context)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Sockets::ControlChannelTriggerStatus) consume_Windows_Networking_Vpn_IVpnChannel4<D>::GetSlotTypeForTransportContext(Windows::Foundation::IInspectable const& context) const
    {
        Windows::Networking::Sockets::ControlChannelTriggerStatus slotType{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->GetSlotTypeForTransportContext(*(void**)(&context), reinterpret_cast<int32_t*>(&slotType)));
        return slotType;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Networking_Vpn_IVpnChannel4<D>::CurrentRequestTransportContext() const
    {
        void* context{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel4)->get_CurrentRequestTransportContext(&context));
        return Windows::Foundation::IInspectable{ context, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel5<D>::AppendVpnReceivePacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& decapsulatedPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel5)->AppendVpnReceivePacketBuffer(*(void**)(&decapsulatedPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel5<D>::AppendVpnSendPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& encapsulatedPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel5)->AppendVpnSendPacketBuffer(*(void**)(&encapsulatedPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel5<D>::FlushVpnReceivePacketBuffers() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel5)->FlushVpnReceivePacketBuffers());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannel5<D>::FlushVpnSendPacketBuffers() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel5)->FlushVpnSendPacketBuffers());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) consume_Windows_Networking_Vpn_IVpnChannel6<D>::ActivateForeground(param::hstring const& packageRelativeAppId, Windows::Foundation::Collections::ValueSet const& sharedContext) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannel6)->ActivateForeground(*(void**)(&packageRelativeAppId), *(void**)(&sharedContext), &result));
        return Windows::Foundation::Collections::ValueSet{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelActivityEventType) consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs<D>::Type() const
    {
        Windows::Networking::Vpn::VpnChannelActivityEventType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelActivityEventArgs)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelActivityEventType) consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs<D>::ActivityState() const
    {
        Windows::Networking::Vpn::VpnChannelActivityEventType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs)->get_ActivityState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::ServerServiceName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_ServerServiceName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>) consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::ServerHostNameList() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_ServerHostNameList(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::CustomField() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_CustomField(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>) consume_Windows_Networking_Vpn_IVpnChannelConfiguration2<D>::ServerUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration2)->get_ServerUris(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnChannelStatics<D>::ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnChannelStatics)->ProcessEventAsync(*(void**)(&thirdPartyPlugIn), *(void**)(&event)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) consume_Windows_Networking_Vpn_IVpnCredential<D>::PasskeyCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_PasskeyCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) consume_Windows_Networking_Vpn_IVpnCredential<D>::CertificateCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_CertificateCredential(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCredential<D>::AdditionalPin() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_AdditionalPin(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) consume_Windows_Networking_Vpn_IVpnCredential<D>::OldPasswordCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_OldPasswordCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::InitialCheckState(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->put_InitialCheckState(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::InitialCheckState() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->get_InitialCheckState(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::Checked() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->get_Checked(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::OptionsText(param::async_vector_view<hstring> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->put_OptionsText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::OptionsText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->get_OptionsText(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::Selected() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->get_Selected(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::DefaultText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->put_DefaultText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::DefaultText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_DefaultText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::NoEcho(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->put_NoEcho(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::NoEcho() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_NoEcho(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::Text() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_Text(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Label(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Label(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Label(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Compulsory(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Compulsory(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Compulsory() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Compulsory(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Bordered(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Bordered(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Bordered() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Bordered(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::InitialValue(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->put_InitialValue(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::InitialValue() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->get_InitialValue(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::Value() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->get_Value(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::DisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_DisplayName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Compulsory(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_Compulsory(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Compulsory() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_Compulsory(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Emphasized(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_Emphasized(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Emphasized() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_Emphasized(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>::Options() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptOptionSelector)->get_Options(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>::SelectedIndex() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptOptionSelector)->get_SelectedIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>::Text(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptText)->put_Text(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>::Text() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptText)->get_Text(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::PlaceholderText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->put_PlaceholderText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::PlaceholderText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_PlaceholderText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::IsTextHidden(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->put_IsTextHidden(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::IsTextHidden() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_IsTextHidden(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::Text() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_Text(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>::DisplayText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomTextBox)->put_DisplayText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>::DisplayText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnCustomTextBox)->get_DisplayText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>) consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::DomainNameList() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->get_DomainNameList(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->put_ProxyAutoConfigurationUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->get_ProxyAutoConfigurationUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainName(Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->put_DomainName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::HostName) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DomainName(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainNameType(Windows::Networking::Vpn::VpnDomainNameType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->put_DomainNameType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnDomainNameType) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainNameType() const
    {
        Windows::Networking::Vpn::VpnDomainNameType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DomainNameType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DnsServers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DnsServers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::WebProxyServers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_WebProxyServers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>) consume_Windows_Networking_Vpn_IVpnDomainNameInfo2<D>::WebProxyUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo2)->get_WebProxyUris(&value));
        return Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnDomainNameInfo) consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory<D>::CreateVpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) const
    {
        void* domainNameInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfoFactory)->CreateVpnDomainNameInfo(*(void**)(&name), static_cast<int32_t>(nameType), *(void**)(&dnsServerList), *(void**)(&proxyServerList), &domainNameInfo));
        return Windows::Networking::Vpn::VpnDomainNameInfo{ domainNameInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnForegroundActivatedEventArgs<D>::ProfileName() const
    {
        void* name{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs)->get_ProfileName(&name));
        return hstring{ name, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) consume_Windows_Networking_Vpn_IVpnForegroundActivatedEventArgs<D>::SharedContext() const
    {
        void* sharedContext{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs)->get_SharedContext(&sharedContext));
        return Windows::Foundation::Collections::ValueSet{ sharedContext, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnForegroundActivationOperation) consume_Windows_Networking_Vpn_IVpnForegroundActivatedEventArgs<D>::ActivationOperation() const
    {
        void* activationOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs)->get_ActivationOperation(&activationOperation));
        return Windows::Networking::Vpn::VpnForegroundActivationOperation{ activationOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnForegroundActivationOperation<D>::Complete(Windows::Foundation::Collections::ValueSet const& result) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnForegroundActivationOperation)->Complete(*(void**)(&result)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnInterfaceId<D>::GetAddressInfo(com_array<uint8_t>& id) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnInterfaceId)->GetAddressInfo(impl::put_size_abi(id), put_abi(id)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnInterfaceId) consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory<D>::CreateVpnInterfaceId(array_view<uint8_t const> address) const
    {
        void* vpnInterfaceId{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnInterfaceIdFactory)->CreateVpnInterfaceId(address.size(), get_abi(address), &vpnInterfaceId));
        return Windows::Networking::Vpn::VpnInterfaceId{ vpnInterfaceId, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::AddProfileFromXmlAsync(param::hstring const& xml) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->AddProfileFromXmlAsync(*(void**)(&xml), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::AddProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->AddProfileFromObjectAsync(*(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::UpdateProfileFromXmlAsync(param::hstring const& xml) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->UpdateProfileFromXmlAsync(*(void**)(&xml), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::UpdateProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->UpdateProfileFromObjectAsync(*(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::GetProfilesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->GetProfilesAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::DeleteProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->DeleteProfileAsync(*(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::ConnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->ConnectProfileAsync(*(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::ConnectProfileWithPasswordCredentialAsync(Windows::Networking::Vpn::IVpnProfile const& profile, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->ConnectProfileWithPasswordCredentialAsync(*(void**)(&profile), *(void**)(&passwordCredential), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::DisconnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->DisconnectProfileAsync(*(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::NamespaceList(param::vector<Windows::Networking::Vpn::VpnNamespaceInfo> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->put_NamespaceList(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>) consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::NamespaceList() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->get_NamespaceList(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->put_ProxyAutoConfigUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->get_ProxyAutoConfigUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::Namespace(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_Namespace(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::Namespace() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_Namespace(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::DnsServers(param::vector<Windows::Networking::HostName> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_DnsServers(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::DnsServers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_DnsServers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::WebProxyServers(param::vector<Windows::Networking::HostName> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_WebProxyServers(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::WebProxyServers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_WebProxyServers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnNamespaceInfo) consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory<D>::CreateVpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) const
    {
        void* namespaceInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfoFactory)->CreateVpnNamespaceInfo(*(void**)(&name), *(void**)(&dnsServerList), *(void**)(&proxyServerList), &namespaceInfo));
        return Windows::Networking::Vpn::VpnNamespaceInfo{ namespaceInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::Servers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_Servers(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoutingPolicyType) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::RoutingPolicyType() const
    {
        Windows::Networking::Vpn::VpnRoutingPolicyType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_RoutingPolicyType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_RoutingPolicyType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnNativeProtocolType) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::NativeProtocolType() const
    {
        Windows::Networking::Vpn::VpnNativeProtocolType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_NativeProtocolType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_NativeProtocolType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAuthenticationMethod) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::UserAuthenticationMethod() const
    {
        Windows::Networking::Vpn::VpnAuthenticationMethod value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_UserAuthenticationMethod(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_UserAuthenticationMethod(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAuthenticationMethod) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::TunnelAuthenticationMethod() const
    {
        Windows::Networking::Vpn::VpnAuthenticationMethod value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_TunnelAuthenticationMethod(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_TunnelAuthenticationMethod(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::EapConfiguration() const
    {
        void* Value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_EapConfiguration(&Value));
        return hstring{ Value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::EapConfiguration(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_EapConfiguration(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::RequireVpnClientAppUI() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->get_RequireVpnClientAppUI(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::RequireVpnClientAppUI(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->put_RequireVpnClientAppUI(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnManagementConnectionStatus) consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::ConnectionStatus() const
    {
        Windows::Networking::Vpn::VpnManagementConnectionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->get_ConnectionStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::Buffer) consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Buffer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_Buffer(&value));
        return Windows::Storage::Streams::Buffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBufferStatus) consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Status() const
    {
        Windows::Networking::Vpn::VpnPacketBufferStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::TransportAffinity(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->put_TransportAffinity(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::TransportAffinity() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_TransportAffinity(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) consume_Windows_Networking_Vpn_IVpnPacketBuffer2<D>::AppId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer2)->get_AppId(&value));
        return Windows::Networking::Vpn::VpnAppId{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBuffer3<D>::TransportContext(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer3)->put_TransportContext(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Networking_Vpn_IVpnPacketBuffer3<D>::TransportContext() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer3)->get_TransportContext(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnPacketBufferFactory<D>::CreateVpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) const
    {
        void* vpnPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferFactory)->CreateVpnPacketBuffer(*(void**)(&parentBuffer), offset, length, &vpnPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ vpnPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Append(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->Append(*(void**)(&nextVpnPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::AddAtBegin(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->AddAtBegin(*(void**)(&nextVpnPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::RemoveAtEnd() const
    {
        void* nextVpnPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->RemoveAtEnd(&nextVpnPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ nextVpnPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::RemoveAtBegin() const
    {
        void* nextVpnPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->RemoveAtBegin(&nextVpnPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ nextVpnPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->Clear());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBufferStatus) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Status() const
    {
        Windows::Networking::Vpn::VpnPacketBufferStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Size() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->get_Size(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::AddLeadingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->AddLeadingPacket(*(void**)(&nextVpnPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::RemoveLeadingPacket() const
    {
        void* nextVpnPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->RemoveLeadingPacket(&nextVpnPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ nextVpnPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::AddTrailingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->AddTrailingPacket(*(void**)(&nextVpnPacketBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::RemoveTrailingPacket() const
    {
        void* nextVpnPacketBuffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->RemoveTrailingPacket(&nextVpnPacketBuffer));
        return Windows::Networking::Vpn::VpnPacketBuffer{ nextVpnPacketBuffer, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::PasskeyCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_PasskeyCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::AdditionalPin() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_AdditionalPin(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::OldPasswordCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_OldPasswordCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Connect(Windows::Networking::Vpn::VpnChannel const& channel) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Connect(*(void**)(&channel)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Disconnect(Windows::Networking::Vpn::VpnChannel const& channel) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Disconnect(*(void**)(&channel)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugIn<D>::GetKeepAlivePayload(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer& keepAlivePacket) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->GetKeepAlivePayload(*(void**)(&channel), impl::bind_out(keepAlivePacket)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Encapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBufferList const& packets, Windows::Networking::Vpn::VpnPacketBufferList const& encapulatedPackets) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Encapsulate(*(void**)(&channel), *(void**)(&packets), *(void**)(&encapulatedPackets)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Decapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer const& encapBuffer, Windows::Networking::Vpn::VpnPacketBufferList const& decapsulatedPackets, Windows::Networking::Vpn::VpnPacketBufferList const& controlPacketsToSend) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Decapsulate(*(void**)(&channel), *(void**)(&encapBuffer), *(void**)(&decapsulatedPackets), *(void**)(&controlPacketsToSend)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>) consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::ServerUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_ServerUris(&value));
        return Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::CustomConfiguration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_CustomConfiguration(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::CustomConfiguration(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->put_CustomConfiguration(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_VpnPluginPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->put_VpnPluginPackageFamilyName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::RequireVpnClientAppUI() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->get_RequireVpnClientAppUI(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::RequireVpnClientAppUI(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->put_RequireVpnClientAppUI(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnManagementConnectionStatus) consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::ConnectionStatus() const
    {
        Windows::Networking::Vpn::VpnManagementConnectionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->get_ConnectionStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Vpn_IVpnProfile<D>::ProfileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_ProfileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnProfile<D>::ProfileName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_ProfileName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>) consume_Windows_Networking_Vpn_IVpnProfile<D>::AppTriggers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_AppTriggers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) consume_Windows_Networking_Vpn_IVpnProfile<D>::Routes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_Routes(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>) consume_Windows_Networking_Vpn_IVpnProfile<D>::DomainNameInfoList() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_DomainNameInfoList(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>) consume_Windows_Networking_Vpn_IVpnProfile<D>::TrafficFilters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_TrafficFilters(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnProfile<D>::RememberCredentials() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_RememberCredentials(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnProfile<D>::RememberCredentials(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_RememberCredentials(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnProfile<D>::AlwaysOn() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_AlwaysOn(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnProfile<D>::AlwaysOn(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_AlwaysOn(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRoute<D>::Address(Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRoute)->put_Address(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::HostName) consume_Windows_Networking_Vpn_IVpnRoute<D>::Address() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRoute)->get_Address(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRoute<D>::PrefixSize(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRoute)->put_PrefixSize(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Networking_Vpn_IVpnRoute<D>::PrefixSize() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRoute)->get_PrefixSize(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv4InclusionRoutes(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv6InclusionRoutes(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4InclusionRoutes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv4InclusionRoutes(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6InclusionRoutes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv6InclusionRoutes(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv4ExclusionRoutes(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv6ExclusionRoutes(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv4ExclusionRoutes(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv6ExclusionRoutes(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::ExcludeLocalSubnets(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_ExcludeLocalSubnets(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::ExcludeLocalSubnets() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_ExcludeLocalSubnets(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoute) consume_Windows_Networking_Vpn_IVpnRouteFactory<D>::CreateVpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) const
    {
        void* route{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnRouteFactory)->CreateVpnRoute(*(void**)(&address), prefixSize, &route));
        return Windows::Networking::Vpn::VpnRoute{ route, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::Buffer) consume_Windows_Networking_Vpn_IVpnSystemHealth<D>::StatementOfHealth() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnSystemHealth)->get_StatementOfHealth(&value));
        return Windows::Storage::Streams::Buffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_AppId(&value));
        return Windows::Networking::Vpn::VpnAppId{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppId(Windows::Networking::Vpn::VpnAppId const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_AppId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppClaims() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_AppClaims(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnIPProtocol) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::Protocol() const
    {
        Windows::Networking::Vpn::VpnIPProtocol value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_Protocol(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::Protocol(Windows::Networking::Vpn::VpnIPProtocol const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_Protocol(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::LocalPortRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_LocalPortRanges(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RemotePortRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RemotePortRanges(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::LocalAddressRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_LocalAddressRanges(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RemoteAddressRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RemoteAddressRanges(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoutingPolicyType) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RoutingPolicyType() const
    {
        Windows::Networking::Vpn::VpnRoutingPolicyType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RoutingPolicyType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_RoutingPolicyType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>) consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::TrafficFilterList() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_TrafficFilterList(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowOutbound() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_AllowOutbound(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowOutbound(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->put_AllowOutbound(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowInbound() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_AllowInbound(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowInbound(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->put_AllowInbound(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnTrafficFilter) consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory<D>::Create(Windows::Networking::Vpn::VpnAppId const& appId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterFactory)->Create(*(void**)(&appId), &result));
        return Windows::Networking::Vpn::VpnTrafficFilter{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnAppId> : produce_base<D, Windows::Networking::Vpn::IVpnAppId>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppIdType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Type(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Networking::Vpn::VpnAppIdType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnAppIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnAppIdFactory>
    {
        int32_t __stdcall Create(int32_t type, void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().Create(*reinterpret_cast<Windows::Networking::Vpn::VpnAppIdType const*>(&type), *reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannel> : produce_base<D, Windows::Networking::Vpn::IVpnChannel>
    {
        int32_t __stdcall AssociateTransport(void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* routeScope, void* namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&routeScope), *reinterpret_cast<Windows::Networking::Vpn::VpnNamespaceAssignment const*>(&namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCredentials(int32_t credType, bool isRetry, bool isSingleSignOnCredential, void* certificate, void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Networking::Vpn::VpnPickedCredential>(this->shim().RequestCredentials(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), isRetry, isSingleSignOnCredential, *reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestVpnPacketBuffer(int32_t type, void** vpnPacketBuffer) noexcept final try
        {
            clear_abi(vpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestVpnPacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnDataPathType const*>(&type), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer*>(vpnPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LogDiagnosticMessage(void* message) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogDiagnosticMessage(*reinterpret_cast<hstring const*>(&message));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Id(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ActivityChange(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActivityChange(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActivityChange(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivityChange(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall put_PlugInContext(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PlugInContext(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().PlugInContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemHealth(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnSystemHealth>(this->shim().SystemHealth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCustomPrompt(void* customPrompt) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestCustomPrompt(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> const*>(&customPrompt));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetErrorMessage(void* message) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetErrorMessage(*reinterpret_cast<hstring const*>(&message));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAllowedSslTlsVersions(void* tunnelTransport, bool useTls12) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAllowedSslTlsVersions(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&tunnelTransport), useTls12);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannel2> : produce_base<D, Windows::Networking::Vpn::IVpnChannel2>
    {
        int32_t __stdcall StartWithMainTransport(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* assignedRoutes, void* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, void* mainOuterTunnelTransport) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithMainTransport(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedDomainName), mtuSize, maxFrameSize, Reserved, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartExistingTransports(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* assignedRoutes, void* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartExistingTransports(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedDomainName), mtuSize, maxFrameSize, Reserved);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ActivityStateChange(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ActivityStateChange(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ActivityStateChange(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivityStateChange(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall GetVpnSendPacketBuffer(void** vpnSendPacketBuffer) noexcept final try
        {
            clear_abi(vpnSendPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *vpnSendPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().GetVpnSendPacketBuffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVpnReceivePacketBuffer(void** vpnReceivePacketBuffer) noexcept final try
        {
            clear_abi(vpnReceivePacketBuffer);
            typename D::abi_guard guard(this->shim());
            *vpnReceivePacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().GetVpnReceivePacketBuffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCustomPromptAsync(void* customPromptElement, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RequestCustomPromptAsync(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> const*>(&customPromptElement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCredentialsWithCertificateAsync(int32_t credType, uint32_t credOptions, void* certificate, void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), credOptions, *reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCredentialsWithOptionsAsync(int32_t credType, uint32_t credOptions, void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), credOptions));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestCredentialsSimpleAsync(int32_t credType, void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TerminateConnection(void* message) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TerminateConnection(*reinterpret_cast<hstring const*>(&message));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartWithTrafficFilter(void* assignedClientIpv4List, void* assignedClientIpv6List, void* vpnInterfaceId, void* assignedRoutes, void* assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport, void* assignedTrafficFilters) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithTrafficFilter(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIpv4List), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIpv6List), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedNamespace), mtuSize, maxFrameSize, reserved, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport), *reinterpret_cast<Windows::Networking::Vpn::VpnTrafficFilterAssignment const*>(&assignedTrafficFilters));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannel4> : produce_base<D, Windows::Networking::Vpn::IVpnChannel4>
    {
        int32_t __stdcall AddAndAssociateTransport(void* transport, void* context) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAndAssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartWithMultipleTransports(void* assignedClientIpv4Addresses, void* assignedClientIpv6Addresses, void* vpninterfaceId, void* assignedRoutes, void* assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, void* transports, void* assignedTrafficFilters) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithTrafficFilter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&assignedClientIpv4Addresses), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&assignedClientIpv6Addresses), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpninterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedNamespace), mtuSize, maxFrameSize, reserved, *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::IInspectable> const*>(&transports), *reinterpret_cast<Windows::Networking::Vpn::VpnTrafficFilterAssignment const*>(&assignedTrafficFilters));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReplaceAndAssociateTransport(void* transport, void* context) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceAndAssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartReconnectingTransport(void* transport, void* context) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartReconnectingTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSlotTypeForTransportContext(void* context, int32_t* slotType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *slotType = detach_from<Windows::Networking::Sockets::ControlChannelTriggerStatus>(this->shim().GetSlotTypeForTransportContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&context)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentRequestTransportContext(void** context) noexcept final try
        {
            clear_abi(context);
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Foundation::IInspectable>(this->shim().CurrentRequestTransportContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannel5> : produce_base<D, Windows::Networking::Vpn::IVpnChannel5>
    {
        int32_t __stdcall AppendVpnReceivePacketBuffer(void* decapsulatedPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendVpnReceivePacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&decapsulatedPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AppendVpnSendPacketBuffer(void* encapsulatedPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendVpnSendPacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&encapsulatedPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FlushVpnReceivePacketBuffers() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlushVpnReceivePacketBuffers();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FlushVpnSendPacketBuffers() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlushVpnSendPacketBuffers();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannel6> : produce_base<D, Windows::Networking::Vpn::IVpnChannel6>
    {
        int32_t __stdcall ActivateForeground(void* packageRelativeAppId, void* sharedContext, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ActivateForeground(*reinterpret_cast<hstring const*>(&packageRelativeAppId), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&sharedContext)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelActivityEventType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>
    {
        int32_t __stdcall get_ActivityState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelActivityEventType>(this->shim().ActivityState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration>
    {
        int32_t __stdcall get_ServerServiceName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServerServiceName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerHostNameList(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>>(this->shim().ServerHostNameList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomField(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomField());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration2> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration2>
    {
        int32_t __stdcall get_ServerUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>>(this->shim().ServerUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnChannelStatics> : produce_base<D, Windows::Networking::Vpn::IVpnChannelStatics>
    {
        int32_t __stdcall ProcessEventAsync(void* thirdPartyPlugIn, void* event) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessEventAsync(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&thirdPartyPlugIn), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&event));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCredential> : produce_base<D, Windows::Networking::Vpn::IVpnCredential>
    {
        int32_t __stdcall get_PasskeyCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasskeyCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CertificateCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().CertificateCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdditionalPin(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdditionalPin());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldPasswordCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().OldPasswordCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomCheckBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomCheckBox>
    {
        int32_t __stdcall put_InitialCheckState(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialCheckState(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InitialCheckState(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InitialCheckState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Checked(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Checked());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomComboBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomComboBox>
    {
        int32_t __stdcall put_OptionsText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionsText(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionsText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().OptionsText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Selected(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Selected());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomEditBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomEditBox>
    {
        int32_t __stdcall put_DefaultText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NoEcho(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoEcho(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NoEcho(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NoEcho());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomErrorBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomErrorBox>
    {
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPrompt> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        int32_t __stdcall put_Label(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Compulsory(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Compulsory(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Compulsory(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Compulsory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Bordered(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bordered(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bordered(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Bordered());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>
    {
        int32_t __stdcall put_InitialValue(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialValue(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InitialValue(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InitialValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptElement> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        int32_t __stdcall put_DisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Compulsory(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Compulsory(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Compulsory(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Compulsory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Emphasized(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Emphasized(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Emphasized(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Emphasized());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>
    {
        int32_t __stdcall get_Options(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedIndex(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptText> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptText>
    {
        int32_t __stdcall put_Text(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput>
    {
        int32_t __stdcall put_PlaceholderText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaceholderText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PlaceholderText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PlaceholderText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsTextHidden(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTextHidden(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTextHidden(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTextHidden());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnCustomTextBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomTextBox>
    {
        int32_t __stdcall put_DisplayText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnDomainNameAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameAssignment>
    {
        int32_t __stdcall get_DomainNameList(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>>(this->shim().DomainNameList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProxyAutoConfigurationUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAutoConfigurationUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyAutoConfigurationUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ProxyAutoConfigurationUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo>
    {
        int32_t __stdcall put_DomainName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DomainName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().DomainName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DomainNameType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainNameType(*reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DomainNameType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnDomainNameType>(this->shim().DomainNameType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DnsServers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().DnsServers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebProxyServers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().WebProxyServers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo2> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo2>
    {
        int32_t __stdcall get_WebProxyUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().WebProxyUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
    {
        int32_t __stdcall CreateVpnDomainNameInfo(void* name, int32_t nameType, void* dnsServerList, void* proxyServerList, void** domainNameInfo) noexcept final try
        {
            clear_abi(domainNameInfo);
            typename D::abi_guard guard(this->shim());
            *domainNameInfo = detach_from<Windows::Networking::Vpn::VpnDomainNameInfo>(this->shim().CreateVpnDomainNameInfo(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameType const*>(&nameType), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&dnsServerList), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&proxyServerList)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs> : produce_base<D, Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs>
    {
        int32_t __stdcall get_ProfileName(void** name) noexcept final try
        {
            clear_abi(name);
            typename D::abi_guard guard(this->shim());
            *name = detach_from<hstring>(this->shim().ProfileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharedContext(void** sharedContext) noexcept final try
        {
            clear_abi(sharedContext);
            typename D::abi_guard guard(this->shim());
            *sharedContext = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().SharedContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActivationOperation(void** activationOperation) noexcept final try
        {
            clear_abi(activationOperation);
            typename D::abi_guard guard(this->shim());
            *activationOperation = detach_from<Windows::Networking::Vpn::VpnForegroundActivationOperation>(this->shim().ActivationOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnForegroundActivationOperation> : produce_base<D, Windows::Networking::Vpn::IVpnForegroundActivationOperation>
    {
        int32_t __stdcall Complete(void* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&result));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnInterfaceId> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceId>
    {
        int32_t __stdcall GetAddressInfo(uint32_t* __idSize, uint8_t** id) noexcept final try
        {
            clear_abi(id);
            typename D::abi_guard guard(this->shim());
            this->shim().GetAddressInfo(detach_abi<uint8_t>(__idSize, id));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory>
    {
        int32_t __stdcall CreateVpnInterfaceId(uint32_t __addressSize, uint8_t* address, void** vpnInterfaceId) noexcept final try
        {
            clear_abi(vpnInterfaceId);
            typename D::abi_guard guard(this->shim());
            *vpnInterfaceId = detach_from<Windows::Networking::Vpn::VpnInterfaceId>(this->shim().CreateVpnInterfaceId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(address), reinterpret_cast<uint8_t const *>(address) + __addressSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnManagementAgent> : produce_base<D, Windows::Networking::Vpn::IVpnManagementAgent>
    {
        int32_t __stdcall AddProfileFromXmlAsync(void* xml, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().AddProfileFromXmlAsync(*reinterpret_cast<hstring const*>(&xml)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddProfileFromObjectAsync(void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().AddProfileFromObjectAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateProfileFromXmlAsync(void* xml, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().UpdateProfileFromXmlAsync(*reinterpret_cast<hstring const*>(&xml)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateProfileFromObjectAsync(void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().UpdateProfileFromObjectAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProfilesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>>(this->shim().GetProfilesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteProfileAsync(void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().DeleteProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConnectProfileAsync(void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().ConnectProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConnectProfileWithPasswordCredentialAsync(void* profile, void* passwordCredential, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().ConnectProfileWithPasswordCredentialAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DisconnectProfileAsync(void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().DisconnectProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnNamespaceAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceAssignment>
    {
        int32_t __stdcall put_NamespaceList(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NamespaceList(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NamespaceList(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>>(this->shim().NamespaceList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProxyAutoConfigUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAutoConfigUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyAutoConfigUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ProxyAutoConfigUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfo> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfo>
    {
        int32_t __stdcall put_Namespace(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Namespace(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Namespace(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Namespace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DnsServers(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DnsServers(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DnsServers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().DnsServers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WebProxyServers(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WebProxyServers(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebProxyServers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().WebProxyServers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
    {
        int32_t __stdcall CreateVpnNamespaceInfo(void* name, void* dnsServerList, void* proxyServerList, void** namespaceInfo) noexcept final try
        {
            clear_abi(namespaceInfo);
            typename D::abi_guard guard(this->shim());
            *namespaceInfo = detach_from<Windows::Networking::Vpn::VpnNamespaceInfo>(this->shim().CreateVpnNamespaceInfo(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&dnsServerList), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&proxyServerList)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile>
    {
        int32_t __stdcall get_Servers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Servers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoutingPolicyType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnRoutingPolicyType>(this->shim().RoutingPolicyType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RoutingPolicyType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoutingPolicyType(*reinterpret_cast<Windows::Networking::Vpn::VpnRoutingPolicyType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NativeProtocolType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnNativeProtocolType>(this->shim().NativeProtocolType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NativeProtocolType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NativeProtocolType(*reinterpret_cast<Windows::Networking::Vpn::VpnNativeProtocolType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserAuthenticationMethod(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAuthenticationMethod>(this->shim().UserAuthenticationMethod());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserAuthenticationMethod(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserAuthenticationMethod(*reinterpret_cast<Windows::Networking::Vpn::VpnAuthenticationMethod const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TunnelAuthenticationMethod(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAuthenticationMethod>(this->shim().TunnelAuthenticationMethod());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TunnelAuthenticationMethod(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TunnelAuthenticationMethod(*reinterpret_cast<Windows::Networking::Vpn::VpnAuthenticationMethod const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EapConfiguration(void** Value) noexcept final try
        {
            clear_abi(Value);
            typename D::abi_guard guard(this->shim());
            *Value = detach_from<hstring>(this->shim().EapConfiguration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EapConfiguration(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EapConfiguration(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile2>
    {
        int32_t __stdcall get_RequireVpnClientAppUI(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequireVpnClientAppUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequireVpnClientAppUI(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequireVpnClientAppUI(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnManagementConnectionStatus>(this->shim().ConnectionStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer>
    {
        int32_t __stdcall get_Buffer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::Buffer>(this->shim().Buffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnPacketBufferStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransportAffinity(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportAffinity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransportAffinity(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TransportAffinity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer2>
    {
        int32_t __stdcall get_AppId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().AppId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer3> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer3>
    {
        int32_t __stdcall put_TransportContext(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransportContext(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().TransportContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferFactory> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferFactory>
    {
        int32_t __stdcall CreateVpnPacketBuffer(void* parentBuffer, uint32_t offset, uint32_t length, void** vpnPacketBuffer) noexcept final try
        {
            clear_abi(vpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *vpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().CreateVpnPacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&parentBuffer), offset, length));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList>
    {
        int32_t __stdcall Append(void* nextVpnPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddAtBegin(void* nextVpnPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAtBegin(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAtEnd(void** nextVpnPacketBuffer) noexcept final try
        {
            clear_abi(nextVpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveAtEnd());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAtBegin(void** nextVpnPacketBuffer) noexcept final try
        {
            clear_abi(nextVpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveAtBegin());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnPacketBufferStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList2>
    {
        int32_t __stdcall AddLeadingPacket(void* nextVpnPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLeadingPacket(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveLeadingPacket(void** nextVpnPacketBuffer) noexcept final try
        {
            clear_abi(nextVpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveLeadingPacket());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddTrailingPacket(void* nextVpnPacketBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTrailingPacket(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveTrailingPacket(void** nextVpnPacketBuffer) noexcept final try
        {
            clear_abi(nextVpnPacketBuffer);
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveTrailingPacket());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPickedCredential> : produce_base<D, Windows::Networking::Vpn::IVpnPickedCredential>
    {
        int32_t __stdcall get_PasskeyCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasskeyCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdditionalPin(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdditionalPin());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldPasswordCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().OldPasswordCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPlugIn> : produce_base<D, Windows::Networking::Vpn::IVpnPlugIn>
    {
        int32_t __stdcall Connect(void* channel) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Connect(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Disconnect(void* channel) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnect(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetKeepAlivePayload(void* channel, void** keepAlivePacket) noexcept final try
        {
            clear_abi(keepAlivePacket);
            typename D::abi_guard guard(this->shim());
            this->shim().GetKeepAlivePayload(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer*>(keepAlivePacket));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Encapsulate(void* channel, void* packets, void* encapulatedPackets) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Encapsulate(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&packets), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&encapulatedPackets));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Decapsulate(void* channel, void* encapBuffer, void* decapsulatedPackets, void* controlPacketsToSend) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Decapsulate(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&encapBuffer), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&decapsulatedPackets), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&controlPacketsToSend));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile>
    {
        int32_t __stdcall get_ServerUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().ServerUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomConfiguration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomConfiguration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CustomConfiguration(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomConfiguration(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VpnPluginPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VpnPluginPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_VpnPluginPackageFamilyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VpnPluginPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile2>
    {
        int32_t __stdcall get_RequireVpnClientAppUI(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequireVpnClientAppUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequireVpnClientAppUI(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequireVpnClientAppUI(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnManagementConnectionStatus>(this->shim().ConnectionStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnProfile> : produce_base<D, Windows::Networking::Vpn::IVpnProfile>
    {
        int32_t __stdcall get_ProfileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProfileName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProfileName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppTriggers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>>(this->shim().AppTriggers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Routes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Routes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DomainNameInfoList(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>>(this->shim().DomainNameInfoList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrafficFilters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>>(this->shim().TrafficFilters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RememberCredentials(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RememberCredentials());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RememberCredentials(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RememberCredentials(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysOn(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysOn());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlwaysOn(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysOn(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnRoute> : produce_base<D, Windows::Networking::Vpn::IVpnRoute>
    {
        int32_t __stdcall put_Address(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Address(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().Address());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrefixSize(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrefixSize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrefixSize(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PrefixSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnRouteAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnRouteAssignment>
    {
        int32_t __stdcall put_Ipv4InclusionRoutes(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv4InclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Ipv6InclusionRoutes(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv6InclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ipv4InclusionRoutes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv4InclusionRoutes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ipv6InclusionRoutes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv6InclusionRoutes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Ipv4ExclusionRoutes(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv4ExclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Ipv6ExclusionRoutes(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv6ExclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ipv4ExclusionRoutes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv4ExclusionRoutes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ipv6ExclusionRoutes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv6ExclusionRoutes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExcludeLocalSubnets(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExcludeLocalSubnets(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExcludeLocalSubnets(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExcludeLocalSubnets());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnRouteFactory> : produce_base<D, Windows::Networking::Vpn::IVpnRouteFactory>
    {
        int32_t __stdcall CreateVpnRoute(void* address, uint8_t prefixSize, void** route) noexcept final try
        {
            clear_abi(route);
            typename D::abi_guard guard(this->shim());
            *route = detach_from<Windows::Networking::Vpn::VpnRoute>(this->shim().CreateVpnRoute(*reinterpret_cast<Windows::Networking::HostName const*>(&address), prefixSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnSystemHealth> : produce_base<D, Windows::Networking::Vpn::IVpnSystemHealth>
    {
        int32_t __stdcall get_StatementOfHealth(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::Buffer>(this->shim().StatementOfHealth());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilter> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilter>
    {
        int32_t __stdcall get_AppId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().AppId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AppId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppId(*reinterpret_cast<Windows::Networking::Vpn::VpnAppId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppClaims(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().AppClaims());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Protocol(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnIPProtocol>(this->shim().Protocol());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Protocol(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Protocol(*reinterpret_cast<Windows::Networking::Vpn::VpnIPProtocol const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalPortRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalPortRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemotePortRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().RemotePortRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalAddressRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalAddressRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteAddressRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().RemoteAddressRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RoutingPolicyType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnRoutingPolicyType>(this->shim().RoutingPolicyType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RoutingPolicyType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoutingPolicyType(*reinterpret_cast<Windows::Networking::Vpn::VpnRoutingPolicyType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment>
    {
        int32_t __stdcall get_TrafficFilterList(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>>(this->shim().TrafficFilterList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowOutbound(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowOutbound());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowOutbound(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowOutbound(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowInbound(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowInbound());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowInbound(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowInbound(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory>
    {
        int32_t __stdcall Create(void* appId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Vpn::VpnTrafficFilter>(this->shim().Create(*reinterpret_cast<Windows::Networking::Vpn::VpnAppId const*>(&appId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Networking::Vpn
{
    constexpr auto operator|(VpnChannelRequestCredentialsOptions const left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        return static_cast<VpnChannelRequestCredentialsOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(VpnChannelRequestCredentialsOptions& left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(VpnChannelRequestCredentialsOptions const left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        return static_cast<VpnChannelRequestCredentialsOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(VpnChannelRequestCredentialsOptions& left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(VpnChannelRequestCredentialsOptions const value) noexcept
    {
        return static_cast<VpnChannelRequestCredentialsOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(VpnChannelRequestCredentialsOptions const left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        return static_cast<VpnChannelRequestCredentialsOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(VpnChannelRequestCredentialsOptions& left, VpnChannelRequestCredentialsOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline VpnAppId::VpnAppId(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) :
        VpnAppId(impl::call_factory<VpnAppId, IVpnAppIdFactory>([&](IVpnAppIdFactory const& f) { return f.Create(type, value); }))
    {
    }
    inline auto VpnChannel::ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event)
    {
        impl::call_factory<VpnChannel, IVpnChannelStatics>([&](IVpnChannelStatics const& f) { return f.ProcessEventAsync(thirdPartyPlugIn, event); });
    }
    inline VpnCustomCheckBox::VpnCustomCheckBox() :
        VpnCustomCheckBox(impl::call_factory_cast<VpnCustomCheckBox(*)(Windows::Foundation::IActivationFactory const&), VpnCustomCheckBox>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomCheckBox>(); }))
    {
    }
    inline VpnCustomComboBox::VpnCustomComboBox() :
        VpnCustomComboBox(impl::call_factory_cast<VpnCustomComboBox(*)(Windows::Foundation::IActivationFactory const&), VpnCustomComboBox>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomComboBox>(); }))
    {
    }
    inline VpnCustomEditBox::VpnCustomEditBox() :
        VpnCustomEditBox(impl::call_factory_cast<VpnCustomEditBox(*)(Windows::Foundation::IActivationFactory const&), VpnCustomEditBox>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomEditBox>(); }))
    {
    }
    inline VpnCustomErrorBox::VpnCustomErrorBox() :
        VpnCustomErrorBox(impl::call_factory_cast<VpnCustomErrorBox(*)(Windows::Foundation::IActivationFactory const&), VpnCustomErrorBox>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomErrorBox>(); }))
    {
    }
    inline VpnCustomPromptBooleanInput::VpnCustomPromptBooleanInput() :
        VpnCustomPromptBooleanInput(impl::call_factory_cast<VpnCustomPromptBooleanInput(*)(Windows::Foundation::IActivationFactory const&), VpnCustomPromptBooleanInput>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomPromptBooleanInput>(); }))
    {
    }
    inline VpnCustomPromptOptionSelector::VpnCustomPromptOptionSelector() :
        VpnCustomPromptOptionSelector(impl::call_factory_cast<VpnCustomPromptOptionSelector(*)(Windows::Foundation::IActivationFactory const&), VpnCustomPromptOptionSelector>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomPromptOptionSelector>(); }))
    {
    }
    inline VpnCustomPromptText::VpnCustomPromptText() :
        VpnCustomPromptText(impl::call_factory_cast<VpnCustomPromptText(*)(Windows::Foundation::IActivationFactory const&), VpnCustomPromptText>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomPromptText>(); }))
    {
    }
    inline VpnCustomPromptTextInput::VpnCustomPromptTextInput() :
        VpnCustomPromptTextInput(impl::call_factory_cast<VpnCustomPromptTextInput(*)(Windows::Foundation::IActivationFactory const&), VpnCustomPromptTextInput>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomPromptTextInput>(); }))
    {
    }
    inline VpnCustomTextBox::VpnCustomTextBox() :
        VpnCustomTextBox(impl::call_factory_cast<VpnCustomTextBox(*)(Windows::Foundation::IActivationFactory const&), VpnCustomTextBox>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnCustomTextBox>(); }))
    {
    }
    inline VpnDomainNameAssignment::VpnDomainNameAssignment() :
        VpnDomainNameAssignment(impl::call_factory_cast<VpnDomainNameAssignment(*)(Windows::Foundation::IActivationFactory const&), VpnDomainNameAssignment>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnDomainNameAssignment>(); }))
    {
    }
    inline VpnDomainNameInfo::VpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) :
        VpnDomainNameInfo(impl::call_factory<VpnDomainNameInfo, IVpnDomainNameInfoFactory>([&](IVpnDomainNameInfoFactory const& f) { return f.CreateVpnDomainNameInfo(name, nameType, dnsServerList, proxyServerList); }))
    {
    }
    inline VpnInterfaceId::VpnInterfaceId(array_view<uint8_t const> address) :
        VpnInterfaceId(impl::call_factory<VpnInterfaceId, IVpnInterfaceIdFactory>([&](IVpnInterfaceIdFactory const& f) { return f.CreateVpnInterfaceId(address); }))
    {
    }
    inline VpnManagementAgent::VpnManagementAgent() :
        VpnManagementAgent(impl::call_factory_cast<VpnManagementAgent(*)(Windows::Foundation::IActivationFactory const&), VpnManagementAgent>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnManagementAgent>(); }))
    {
    }
    inline VpnNamespaceAssignment::VpnNamespaceAssignment() :
        VpnNamespaceAssignment(impl::call_factory_cast<VpnNamespaceAssignment(*)(Windows::Foundation::IActivationFactory const&), VpnNamespaceAssignment>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnNamespaceAssignment>(); }))
    {
    }
    inline VpnNamespaceInfo::VpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) :
        VpnNamespaceInfo(impl::call_factory<VpnNamespaceInfo, IVpnNamespaceInfoFactory>([&](IVpnNamespaceInfoFactory const& f) { return f.CreateVpnNamespaceInfo(name, dnsServerList, proxyServerList); }))
    {
    }
    inline VpnNativeProfile::VpnNativeProfile() :
        VpnNativeProfile(impl::call_factory_cast<VpnNativeProfile(*)(Windows::Foundation::IActivationFactory const&), VpnNativeProfile>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnNativeProfile>(); }))
    {
    }
    inline VpnPacketBuffer::VpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) :
        VpnPacketBuffer(impl::call_factory<VpnPacketBuffer, IVpnPacketBufferFactory>([&](IVpnPacketBufferFactory const& f) { return f.CreateVpnPacketBuffer(parentBuffer, offset, length); }))
    {
    }
    inline VpnPlugInProfile::VpnPlugInProfile() :
        VpnPlugInProfile(impl::call_factory_cast<VpnPlugInProfile(*)(Windows::Foundation::IActivationFactory const&), VpnPlugInProfile>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnPlugInProfile>(); }))
    {
    }
    inline VpnRoute::VpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) :
        VpnRoute(impl::call_factory<VpnRoute, IVpnRouteFactory>([&](IVpnRouteFactory const& f) { return f.CreateVpnRoute(address, prefixSize); }))
    {
    }
    inline VpnRouteAssignment::VpnRouteAssignment() :
        VpnRouteAssignment(impl::call_factory_cast<VpnRouteAssignment(*)(Windows::Foundation::IActivationFactory const&), VpnRouteAssignment>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnRouteAssignment>(); }))
    {
    }
    inline VpnTrafficFilter::VpnTrafficFilter(Windows::Networking::Vpn::VpnAppId const& appId) :
        VpnTrafficFilter(impl::call_factory<VpnTrafficFilter, IVpnTrafficFilterFactory>([&](IVpnTrafficFilterFactory const& f) { return f.Create(appId); }))
    {
    }
    inline VpnTrafficFilterAssignment::VpnTrafficFilterAssignment() :
        VpnTrafficFilterAssignment(impl::call_factory_cast<VpnTrafficFilterAssignment(*)(Windows::Foundation::IActivationFactory const&), VpnTrafficFilterAssignment>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<VpnTrafficFilterAssignment>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnAppId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnAppIdFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelActivityEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomCheckBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomComboBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomEditBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomErrorBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPrompt> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptText> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptTextInput> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomTextBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnForegroundActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnForegroundActivationOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnInterfaceId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnManagementAgent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNativeProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNativeProfile2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferList> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferList2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPickedCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugIn> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugInProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugInProfile2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRoute> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRouteAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRouteFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnSystemHealth> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilterAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilterFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnAppId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomCheckBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomComboBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomEditBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomErrorBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptText> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomTextBox> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnDomainNameInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnForegroundActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnForegroundActivationOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnInterfaceId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnManagementAgent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnNamespaceInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnNativeProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnPacketBuffer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnPacketBufferList> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnPickedCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnPlugInProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnRoute> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnRouteAssignment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnSystemHealth> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnTrafficFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment> : winrt::impl::hash_base {};
#endif
}
#endif
