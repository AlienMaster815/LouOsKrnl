// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_AccessCache_2_H
#define WINRT_Windows_Storage_AccessCache_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.AccessCache.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache
{
    struct AccessListEntry
    {
        hstring Token;
        hstring Metadata;
    };
    inline bool operator==(AccessListEntry const& left, AccessListEntry const& right) noexcept
    {
        return left.Token == right.Token && left.Metadata == right.Metadata;
    }
    inline bool operator!=(AccessListEntry const& left, AccessListEntry const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AccessListEntryView : Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>
    {
        AccessListEntryView(std::nullptr_t) noexcept {}
        AccessListEntryView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemRemovedEventArgs : Windows::Storage::AccessCache::IItemRemovedEventArgs
    {
        ItemRemovedEventArgs(std::nullptr_t) noexcept {}
        ItemRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::AccessCache::IItemRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct StorageApplicationPermissions
    {
        StorageApplicationPermissions() = delete;
        [[nodiscard]] static auto FutureAccessList();
        [[nodiscard]] static auto MostRecentlyUsedList();
        static auto GetFutureAccessListForUser(Windows::System::User const& user);
        static auto GetMostRecentlyUsedListForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) StorageItemAccessList : Windows::Storage::AccessCache::IStorageItemAccessList
    {
        StorageItemAccessList(std::nullptr_t) noexcept {}
        StorageItemAccessList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::AccessCache::IStorageItemAccessList(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorageItemMostRecentlyUsedList : Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList,
        impl::require<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        StorageItemMostRecentlyUsedList(std::nullptr_t) noexcept {}
        StorageItemMostRecentlyUsedList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList(ptr, take_ownership_from_abi) {}
        using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::Add;
        using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::Add;
        using Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList::AddOrReplace;
        using impl::consume_t<StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>::AddOrReplace;
    };
}
#endif
