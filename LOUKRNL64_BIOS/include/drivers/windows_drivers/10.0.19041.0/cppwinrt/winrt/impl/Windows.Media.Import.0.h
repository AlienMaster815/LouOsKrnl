// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Import_0_H
#define WINRT_Windows_Media_Import_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage
{
    struct IStorageFolder;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Media::Import
{
    enum class PhotoImportAccessMode : int32_t
    {
        ReadWrite = 0,
        ReadOnly = 1,
        ReadAndDelete = 2,
    };
    enum class PhotoImportConnectionTransport : int32_t
    {
        Unknown = 0,
        Usb = 1,
        IP = 2,
        Bluetooth = 3,
    };
    enum class PhotoImportContentType : int32_t
    {
        Unknown = 0,
        Image = 1,
        Video = 2,
    };
    enum class PhotoImportContentTypeFilter : int32_t
    {
        OnlyImages = 0,
        OnlyVideos = 1,
        ImagesAndVideos = 2,
        ImagesAndVideosFromCameraRoll = 3,
    };
    enum class PhotoImportImportMode : int32_t
    {
        ImportEverything = 0,
        IgnoreSidecars = 1,
        IgnoreSiblings = 2,
        IgnoreSidecarsAndSiblings = 3,
    };
    enum class PhotoImportItemSelectionMode : int32_t
    {
        SelectAll = 0,
        SelectNone = 1,
        SelectNew = 2,
    };
    enum class PhotoImportPowerSource : int32_t
    {
        Unknown = 0,
        Battery = 1,
        External = 2,
    };
    enum class PhotoImportSourceType : int32_t
    {
        Generic = 0,
        Camera = 1,
        MediaPlayer = 2,
        Phone = 3,
        Video = 4,
        PersonalInfoManager = 5,
        AudioRecorder = 6,
    };
    enum class PhotoImportStage : int32_t
    {
        NotStarted = 0,
        FindingItems = 1,
        ImportingItems = 2,
        DeletingImportedItemsFromSource = 3,
    };
    enum class PhotoImportStorageMediumType : int32_t
    {
        Undefined = 0,
        Fixed = 1,
        Removable = 2,
    };
    enum class PhotoImportSubfolderCreationMode : int32_t
    {
        DoNotCreateSubfolders = 0,
        CreateSubfoldersFromFileDate = 1,
        CreateSubfoldersFromExifDate = 2,
        KeepOriginalFolderStructure = 3,
    };
    enum class PhotoImportSubfolderDateFormat : int32_t
    {
        Year = 0,
        YearMonth = 1,
        YearMonthDay = 2,
    };
    struct IPhotoImportDeleteImportedItemsFromSourceResult;
    struct IPhotoImportFindItemsResult;
    struct IPhotoImportFindItemsResult2;
    struct IPhotoImportImportItemsResult;
    struct IPhotoImportItem;
    struct IPhotoImportItem2;
    struct IPhotoImportItemImportedEventArgs;
    struct IPhotoImportManagerStatics;
    struct IPhotoImportOperation;
    struct IPhotoImportSelectionChangedEventArgs;
    struct IPhotoImportSession;
    struct IPhotoImportSession2;
    struct IPhotoImportSidecar;
    struct IPhotoImportSource;
    struct IPhotoImportSourceStatics;
    struct IPhotoImportStorageMedium;
    struct IPhotoImportVideoSegment;
    struct PhotoImportDeleteImportedItemsFromSourceResult;
    struct PhotoImportFindItemsResult;
    struct PhotoImportImportItemsResult;
    struct PhotoImportItem;
    struct PhotoImportItemImportedEventArgs;
    struct PhotoImportManager;
    struct PhotoImportOperation;
    struct PhotoImportSelectionChangedEventArgs;
    struct PhotoImportSession;
    struct PhotoImportSidecar;
    struct PhotoImportSource;
    struct PhotoImportStorageMedium;
    struct PhotoImportVideoSegment;
    struct PhotoImportProgress;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportItem2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSession2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSidecar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportStorageMedium>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::IPhotoImportVideoSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportFindItemsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportImportItemsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportItemImportedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSelectionChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSidecar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportStorageMedium>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportVideoSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportAccessMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportConnectionTransport>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportContentType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportContentTypeFilter>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportImportMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportItemSelectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportPowerSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSourceType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportStage>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportStorageMediumType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSubfolderCreationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportSubfolderDateFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Import::PhotoImportProgress>
    {
        using type = struct_category<uint32_t, uint32_t, uint64_t, uint64_t, double>;
    };
    template <> struct name<Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportFindItemsResult" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportFindItemsResult2" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportImportItemsResult" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportItem>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportItem" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportItem2>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportItem2" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportItemImportedEventArgs" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportManagerStatics" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportOperation>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportOperation" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSelectionChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSession>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSession" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSession2>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSession2" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSidecar>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSidecar" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSource>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSource" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportSourceStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportSourceStatics" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportStorageMedium>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportStorageMedium" };
    };
    template <> struct name<Windows::Media::Import::IPhotoImportVideoSegment>
    {
        static constexpr auto & value{ L"Windows.Media.Import.IPhotoImportVideoSegment" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportFindItemsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportFindItemsResult" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportImportItemsResult>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportImportItemsResult" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportItem>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportItem" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportItemImportedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportItemImportedEventArgs" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportManager>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportManager" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportOperation>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportOperation" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSelectionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSelectionChangedEventArgs" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSession>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSession" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSidecar>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSidecar" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSource>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSource" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportStorageMedium>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportStorageMedium" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportVideoSegment>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportVideoSegment" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportAccessMode>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportAccessMode" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportConnectionTransport>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportConnectionTransport" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportContentType>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportContentType" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportContentTypeFilter>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportContentTypeFilter" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportImportMode>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportImportMode" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportItemSelectionMode>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportItemSelectionMode" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportPowerSource>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportPowerSource" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSourceType>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSourceType" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportStage>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportStage" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportStorageMediumType>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportStorageMediumType" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSubfolderCreationMode>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSubfolderCreationMode" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportSubfolderDateFormat>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportSubfolderDateFormat" };
    };
    template <> struct name<Windows::Media::Import::PhotoImportProgress>
    {
        static constexpr auto & value{ L"Windows.Media.Import.PhotoImportProgress" };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        static constexpr guid value{ 0xF4E112F8,0x843D,0x428A,{ 0xA1,0xA6,0x81,0x51,0x02,0x92,0xB0,0xAE } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        static constexpr guid value{ 0x3915E647,0x6C78,0x492B,{ 0x84,0x4E,0x8F,0xE5,0xE8,0xF6,0xBF,0xB9 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        static constexpr guid value{ 0xFBDD6A3B,0xECF9,0x406A,{ 0x81,0x5E,0x50,0x15,0x62,0x5B,0x0A,0x88 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        static constexpr guid value{ 0xE4D4F478,0xD419,0x4443,{ 0xA8,0x4E,0xF0,0x6A,0x85,0x0C,0x0B,0x00 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportItem>
    {
        static constexpr guid value{ 0xA9D07E76,0x9BFC,0x43B8,{ 0xB3,0x56,0x63,0x3B,0x6A,0x98,0x8C,0x9E } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportItem2>
    {
        static constexpr guid value{ 0xF1053505,0xF53B,0x46A3,{ 0x9E,0x30,0x36,0x10,0x79,0x1A,0x91,0x10 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        static constexpr guid value{ 0x42CB2FDD,0x7D68,0x47B5,{ 0xBC,0x7C,0xCE,0xB7,0x3E,0x0C,0x77,0xDC } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportManagerStatics>
    {
        static constexpr guid value{ 0x2771903D,0xA046,0x4F06,{ 0x9B,0x9C,0xBF,0xD6,0x62,0xE8,0x32,0x87 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportOperation>
    {
        static constexpr guid value{ 0xD9F797E4,0xA09A,0x4EE4,{ 0xA4,0xB1,0x20,0x94,0x02,0x77,0xA5,0xBE } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        static constexpr guid value{ 0x10461782,0xFA9D,0x4C30,{ 0x8B,0xC9,0x4D,0x64,0x91,0x15,0x72,0xD5 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSession>
    {
        static constexpr guid value{ 0xAA63916E,0xECDB,0x4EFE,{ 0x94,0xC6,0x5F,0x5C,0xAF,0xE3,0x4C,0xFB } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSession2>
    {
        static constexpr guid value{ 0x2A526710,0x3EC6,0x469D,{ 0xA3,0x75,0x2B,0x9F,0x47,0x85,0x39,0x1E } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSidecar>
    {
        static constexpr guid value{ 0x46D7D757,0xF802,0x44C7,{ 0x9C,0x98,0x7A,0x71,0xF4,0xBC,0x14,0x86 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSource>
    {
        static constexpr guid value{ 0x1F8EA35E,0x145B,0x4CD6,{ 0x87,0xF1,0x54,0x96,0x5A,0x98,0x2F,0xEF } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportSourceStatics>
    {
        static constexpr guid value{ 0x0528E586,0x32D8,0x467C,{ 0x8C,0xEE,0x23,0xA1,0xB2,0xF4,0x3E,0x85 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportStorageMedium>
    {
        static constexpr guid value{ 0xF2B9B093,0xFC85,0x487F,{ 0x87,0xC2,0x58,0xD6,0x75,0xD0,0x5B,0x07 } };
    };
    template <> struct guid_storage<Windows::Media::Import::IPhotoImportVideoSegment>
    {
        static constexpr guid value{ 0x623C0289,0x321A,0x41D8,{ 0x91,0x66,0x8C,0x62,0xA3,0x33,0x27,0x6C } };
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult>
    {
        using type = Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportFindItemsResult>
    {
        using type = Windows::Media::Import::IPhotoImportFindItemsResult;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportImportItemsResult>
    {
        using type = Windows::Media::Import::IPhotoImportImportItemsResult;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportItem>
    {
        using type = Windows::Media::Import::IPhotoImportItem;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportItemImportedEventArgs>
    {
        using type = Windows::Media::Import::IPhotoImportItemImportedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportOperation>
    {
        using type = Windows::Media::Import::IPhotoImportOperation;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportSelectionChangedEventArgs>
    {
        using type = Windows::Media::Import::IPhotoImportSelectionChangedEventArgs;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportSession>
    {
        using type = Windows::Media::Import::IPhotoImportSession;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportSidecar>
    {
        using type = Windows::Media::Import::IPhotoImportSidecar;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportSource>
    {
        using type = Windows::Media::Import::IPhotoImportSource;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportStorageMedium>
    {
        using type = Windows::Media::Import::IPhotoImportStorageMedium;
    };
    template <> struct default_interface<Windows::Media::Import::PhotoImportVideoSegment>
    {
        using type = Windows::Media::Import::IPhotoImportVideoSegment;
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasSucceeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DeletedItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhotosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalSizeInBytes(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasSucceeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FoundItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhotosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall SelectAll() noexcept = 0;
            virtual int32_t __stdcall SelectNone() noexcept = 0;
            virtual int32_t __stdcall SelectNewAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetImportMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ImportMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPhotosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPhotosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedVideosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedVideosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedSidecarsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedSidecarsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedSiblingsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedSiblingsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedTotalCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedTotalSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_SelectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ImportItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ItemImported(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemImported(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddItemsInDateRangeToSelection(int64_t, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasSucceeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ImportedItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhotosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideosSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidecarsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SiblingsSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall DeleteImportedItemsFromSourceAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemKey(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ContentType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Date(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Sibling(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sidecars(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoSegments(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSelected(bool) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImportedFileNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeletedFileNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportItem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImportedItem(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupportedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllSourcesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPendingOperations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Stage(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContinueFindingItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContinueImportingItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContinueDeletingImportedItemsFromSourceAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelectionEmpty(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationFolder(void*) noexcept = 0;
            virtual int32_t __stdcall get_DestinationFolder(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppendSessionDateToDestinationFolder(bool) noexcept = 0;
            virtual int32_t __stdcall get_AppendSessionDateToDestinationFolder(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SubfolderCreationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SubfolderCreationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationFileNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_DestinationFileNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall FindItemsAsync(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSession2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_SubfolderDateFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SubfolderDateFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RememberDeselectedItems(bool) noexcept = 0;
            virtual int32_t __stdcall get_RememberDeselectedItems(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSidecar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Date(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Manufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionProtocol(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionTransport(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PowerSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BatteryLevelPercent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_StorageMedia(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsLocked(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMassStorage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall CreateImportSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromFolderAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportStorageMedium>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_StorageMediumType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedAccessMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CapacityInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AvailableSpaceInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall Refresh() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Import::IPhotoImportVideoSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Date(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Sibling(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sidecars(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult
    {
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto HasSucceeded() const;
        [[nodiscard]] auto DeletedItems() const;
        [[nodiscard]] auto PhotosCount() const;
        [[nodiscard]] auto PhotosSizeInBytes() const;
        [[nodiscard]] auto VideosCount() const;
        [[nodiscard]] auto VideosSizeInBytes() const;
        [[nodiscard]] auto SidecarsCount() const;
        [[nodiscard]] auto SidecarsSizeInBytes() const;
        [[nodiscard]] auto SiblingsCount() const;
        [[nodiscard]] auto SiblingsSizeInBytes() const;
        [[nodiscard]] auto TotalCount() const;
        [[nodiscard]] auto TotalSizeInBytes() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportFindItemsResult
    {
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto HasSucceeded() const;
        [[nodiscard]] auto FoundItems() const;
        [[nodiscard]] auto PhotosCount() const;
        [[nodiscard]] auto PhotosSizeInBytes() const;
        [[nodiscard]] auto VideosCount() const;
        [[nodiscard]] auto VideosSizeInBytes() const;
        [[nodiscard]] auto SidecarsCount() const;
        [[nodiscard]] auto SidecarsSizeInBytes() const;
        [[nodiscard]] auto SiblingsCount() const;
        [[nodiscard]] auto SiblingsSizeInBytes() const;
        [[nodiscard]] auto TotalCount() const;
        [[nodiscard]] auto TotalSizeInBytes() const;
        auto SelectAll() const;
        auto SelectNone() const;
        auto SelectNewAsync() const;
        auto SetImportMode(Windows::Media::Import::PhotoImportImportMode const& value) const;
        [[nodiscard]] auto ImportMode() const;
        [[nodiscard]] auto SelectedPhotosCount() const;
        [[nodiscard]] auto SelectedPhotosSizeInBytes() const;
        [[nodiscard]] auto SelectedVideosCount() const;
        [[nodiscard]] auto SelectedVideosSizeInBytes() const;
        [[nodiscard]] auto SelectedSidecarsCount() const;
        [[nodiscard]] auto SelectedSidecarsSizeInBytes() const;
        [[nodiscard]] auto SelectedSiblingsCount() const;
        [[nodiscard]] auto SelectedSiblingsSizeInBytes() const;
        [[nodiscard]] auto SelectedTotalCount() const;
        [[nodiscard]] auto SelectedTotalSizeInBytes() const;
        auto SelectionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const;
        using SelectionChanged_revoker = impl::event_revoker<Windows::Media::Import::IPhotoImportFindItemsResult, &impl::abi_t<Windows::Media::Import::IPhotoImportFindItemsResult>::remove_SelectionChanged>;
        SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const;
        auto SelectionChanged(winrt::event_token const& token) const noexcept;
        auto ImportItemsAsync() const;
        auto ItemImported(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const;
        using ItemImported_revoker = impl::event_revoker<Windows::Media::Import::IPhotoImportFindItemsResult, &impl::abi_t<Windows::Media::Import::IPhotoImportFindItemsResult>::remove_ItemImported>;
        ItemImported_revoker ItemImported(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const;
        auto ItemImported(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportFindItemsResult2
    {
        auto AddItemsInDateRangeToSelection(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportFindItemsResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportImportItemsResult
    {
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto HasSucceeded() const;
        [[nodiscard]] auto ImportedItems() const;
        [[nodiscard]] auto PhotosCount() const;
        [[nodiscard]] auto PhotosSizeInBytes() const;
        [[nodiscard]] auto VideosCount() const;
        [[nodiscard]] auto VideosSizeInBytes() const;
        [[nodiscard]] auto SidecarsCount() const;
        [[nodiscard]] auto SidecarsSizeInBytes() const;
        [[nodiscard]] auto SiblingsCount() const;
        [[nodiscard]] auto SiblingsSizeInBytes() const;
        [[nodiscard]] auto TotalCount() const;
        [[nodiscard]] auto TotalSizeInBytes() const;
        auto DeleteImportedItemsFromSourceAsync() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportItem
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto ItemKey() const;
        [[nodiscard]] auto ContentType() const;
        [[nodiscard]] auto SizeInBytes() const;
        [[nodiscard]] auto Date() const;
        [[nodiscard]] auto Sibling() const;
        [[nodiscard]] auto Sidecars() const;
        [[nodiscard]] auto VideoSegments() const;
        [[nodiscard]] auto IsSelected() const;
        auto IsSelected(bool value) const;
        [[nodiscard]] auto Thumbnail() const;
        [[nodiscard]] auto ImportedFileNames() const;
        [[nodiscard]] auto DeletedFileNames() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportItem>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportItem<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportItem2
    {
        [[nodiscard]] auto Path() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportItem2>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportItem2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportItemImportedEventArgs
    {
        [[nodiscard]] auto ImportedItem() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportItemImportedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportManagerStatics
    {
        auto IsSupportedAsync() const;
        auto FindAllSourcesAsync() const;
        auto GetPendingOperations() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportOperation
    {
        [[nodiscard]] auto Stage() const;
        [[nodiscard]] auto Session() const;
        [[nodiscard]] auto ContinueFindingItemsAsync() const;
        [[nodiscard]] auto ContinueImportingItemsAsync() const;
        [[nodiscard]] auto ContinueDeletingImportedItemsFromSourceAsync() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportOperation>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs
    {
        [[nodiscard]] auto IsSelectionEmpty() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSession
    {
        [[nodiscard]] auto Source() const;
        [[nodiscard]] auto SessionId() const;
        auto DestinationFolder(Windows::Storage::IStorageFolder const& value) const;
        [[nodiscard]] auto DestinationFolder() const;
        auto AppendSessionDateToDestinationFolder(bool value) const;
        [[nodiscard]] auto AppendSessionDateToDestinationFolder() const;
        auto SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode const& value) const;
        [[nodiscard]] auto SubfolderCreationMode() const;
        auto DestinationFileNamePrefix(param::hstring const& value) const;
        [[nodiscard]] auto DestinationFileNamePrefix() const;
        auto FindItemsAsync(Windows::Media::Import::PhotoImportContentTypeFilter const& contentTypeFilter, Windows::Media::Import::PhotoImportItemSelectionMode const& itemSelectionMode) const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSession>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSession2
    {
        auto SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat const& value) const;
        [[nodiscard]] auto SubfolderDateFormat() const;
        auto RememberDeselectedItems(bool value) const;
        [[nodiscard]] auto RememberDeselectedItems() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSession2>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSession2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSidecar
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto SizeInBytes() const;
        [[nodiscard]] auto Date() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSidecar>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSidecar<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSource
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Manufacturer() const;
        [[nodiscard]] auto Model() const;
        [[nodiscard]] auto SerialNumber() const;
        [[nodiscard]] auto ConnectionProtocol() const;
        [[nodiscard]] auto ConnectionTransport() const;
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto PowerSource() const;
        [[nodiscard]] auto BatteryLevelPercent() const;
        [[nodiscard]] auto DateTime() const;
        [[nodiscard]] auto StorageMedia() const;
        [[nodiscard]] auto IsLocked() const;
        [[nodiscard]] auto IsMassStorage() const;
        [[nodiscard]] auto Thumbnail() const;
        auto CreateImportSession() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSource>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportSourceStatics
    {
        auto FromIdAsync(param::hstring const& sourceId) const;
        auto FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder) const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportStorageMedium
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto SerialNumber() const;
        [[nodiscard]] auto StorageMediumType() const;
        [[nodiscard]] auto SupportedAccessMode() const;
        [[nodiscard]] auto CapacityInBytes() const;
        [[nodiscard]] auto AvailableSpaceInBytes() const;
        auto Refresh() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportStorageMedium>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportStorageMedium<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Import_IPhotoImportVideoSegment
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto SizeInBytes() const;
        [[nodiscard]] auto Date() const;
        [[nodiscard]] auto Sibling() const;
        [[nodiscard]] auto Sidecars() const;
    };
    template <> struct consume<Windows::Media::Import::IPhotoImportVideoSegment>
    {
        template <typename D> using type = consume_Windows_Media_Import_IPhotoImportVideoSegment<D>;
    };
    struct struct_Windows_Media_Import_PhotoImportProgress
    {
        uint32_t ItemsImported;
        uint32_t TotalItemsToImport;
        uint64_t BytesImported;
        uint64_t TotalBytesToImport;
        double ImportProgress;
    };
    template <> struct abi<Windows::Media::Import::PhotoImportProgress>
    {
        using type = struct_Windows_Media_Import_PhotoImportProgress;
    };
}
#endif
