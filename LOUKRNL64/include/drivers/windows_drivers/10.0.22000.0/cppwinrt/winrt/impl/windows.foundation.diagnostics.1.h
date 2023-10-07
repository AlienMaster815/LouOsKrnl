// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Diagnostics_1_H
#define WINRT_Windows_Foundation_Diagnostics_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics
{
    struct __declspec(empty_bases) IAsyncCausalityTracerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAsyncCausalityTracerStatics>
    {
        IAsyncCausalityTracerStatics(std::nullptr_t = nullptr) noexcept {}
        IAsyncCausalityTracerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IErrorDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IErrorDetails>
    {
        IErrorDetails(std::nullptr_t = nullptr) noexcept {}
        IErrorDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IErrorDetailsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IErrorDetailsStatics>
    {
        IErrorDetailsStatics(std::nullptr_t = nullptr) noexcept {}
        IErrorDetailsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IErrorReportingSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IErrorReportingSettings>
    {
        IErrorReportingSettings(std::nullptr_t = nullptr) noexcept {}
        IErrorReportingSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileLoggingSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileLoggingSession>,
        impl::require<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::IClosable>
    {
        IFileLoggingSession(std::nullptr_t = nullptr) noexcept {}
        IFileLoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileLoggingSessionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileLoggingSessionFactory>
    {
        IFileLoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
        IFileLoggingSessionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILogFileGeneratedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILogFileGeneratedEventArgs>
    {
        ILogFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILogFileGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingActivity :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivity>,
        impl::require<Windows::Foundation::Diagnostics::ILoggingActivity, Windows::Foundation::IClosable>
    {
        ILoggingActivity(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingActivity2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivity2>,
        impl::require<Windows::Foundation::Diagnostics::ILoggingActivity2, Windows::Foundation::IClosable, Windows::Foundation::Diagnostics::ILoggingActivity, Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        ILoggingActivity2(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivity2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingActivityFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivityFactory>
    {
        ILoggingActivityFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivityFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannel :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannel>,
        impl::require<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IClosable>
    {
        ILoggingChannel(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannel2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannel2>,
        impl::require<Windows::Foundation::Diagnostics::ILoggingChannel2, Windows::Foundation::IClosable, Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        ILoggingChannel2(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannel2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannelFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelFactory>
    {
        ILoggingChannelFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannelFactory2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelFactory2>
    {
        ILoggingChannelFactory2(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelFactory2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannelOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelOptions>
    {
        ILoggingChannelOptions(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingChannelOptionsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelOptionsFactory>
    {
        ILoggingChannelOptionsFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelOptionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingFields :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingFields>
    {
        ILoggingFields(std::nullptr_t = nullptr) noexcept {}
        ILoggingFields(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingOptions>
    {
        ILoggingOptions(std::nullptr_t = nullptr) noexcept {}
        ILoggingOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingOptionsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingOptionsFactory>
    {
        ILoggingOptionsFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingOptionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingSession>,
        impl::require<Windows::Foundation::Diagnostics::ILoggingSession, Windows::Foundation::IClosable>
    {
        ILoggingSession(std::nullptr_t = nullptr) noexcept {}
        ILoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingSessionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingSessionFactory>
    {
        ILoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingSessionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILoggingTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingTarget>
    {
        ILoggingTarget(std::nullptr_t = nullptr) noexcept {}
        ILoggingTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITracingStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITracingStatusChangedEventArgs>
    {
        ITracingStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITracingStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
