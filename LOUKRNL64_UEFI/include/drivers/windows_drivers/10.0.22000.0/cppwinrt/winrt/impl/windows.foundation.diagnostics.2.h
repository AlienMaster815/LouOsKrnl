// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Diagnostics_2_H
#define WINRT_Windows_Foundation_Diagnostics_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics
{
    struct AsyncCausalityTracer
    {
        AsyncCausalityTracer() = delete;
        static auto TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext);
        static auto TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status);
        static auto TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation);
        static auto TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work);
        static auto TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work);
        static auto TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler);
        using TracingStatusChanged_revoker = impl::factory_event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics, &impl::abi_t<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>::remove_TracingStatusChanged>;
        [[nodiscard]] static TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler);
        static auto TracingStatusChanged(winrt::event_token const& cookie);
    };
    struct __declspec(empty_bases) ErrorDetails : Windows::Foundation::Diagnostics::IErrorDetails
    {
        ErrorDetails(std::nullptr_t) noexcept {}
        ErrorDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::IErrorDetails(ptr, take_ownership_from_abi) {}
        static auto CreateFromHResultAsync(int32_t errorCode);
    };
    struct __declspec(empty_bases) FileLoggingSession : Windows::Foundation::Diagnostics::IFileLoggingSession
    {
        FileLoggingSession(std::nullptr_t) noexcept {}
        FileLoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::IFileLoggingSession(ptr, take_ownership_from_abi) {}
        explicit FileLoggingSession(param::hstring const& name);
    };
    struct __declspec(empty_bases) LogFileGeneratedEventArgs : Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs
    {
        LogFileGeneratedEventArgs(std::nullptr_t) noexcept {}
        LogFileGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoggingActivity : Windows::Foundation::Diagnostics::ILoggingActivity,
        impl::require<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::Diagnostics::ILoggingActivity2>
    {
        LoggingActivity(std::nullptr_t) noexcept {}
        LoggingActivity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingActivity(ptr, take_ownership_from_abi) {}
        LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel);
        LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level);
    };
    struct __declspec(empty_bases) LoggingChannel : Windows::Foundation::Diagnostics::ILoggingChannel,
        impl::require<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingTarget, Windows::Foundation::Diagnostics::ILoggingChannel2>
    {
        LoggingChannel(std::nullptr_t) noexcept {}
        LoggingChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingChannel(ptr, take_ownership_from_abi) {}
        explicit LoggingChannel(param::hstring const& name);
        LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options);
        LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, winrt::guid const& id);
    };
    struct __declspec(empty_bases) LoggingChannelOptions : Windows::Foundation::Diagnostics::ILoggingChannelOptions
    {
        LoggingChannelOptions(std::nullptr_t) noexcept {}
        LoggingChannelOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingChannelOptions(ptr, take_ownership_from_abi) {}
        LoggingChannelOptions();
        explicit LoggingChannelOptions(winrt::guid const& group);
    };
    struct __declspec(empty_bases) LoggingFields : Windows::Foundation::Diagnostics::ILoggingFields
    {
        LoggingFields(std::nullptr_t) noexcept {}
        LoggingFields(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingFields(ptr, take_ownership_from_abi) {}
        LoggingFields();
    };
    struct __declspec(empty_bases) LoggingOptions : Windows::Foundation::Diagnostics::ILoggingOptions
    {
        LoggingOptions(std::nullptr_t) noexcept {}
        LoggingOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingOptions(ptr, take_ownership_from_abi) {}
        LoggingOptions();
        explicit LoggingOptions(int64_t keywords);
    };
    struct __declspec(empty_bases) LoggingSession : Windows::Foundation::Diagnostics::ILoggingSession
    {
        LoggingSession(std::nullptr_t) noexcept {}
        LoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ILoggingSession(ptr, take_ownership_from_abi) {}
        explicit LoggingSession(param::hstring const& name);
    };
    struct __declspec(empty_bases) RuntimeBrokerErrorSettings : Windows::Foundation::Diagnostics::IErrorReportingSettings
    {
        RuntimeBrokerErrorSettings(std::nullptr_t) noexcept {}
        RuntimeBrokerErrorSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::IErrorReportingSettings(ptr, take_ownership_from_abi) {}
        RuntimeBrokerErrorSettings();
    };
    struct __declspec(empty_bases) TracingStatusChangedEventArgs : Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs
    {
        TracingStatusChangedEventArgs(std::nullptr_t) noexcept {}
        TracingStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
