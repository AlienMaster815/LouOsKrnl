// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_BulkAccess_0_H
#define WINRT_Windows_Storage_BulkAccess_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::FileProperties
{
    struct BasicProperties;
    struct DocumentProperties;
    struct ImageProperties;
    struct MusicProperties;
    struct StorageItemThumbnail;
    enum class ThumbnailMode : int32_t;
    enum class ThumbnailOptions : uint32_t;
    struct VideoProperties;
}
namespace winrt::Windows::Storage::Search
{
    struct IStorageQueryResultBase;
}
namespace winrt::Windows::Storage::BulkAccess
{
    struct IFileInformationFactory;
    struct IFileInformationFactoryFactory;
    struct IStorageItemInformation;
    struct FileInformation;
    struct FileInformationFactory;
    struct FolderInformation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::BulkAccess::FileInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::BulkAccess::FileInformationFactory>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::BulkAccess::FolderInformation>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.IFileInformationFactory" };
    };
    template <> struct name<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.IFileInformationFactoryFactory" };
    };
    template <> struct name<Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.IStorageItemInformation" };
    };
    template <> struct name<Windows::Storage::BulkAccess::FileInformation>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.FileInformation" };
    };
    template <> struct name<Windows::Storage::BulkAccess::FileInformationFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.FileInformationFactory" };
    };
    template <> struct name<Windows::Storage::BulkAccess::FolderInformation>
    {
        static constexpr auto & value{ L"Windows.Storage.BulkAccess.FolderInformation" };
    };
    template <> struct guid_storage<Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        static constexpr guid value{ 0x401D88BE,0x960F,0x4D6D,{ 0xA7,0xD0,0x1A,0x38,0x61,0xE7,0x6C,0x83 } };
    };
    template <> struct guid_storage<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        static constexpr guid value{ 0x84EA0E7D,0xE4A2,0x4F00,{ 0x8A,0xFA,0xAF,0x5E,0x0F,0x82,0x6B,0xD5 } };
    };
    template <> struct guid_storage<Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        static constexpr guid value{ 0x87A5CB8B,0x8972,0x4F40,{ 0x8D,0xE0,0xD8,0x6F,0xB1,0x79,0xD8,0xFA } };
    };
    template <> struct default_interface<Windows::Storage::BulkAccess::FileInformation>
    {
        using type = Windows::Storage::BulkAccess::IStorageItemInformation;
    };
    template <> struct default_interface<Windows::Storage::BulkAccess::FileInformationFactory>
    {
        using type = Windows::Storage::BulkAccess::IFileInformationFactory;
    };
    template <> struct default_interface<Windows::Storage::BulkAccess::FolderInformation>
    {
        using type = Windows::Storage::BulkAccess::IStorageItemInformation;
    };
    template <> struct abi<Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemsAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemsAsyncDefaultStartAndCount(void**) noexcept = 0;
            virtual int32_t __stdcall GetFilesAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFilesAsyncDefaultStartAndCount(void**) noexcept = 0;
            virtual int32_t __stdcall GetFoldersAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFoldersAsyncDefaultStartAndCount(void**) noexcept = 0;
            virtual int32_t __stdcall GetVirtualizedItemsVector(void**) noexcept = 0;
            virtual int32_t __stdcall GetVirtualizedFilesVector(void**) noexcept = 0;
            virtual int32_t __stdcall GetVirtualizedFoldersVector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithMode(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithModeAndSize(void*, int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithModeAndSizeAndOptions(void*, int32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithModeAndSizeAndOptionsAndFlags(void*, int32_t, uint32_t, uint32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_BasicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall add_ThumbnailUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ThumbnailUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertiesUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_BulkAccess_IFileInformationFactory
    {
        auto GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        auto GetItemsAsync() const;
        auto GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        auto GetFilesAsync() const;
        auto GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        auto GetFoldersAsync() const;
        auto GetVirtualizedItemsVector() const;
        auto GetVirtualizedFilesVector() const;
        auto GetVirtualizedFoldersVector() const;
    };
    template <> struct consume<Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        template <typename D> using type = consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory
    {
        auto CreateWithMode(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) const;
        auto CreateWithModeAndSize(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) const;
        auto CreateWithModeAndSizeAndOptions(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) const;
        auto CreateWithModeAndSizeAndOptionsAndFlags(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) const;
    };
    template <> struct consume<Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        template <typename D> using type = consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_BulkAccess_IStorageItemInformation
    {
        [[nodiscard]] auto MusicProperties() const;
        [[nodiscard]] auto VideoProperties() const;
        [[nodiscard]] auto ImageProperties() const;
        [[nodiscard]] auto DocumentProperties() const;
        [[nodiscard]] auto BasicProperties() const;
        [[nodiscard]] auto Thumbnail() const;
        auto ThumbnailUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
        using ThumbnailUpdated_revoker = impl::event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation, &impl::abi_t<Windows::Storage::BulkAccess::IStorageItemInformation>::remove_ThumbnailUpdated>;
        ThumbnailUpdated_revoker ThumbnailUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
        auto ThumbnailUpdated(winrt::event_token const& eventCookie) const noexcept;
        auto PropertiesUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
        using PropertiesUpdated_revoker = impl::event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation, &impl::abi_t<Windows::Storage::BulkAccess::IStorageItemInformation>::remove_PropertiesUpdated>;
        PropertiesUpdated_revoker PropertiesUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const;
        auto PropertiesUpdated(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        template <typename D> using type = consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>;
    };
}
#endif
