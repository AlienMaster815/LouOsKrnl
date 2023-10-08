// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Isolation_2_H
#define WINRT_Windows_Security_Isolation_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Isolation.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Isolation
{
    struct HostMessageReceivedCallback : Windows::Foundation::IUnknown
    {
        HostMessageReceivedCallback(std::nullptr_t = nullptr) noexcept {}
        HostMessageReceivedCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> HostMessageReceivedCallback(L lambda);
        template <typename F> HostMessageReceivedCallback(F* function);
        template <typename O, typename M> HostMessageReceivedCallback(O* object, M method);
        template <typename O, typename M> HostMessageReceivedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> HostMessageReceivedCallback(weak_ref<O>&& object, M method);
        auto operator()(winrt::guid const& receiverId, param::vector_view<Windows::Foundation::IInspectable> const& message) const;
    };
    struct MessageReceivedCallback : Windows::Foundation::IUnknown
    {
        MessageReceivedCallback(std::nullptr_t = nullptr) noexcept {}
        MessageReceivedCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> MessageReceivedCallback(L lambda);
        template <typename F> MessageReceivedCallback(F* function);
        template <typename O, typename M> MessageReceivedCallback(O* object, M method);
        template <typename O, typename M> MessageReceivedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> MessageReceivedCallback(weak_ref<O>&& object, M method);
        auto operator()(winrt::guid const& receiverId, param::vector_view<Windows::Foundation::IInspectable> const& message) const;
    };
    struct IsolatedWindowsEnvironmentCreateProgress
    {
        Windows::Security::Isolation::IsolatedWindowsEnvironmentProgressState State;
        uint32_t PercentComplete;
    };
    inline bool operator==(IsolatedWindowsEnvironmentCreateProgress const& left, IsolatedWindowsEnvironmentCreateProgress const& right) noexcept
    {
        return left.State == right.State && left.PercentComplete == right.PercentComplete;
    }
    inline bool operator!=(IsolatedWindowsEnvironmentCreateProgress const& left, IsolatedWindowsEnvironmentCreateProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) IsolatedWindowsEnvironment : Windows::Security::Isolation::IIsolatedWindowsEnvironment,
        impl::require<IsolatedWindowsEnvironment, Windows::Security::Isolation::IIsolatedWindowsEnvironment2, Windows::Security::Isolation::IIsolatedWindowsEnvironment3>
    {
        IsolatedWindowsEnvironment(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironment(ptr, take_ownership_from_abi) {}
        static auto CreateAsync(Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions const& options);
        static auto CreateAsync(Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions const& options, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters);
        static auto GetById(param::hstring const& environmentId);
        static auto FindByOwnerId(param::hstring const& environmentOwnerId);
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentCreateResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult
    {
        IsolatedWindowsEnvironmentCreateResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentCreateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentFile : Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile,
        impl::require<IsolatedWindowsEnvironmentFile, Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile2>
    {
        IsolatedWindowsEnvironmentFile(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentFile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile(ptr, take_ownership_from_abi) {}
    };
    struct IsolatedWindowsEnvironmentHost
    {
        IsolatedWindowsEnvironmentHost() = delete;
        [[nodiscard]] static auto IsReady();
        [[nodiscard]] static auto HostErrors();
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentLaunchFileResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult
    {
        IsolatedWindowsEnvironmentLaunchFileResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentLaunchFileResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentOptions : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions,
        impl::require<IsolatedWindowsEnvironmentOptions, Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions2>
    {
        IsolatedWindowsEnvironmentOptions(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions(ptr, take_ownership_from_abi) {}
        IsolatedWindowsEnvironmentOptions();
    };
    struct IsolatedWindowsEnvironmentOwnerRegistration
    {
        IsolatedWindowsEnvironmentOwnerRegistration() = delete;
        static auto Register(param::hstring const& ownerName, Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationData const& ownerRegistrationData);
        static auto Unregister(param::hstring const& ownerName);
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentOwnerRegistrationData : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData
    {
        IsolatedWindowsEnvironmentOwnerRegistrationData(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentOwnerRegistrationData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData(ptr, take_ownership_from_abi) {}
        IsolatedWindowsEnvironmentOwnerRegistrationData();
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentOwnerRegistrationResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult
    {
        IsolatedWindowsEnvironmentOwnerRegistrationResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentOwnerRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentPostMessageResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult
    {
        IsolatedWindowsEnvironmentPostMessageResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentPostMessageResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentProcess : Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess
    {
        IsolatedWindowsEnvironmentProcess(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentProcess(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentShareFileRequestOptions : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFileRequestOptions
    {
        IsolatedWindowsEnvironmentShareFileRequestOptions(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentShareFileRequestOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFileRequestOptions(ptr, take_ownership_from_abi) {}
        IsolatedWindowsEnvironmentShareFileRequestOptions();
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentShareFileResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFileResult
    {
        IsolatedWindowsEnvironmentShareFileResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentShareFileResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFileResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentShareFolderRequestOptions : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions
    {
        IsolatedWindowsEnvironmentShareFolderRequestOptions(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentShareFolderRequestOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions(ptr, take_ownership_from_abi) {}
        IsolatedWindowsEnvironmentShareFolderRequestOptions();
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentShareFolderResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult
    {
        IsolatedWindowsEnvironmentShareFolderResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentShareFolderResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentStartProcessResult : Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult
    {
        IsolatedWindowsEnvironmentStartProcessResult(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentStartProcessResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentTelemetryParameters : Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters
    {
        IsolatedWindowsEnvironmentTelemetryParameters(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentTelemetryParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters(ptr, take_ownership_from_abi) {}
        IsolatedWindowsEnvironmentTelemetryParameters();
    };
    struct __declspec(empty_bases) IsolatedWindowsEnvironmentUserInfo : Windows::Security::Isolation::IIsolatedWindowsEnvironmentUserInfo
    {
        IsolatedWindowsEnvironmentUserInfo(std::nullptr_t) noexcept {}
        IsolatedWindowsEnvironmentUserInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Isolation::IIsolatedWindowsEnvironmentUserInfo(ptr, take_ownership_from_abi) {}
    };
    struct IsolatedWindowsHostMessenger
    {
        IsolatedWindowsHostMessenger() = delete;
        static auto PostMessageToReceiver(winrt::guid const& receiverId, param::vector_view<Windows::Foundation::IInspectable> const& message);
        static auto GetFileId(param::hstring const& filePath);
        static auto RegisterHostMessageReceiver(winrt::guid const& receiverId, Windows::Security::Isolation::HostMessageReceivedCallback const& hostMessageReceivedCallback);
        static auto UnregisterHostMessageReceiver(winrt::guid const& receiverId);
    };
}
#endif
