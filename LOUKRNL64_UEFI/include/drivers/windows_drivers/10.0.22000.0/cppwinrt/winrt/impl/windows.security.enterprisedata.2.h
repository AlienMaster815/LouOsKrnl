// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_EnterpriseData_2_H
#define WINRT_Windows_Security_EnterpriseData_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.EnterpriseData.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData
{
    struct __declspec(empty_bases) BufferProtectUnprotectResult : Windows::Security::EnterpriseData::IBufferProtectUnprotectResult
    {
        BufferProtectUnprotectResult(std::nullptr_t) noexcept {}
        BufferProtectUnprotectResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IBufferProtectUnprotectResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataProtectionInfo : Windows::Security::EnterpriseData::IDataProtectionInfo
    {
        DataProtectionInfo(std::nullptr_t) noexcept {}
        DataProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IDataProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct DataProtectionManager
    {
        DataProtectionManager() = delete;
        static auto ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity);
        static auto UnprotectAsync(Windows::Storage::Streams::IBuffer const& data);
        static auto ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream);
        static auto UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream);
        static auto GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData);
        static auto GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream);
    };
    struct __declspec(empty_bases) FileProtectionInfo : Windows::Security::EnterpriseData::IFileProtectionInfo,
        impl::require<FileProtectionInfo, Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        FileProtectionInfo(std::nullptr_t) noexcept {}
        FileProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IFileProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct FileProtectionManager
    {
        FileProtectionManager() = delete;
        static auto ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static auto CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target);
        static auto GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source);
        static auto SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile);
        static auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile);
        static auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target);
        static auto CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption);
        static auto IsContainerAsync(Windows::Storage::IStorageFile const& file);
        static auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption);
        static auto SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities);
        static auto UnprotectAsync(Windows::Storage::IStorageItem const& target);
        static auto UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options);
    };
    struct FileRevocationManager
    {
        FileRevocationManager() = delete;
        static auto ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity);
        static auto CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem);
        static auto Revoke(param::hstring const& enterpriseIdentity);
        static auto GetStatusAsync(Windows::Storage::IStorageItem const& storageItem);
    };
    struct __declspec(empty_bases) FileUnprotectOptions : Windows::Security::EnterpriseData::IFileUnprotectOptions
    {
        FileUnprotectOptions(std::nullptr_t) noexcept {}
        FileUnprotectOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IFileUnprotectOptions(ptr, take_ownership_from_abi) {}
        explicit FileUnprotectOptions(bool audit);
    };
    struct __declspec(empty_bases) ProtectedAccessResumedEventArgs : Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs
    {
        ProtectedAccessResumedEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessResumedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedAccessSuspendingEventArgs : Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs
    {
        ProtectedAccessSuspendingEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessSuspendingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContainerExportResult : Windows::Security::EnterpriseData::IProtectedContainerExportResult
    {
        ProtectedContainerExportResult(std::nullptr_t) noexcept {}
        ProtectedContainerExportResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContainerExportResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContainerImportResult : Windows::Security::EnterpriseData::IProtectedContainerImportResult
    {
        ProtectedContainerImportResult(std::nullptr_t) noexcept {}
        ProtectedContainerImportResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContainerImportResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContentRevokedEventArgs : Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs
    {
        ProtectedContentRevokedEventArgs(std::nullptr_t) noexcept {}
        ProtectedContentRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedFileCreateResult : Windows::Security::EnterpriseData::IProtectedFileCreateResult
    {
        ProtectedFileCreateResult(std::nullptr_t) noexcept {}
        ProtectedFileCreateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectedFileCreateResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectionPolicyAuditInfo : Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo
    {
        ProtectionPolicyAuditInfo(std::nullptr_t) noexcept {}
        ProtectionPolicyAuditInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo(ptr, take_ownership_from_abi) {}
        ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription);
        ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription);
    };
    struct __declspec(empty_bases) ProtectionPolicyManager : Windows::Security::EnterpriseData::IProtectionPolicyManager,
        impl::require<ProtectionPolicyManager, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        ProtectionPolicyManager(std::nullptr_t) noexcept {}
        ProtectionPolicyManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IProtectionPolicyManager(ptr, take_ownership_from_abi) {}
        static auto IsIdentityManaged(param::hstring const& identity);
        static auto TryApplyProcessUIPolicy(param::hstring const& identity);
        static auto ClearProcessUIPolicy();
        static auto CreateCurrentThreadNetworkContext(param::hstring const& identity);
        static auto GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost);
        static auto RevokeContent(param::hstring const& identity);
        static auto GetForCurrentView();
        static auto ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        using ProtectedAccessSuspending_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending>;
        [[nodiscard]] static ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        static auto ProtectedAccessSuspending(winrt::event_token const& token);
        static auto ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        using ProtectedAccessResumed_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed>;
        [[nodiscard]] static ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        static auto ProtectedAccessResumed(winrt::event_token const& token);
        static auto ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        using ProtectedContentRevoked_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked>;
        [[nodiscard]] static ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        static auto ProtectedContentRevoked(winrt::event_token const& token);
        static auto CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static auto HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since);
        static auto CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static auto GetEnforcementLevel(param::hstring const& identity);
        static auto IsUserDecryptionAllowed(param::hstring const& identity);
        static auto IsProtectionUnderLockRequired(param::hstring const& identity);
        static auto PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PolicyChanged_revoker = impl::factory_event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged>;
        [[nodiscard]] static PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PolicyChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsProtectionEnabled();
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static auto LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto IsRoamableProtectionEnabled(param::hstring const& identity);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static auto IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName);
        [[nodiscard]] static auto PrimaryManagedIdentity();
        static auto GetPrimaryManagedIdentityForIdentity(param::hstring const& identity);
    };
    struct __declspec(empty_bases) ThreadNetworkContext : Windows::Security::EnterpriseData::IThreadNetworkContext,
        impl::require<ThreadNetworkContext, Windows::Foundation::IClosable>
    {
        ThreadNetworkContext(std::nullptr_t) noexcept {}
        ThreadNetworkContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::EnterpriseData::IThreadNetworkContext(ptr, take_ownership_from_abi) {}
    };
}
#endif
