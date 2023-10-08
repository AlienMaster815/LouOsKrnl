// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_AccessCache_0_H
#define WINRT_Windows_Storage_AccessCache_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Storage
{
    struct IStorageItem;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Storage::AccessCache
{
    enum class AccessCacheOptions : uint32_t
    {
        None = 0,
        DisallowUserInput = 0x1,
        FastLocationsOnly = 0x2,
        UseReadOnlyCachedCopy = 0x4,
        SuppressAccessTimeUpdate = 0x8,
    };
    enum class RecentStorageItemVisibility : int32_t
    {
        AppOnly = 0,
        AppAndSystem = 1,
    };
    struct IItemRemovedEventArgs;
    struct IStorageApplicationPermissionsStatics;
    struct IStorageApplicationPermissionsStatics2;
    struct IStorageItemAccessList;
    struct IStorageItemMostRecentlyUsedList;
    struct IStorageItemMostRecentlyUsedList2;
    struct AccessListEntryView;
    struct ItemRemovedEventArgs;
    struct StorageApplicationPermissions;
    struct StorageItemAccessList;
    struct StorageItemMostRecentlyUsedList;
    struct AccessListEntry;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::AccessCache::AccessListEntryView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::AccessCache::ItemRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::AccessCache::StorageApplicationPermissions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::AccessCache::StorageItemAccessList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::AccessCache::AccessCacheOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::AccessCache::RecentStorageItemVisibility>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::AccessCache::AccessListEntry>
    {
        using type = struct_category<hstring, hstring>;
    };
    template <> struct name<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IItemRemovedEventArgs" };
    };
    template <> struct name<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics" };
    };
    template <> struct name<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics2" };
    };
    template <> struct name<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemAccessList" };
    };
    template <> struct name<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList" };
    };
    template <> struct name<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2" };
    };
    template <> struct name<Windows::Storage::AccessCache::AccessListEntryView>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessListEntryView" };
    };
    template <> struct name<Windows::Storage::AccessCache::ItemRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.ItemRemovedEventArgs" };
    };
    template <> struct name<Windows::Storage::AccessCache::StorageApplicationPermissions>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageApplicationPermissions" };
    };
    template <> struct name<Windows::Storage::AccessCache::StorageItemAccessList>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageItemAccessList" };
    };
    template <> struct name<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList" };
    };
    template <> struct name<Windows::Storage::AccessCache::AccessCacheOptions>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessCacheOptions" };
    };
    template <> struct name<Windows::Storage::AccessCache::RecentStorageItemVisibility>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.RecentStorageItemVisibility" };
    };
    template <> struct name<Windows::Storage::AccessCache::AccessListEntry>
    {
        static constexpr auto & value{ L"Windows.Storage.AccessCache.AccessListEntry" };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        static constexpr guid value{ 0x59677E5C,0x55BE,0x4C66,{ 0xBA,0x66,0x5E,0xAE,0xA7,0x9D,0x26,0x31 } };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        static constexpr guid value{ 0x4391DFAA,0xD033,0x48F9,{ 0x80,0x60,0x3E,0xC8,0x47,0xD2,0xE3,0xF1 } };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        static constexpr guid value{ 0x072716EC,0xAA05,0x4294,{ 0x9A,0x11,0x1A,0x3D,0x04,0x51,0x9A,0xD0 } };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        static constexpr guid value{ 0x2CAFF6AD,0xDE90,0x47F5,{ 0xB2,0xC3,0xDD,0x36,0xC9,0xFD,0xD4,0x53 } };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        static constexpr guid value{ 0x016239D5,0x510D,0x411E,{ 0x8C,0xF1,0xC3,0xD1,0xEF,0xFA,0x4C,0x33 } };
    };
    template <> struct guid_storage<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        static constexpr guid value{ 0xDA481EA0,0xED8D,0x4731,{ 0xA1,0xDB,0xE4,0x4E,0xE2,0x20,0x40,0x93 } };
    };
    template <> struct default_interface<Windows::Storage::AccessCache::AccessListEntryView>
    {
        using type = Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>;
    };
    template <> struct default_interface<Windows::Storage::AccessCache::ItemRemovedEventArgs>
    {
        using type = Windows::Storage::AccessCache::IItemRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Storage::AccessCache::StorageItemAccessList>
    {
        using type = Windows::Storage::AccessCache::IStorageItemAccessList;
    };
    template <> struct default_interface<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>
    {
        using type = Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList;
    };
    template <> struct abi<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemovedEntry(struct struct_Windows_Storage_AccessCache_AccessListEntry*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FutureAccessList(void**) noexcept = 0;
            virtual int32_t __stdcall get_MostRecentlyUsedList(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFutureAccessListForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMostRecentlyUsedListForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddOverloadDefaultMetadata(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Add(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddOrReplaceOverloadDefaultMetadata(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddOrReplace(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFileWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall ContainsItem(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall CheckAccess(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_Entries(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaximumItemsAllowed(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ItemRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemRemoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddWithMetadataAndVisibility(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AddOrReplaceWithMetadataAndVisibility(void*, void*, void*, int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IItemRemovedEventArgs
    {
        [[nodiscard]] auto RemovedEntry() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IItemRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics
    {
        [[nodiscard]] auto FutureAccessList() const;
        [[nodiscard]] auto MostRecentlyUsedList() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics2
    {
        auto GetFutureAccessListForUser(Windows::System::User const& user) const;
        auto GetMostRecentlyUsedListForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemAccessList
    {
        auto Add(Windows::Storage::IStorageItem const& file) const;
        auto Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
        auto AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file) const;
        auto AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
        auto GetItemAsync(param::hstring const& token) const;
        auto GetFileAsync(param::hstring const& token) const;
        auto GetFolderAsync(param::hstring const& token) const;
        auto GetItemAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        auto GetFileAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        auto GetFolderAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        auto Remove(param::hstring const& token) const;
        auto ContainsItem(param::hstring const& token) const;
        auto Clear() const;
        auto CheckAccess(Windows::Storage::IStorageItem const& file) const;
        [[nodiscard]] auto Entries() const;
        [[nodiscard]] auto MaximumItemsAllowed() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList
    {
        auto ItemRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
        using ItemRemoved_revoker = impl::event_revoker<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList, &impl::abi_t<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>::remove_ItemRemoved>;
        ItemRemoved_revoker ItemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
        auto ItemRemoved(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2
    {
        auto Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
        auto AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2<D>;
    };
    struct struct_Windows_Storage_AccessCache_AccessListEntry
    {
        void* Token;
        void* Metadata;
    };
    template <> struct abi<Windows::Storage::AccessCache::AccessListEntry>
    {
        using type = struct_Windows_Storage_AccessCache_AccessListEntry;
    };
}
#endif
