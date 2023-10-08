// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_0_H
#define WINRT_Windows_Storage_Provider_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct IStorageFolder;
    struct IStorageItem;
    struct StorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Storage::Provider
{
    enum class CachedFileOptions : uint32_t
    {
        None = 0,
        RequireUpdateOnAccess = 0x1,
        UseCachedFileWhenOffline = 0x2,
        DenyAccessWhenOffline = 0x4,
    };
    enum class CachedFileTarget : int32_t
    {
        Local = 0,
        Remote = 1,
    };
    enum class FileUpdateStatus : int32_t
    {
        Incomplete = 0,
        Complete = 1,
        UserInputNeeded = 2,
        CurrentlyUnavailable = 3,
        Failed = 4,
        CompleteAndRenamed = 5,
    };
    enum class ReadActivationMode : int32_t
    {
        NotNeeded = 0,
        BeforeAccess = 1,
    };
    enum class StorageProviderHardlinkPolicy : uint32_t
    {
        None = 0,
        Allowed = 0x1,
    };
    enum class StorageProviderHydrationPolicy : int32_t
    {
        Partial = 0,
        Progressive = 1,
        Full = 2,
        AlwaysFull = 3,
    };
    enum class StorageProviderHydrationPolicyModifier : uint32_t
    {
        None = 0,
        ValidationRequired = 0x1,
        StreamingAllowed = 0x2,
        AutoDehydrationAllowed = 0x4,
    };
    enum class StorageProviderInSyncPolicy : uint32_t
    {
        Default = 0,
        FileCreationTime = 0x1,
        FileReadOnlyAttribute = 0x2,
        FileHiddenAttribute = 0x4,
        FileSystemAttribute = 0x8,
        DirectoryCreationTime = 0x10,
        DirectoryReadOnlyAttribute = 0x20,
        DirectoryHiddenAttribute = 0x40,
        DirectorySystemAttribute = 0x80,
        FileLastWriteTime = 0x100,
        DirectoryLastWriteTime = 0x200,
        PreserveInsyncForSyncEngine = 0x80000000,
    };
    enum class StorageProviderPopulationPolicy : int32_t
    {
        Full = 1,
        AlwaysFull = 2,
    };
    enum class StorageProviderProtectionMode : int32_t
    {
        Unknown = 0,
        Personal = 1,
    };
    enum class StorageProviderUriSourceStatus : int32_t
    {
        Success = 0,
        NoSyncRoot = 1,
        FileNotFound = 2,
    };
    enum class UIStatus : int32_t
    {
        Unavailable = 0,
        Hidden = 1,
        Visible = 2,
        Complete = 3,
    };
    enum class WriteActivationMode : int32_t
    {
        ReadOnly = 0,
        NotNeeded = 1,
        AfterWrite = 2,
    };
    struct ICachedFileUpdaterStatics;
    struct ICachedFileUpdaterUI;
    struct ICachedFileUpdaterUI2;
    struct IFileUpdateRequest;
    struct IFileUpdateRequest2;
    struct IFileUpdateRequestDeferral;
    struct IFileUpdateRequestedEventArgs;
    struct IStorageProviderFileTypeInfo;
    struct IStorageProviderFileTypeInfoFactory;
    struct IStorageProviderGetContentInfoForPathResult;
    struct IStorageProviderGetPathForContentUriResult;
    struct IStorageProviderItemPropertiesStatics;
    struct IStorageProviderItemProperty;
    struct IStorageProviderItemPropertyDefinition;
    struct IStorageProviderItemPropertySource;
    struct IStorageProviderPropertyCapabilities;
    struct IStorageProviderSyncRootInfo;
    struct IStorageProviderSyncRootInfo2;
    struct IStorageProviderSyncRootInfo3;
    struct IStorageProviderSyncRootManagerStatics;
    struct IStorageProviderSyncRootManagerStatics2;
    struct IStorageProviderUriSource;
    struct CachedFileUpdater;
    struct CachedFileUpdaterUI;
    struct FileUpdateRequest;
    struct FileUpdateRequestDeferral;
    struct FileUpdateRequestedEventArgs;
    struct StorageProviderFileTypeInfo;
    struct StorageProviderGetContentInfoForPathResult;
    struct StorageProviderGetPathForContentUriResult;
    struct StorageProviderItemProperties;
    struct StorageProviderItemProperty;
    struct StorageProviderItemPropertyDefinition;
    struct StorageProviderSyncRootInfo;
    struct StorageProviderSyncRootManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Provider::CachedFileUpdater>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::CachedFileUpdaterUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderFileTypeInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemProperty>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Provider::CachedFileOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::CachedFileTarget>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::FileUpdateStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::ReadActivationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderHardlinkPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderInSyncPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderPopulationPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderProtectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::StorageProviderUriSourceStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::UIStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Provider::WriteActivationMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterStatics" };
    };
    template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI" };
    };
    template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI2" };
    };
    template <> struct name<Windows::Storage::Provider::IFileUpdateRequest>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest" };
    };
    template <> struct name<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest2" };
    };
    template <> struct name<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestDeferral" };
    };
    template <> struct name<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderFileTypeInfo" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderFileTypeInfoFactory" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderGetContentInfoForPathResult" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderGetPathForContentUriResult" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemProperty" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderItemPropertySource" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo2" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo3" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics2" };
    };
    template <> struct name<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.IStorageProviderUriSource" };
    };
    template <> struct name<Windows::Storage::Provider::CachedFileUpdater>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdater" };
    };
    template <> struct name<Windows::Storage::Provider::CachedFileUpdaterUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdaterUI" };
    };
    template <> struct name<Windows::Storage::Provider::FileUpdateRequest>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequest" };
    };
    template <> struct name<Windows::Storage::Provider::FileUpdateRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestDeferral" };
    };
    template <> struct name<Windows::Storage::Provider::FileUpdateRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestedEventArgs" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderFileTypeInfo>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderFileTypeInfo" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderGetContentInfoForPathResult" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderGetPathForContentUriResult" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderItemProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemProperties" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderItemProperty>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemProperty" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderSyncRootInfo>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderSyncRootInfo" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderSyncRootManager>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderSyncRootManager" };
    };
    template <> struct name<Windows::Storage::Provider::CachedFileOptions>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileOptions" };
    };
    template <> struct name<Windows::Storage::Provider::CachedFileTarget>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileTarget" };
    };
    template <> struct name<Windows::Storage::Provider::FileUpdateStatus>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateStatus" };
    };
    template <> struct name<Windows::Storage::Provider::ReadActivationMode>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.ReadActivationMode" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderHardlinkPolicy>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHardlinkPolicy" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderHydrationPolicy>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHydrationPolicy" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderHydrationPolicyModifier" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderInSyncPolicy>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderInSyncPolicy" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderPopulationPolicy>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderPopulationPolicy" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderProtectionMode>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderProtectionMode" };
    };
    template <> struct name<Windows::Storage::Provider::StorageProviderUriSourceStatus>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.StorageProviderUriSourceStatus" };
    };
    template <> struct name<Windows::Storage::Provider::UIStatus>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.UIStatus" };
    };
    template <> struct name<Windows::Storage::Provider::WriteActivationMode>
    {
        static constexpr auto & value{ L"Windows.Storage.Provider.WriteActivationMode" };
    };
    template <> struct guid_storage<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        static constexpr guid value{ 0x9FC90920,0x7BCF,0x4888,{ 0xA8,0x1E,0x10,0x2D,0x70,0x34,0xD7,0xCE } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        static constexpr guid value{ 0x9E6F41E6,0xBAF2,0x4A97,{ 0xB6,0x00,0x93,0x33,0xF5,0xDF,0x80,0xFD } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        static constexpr guid value{ 0x8856A21C,0x8699,0x4340,{ 0x9F,0x49,0xF7,0xCA,0xD7,0xFE,0x89,0x91 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IFileUpdateRequest>
    {
        static constexpr guid value{ 0x40C82536,0xC1FE,0x4D93,{ 0xA7,0x92,0x1E,0x73,0x6B,0xC7,0x08,0x37 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        static constexpr guid value{ 0x82484648,0xBDBE,0x447B,{ 0xA2,0xEE,0x7A,0xFE,0x6A,0x03,0x2A,0x94 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        static constexpr guid value{ 0xFFCEDB2B,0x8ADE,0x44A5,{ 0xBB,0x00,0x16,0x4C,0x4E,0x72,0xF1,0x3A } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        static constexpr guid value{ 0x7B0A9342,0x3905,0x438D,{ 0xAA,0xEF,0x78,0xAE,0x26,0x5F,0x8D,0xD2 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        static constexpr guid value{ 0x1955B9C1,0x0184,0x5A88,{ 0x87,0xDF,0x45,0x44,0xF4,0x64,0x36,0x5D } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        static constexpr guid value{ 0x3FA12C6F,0xCCE6,0x5D5D,{ 0x80,0xB1,0x38,0x9E,0x7C,0xF9,0x2D,0xBF } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        static constexpr guid value{ 0x2564711D,0xAA89,0x4D12,{ 0x82,0xE3,0xF7,0x2A,0x92,0xE3,0x39,0x66 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        static constexpr guid value{ 0x63711A9D,0x4118,0x45A6,{ 0xAC,0xB6,0x22,0xC4,0x9D,0x01,0x9F,0x40 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        static constexpr guid value{ 0x2D2C1C97,0x2704,0x4729,{ 0x8F,0xA9,0x7E,0x6B,0x8E,0x15,0x8C,0x2F } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        static constexpr guid value{ 0x476CB558,0x730B,0x4188,{ 0xB7,0xB5,0x63,0xB7,0x16,0xED,0x47,0x6D } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        static constexpr guid value{ 0xC5B383BB,0xFF1F,0x4298,{ 0x83,0x1E,0xFF,0x1C,0x08,0x08,0x96,0x90 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        static constexpr guid value{ 0x8F6F9C3E,0xF632,0x4A9B,{ 0x8D,0x99,0xD2,0xD7,0xA1,0x1D,0xF5,0x6A } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        static constexpr guid value{ 0x658D2F0E,0x63B7,0x4567,{ 0xAC,0xF9,0x51,0xAB,0xE3,0x01,0xDD,0xA5 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        static constexpr guid value{ 0x7C1305C4,0x99F9,0x41AC,{ 0x89,0x04,0xAB,0x05,0x5D,0x65,0x49,0x26 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        static constexpr guid value{ 0xCF51B023,0x7CF1,0x5166,{ 0xBD,0xBA,0xEF,0xD9,0x5F,0x52,0x9E,0x31 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        static constexpr guid value{ 0x507A6617,0xBEF6,0x56FD,{ 0x85,0x5E,0x75,0xAC,0xE2,0xE4,0x5C,0xF5 } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        static constexpr guid value{ 0x3E99FBBF,0x8FE3,0x4B40,{ 0xAB,0xC7,0xF6,0xFC,0x3D,0x74,0xC9,0x8E } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        static constexpr guid value{ 0xEFB6CFEE,0x1374,0x544E,{ 0x9D,0xF1,0x55,0x98,0xD2,0xE9,0xCF,0xDD } };
    };
    template <> struct guid_storage<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        static constexpr guid value{ 0xB29806D1,0x8BE0,0x4962,{ 0x8B,0xB6,0x0D,0x4C,0x2E,0x14,0xD4,0x7A } };
    };
    template <> struct default_interface<Windows::Storage::Provider::CachedFileUpdaterUI>
    {
        using type = Windows::Storage::Provider::ICachedFileUpdaterUI;
    };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequest>
    {
        using type = Windows::Storage::Provider::IFileUpdateRequest;
    };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestDeferral>
    {
        using type = Windows::Storage::Provider::IFileUpdateRequestDeferral;
    };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestedEventArgs>
    {
        using type = Windows::Storage::Provider::IFileUpdateRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderFileTypeInfo>
    {
        using type = Windows::Storage::Provider::IStorageProviderFileTypeInfo;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>
    {
        using type = Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>
    {
        using type = Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemProperty>
    {
        using type = Windows::Storage::Provider::IStorageProviderItemProperty;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>
    {
        using type = Windows::Storage::Provider::IStorageProviderItemPropertyDefinition;
    };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderSyncRootInfo>
    {
        using type = Windows::Storage::Provider::IStorageProviderSyncRootInfo;
    };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetUpdateInformation(void*, void*, int32_t, int32_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTarget(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_FileUpdateRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileUpdateRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UIRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UIRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_UIStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateRequest(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentId(void**) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateLocalFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserInputNeededMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserInputNeededMessage(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileExtension(void**) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContentUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Id(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemProperties(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPropertySupported(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_HydrationPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HydrationPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HydrationPolicyModifier(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HydrationPolicyModifier(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PopulationPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PopulationPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InSyncPolicy(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InSyncPolicy(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HardlinkPolicy(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HardlinkPolicy(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ShowSiblingsAsGroup(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowSiblingsAsGroup(bool) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllowPinning(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowPinning(bool) noexcept = 0;
            virtual int32_t __stdcall get_StorageProviderItemPropertyDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecycleBinUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecycleBinUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProviderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_ProviderId(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackFileTypeInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(void*) noexcept = 0;
            virtual int32_t __stdcall Unregister(void*) noexcept = 0;
            virtual int32_t __stdcall GetSyncRootInformationForFolder(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSyncRootInformationForId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSyncRoots(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPathForContentUri(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetContentInfoForPath(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterStatics
    {
        auto SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto UpdateTarget() const;
        auto FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
        using FileUpdateRequested_revoker = impl::event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI, &impl::abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_FileUpdateRequested>;
        FileUpdateRequested_revoker FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
        auto FileUpdateRequested(winrt::event_token const& token) const noexcept;
        auto UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
        using UIRequested_revoker = impl::event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI, &impl::abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_UIRequested>;
        UIRequested_revoker UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
        auto UIRequested(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto UIStatus() const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI2
    {
        [[nodiscard]] auto UpdateRequest() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequest
    {
        [[nodiscard]] auto ContentId() const;
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::FileUpdateStatus const& value) const;
        auto GetDeferral() const;
        auto UpdateLocalFile(Windows::Storage::IStorageFile const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequest2
    {
        [[nodiscard]] auto UserInputNeededMessage() const;
        auto UserInputNeededMessage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo
    {
        [[nodiscard]] auto FileExtension() const;
        [[nodiscard]] auto IconResource() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderFileTypeInfoFactory
    {
        auto CreateInstance(param::hstring const& fileExtension, param::hstring const& iconResource) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderFileTypeInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult
    {
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const;
        [[nodiscard]] auto ContentUri() const;
        auto ContentUri(param::hstring const& value) const;
        [[nodiscard]] auto ContentId() const;
        auto ContentId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult
    {
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const;
        [[nodiscard]] auto Path() const;
        auto Path(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics
    {
        auto SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemProperty
    {
        auto Id(int32_t value) const;
        [[nodiscard]] auto Id() const;
        auto Value(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto IconResource(param::hstring const& value) const;
        [[nodiscard]] auto IconResource() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition
    {
        [[nodiscard]] auto Id() const;
        auto Id(int32_t value) const;
        [[nodiscard]] auto DisplayNameResource() const;
        auto DisplayNameResource(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertySource
    {
        auto GetItemProperties(param::hstring const& itemPath) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertySource<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities
    {
        auto IsPropertySupported(param::hstring const& propertyCanonicalName) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Context() const;
        auto Context(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto Path() const;
        auto Path(Windows::Storage::IStorageFolder const& value) const;
        [[nodiscard]] auto DisplayNameResource() const;
        auto DisplayNameResource(param::hstring const& value) const;
        [[nodiscard]] auto IconResource() const;
        auto IconResource(param::hstring const& value) const;
        [[nodiscard]] auto HydrationPolicy() const;
        auto HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy const& value) const;
        [[nodiscard]] auto HydrationPolicyModifier() const;
        auto HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const& value) const;
        [[nodiscard]] auto PopulationPolicy() const;
        auto PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy const& value) const;
        [[nodiscard]] auto InSyncPolicy() const;
        auto InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy const& value) const;
        [[nodiscard]] auto HardlinkPolicy() const;
        auto HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy const& value) const;
        [[nodiscard]] auto ShowSiblingsAsGroup() const;
        auto ShowSiblingsAsGroup(bool value) const;
        [[nodiscard]] auto Version() const;
        auto Version(param::hstring const& value) const;
        [[nodiscard]] auto ProtectionMode() const;
        auto ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode const& value) const;
        [[nodiscard]] auto AllowPinning() const;
        auto AllowPinning(bool value) const;
        [[nodiscard]] auto StorageProviderItemPropertyDefinitions() const;
        [[nodiscard]] auto RecycleBinUri() const;
        auto RecycleBinUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2
    {
        [[nodiscard]] auto ProviderId() const;
        auto ProviderId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo3
    {
        [[nodiscard]] auto FallbackFileTypeInfo() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo3<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics
    {
        auto Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation) const;
        auto Unregister(param::hstring const& id) const;
        auto GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder) const;
        auto GetSyncRootInformationForId(param::hstring const& id) const;
        auto GetCurrentSyncRoots() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderUriSource
    {
        auto GetPathForContentUri(param::hstring const& contentUri, Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const& result) const;
        auto GetContentInfoForPath(param::hstring const& path, Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const& result) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderUriSource<D>;
    };
}
#endif
