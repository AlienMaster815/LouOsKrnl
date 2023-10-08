// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_FileProperties_0_H
#define WINRT_Windows_Storage_FileProperties_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct Geolocator;
    struct Geopoint;
}
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
namespace winrt::Windows::Storage::FileProperties
{
    enum class PhotoOrientation : int32_t
    {
        Unspecified = 0,
        Normal = 1,
        FlipHorizontal = 2,
        Rotate180 = 3,
        FlipVertical = 4,
        Transpose = 5,
        Rotate270 = 6,
        Transverse = 7,
        Rotate90 = 8,
    };
    enum class PropertyPrefetchOptions : uint32_t
    {
        None = 0,
        MusicProperties = 0x1,
        VideoProperties = 0x2,
        ImageProperties = 0x4,
        DocumentProperties = 0x8,
        BasicProperties = 0x10,
    };
    enum class ThumbnailMode : int32_t
    {
        PicturesView = 0,
        VideosView = 1,
        MusicView = 2,
        DocumentsView = 3,
        ListView = 4,
        SingleItem = 5,
    };
    enum class ThumbnailOptions : uint32_t
    {
        None = 0,
        ReturnOnlyIfCached = 0x1,
        ResizeThumbnail = 0x2,
        UseCurrentScale = 0x4,
    };
    enum class ThumbnailType : int32_t
    {
        Image = 0,
        Icon = 1,
    };
    enum class VideoOrientation : int32_t
    {
        Normal = 0,
        Rotate90 = 90,
        Rotate180 = 180,
        Rotate270 = 270,
    };
    struct IBasicProperties;
    struct IDocumentProperties;
    struct IGeotagHelperStatics;
    struct IImageProperties;
    struct IMusicProperties;
    struct IStorageItemContentProperties;
    struct IStorageItemExtraProperties;
    struct IThumbnailProperties;
    struct IVideoProperties;
    struct BasicProperties;
    struct DocumentProperties;
    struct GeotagHelper;
    struct ImageProperties;
    struct MusicProperties;
    struct StorageItemContentProperties;
    struct StorageItemThumbnail;
    struct VideoProperties;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::FileProperties::IBasicProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IDocumentProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IImageProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IMusicProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IThumbnailProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::IVideoProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::FileProperties::BasicProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::DocumentProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::GeotagHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::ImageProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::MusicProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::StorageItemContentProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::StorageItemThumbnail>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::VideoProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::FileProperties::PhotoOrientation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::FileProperties::PropertyPrefetchOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::FileProperties::ThumbnailMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::FileProperties::ThumbnailOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::FileProperties::ThumbnailType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::FileProperties::VideoOrientation>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Storage::FileProperties::IBasicProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IBasicProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IDocumentProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IDocumentProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IGeotagHelperStatics" };
    };
    template <> struct name<Windows::Storage::FileProperties::IImageProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IImageProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IMusicProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IMusicProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IStorageItemContentProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IStorageItemExtraProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IThumbnailProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IThumbnailProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::IVideoProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.IVideoProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::BasicProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.BasicProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::DocumentProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.DocumentProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::GeotagHelper>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.GeotagHelper" };
    };
    template <> struct name<Windows::Storage::FileProperties::ImageProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.ImageProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::MusicProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.MusicProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::StorageItemContentProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.StorageItemContentProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::StorageItemThumbnail>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.StorageItemThumbnail" };
    };
    template <> struct name<Windows::Storage::FileProperties::VideoProperties>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.VideoProperties" };
    };
    template <> struct name<Windows::Storage::FileProperties::PhotoOrientation>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.PhotoOrientation" };
    };
    template <> struct name<Windows::Storage::FileProperties::PropertyPrefetchOptions>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.PropertyPrefetchOptions" };
    };
    template <> struct name<Windows::Storage::FileProperties::ThumbnailMode>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.ThumbnailMode" };
    };
    template <> struct name<Windows::Storage::FileProperties::ThumbnailOptions>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.ThumbnailOptions" };
    };
    template <> struct name<Windows::Storage::FileProperties::ThumbnailType>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.ThumbnailType" };
    };
    template <> struct name<Windows::Storage::FileProperties::VideoOrientation>
    {
        static constexpr auto & value{ L"Windows.Storage.FileProperties.VideoOrientation" };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IBasicProperties>
    {
        static constexpr guid value{ 0xD05D55DB,0x785E,0x4A66,{ 0xBE,0x02,0x9B,0xEE,0xC5,0x8A,0xEA,0x81 } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IDocumentProperties>
    {
        static constexpr guid value{ 0x7EAB19BC,0x1821,0x4923,{ 0xB4,0xA9,0x0A,0xEA,0x40,0x4D,0x00,0x70 } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        static constexpr guid value{ 0x41493244,0x2524,0x4655,{ 0x86,0xA6,0xED,0x16,0xF5,0xFC,0x71,0x6B } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IImageProperties>
    {
        static constexpr guid value{ 0x523C9424,0xFCFF,0x4275,{ 0xAF,0xEE,0xEC,0xDB,0x9A,0xB4,0x79,0x73 } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IMusicProperties>
    {
        static constexpr guid value{ 0xBC8AAB62,0x66EC,0x419A,{ 0xBC,0x5D,0xCA,0x65,0xA4,0xCB,0x46,0xDA } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        static constexpr guid value{ 0x05294BAD,0xBC38,0x48BF,{ 0x85,0xD7,0x77,0x0E,0x0E,0x2A,0xE0,0xBA } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        static constexpr guid value{ 0xC54361B2,0x54CD,0x432B,{ 0xBD,0xBC,0x4B,0x19,0xC4,0xB4,0x70,0xD7 } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IThumbnailProperties>
    {
        static constexpr guid value{ 0x693DD42F,0xDBE7,0x49B5,{ 0xB3,0xB3,0x28,0x93,0xAC,0x5D,0x34,0x23 } };
    };
    template <> struct guid_storage<Windows::Storage::FileProperties::IVideoProperties>
    {
        static constexpr guid value{ 0x719AE507,0x68DE,0x4DB8,{ 0x97,0xDE,0x49,0x99,0x8C,0x05,0x9F,0x2F } };
    };
    template <> struct default_interface<Windows::Storage::FileProperties::BasicProperties>
    {
        using type = Windows::Storage::FileProperties::IBasicProperties;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::DocumentProperties>
    {
        using type = Windows::Storage::FileProperties::IDocumentProperties;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::ImageProperties>
    {
        using type = Windows::Storage::FileProperties::IImageProperties;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::MusicProperties>
    {
        using type = Windows::Storage::FileProperties::IMusicProperties;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::StorageItemContentProperties>
    {
        using type = Windows::Storage::FileProperties::IStorageItemContentProperties;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::StorageItemThumbnail>
    {
        using type = Windows::Storage::Streams::IRandomAccessStreamWithContentType;
    };
    template <> struct default_interface<Windows::Storage::FileProperties::VideoProperties>
    {
        using type = Windows::Storage::FileProperties::IVideoProperties;
    };
    template <> struct abi<Windows::Storage::FileProperties::IBasicProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DateModified(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItemDate(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IDocumentProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall put_Comment(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetGeotagAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetGeotagFromGeolocatorAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetGeotagAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IImageProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateTaken(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DateTaken(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Latitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Longitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraManufacturer(void*) noexcept = 0;
            virtual int32_t __stdcall get_CameraModel(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraModel(void*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PeopleNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IMusicProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Album(void**) noexcept = 0;
            virtual int32_t __stdcall put_Album(void*) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall put_Artist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Genre(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArtist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Composers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Conductors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Producers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
            virtual int32_t __stdcall put_Publisher(void*) noexcept = 0;
            virtual int32_t __stdcall get_Writers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Year(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Year(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMusicPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetVideoPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetImagePropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDocumentPropertiesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RetrievePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SavePropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SavePropertiesAsyncOverloadDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IThumbnailProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OriginalWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OriginalHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReturnedSmallerCachedSize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::FileProperties::IVideoProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rating(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rating(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Latitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Longitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Producers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
            virtual int32_t __stdcall put_Publisher(void*) noexcept = 0;
            virtual int32_t __stdcall get_Writers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Year(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Year(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Directors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IBasicProperties
    {
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto DateModified() const;
        [[nodiscard]] auto ItemDate() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IBasicProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IBasicProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IDocumentProperties
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto Comment() const;
        auto Comment(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IDocumentProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IDocumentProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IGeotagHelperStatics
    {
        auto GetGeotagAsync(Windows::Storage::IStorageFile const& file) const;
        auto SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator) const;
        auto SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint) const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IGeotagHelperStatics>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IGeotagHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IImageProperties
    {
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto DateTaken() const;
        auto DateTaken(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Latitude() const;
        [[nodiscard]] auto Longitude() const;
        [[nodiscard]] auto CameraManufacturer() const;
        auto CameraManufacturer(param::hstring const& value) const;
        [[nodiscard]] auto CameraModel() const;
        auto CameraModel(param::hstring const& value) const;
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto PeopleNames() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IImageProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IImageProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IMusicProperties
    {
        [[nodiscard]] auto Album() const;
        auto Album(param::hstring const& value) const;
        [[nodiscard]] auto Artist() const;
        auto Artist(param::hstring const& value) const;
        [[nodiscard]] auto Genre() const;
        [[nodiscard]] auto TrackNumber() const;
        auto TrackNumber(uint32_t value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Bitrate() const;
        [[nodiscard]] auto AlbumArtist() const;
        auto AlbumArtist(param::hstring const& value) const;
        [[nodiscard]] auto Composers() const;
        [[nodiscard]] auto Conductors() const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
        [[nodiscard]] auto Producers() const;
        [[nodiscard]] auto Publisher() const;
        auto Publisher(param::hstring const& value) const;
        [[nodiscard]] auto Writers() const;
        [[nodiscard]] auto Year() const;
        auto Year(uint32_t value) const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IMusicProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IMusicProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IStorageItemContentProperties
    {
        auto GetMusicPropertiesAsync() const;
        auto GetVideoPropertiesAsync() const;
        auto GetImagePropertiesAsync() const;
        auto GetDocumentPropertiesAsync() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IStorageItemContentProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IStorageItemExtraProperties
    {
        auto RetrievePropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const;
        auto SavePropertiesAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>> const& propertiesToSave) const;
        auto SavePropertiesAsync() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IStorageItemExtraProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IThumbnailProperties
    {
        [[nodiscard]] auto OriginalWidth() const;
        [[nodiscard]] auto OriginalHeight() const;
        [[nodiscard]] auto ReturnedSmallerCachedSize() const;
        [[nodiscard]] auto Type() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IThumbnailProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IThumbnailProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_FileProperties_IVideoProperties
    {
        [[nodiscard]] auto Rating() const;
        auto Rating(uint32_t value) const;
        [[nodiscard]] auto Keywords() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Latitude() const;
        [[nodiscard]] auto Longitude() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
        [[nodiscard]] auto Producers() const;
        [[nodiscard]] auto Publisher() const;
        auto Publisher(param::hstring const& value) const;
        [[nodiscard]] auto Writers() const;
        [[nodiscard]] auto Year() const;
        auto Year(uint32_t value) const;
        [[nodiscard]] auto Bitrate() const;
        [[nodiscard]] auto Directors() const;
        [[nodiscard]] auto Orientation() const;
    };
    template <> struct consume<Windows::Storage::FileProperties::IVideoProperties>
    {
        template <typename D> using type = consume_Windows_Storage_FileProperties_IVideoProperties<D>;
    };
}
#endif
