// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_XboxLive_Storage_0_H
#define WINRT_Windows_Gaming_XboxLive_Storage_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    struct IPropertySet;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage
{
    enum class GameSaveErrorStatus : int32_t
    {
        Ok = 0,
        Abort = -2147467260,
        InvalidContainerName = -2138898431,
        NoAccess = -2138898430,
        OutOfLocalStorage = -2138898429,
        UserCanceled = -2138898428,
        UpdateTooBig = -2138898427,
        QuotaExceeded = -2138898426,
        ProvidedBufferTooSmall = -2138898425,
        BlobNotFound = -2138898424,
        NoXboxLiveInfo = -2138898423,
        ContainerNotInSync = -2138898422,
        ContainerSyncFailed = -2138898421,
        UserHasNoXboxLiveInfo = -2138898420,
        ObjectExpired = -2138898419,
    };
    struct IGameSaveBlobGetResult;
    struct IGameSaveBlobInfo;
    struct IGameSaveBlobInfoGetResult;
    struct IGameSaveBlobInfoQuery;
    struct IGameSaveContainer;
    struct IGameSaveContainerInfo;
    struct IGameSaveContainerInfoGetResult;
    struct IGameSaveContainerInfoQuery;
    struct IGameSaveOperationResult;
    struct IGameSaveProvider;
    struct IGameSaveProviderGetResult;
    struct IGameSaveProviderStatics;
    struct GameSaveBlobGetResult;
    struct GameSaveBlobInfo;
    struct GameSaveBlobInfoGetResult;
    struct GameSaveBlobInfoQuery;
    struct GameSaveContainer;
    struct GameSaveContainerInfo;
    struct GameSaveContainerInfoGetResult;
    struct GameSaveContainerInfoQuery;
    struct GameSaveOperationResult;
    struct GameSaveProvider;
    struct GameSaveProviderGetResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveContainer>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveProvider>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveContainer>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveProvider>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>{ using type = class_category; };
    template <> struct category<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery> = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveContainer> = L"Windows.Gaming.XboxLive.Storage.GameSaveContainer";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery> = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> = L"Windows.Gaming.XboxLive.Storage.GameSaveOperationResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveProvider> = L"Windows.Gaming.XboxLive.Storage.GameSaveProvider";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> = L"Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus> = L"Windows.Gaming.XboxLive.Storage.GameSaveErrorStatus";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult> = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo> = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult> = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainer> = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainer";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo> = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult> = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult> = L"Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveProvider> = L"Windows.Gaming.XboxLive.Storage.IGameSaveProvider";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult> = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult";
    template <> inline constexpr auto& name_v<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics> = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics";
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>{ 0x917281E0,0x7201,0x4953,{ 0xAA,0x2C,0x40,0x08,0xF0,0x3A,0xEF,0x45 } }; // 917281E0-7201-4953-AA2C-4008F03AEF45
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>{ 0xADD38034,0xBAF0,0x4645,{ 0xB6,0xD0,0x46,0xED,0xAF,0xFB,0x3C,0x2B } }; // ADD38034-BAF0-4645-B6D0-46EDAFFB3C2B
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>{ 0xC7578582,0x3697,0x42BF,{ 0x98,0x9C,0x66,0x5D,0x92,0x3B,0x52,0x31 } }; // C7578582-3697-42BF-989C-665D923B5231
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>{ 0x9FDD74B2,0xEEEE,0x447B,{ 0xA9,0xD2,0x7F,0x96,0xC0,0xF8,0x32,0x08 } }; // 9FDD74B2-EEEE-447B-A9D2-7F96C0F83208
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainer>{ 0xC3C08F89,0x563F,0x4ECD,{ 0x9C,0x6F,0x33,0xFD,0x0E,0x32,0x3D,0x10 } }; // C3C08F89-563F-4ECD-9C6F-33FD0E323D10
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>{ 0xB7E27300,0x155D,0x4BB4,{ 0xB2,0xBA,0x93,0x03,0x06,0xF3,0x91,0xB5 } }; // B7E27300-155D-4BB4-B2BA-930306F391B5
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>{ 0xFFC50D74,0xC581,0x4F9D,{ 0x9E,0x39,0x30,0xA1,0x0C,0x1E,0x4C,0x50 } }; // FFC50D74-C581-4F9D-9E39-30A10C1E4C50
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>{ 0x3C94E863,0x6F80,0x4327,{ 0x93,0x27,0xFF,0xC1,0x1A,0xFD,0x42,0xB3 } }; // 3C94E863-6F80-4327-9327-FFC11AFD42B3
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>{ 0xCF0F1A05,0x24A0,0x4582,{ 0x9A,0x55,0xB1,0xBB,0xBB,0x93,0x88,0xD8 } }; // CF0F1A05-24A0-4582-9A55-B1BBBB9388D8
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveProvider>{ 0x90A60394,0x80FE,0x4211,{ 0x97,0xF8,0xA5,0xDE,0x14,0xDD,0x95,0xD2 } }; // 90A60394-80FE-4211-97F8-A5DE14DD95D2
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>{ 0x3AB90816,0xD393,0x4D65,{ 0xAC,0x16,0x41,0xC3,0xE6,0x7A,0xB9,0x45 } }; // 3AB90816-D393-4D65-AC16-41C3E67AB945
    template <> inline constexpr guid guid_v<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>{ 0xD01D3ED0,0x7B03,0x449D,{ 0x8C,0xBD,0x34,0x02,0x84,0x2A,0x10,0x48 } }; // D01D3ED0-7B03-449D-8CBD-3402842A1048
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveContainer>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveContainer; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveProvider>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveProvider; };
    template <> struct default_interface<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>{ using type = Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult; };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetBlobInfoAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetBlobInfoWithIndexAndMaxAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemCountAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Provider(void**) noexcept = 0;
            virtual int32_t __stdcall SubmitUpdatesAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReadAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SubmitPropertySetUpdatesAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBlobInfoQuery(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_TotalSize(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastModifiedTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NeedsSync(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetContainerInfoAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContainerInfoWithIndexAndMaxAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemCountAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall CreateContainer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteContainerAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateContainerInfoQuery(void**) noexcept = 0;
            virtual int32_t __stdcall CreateContainerInfoQueryWithName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetRemainingBytesInQuotaAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContainersChangedSinceLastSync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSyncOnDemandForUserAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>) Value() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>) Value() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>) GetBlobInfoAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>) GetBlobInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) GetItemCountAsync() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveProvider) Provider() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>) SubmitUpdatesAsync(param::async_map_view<hstring, Windows::Storage::Streams::IBuffer> const& blobsToWrite, param::async_iterable<hstring> const& blobsToDelete, param::hstring const& displayName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>) ReadAsync(param::async_map_view<hstring, Windows::Storage::Streams::IBuffer> const& blobsToRead) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>) GetAsync(param::async_iterable<hstring> const& blobsToRead) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>) SubmitPropertySetUpdatesAsync(Windows::Foundation::Collections::IPropertySet const& blobsToWrite, param::async_iterable<hstring> const& blobsToDelete, param::hstring const& displayName) const;
        WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery) CreateBlobInfoQuery(param::hstring const& blobNamePrefix) const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveContainer>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) TotalSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) LastModifiedTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NeedsSync() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>) Value() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>) GetContainerInfoAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>) GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) GetItemCountAsync() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus) Status() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
        WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveContainer) CreateContainer(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>) DeleteContainerAsync(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery) CreateContainerInfoQuery() const;
        WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery) CreateContainerInfoQuery(param::hstring const& containerNamePrefix) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<int64_t>) GetRemainingBytesInQuotaAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) ContainersChangedSinceLastSync() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveProvider>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::XboxLive::Storage::GameSaveProvider) Value() const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>) GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>) GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId) const;
    };
    template <> struct consume<Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics<D>;
    };
}
#endif