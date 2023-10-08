// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Filters_1_H
#define WINRT_Windows_Web_Http_Filters_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Web.Http.Filters.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct __declspec(empty_bases) IHttpBaseProtocolFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter>
    {
        IHttpBaseProtocolFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter2>
    {
        IHttpBaseProtocolFilter2(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter3>
    {
        IHttpBaseProtocolFilter3(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter4>
    {
        IHttpBaseProtocolFilter4(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter5>
    {
        IHttpBaseProtocolFilter5(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilterStatics>
    {
        IHttpBaseProtocolFilterStatics(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpCacheControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpCacheControl>
    {
        IHttpCacheControl(std::nullptr_t = nullptr) noexcept {}
        IHttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpFilter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpFilter>,
        impl::require<Windows::Web::Http::Filters::IHttpFilter, Windows::Foundation::IClosable>
    {
        IHttpFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpServerCustomValidationRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHttpServerCustomValidationRequestedEventArgs>
    {
        IHttpServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
