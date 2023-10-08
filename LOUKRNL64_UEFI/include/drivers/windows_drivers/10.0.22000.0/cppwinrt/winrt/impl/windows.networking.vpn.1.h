// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Vpn_1_H
#define WINRT_Windows_Networking_Vpn_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Networking.Vpn.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Vpn
{
    struct __declspec(empty_bases) IVpnAppId :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnAppId>
    {
        IVpnAppId(std::nullptr_t = nullptr) noexcept {}
        IVpnAppId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnAppIdFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnAppIdFactory>
    {
        IVpnAppIdFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnAppIdFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannel :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannel>
    {
        IVpnChannel(std::nullptr_t = nullptr) noexcept {}
        IVpnChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannel2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannel2>
    {
        IVpnChannel2(std::nullptr_t = nullptr) noexcept {}
        IVpnChannel2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannel4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannel4>
    {
        IVpnChannel4(std::nullptr_t = nullptr) noexcept {}
        IVpnChannel4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannel5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannel5>
    {
        IVpnChannel5(std::nullptr_t = nullptr) noexcept {}
        IVpnChannel5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannel6 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannel6>
    {
        IVpnChannel6(std::nullptr_t = nullptr) noexcept {}
        IVpnChannel6(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannelActivityEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannelActivityEventArgs>
    {
        IVpnChannelActivityEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVpnChannelActivityEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannelActivityStateChangedArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannelActivityStateChangedArgs>
    {
        IVpnChannelActivityStateChangedArgs(std::nullptr_t = nullptr) noexcept {}
        IVpnChannelActivityStateChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannelConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannelConfiguration>
    {
        IVpnChannelConfiguration(std::nullptr_t = nullptr) noexcept {}
        IVpnChannelConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannelConfiguration2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannelConfiguration2>
    {
        IVpnChannelConfiguration2(std::nullptr_t = nullptr) noexcept {}
        IVpnChannelConfiguration2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnChannelStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnChannelStatics>
    {
        IVpnChannelStatics(std::nullptr_t = nullptr) noexcept {}
        IVpnChannelStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCredential :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCredential>
    {
        IVpnCredential(std::nullptr_t = nullptr) noexcept {}
        IVpnCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomCheckBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomCheckBox>,
        impl::require<Windows::Networking::Vpn::IVpnCustomCheckBox, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        IVpnCustomCheckBox(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomCheckBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomComboBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomComboBox>,
        impl::require<Windows::Networking::Vpn::IVpnCustomComboBox, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        IVpnCustomComboBox(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomComboBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomEditBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomEditBox>,
        impl::require<Windows::Networking::Vpn::IVpnCustomEditBox, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        IVpnCustomEditBox(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomEditBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomErrorBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomErrorBox>,
        impl::require<Windows::Networking::Vpn::IVpnCustomErrorBox, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        IVpnCustomErrorBox(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomErrorBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPrompt :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPrompt>
    {
        IVpnCustomPrompt(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPrompt(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPromptBooleanInput :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPromptBooleanInput>,
        impl::require<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        IVpnCustomPromptBooleanInput(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPromptBooleanInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPromptElement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPromptElement>
    {
        IVpnCustomPromptElement(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPromptElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPromptOptionSelector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPromptOptionSelector>,
        impl::require<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector, Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        IVpnCustomPromptOptionSelector(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPromptOptionSelector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPromptText :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPromptText>,
        impl::require<Windows::Networking::Vpn::IVpnCustomPromptText, Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        IVpnCustomPromptText(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPromptText(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomPromptTextInput :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomPromptTextInput>,
        impl::require<Windows::Networking::Vpn::IVpnCustomPromptTextInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        IVpnCustomPromptTextInput(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomPromptTextInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnCustomTextBox :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnCustomTextBox>,
        impl::require<Windows::Networking::Vpn::IVpnCustomTextBox, Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        IVpnCustomTextBox(std::nullptr_t = nullptr) noexcept {}
        IVpnCustomTextBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnDomainNameAssignment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnDomainNameAssignment>
    {
        IVpnDomainNameAssignment(std::nullptr_t = nullptr) noexcept {}
        IVpnDomainNameAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnDomainNameInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnDomainNameInfo>
    {
        IVpnDomainNameInfo(std::nullptr_t = nullptr) noexcept {}
        IVpnDomainNameInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnDomainNameInfo2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnDomainNameInfo2>
    {
        IVpnDomainNameInfo2(std::nullptr_t = nullptr) noexcept {}
        IVpnDomainNameInfo2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnDomainNameInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnDomainNameInfoFactory>
    {
        IVpnDomainNameInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnDomainNameInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnForegroundActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnForegroundActivatedEventArgs>
    {
        IVpnForegroundActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVpnForegroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnForegroundActivationOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnForegroundActivationOperation>
    {
        IVpnForegroundActivationOperation(std::nullptr_t = nullptr) noexcept {}
        IVpnForegroundActivationOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnInterfaceId :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnInterfaceId>
    {
        IVpnInterfaceId(std::nullptr_t = nullptr) noexcept {}
        IVpnInterfaceId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnInterfaceIdFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnInterfaceIdFactory>
    {
        IVpnInterfaceIdFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnInterfaceIdFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnManagementAgent :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnManagementAgent>
    {
        IVpnManagementAgent(std::nullptr_t = nullptr) noexcept {}
        IVpnManagementAgent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnNamespaceAssignment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnNamespaceAssignment>
    {
        IVpnNamespaceAssignment(std::nullptr_t = nullptr) noexcept {}
        IVpnNamespaceAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnNamespaceInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnNamespaceInfo>
    {
        IVpnNamespaceInfo(std::nullptr_t = nullptr) noexcept {}
        IVpnNamespaceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnNamespaceInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnNamespaceInfoFactory>
    {
        IVpnNamespaceInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnNamespaceInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnNativeProfile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnNativeProfile>,
        impl::require<Windows::Networking::Vpn::IVpnNativeProfile, Windows::Networking::Vpn::IVpnProfile>
    {
        IVpnNativeProfile(std::nullptr_t = nullptr) noexcept {}
        IVpnNativeProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnNativeProfile2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnNativeProfile2>
    {
        IVpnNativeProfile2(std::nullptr_t = nullptr) noexcept {}
        IVpnNativeProfile2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBuffer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBuffer>
    {
        IVpnPacketBuffer(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBuffer2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBuffer2>
    {
        IVpnPacketBuffer2(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBuffer2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBuffer3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBuffer3>
    {
        IVpnPacketBuffer3(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBuffer3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBufferFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBufferFactory>
    {
        IVpnPacketBufferFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBufferFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBufferList :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBufferList>,
        impl::require<Windows::Networking::Vpn::IVpnPacketBufferList, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
    {
        IVpnPacketBufferList(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBufferList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPacketBufferList2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPacketBufferList2>,
        impl::require<Windows::Networking::Vpn::IVpnPacketBufferList2, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
    {
        IVpnPacketBufferList2(std::nullptr_t = nullptr) noexcept {}
        IVpnPacketBufferList2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPickedCredential :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPickedCredential>
    {
        IVpnPickedCredential(std::nullptr_t = nullptr) noexcept {}
        IVpnPickedCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPlugIn :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPlugIn>
    {
        IVpnPlugIn(std::nullptr_t = nullptr) noexcept {}
        IVpnPlugIn(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPlugInProfile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPlugInProfile>,
        impl::require<Windows::Networking::Vpn::IVpnPlugInProfile, Windows::Networking::Vpn::IVpnProfile>
    {
        IVpnPlugInProfile(std::nullptr_t = nullptr) noexcept {}
        IVpnPlugInProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnPlugInProfile2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnPlugInProfile2>,
        impl::require<Windows::Networking::Vpn::IVpnPlugInProfile2, Windows::Networking::Vpn::IVpnProfile>
    {
        IVpnPlugInProfile2(std::nullptr_t = nullptr) noexcept {}
        IVpnPlugInProfile2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnProfile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnProfile>
    {
        IVpnProfile(std::nullptr_t = nullptr) noexcept {}
        IVpnProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnRoute :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnRoute>
    {
        IVpnRoute(std::nullptr_t = nullptr) noexcept {}
        IVpnRoute(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnRouteAssignment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnRouteAssignment>
    {
        IVpnRouteAssignment(std::nullptr_t = nullptr) noexcept {}
        IVpnRouteAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnRouteFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnRouteFactory>
    {
        IVpnRouteFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnRouteFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnSystemHealth :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnSystemHealth>
    {
        IVpnSystemHealth(std::nullptr_t = nullptr) noexcept {}
        IVpnSystemHealth(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnTrafficFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnTrafficFilter>
    {
        IVpnTrafficFilter(std::nullptr_t = nullptr) noexcept {}
        IVpnTrafficFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnTrafficFilterAssignment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnTrafficFilterAssignment>
    {
        IVpnTrafficFilterAssignment(std::nullptr_t = nullptr) noexcept {}
        IVpnTrafficFilterAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVpnTrafficFilterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVpnTrafficFilterFactory>
    {
        IVpnTrafficFilterFactory(std::nullptr_t = nullptr) noexcept {}
        IVpnTrafficFilterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
