// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Protection_1_H
#define WINRT_Windows_Media_Protection_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Protection.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Protection
{
    struct __declspec(empty_bases) IComponentLoadFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IComponentLoadFailedEventArgs>
    {
        IComponentLoadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IComponentLoadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IComponentRenewalStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IComponentRenewalStatics>
    {
        IComponentRenewalStatics(std::nullptr_t = nullptr) noexcept {}
        IComponentRenewalStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHdcpSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHdcpSession>,
        impl::require<Windows::Media::Protection::IHdcpSession, Windows::Foundation::IClosable>
    {
        IHdcpSession(std::nullptr_t = nullptr) noexcept {}
        IHdcpSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProtectionManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionManager>
    {
        IMediaProtectionManager(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProtectionPMPServer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionPMPServer>
    {
        IMediaProtectionPMPServer(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionPMPServer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProtectionPMPServerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionPMPServerFactory>
    {
        IMediaProtectionPMPServerFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionPMPServerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProtectionServiceCompletion :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionServiceCompletion>
    {
        IMediaProtectionServiceCompletion(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionServiceCompletion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProtectionServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionServiceRequest>
    {
        IMediaProtectionServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtectionCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProtectionCapabilities>
    {
        IProtectionCapabilities(std::nullptr_t = nullptr) noexcept {}
        IProtectionCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRevocationAndRenewalInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRevocationAndRenewalInformation>
    {
        IRevocationAndRenewalInformation(std::nullptr_t = nullptr) noexcept {}
        IRevocationAndRenewalInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRevocationAndRenewalItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRevocationAndRenewalItem>
    {
        IRevocationAndRenewalItem(std::nullptr_t = nullptr) noexcept {}
        IRevocationAndRenewalItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServiceRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServiceRequestedEventArgs>
    {
        IServiceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IServiceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IServiceRequestedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IServiceRequestedEventArgs2>
    {
        IServiceRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IServiceRequestedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
