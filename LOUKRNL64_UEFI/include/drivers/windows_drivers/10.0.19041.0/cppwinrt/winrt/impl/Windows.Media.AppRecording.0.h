// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_AppRecording_0_H
#define WINRT_Windows_Media_AppRecording_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage
{
    struct StorageFile;
    struct StorageFolder;
}
namespace winrt::Windows::Media::AppRecording
{
    enum class AppRecordingSaveScreenshotOption : int32_t
    {
        None = 0,
        HdrContentVisible = 1,
    };
    struct IAppRecordingManager;
    struct IAppRecordingManagerStatics;
    struct IAppRecordingResult;
    struct IAppRecordingSaveScreenshotResult;
    struct IAppRecordingSavedScreenshotInfo;
    struct IAppRecordingStatus;
    struct IAppRecordingStatusDetails;
    struct AppRecordingManager;
    struct AppRecordingResult;
    struct AppRecordingSaveScreenshotResult;
    struct AppRecordingSavedScreenshotInfo;
    struct AppRecordingStatus;
    struct AppRecordingStatusDetails;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::AppRecording::IAppRecordingManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingStatus>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingStatus>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingStatusDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::AppRecording::AppRecordingSaveScreenshotOption>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingManager>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingManager" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingManagerStatics" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingResult>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingResult" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingStatus>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingStatus" };
    };
    template <> struct name<Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.IAppRecordingStatusDetails" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingManager>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingManager" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingResult>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingResult" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSaveScreenshotResult" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingStatus>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingStatus" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingStatusDetails>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingStatusDetails" };
    };
    template <> struct name<Windows::Media::AppRecording::AppRecordingSaveScreenshotOption>
    {
        static constexpr auto & value{ L"Windows.Media.AppRecording.AppRecordingSaveScreenshotOption" };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingManager>
    {
        static constexpr guid value{ 0xE7E26076,0xA044,0x48E2,{ 0xA5,0x12,0x30,0x94,0xD5,0x74,0xC7,0xCC } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        static constexpr guid value{ 0x50E709F7,0x38CE,0x4BD3,{ 0x9D,0xB2,0xE7,0x2B,0xBE,0x9D,0xE1,0x1D } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingResult>
    {
        static constexpr guid value{ 0x3A900864,0xC66D,0x46F9,{ 0xB2,0xD9,0x5B,0xC2,0xDA,0xD0,0x70,0xD7 } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        static constexpr guid value{ 0x9C5B8D0A,0x0ABB,0x4457,{ 0xAA,0xEE,0x24,0xF9,0xC1,0x2E,0xC7,0x78 } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        static constexpr guid value{ 0x9B642D0A,0x189A,0x4D00,{ 0xBF,0x25,0xE1,0xBB,0x12,0x49,0xD5,0x94 } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingStatus>
    {
        static constexpr guid value{ 0x1D0CC82C,0xBC18,0x4B8A,{ 0xA6,0xEF,0x12,0x7E,0xFA,0xB3,0xB5,0xD9 } };
    };
    template <> struct guid_storage<Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        static constexpr guid value{ 0xB538A9B0,0x14ED,0x4412,{ 0xAC,0x45,0x6D,0x67,0x2C,0x9C,0x99,0x49 } };
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingManager>
    {
        using type = Windows::Media::AppRecording::IAppRecordingManager;
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingResult>
    {
        using type = Windows::Media::AppRecording::IAppRecordingResult;
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>
    {
        using type = Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult;
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>
    {
        using type = Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo;
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingStatus>
    {
        using type = Windows::Media::AppRecording::IAppRecordingStatus;
    };
    template <> struct default_interface<Windows::Media::AppRecording::AppRecordingStatusDetails>
    {
        using type = Windows::Media::AppRecording::IAppRecordingStatusDetails;
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordingToFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RecordTimeSpanToFileAsync(int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedScreenshotMediaEncodingSubtypes(void**) noexcept = 0;
            virtual int32_t __stdcall SaveScreenshotToFilesAsync(void*, void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsFileTruncated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_SavedScreenshotInfos(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaEncodingSubtype(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanRecord(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanRecordTimeSpan(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalBufferDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAnyAppBroadcasting(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCaptureResourceUnavailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGameStreamInProgress(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTimeSpanRecordingDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAppInactive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBlockedForApp(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledByUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledBySystem(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingManager
    {
        auto GetStatus() const;
        auto StartRecordingToFileAsync(Windows::Storage::StorageFile const& file) const;
        auto RecordTimeSpanToFileAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration, Windows::Storage::StorageFile const& file) const;
        [[nodiscard]] auto SupportedScreenshotMediaEncodingSubtypes() const;
        auto SaveScreenshotToFilesAsync(Windows::Storage::StorageFolder const& folder, param::hstring const& filenamePrefix, Windows::Media::AppRecording::AppRecordingSaveScreenshotOption const& option, param::async_iterable<hstring> const& requestedFormats) const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingManager>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingResult
    {
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto IsFileTruncated() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingResult>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult
    {
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto SavedScreenshotInfos() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo
    {
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto MediaEncodingSubtype() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingStatus
    {
        [[nodiscard]] auto CanRecord() const;
        [[nodiscard]] auto CanRecordTimeSpan() const;
        [[nodiscard]] auto HistoricalBufferDuration() const;
        [[nodiscard]] auto Details() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingStatus>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Media_AppRecording_IAppRecordingStatusDetails
    {
        [[nodiscard]] auto IsAnyAppBroadcasting() const;
        [[nodiscard]] auto IsCaptureResourceUnavailable() const;
        [[nodiscard]] auto IsGameStreamInProgress() const;
        [[nodiscard]] auto IsTimeSpanRecordingDisabled() const;
        [[nodiscard]] auto IsGpuConstrained() const;
        [[nodiscard]] auto IsAppInactive() const;
        [[nodiscard]] auto IsBlockedForApp() const;
        [[nodiscard]] auto IsDisabledByUser() const;
        [[nodiscard]] auto IsDisabledBySystem() const;
    };
    template <> struct consume<Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        template <typename D> using type = consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>;
    };
}
#endif
