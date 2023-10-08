// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_EnterpriseData_0_H
#define WINRT_Windows_Security_EnterpriseData_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Storage
{
    enum class CreationCollisionOption : int32_t;
    struct IStorageFile;
    struct IStorageFolder;
    struct IStorageItem;
    enum class NameCollisionOption : int32_t;
    struct StorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
    struct IRandomAccessStream;
}
namespace winrt::Windows::Security::EnterpriseData
{
    enum class DataProtectionStatus : int32_t
    {
        ProtectedToOtherIdentity = 0,
        Protected = 1,
        Revoked = 2,
        Unprotected = 3,
        LicenseExpired = 4,
        AccessSuspended = 5,
    };
    enum class EnforcementLevel : int32_t
    {
        NoProtection = 0,
        Silent = 1,
        Override = 2,
        Block = 3,
    };
    enum class FileProtectionStatus : int32_t
    {
        Undetermined = 0,
        Unknown = 0,
        Unprotected = 1,
        Revoked = 2,
        Protected = 3,
        ProtectedByOtherUser = 4,
        ProtectedToOtherEnterprise = 5,
        NotProtectable = 6,
        ProtectedToOtherIdentity = 7,
        LicenseExpired = 8,
        AccessSuspended = 9,
        FileInUse = 10,
    };
    enum class ProtectedImportExportStatus : int32_t
    {
        Ok = 0,
        Undetermined = 1,
        Unprotected = 2,
        Revoked = 3,
        NotRoamable = 4,
        ProtectedToOtherIdentity = 5,
        LicenseExpired = 6,
        AccessSuspended = 7,
    };
    enum class ProtectionPolicyAuditAction : int32_t
    {
        Decrypt = 0,
        CopyToLocation = 1,
        SendToRecipient = 2,
        Other = 3,
    };
    enum class ProtectionPolicyEvaluationResult : int32_t
    {
        Allowed = 0,
        Blocked = 1,
        ConsentRequired = 2,
    };
    enum class ProtectionPolicyRequestAccessBehavior : int32_t
    {
        Decrypt = 0,
        TreatOverridePolicyAsBlock = 1,
    };
    struct IBufferProtectUnprotectResult;
    struct IDataProtectionInfo;
    struct IDataProtectionManagerStatics;
    struct IFileProtectionInfo;
    struct IFileProtectionInfo2;
    struct IFileProtectionManagerStatics;
    struct IFileProtectionManagerStatics2;
    struct IFileProtectionManagerStatics3;
    struct IFileRevocationManagerStatics;
    struct IFileUnprotectOptions;
    struct IFileUnprotectOptionsFactory;
    struct IProtectedAccessResumedEventArgs;
    struct IProtectedAccessSuspendingEventArgs;
    struct IProtectedContainerExportResult;
    struct IProtectedContainerImportResult;
    struct IProtectedContentRevokedEventArgs;
    struct IProtectedFileCreateResult;
    struct IProtectionPolicyAuditInfo;
    struct IProtectionPolicyAuditInfoFactory;
    struct IProtectionPolicyManager;
    struct IProtectionPolicyManager2;
    struct IProtectionPolicyManagerStatics;
    struct IProtectionPolicyManagerStatics2;
    struct IProtectionPolicyManagerStatics3;
    struct IProtectionPolicyManagerStatics4;
    struct IThreadNetworkContext;
    struct BufferProtectUnprotectResult;
    struct DataProtectionInfo;
    struct DataProtectionManager;
    struct FileProtectionInfo;
    struct FileProtectionManager;
    struct FileRevocationManager;
    struct FileUnprotectOptions;
    struct ProtectedAccessResumedEventArgs;
    struct ProtectedAccessSuspendingEventArgs;
    struct ProtectedContainerExportResult;
    struct ProtectedContainerImportResult;
    struct ProtectedContentRevokedEventArgs;
    struct ProtectedFileCreateResult;
    struct ProtectionPolicyAuditInfo;
    struct ProtectionPolicyManager;
    struct ThreadNetworkContext;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::DataProtectionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::DataProtectionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::FileProtectionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::FileProtectionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::FileRevocationManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::FileUnprotectOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedContainerExportResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedContainerImportResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedFileCreateResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ThreadNetworkContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::DataProtectionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::EnforcementLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::FileProtectionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectedImportExportStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IBufferProtectUnprotectResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IDataProtectionInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IDataProtectionManagerStatics" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionInfo2" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics2" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics3" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileUnprotectOptions" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContainerExportResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContainerImportResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectedFileCreateResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManager" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManager2" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4" };
    };
    template <> struct name<Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.IThreadNetworkContext" };
    };
    template <> struct name<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::DataProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::DataProtectionManager>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionManager" };
    };
    template <> struct name<Windows::Security::EnterpriseData::FileProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::FileProtectionManager>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionManager" };
    };
    template <> struct name<Windows::Security::EnterpriseData::FileRevocationManager>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileRevocationManager" };
    };
    template <> struct name<Windows::Security::EnterpriseData::FileUnprotectOptions>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileUnprotectOptions" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedContainerExportResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContainerExportResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedContainerImportResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContainerImportResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedFileCreateResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedFileCreateResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyManager>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyManager" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ThreadNetworkContext>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ThreadNetworkContext" };
    };
    template <> struct name<Windows::Security::EnterpriseData::DataProtectionStatus>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.DataProtectionStatus" };
    };
    template <> struct name<Windows::Security::EnterpriseData::EnforcementLevel>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.EnforcementLevel" };
    };
    template <> struct name<Windows::Security::EnterpriseData::FileProtectionStatus>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.FileProtectionStatus" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectedImportExportStatus>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectedImportExportStatus" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyAuditAction" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult" };
    };
    template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior>
    {
        static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyRequestAccessBehavior" };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        static constexpr guid value{ 0x47995EDC,0x6CEC,0x4E3A,{ 0xB2,0x51,0x9E,0x74,0x85,0xD7,0x9E,0x7A } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        static constexpr guid value{ 0x8420B0C1,0x5E31,0x4405,{ 0x95,0x40,0x3F,0x94,0x3A,0xF0,0xCB,0x26 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        static constexpr guid value{ 0xB6149B74,0x9144,0x4EE4,{ 0x8A,0x8A,0x30,0xB5,0xF3,0x61,0x43,0x0E } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        static constexpr guid value{ 0x4EE96486,0x147E,0x4DD0,{ 0x8F,0xAF,0x52,0x53,0xED,0x91,0xAD,0x0C } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        static constexpr guid value{ 0x82123A4C,0x557A,0x498D,{ 0x8E,0x94,0x94,0x4C,0xD5,0x83,0x64,0x32 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        static constexpr guid value{ 0x5846FC9B,0xE613,0x426B,{ 0xBB,0x38,0x88,0xCB,0xA1,0xDC,0x9A,0xDB } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        static constexpr guid value{ 0x83D2A745,0x0483,0x41AB,{ 0xB2,0xD5,0xBC,0x7F,0x23,0xD7,0x4E,0xBB } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        static constexpr guid value{ 0x6918849A,0x624F,0x46D6,{ 0xB2,0x41,0xE9,0xCD,0x5F,0xDF,0x3E,0x3F } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        static constexpr guid value{ 0x256BBC3D,0x1C5D,0x4260,{ 0x8C,0x75,0x91,0x44,0xCF,0xB7,0x8B,0xA9 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        static constexpr guid value{ 0x7D1312F1,0x3B0D,0x4DD8,{ 0xA1,0xF8,0x1E,0xC5,0x38,0x22,0xE2,0xF3 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        static constexpr guid value{ 0x51AEB39C,0xDA8C,0x4C3F,{ 0x9B,0xFB,0xCB,0x73,0xA7,0xCC,0xE0,0xDD } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        static constexpr guid value{ 0xAC4DCA59,0x5D80,0x4E95,{ 0x8C,0x5F,0x85,0x39,0x45,0x0E,0xEB,0xE0 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        static constexpr guid value{ 0x75A193E0,0xA344,0x429F,{ 0xB9,0x75,0x04,0xFC,0x1F,0x88,0xC1,0x85 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        static constexpr guid value{ 0x3948EF95,0xF7FB,0x4B42,{ 0xAF,0xB0,0xDF,0x70,0xB4,0x15,0x43,0xC1 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        static constexpr guid value{ 0xCDB780D1,0xE7BB,0x4D1A,{ 0x93,0x39,0x34,0xDC,0x41,0x14,0x9F,0x9B } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        static constexpr guid value{ 0x63686821,0x58B9,0x47EE,{ 0x93,0xD9,0xF0,0xF7,0x41,0xCF,0x43,0xF0 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        static constexpr guid value{ 0x28E3ED6A,0xE9E7,0x4A03,{ 0x9F,0x53,0xBD,0xB1,0x61,0x72,0x69,0x9B } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        static constexpr guid value{ 0x425AB7E4,0xFEB7,0x44FC,{ 0xB3,0xBB,0xC3,0xC4,0xD7,0xEC,0xBE,0xBB } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        static constexpr guid value{ 0x7ED4180B,0x92E8,0x42D5,{ 0x83,0xD4,0x25,0x44,0x0B,0x42,0x35,0x49 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        static constexpr guid value{ 0xD5703E18,0xA08D,0x47E6,{ 0xA2,0x40,0x99,0x34,0xD7,0x16,0x5E,0xB5 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        static constexpr guid value{ 0xABF7527A,0x8435,0x417F,{ 0x99,0xB6,0x51,0xBE,0xAF,0x36,0x58,0x88 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        static constexpr guid value{ 0xC0BFFC66,0x8C3D,0x4D56,{ 0x88,0x04,0xC6,0x8F,0x0A,0xD3,0x2E,0xC5 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        static constexpr guid value{ 0xB68F9A8C,0x39E0,0x4649,{ 0xB2,0xE4,0x07,0x0A,0xB8,0xA5,0x79,0xB3 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        static constexpr guid value{ 0x48FF9E8C,0x6A6F,0x4D9F,{ 0xBC,0xED,0x18,0xAB,0x53,0x7A,0xA0,0x15 } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        static constexpr guid value{ 0x20B794DB,0xCCBD,0x490F,{ 0x8C,0x83,0x49,0xCC,0xB7,0x7A,0xEA,0x6C } };
    };
    template <> struct guid_storage<Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
        static constexpr guid value{ 0xFA4EA8E9,0xEF13,0x405A,{ 0xB1,0x2C,0xD7,0x34,0x8C,0x6F,0x41,0xFC } };
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>
    {
        using type = Windows::Security::EnterpriseData::IBufferProtectUnprotectResult;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::DataProtectionInfo>
    {
        using type = Windows::Security::EnterpriseData::IDataProtectionInfo;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::FileProtectionInfo>
    {
        using type = Windows::Security::EnterpriseData::IFileProtectionInfo;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::FileUnprotectOptions>
    {
        using type = Windows::Security::EnterpriseData::IFileUnprotectOptions;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>
    {
        using type = Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>
    {
        using type = Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContainerExportResult>
    {
        using type = Windows::Security::EnterpriseData::IProtectedContainerExportResult;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContainerImportResult>
    {
        using type = Windows::Security::EnterpriseData::IProtectedContainerImportResult;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>
    {
        using type = Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectedFileCreateResult>
    {
        using type = Windows::Security::EnterpriseData::IProtectedFileCreateResult;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>
    {
        using type = Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ProtectionPolicyManager>
    {
        using type = Windows::Security::EnterpriseData::IProtectionPolicyManager;
    };
    template <> struct default_interface<Windows::Security::EnterpriseData::ThreadNetworkContext>
    {
        using type = Windows::Security::EnterpriseData::IThreadNetworkContext;
    };
    template <> struct abi<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Buffer(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Identity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProtectAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProtectStreamAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProtectionInfoAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetStreamProtectionInfoAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsRoamable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Identity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsProtectWhileOpenSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProtectAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CopyProtectionAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProtectionInfoAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveFileAsContainerAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFileFromContainerAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFileFromContainerWithTargetAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateProtectedAndOpenAsync(void*, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsContainerAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveFileAsContainerWithSharingAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnprotectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectWithOptionsAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProtectAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CopyProtectionAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Revoke(void*) noexcept = 0;
            virtual int32_t __stdcall GetStatusAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Audit(bool) noexcept = 0;
            virtual int32_t __stdcall get_Audit(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identities(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_Stream(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Action(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_DataDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_TargetDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithActionAndDataDescription(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Identity(void*) noexcept = 0;
            virtual int32_t __stdcall get_Identity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ShowEnterpriseIndicator(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowEnterpriseIndicator(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsIdentityManaged(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryApplyProcessUIPolicy(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ClearProcessUIPolicy() noexcept = 0;
            virtual int32_t __stdcall CreateCurrentThreadNetworkContext(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPrimaryManagedIdentityForNetworkEndpointAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RevokeContent(void*) noexcept = 0;
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall add_ProtectedAccessSuspending(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProtectedAccessSuspending(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ProtectedAccessResumed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProtectedAccessResumed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ProtectedContentRevoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProtectedContentRevoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CheckAccess(void*, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall HasContentBeenRevokedSince(void*, int64_t, bool*) noexcept = 0;
            virtual int32_t __stdcall CheckAccessForApp(void*, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForAppAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEnforcementLevel(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsUserDecryptionAllowed(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsProtectionUnderLockRequired(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall add_PolicyChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PolicyChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsProtectionEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessWithAuditingInfoAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessWithMessageAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForAppWithAuditingInfoAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForAppWithMessageAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LogAuditEvent(void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsRoamableProtectionEnabled(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessWithBehaviorAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForAppWithBehaviorAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessToFilesForAppAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessToFilesForAppWithMessageAndBehaviorAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessToFilesForProcessAsync(void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(void*, uint32_t, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall IsFileProtectionRequiredAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsFileProtectionRequiredForNewFileAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryManagedIdentity(void**) noexcept = 0;
            virtual int32_t __stdcall GetPrimaryManagedIdentityForIdentity(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult
    {
        [[nodiscard]] auto Buffer() const;
        [[nodiscard]] auto ProtectionInfo() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IDataProtectionInfo
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Identity() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics
    {
        auto ProtectAsync(Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity) const;
        auto UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const;
        auto ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, Windows::Storage::Streams::IOutputStream const& protectedStream) const;
        auto UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& protectedStream, Windows::Storage::Streams::IOutputStream const& unprotectedStream) const;
        auto GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer const& protectedData) const;
        auto GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream const& protectedStream) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileProtectionInfo
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IsRoamable() const;
        [[nodiscard]] auto Identity() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileProtectionInfo2
    {
        [[nodiscard]] auto IsProtectWhileOpenSupported() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics
    {
        auto ProtectAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const;
        auto CopyProtectionAsync(Windows::Storage::IStorageItem const& source, Windows::Storage::IStorageItem const& target) const;
        auto GetProtectionInfoAsync(Windows::Storage::IStorageItem const& source) const;
        auto SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile) const;
        auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile) const;
        auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target) const;
        auto CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, Windows::Storage::CreationCollisionOption const& collisionOption) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2
    {
        auto IsContainerAsync(Windows::Storage::IStorageFile const& file) const;
        auto LoadFileFromContainerAsync(Windows::Storage::IStorageFile const& containerFile, Windows::Storage::IStorageItem const& target, Windows::Storage::NameCollisionOption const& collisionOption) const;
        auto SaveFileAsContainerAsync(Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3
    {
        auto UnprotectAsync(Windows::Storage::IStorageItem const& target) const;
        auto UnprotectAsync(Windows::Storage::IStorageItem const& target, Windows::Security::EnterpriseData::FileUnprotectOptions const& options) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics
    {
        auto ProtectAsync(Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity) const;
        auto CopyProtectionAsync(Windows::Storage::IStorageItem const& sourceStorageItem, Windows::Storage::IStorageItem const& targetStorageItem) const;
        auto Revoke(param::hstring const& enterpriseIdentity) const;
        auto GetStatusAsync(Windows::Storage::IStorageItem const& storageItem) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileUnprotectOptions
    {
        auto Audit(bool value) const;
        [[nodiscard]] auto Audit() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory
    {
        auto Create(bool audit) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs
    {
        [[nodiscard]] auto Identities() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs
    {
        [[nodiscard]] auto Identities() const;
        [[nodiscard]] auto Deadline() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto File() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto File() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs
    {
        [[nodiscard]] auto Identities() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult
    {
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto Stream() const;
        [[nodiscard]] auto ProtectionInfo() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo
    {
        auto Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& value) const;
        [[nodiscard]] auto Action() const;
        auto DataDescription(param::hstring const& value) const;
        [[nodiscard]] auto DataDescription() const;
        auto SourceDescription(param::hstring const& value) const;
        [[nodiscard]] auto SourceDescription() const;
        auto TargetDescription(param::hstring const& value) const;
        [[nodiscard]] auto TargetDescription() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory
    {
        auto Create(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) const;
        auto CreateWithActionAndDataDescription(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManager
    {
        auto Identity(param::hstring const& value) const;
        [[nodiscard]] auto Identity() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2
    {
        auto ShowEnterpriseIndicator(bool value) const;
        [[nodiscard]] auto ShowEnterpriseIndicator() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics
    {
        auto IsIdentityManaged(param::hstring const& identity) const;
        auto TryApplyProcessUIPolicy(param::hstring const& identity) const;
        auto ClearProcessUIPolicy() const;
        auto CreateCurrentThreadNetworkContext(param::hstring const& identity) const;
        auto GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::HostName const& endpointHost) const;
        auto RevokeContent(param::hstring const& identity) const;
        auto GetForCurrentView() const;
        auto ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const;
        using ProtectedAccessSuspending_revoker = impl::event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending>;
        ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const;
        auto ProtectedAccessSuspending(winrt::event_token const& token) const noexcept;
        auto ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const;
        using ProtectedAccessResumed_revoker = impl::event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed>;
        ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const;
        auto ProtectedAccessResumed(winrt::event_token const& token) const noexcept;
        auto ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const;
        using ProtectedContentRevoked_revoker = impl::event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked>;
        ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const;
        auto ProtectedContentRevoked(winrt::event_token const& token) const noexcept;
        auto CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const;
        auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2
    {
        auto HasContentBeenRevokedSince(param::hstring const& identity, Windows::Foundation::DateTime const& since) const;
        auto CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const;
        auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const;
        auto GetEnforcementLevel(param::hstring const& identity) const;
        auto IsUserDecryptionAllowed(param::hstring const& identity) const;
        auto IsProtectionUnderLockRequired(param::hstring const& identity) const;
        auto PolicyChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PolicyChanged_revoker = impl::event_revoker<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2, &impl::abi_t<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged>;
        PolicyChanged_revoker PolicyChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto PolicyChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto IsProtectionEnabled() const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3
    {
        auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
        auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const;
        auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
        auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const;
        auto LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4
    {
        auto IsRoamableProtectionEnabled(param::hstring const& identity) const;
        auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
        auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
        auto RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
        auto RequestAccessToFilesForAppAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
        auto RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const;
        auto RequestAccessToFilesForProcessAsync(param::async_iterable<Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const;
        auto IsFileProtectionRequiredAsync(Windows::Storage::IStorageItem const& target, param::hstring const& identity) const;
        auto IsFileProtectionRequiredForNewFileAsync(Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName) const;
        [[nodiscard]] auto PrimaryManagedIdentity() const;
        auto GetPrimaryManagedIdentityForIdentity(param::hstring const& identity) const;
    };
    template <> struct consume<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Security_EnterpriseData_IThreadNetworkContext
    {
    };
    template <> struct consume<Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
        template <typename D> using type = consume_Windows_Security_EnterpriseData_IThreadNetworkContext<D>;
    };
}
#endif
