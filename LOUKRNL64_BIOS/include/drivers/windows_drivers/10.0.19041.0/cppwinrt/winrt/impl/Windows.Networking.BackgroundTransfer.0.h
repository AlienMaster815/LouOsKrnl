// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_BackgroundTransfer_0_H
#define WINRT_Windows_Networking_BackgroundTransfer_0_H
namespace winrt::Windows::ApplicationModel::Background
{
    struct IBackgroundTrigger;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::UI::Notifications
{
    struct TileNotification;
    struct ToastNotification;
}
namespace winrt::Windows::Web
{
    enum class WebErrorStatus : int32_t;
}
namespace winrt::Windows::Networking::BackgroundTransfer
{
    enum class BackgroundTransferBehavior : int32_t
    {
        Parallel = 0,
        Serialized = 1,
    };
    enum class BackgroundTransferCostPolicy : int32_t
    {
        Default = 0,
        UnrestrictedOnly = 1,
        Always = 2,
    };
    enum class BackgroundTransferPriority : int32_t
    {
        Default = 0,
        High = 1,
        Low = 2,
    };
    enum class BackgroundTransferStatus : int32_t
    {
        Idle = 0,
        Running = 1,
        PausedByApplication = 2,
        PausedCostedNetwork = 3,
        PausedNoNetwork = 4,
        Completed = 5,
        Canceled = 6,
        Error = 7,
        PausedRecoverableWebErrorStatus = 8,
        PausedSystemPolicy = 32,
    };
    struct IBackgroundDownloader;
    struct IBackgroundDownloader2;
    struct IBackgroundDownloader3;
    struct IBackgroundDownloaderFactory;
    struct IBackgroundDownloaderStaticMethods;
    struct IBackgroundDownloaderStaticMethods2;
    struct IBackgroundDownloaderUserConsent;
    struct IBackgroundTransferBase;
    struct IBackgroundTransferCompletionGroup;
    struct IBackgroundTransferCompletionGroupTriggerDetails;
    struct IBackgroundTransferContentPart;
    struct IBackgroundTransferContentPartFactory;
    struct IBackgroundTransferErrorStaticMethods;
    struct IBackgroundTransferGroup;
    struct IBackgroundTransferGroupStatics;
    struct IBackgroundTransferOperation;
    struct IBackgroundTransferOperationPriority;
    struct IBackgroundTransferRangesDownloadedEventArgs;
    struct IBackgroundUploader;
    struct IBackgroundUploader2;
    struct IBackgroundUploader3;
    struct IBackgroundUploaderFactory;
    struct IBackgroundUploaderStaticMethods;
    struct IBackgroundUploaderStaticMethods2;
    struct IBackgroundUploaderUserConsent;
    struct IContentPrefetcher;
    struct IContentPrefetcherTime;
    struct IDownloadOperation;
    struct IDownloadOperation2;
    struct IDownloadOperation3;
    struct IDownloadOperation4;
    struct IDownloadOperation5;
    struct IResponseInformation;
    struct IUnconstrainedTransferRequestResult;
    struct IUploadOperation;
    struct IUploadOperation2;
    struct IUploadOperation3;
    struct IUploadOperation4;
    struct BackgroundDownloader;
    struct BackgroundTransferCompletionGroup;
    struct BackgroundTransferCompletionGroupTriggerDetails;
    struct BackgroundTransferContentPart;
    struct BackgroundTransferError;
    struct BackgroundTransferGroup;
    struct BackgroundTransferRangesDownloadedEventArgs;
    struct BackgroundUploader;
    struct ContentPrefetcher;
    struct DownloadOperation;
    struct ResponseInformation;
    struct UnconstrainedTransferRequestResult;
    struct UploadOperation;
    struct BackgroundDownloadProgress;
    struct BackgroundTransferFileRange;
    struct BackgroundUploadProgress;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundDownloader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferError>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundUploader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::ContentPrefetcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::DownloadOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::ResponseInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::UploadOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>
    {
        using type = struct_category<uint64_t, uint64_t, Windows::Networking::BackgroundTransfer::BackgroundTransferStatus, bool, bool>;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
    {
        using type = struct_category<uint64_t, uint64_t>;
    };
    template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>
    {
        using type = struct_category<uint64_t, uint64_t, uint64_t, uint64_t, Windows::Networking::BackgroundTransfer::BackgroundTransferStatus, bool, bool>;
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader3" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferBase" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader3" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IContentPrefetcher" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IContentPrefetcherTime" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation3" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation4" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation5" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IResponseInformation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation2" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation3" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation4" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundDownloader>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundDownloader" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferError>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferError" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundUploader>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundUploader" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::ContentPrefetcher>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.ContentPrefetcher" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::DownloadOperation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.DownloadOperation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::ResponseInformation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.ResponseInformation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::UploadOperation>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.UploadOperation" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferBehavior" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCostPolicy" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferPriority" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferStatus" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundDownloadProgress" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange" };
    };
    template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>
    {
        static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundUploadProgress" };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        static constexpr guid value{ 0xC1C79333,0x6649,0x4B1D,{ 0xA8,0x26,0xA4,0xB3,0xDD,0x23,0x4D,0x0B } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        static constexpr guid value{ 0xA94A5847,0x348D,0x4A35,{ 0x89,0x0E,0x8A,0x1E,0xF3,0x79,0x84,0x79 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        static constexpr guid value{ 0xD11A8C48,0x86E8,0x48E2,{ 0xB6,0x15,0x69,0x76,0xAA,0xBF,0x86,0x1D } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        static constexpr guid value{ 0x26836C24,0xD89E,0x46F4,{ 0xA2,0x9A,0x4F,0x4D,0x4F,0x14,0x41,0x55 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        static constexpr guid value{ 0x52A65A35,0xC64E,0x426C,{ 0x99,0x19,0x54,0x0D,0x0D,0x21,0xA6,0x50 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        static constexpr guid value{ 0x2FAA1327,0x1AD4,0x4CA5,{ 0xB2,0xCD,0x08,0xDB,0xF0,0x74,0x6A,0xFE } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        static constexpr guid value{ 0x5D14E906,0x9266,0x4808,{ 0xBD,0x71,0x59,0x25,0xF2,0xA3,0x13,0x0A } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        static constexpr guid value{ 0x2A9DA250,0xC769,0x458C,{ 0xAF,0xE8,0xFE,0xB8,0xD4,0xD3,0xB2,0xEF } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        static constexpr guid value{ 0x2D930225,0x986B,0x574D,{ 0x79,0x50,0x0A,0xDD,0x47,0xF5,0xD7,0x06 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        static constexpr guid value{ 0x7B6BE286,0x6E47,0x5136,{ 0x7F,0xCB,0xFA,0x43,0x89,0xF4,0x6F,0x5B } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        static constexpr guid value{ 0xE8E15657,0xD7D1,0x4ED8,{ 0x83,0x8E,0x67,0x4A,0xC2,0x17,0xAC,0xE6 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        static constexpr guid value{ 0x90EF98A9,0x7A01,0x4A0B,{ 0x9F,0x80,0xA0,0xB0,0xBB,0x37,0x0F,0x8D } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        static constexpr guid value{ 0xAAD33B04,0x1192,0x4BF4,{ 0x8B,0x68,0x39,0xC5,0xAD,0xD2,0x44,0xE2 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        static constexpr guid value{ 0xD8C3E3E4,0x6459,0x4540,{ 0x85,0xEB,0xAA,0xA1,0xC8,0x90,0x36,0x77 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        static constexpr guid value{ 0x02EC50B2,0x7D18,0x495B,{ 0xAA,0x22,0x32,0xA9,0x7D,0x45,0xD3,0xE2 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        static constexpr guid value{ 0xDED06846,0x90CA,0x44FB,{ 0x8F,0xB1,0x12,0x41,0x54,0xC0,0xD5,0x39 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        static constexpr guid value{ 0x04854327,0x5254,0x4B3A,{ 0x91,0x5E,0x0A,0xA4,0x92,0x75,0xC0,0xF9 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        static constexpr guid value{ 0x3EBC7453,0xBF48,0x4A88,{ 0x92,0x48,0xB0,0xC1,0x65,0x18,0x4F,0x5C } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        static constexpr guid value{ 0xC595C9AE,0xCEAD,0x465B,{ 0x88,0x01,0xC5,0x5A,0xC9,0x0A,0x01,0xCE } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        static constexpr guid value{ 0x8E0612CE,0x0C34,0x4463,{ 0x80,0x7F,0x19,0x8A,0x1B,0x8B,0xD4,0xAD } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        static constexpr guid value{ 0xB95E9439,0x5BF0,0x4B3A,{ 0x8C,0x47,0x2C,0x61,0x99,0xA8,0x54,0xB9 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        static constexpr guid value{ 0x736203C7,0x10E7,0x48A0,{ 0xAC,0x3C,0x1A,0xC7,0x10,0x95,0xEC,0x57 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        static constexpr guid value{ 0xF2875CFB,0x9B05,0x4741,{ 0x91,0x21,0x74,0x0A,0x83,0xE2,0x47,0xDF } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        static constexpr guid value{ 0xE919AC62,0xEA08,0x42F0,{ 0xA2,0xAC,0x07,0xE4,0x67,0x54,0x90,0x80 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        static constexpr guid value{ 0x3BB384CB,0x0760,0x461D,{ 0x90,0x7F,0x51,0x38,0xF8,0x4D,0x44,0xC1 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        static constexpr guid value{ 0xA8D6F754,0x7DC1,0x4CD9,{ 0x88,0x10,0x2A,0x6A,0xA9,0x41,0x7E,0x11 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        static constexpr guid value{ 0xE361FD08,0x132A,0x4FDE,{ 0xA7,0xCC,0xFC,0xB0,0xE6,0x65,0x23,0xAF } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        static constexpr guid value{ 0xBD87EBB0,0x5714,0x4E09,{ 0xBA,0x68,0xBE,0xF7,0x39,0x03,0xB0,0xD7 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        static constexpr guid value{ 0xA3CCED40,0x8F9C,0x4353,{ 0x9C,0xD4,0x29,0x0D,0xEE,0x38,0x7C,0x38 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        static constexpr guid value{ 0x5027351C,0x7D5E,0x4ADC,{ 0xB8,0xD3,0xDF,0x5C,0x60,0x31,0xB9,0xCC } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        static constexpr guid value{ 0x0CDAAEF4,0x8CEF,0x404A,{ 0x96,0x6D,0xF0,0x58,0x40,0x0B,0xED,0x80 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        static constexpr guid value{ 0xA699A86F,0x5590,0x463A,{ 0xB8,0xD6,0x1E,0x49,0x1A,0x27,0x60,0xA5 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        static constexpr guid value{ 0xF8BB9A12,0xF713,0x4792,{ 0x8B,0x68,0xD9,0xD2,0x97,0xF9,0x1D,0x2E } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        static constexpr guid value{ 0x4C24B81F,0xD944,0x4112,{ 0xA9,0x8E,0x6A,0x69,0x52,0x2B,0x7E,0xBB } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        static constexpr guid value{ 0x3E5624E0,0x7389,0x434C,{ 0x8B,0x35,0x42,0x7F,0xD3,0x6B,0xBD,0xAE } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        static constexpr guid value{ 0x556189F2,0x2774,0x4DF6,{ 0x9F,0xA5,0x20,0x9F,0x2B,0xFB,0x12,0xF7 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        static constexpr guid value{ 0x42C92CA3,0xDE39,0x4546,{ 0xBC,0x62,0x37,0x74,0xB4,0x29,0x4D,0xE3 } };
    };
    template <> struct guid_storage<Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        static constexpr guid value{ 0x50EDEF31,0xFAC5,0x41EE,{ 0xB0,0x30,0xDC,0x77,0xCA,0xEE,0x9F,0xAA } };
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundDownloader>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundDownloader;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundUploader>
    {
        using type = Windows::Networking::BackgroundTransfer::IBackgroundUploader;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::DownloadOperation>
    {
        using type = Windows::Networking::BackgroundTransfer::IDownloadOperation;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::ResponseInformation>
    {
        using type = Windows::Networking::BackgroundTransfer::IResponseInformation;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>
    {
        using type = Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult;
    };
    template <> struct default_interface<Windows::Networking::BackgroundTransfer::UploadOperation>
    {
        using type = Windows::Networking::BackgroundTransfer::IUploadOperation;
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDownload(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDownloadFromFile(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDownloadAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransferGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransferGroup(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuccessToastNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuccessToastNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_FailureToastNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_FailureToastNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuccessTileNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuccessTileNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_FailureTileNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_FailureTileNotification(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompletionGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithCompletionGroup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentDownloadsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentDownloadsForGroupAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentDownloadsForTransferGroupAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestUnconstrainedDownloadsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetRequestHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_Method(void**) noexcept = 0;
            virtual int32_t __stdcall put_Method(void*) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall put_Group(void*) noexcept = 0;
            virtual int32_t __stdcall get_CostPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CostPolicy(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall Enable() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Downloads(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uploads(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetText(void*) noexcept = 0;
            virtual int32_t __stdcall SetFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithNameAndFileName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransferBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TransferBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateGroup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Guid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_RequestedUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Method(void**) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall get_CostPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CostPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetResultStreamAt(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetResponseInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Priority(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Priority(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WasDownloadRestarted(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AddedRanges(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateUpload(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUploadFromStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUploadWithFormDataAndAutoBoundaryAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUploadWithSubTypeAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUploadWithSubTypeAndBoundaryAsync(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransferGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransferGroup(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuccessToastNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuccessToastNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_FailureToastNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_FailureToastNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuccessTileNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuccessTileNotification(void*) noexcept = 0;
            virtual int32_t __stdcall get_FailureTileNotification(void**) noexcept = 0;
            virtual int32_t __stdcall put_FailureTileNotification(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompletionGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithCompletionGroup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentUploadsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentUploadsForGroupAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentUploadsForTransferGroupAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestUnconstrainedUploadsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentUris(void**) noexcept = 0;
            virtual int32_t __stdcall put_IndirectContentUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_IndirectContentUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastSuccessfulPrefetchTime(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultFile(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundDownloadProgress*) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall AttachAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransferGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRandomAccessRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRandomAccessRequired(bool) noexcept = 0;
            virtual int32_t __stdcall GetResultRandomAccessStreamReference(void**) noexcept = 0;
            virtual int32_t __stdcall GetDownloadedRanges(void**) noexcept = 0;
            virtual int32_t __stdcall add_RangesDownloaded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RangesDownloaded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall put_RequestedUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_RecoverableWebErrorStatuses(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentWebErrorStatus(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MakeCurrentInTransferGroup() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetRequestHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveRequestHeader(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsResumable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ActualUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_StatusCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsUnconstrained(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceFile(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundUploadProgress*) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall AttachAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransferGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MakeCurrentInTransferGroup() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetRequestHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveRequestHeader(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader
    {
        auto CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile) const;
        auto CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::IStorageFile const& requestBodyFile) const;
        auto CreateDownloadAsync(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::Streams::IInputStream const& requestBodyStream) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2
    {
        [[nodiscard]] auto TransferGroup() const;
        auto TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const;
        [[nodiscard]] auto SuccessToastNotification() const;
        auto SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
        [[nodiscard]] auto FailureToastNotification() const;
        auto FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
        [[nodiscard]] auto SuccessTileNotification() const;
        auto SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
        [[nodiscard]] auto FailureTileNotification() const;
        auto FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3
    {
        [[nodiscard]] auto CompletionGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory
    {
        auto CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods
    {
        auto GetCurrentDownloadsAsync() const;
        auto GetCurrentDownloadsAsync(param::hstring const& group) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2
    {
        auto GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent
    {
        auto RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase
    {
        auto SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
        [[nodiscard]] auto ServerCredential() const;
        auto ServerCredential(Windows::Security::Credentials::PasswordCredential const& credential) const;
        [[nodiscard]] auto ProxyCredential() const;
        auto ProxyCredential(Windows::Security::Credentials::PasswordCredential const& credential) const;
        [[nodiscard]] auto Method() const;
        auto Method(param::hstring const& value) const;
        [[nodiscard]] auto Group() const;
        auto Group(param::hstring const& value) const;
        [[nodiscard]] auto CostPolicy() const;
        auto CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup
    {
        [[nodiscard]] auto Trigger() const;
        [[nodiscard]] auto IsEnabled() const;
        auto Enable() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails
    {
        [[nodiscard]] auto Downloads() const;
        [[nodiscard]] auto Uploads() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart
    {
        auto SetHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
        auto SetText(param::hstring const& value) const;
        auto SetFile(Windows::Storage::IStorageFile const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory
    {
        auto CreateWithName(param::hstring const& name) const;
        auto CreateWithNameAndFileName(param::hstring const& name, param::hstring const& fileName) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods
    {
        auto GetStatus(int32_t hresult) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto TransferBehavior() const;
        auto TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics
    {
        auto CreateGroup(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation
    {
        [[nodiscard]] auto Guid() const;
        [[nodiscard]] auto RequestedUri() const;
        [[nodiscard]] auto Method() const;
        [[nodiscard]] auto Group() const;
        [[nodiscard]] auto CostPolicy() const;
        auto CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const;
        auto GetResultStreamAt(uint64_t position) const;
        auto GetResponseInformation() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority
    {
        [[nodiscard]] auto Priority() const;
        auto Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs
    {
        [[nodiscard]] auto WasDownloadRestarted() const;
        [[nodiscard]] auto AddedRanges() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader
    {
        auto CreateUpload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& sourceFile) const;
        auto CreateUploadFromStreamAsync(Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IInputStream const& sourceStream) const;
        auto CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts) const;
        auto CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType) const;
        auto CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType, param::hstring const& boundary) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2
    {
        [[nodiscard]] auto TransferGroup() const;
        auto TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const;
        [[nodiscard]] auto SuccessToastNotification() const;
        auto SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
        [[nodiscard]] auto FailureToastNotification() const;
        auto FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
        [[nodiscard]] auto SuccessTileNotification() const;
        auto SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
        [[nodiscard]] auto FailureTileNotification() const;
        auto FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3
    {
        [[nodiscard]] auto CompletionGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory
    {
        auto CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods
    {
        auto GetCurrentUploadsAsync() const;
        auto GetCurrentUploadsAsync(param::hstring const& group) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2
    {
        auto GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent
    {
        auto RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher
    {
        [[nodiscard]] auto ContentUris() const;
        auto IndirectContentUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto IndirectContentUri() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime
    {
        [[nodiscard]] auto LastSuccessfulPrefetchTime() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation
    {
        [[nodiscard]] auto ResultFile() const;
        [[nodiscard]] auto Progress() const;
        auto StartAsync() const;
        auto AttachAsync() const;
        auto Pause() const;
        auto Resume() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2
    {
        [[nodiscard]] auto TransferGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3
    {
        [[nodiscard]] auto IsRandomAccessRequired() const;
        auto IsRandomAccessRequired(bool value) const;
        auto GetResultRandomAccessStreamReference() const;
        auto GetDownloadedRanges() const;
        auto RangesDownloaded(Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const;
        using RangesDownloaded_revoker = impl::event_revoker<Windows::Networking::BackgroundTransfer::IDownloadOperation3, &impl::abi_t<Windows::Networking::BackgroundTransfer::IDownloadOperation3>::remove_RangesDownloaded>;
        RangesDownloaded_revoker RangesDownloaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const;
        auto RangesDownloaded(winrt::event_token const& eventCookie) const noexcept;
        auto RequestedUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto RecoverableWebErrorStatuses() const;
        [[nodiscard]] auto CurrentWebErrorStatus() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation4
    {
        auto MakeCurrentInTransferGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation5
    {
        auto SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
        auto RemoveRequestHeader(param::hstring const& headerName) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation5<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IResponseInformation
    {
        [[nodiscard]] auto IsResumable() const;
        [[nodiscard]] auto ActualUri() const;
        [[nodiscard]] auto StatusCode() const;
        [[nodiscard]] auto Headers() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult
    {
        [[nodiscard]] auto IsUnconstrained() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation
    {
        [[nodiscard]] auto SourceFile() const;
        [[nodiscard]] auto Progress() const;
        auto StartAsync() const;
        auto AttachAsync() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation2
    {
        [[nodiscard]] auto TransferGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation3
    {
        auto MakeCurrentInTransferGroup() const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation4
    {
        auto SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
        auto RemoveRequestHeader(param::hstring const& headerName) const;
    };
    template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation4<D>;
    };
    struct struct_Windows_Networking_BackgroundTransfer_BackgroundDownloadProgress
    {
        uint64_t BytesReceived;
        uint64_t TotalBytesToReceive;
        int32_t Status;
        bool HasResponseChanged;
        bool HasRestarted;
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>
    {
        using type = struct_Windows_Networking_BackgroundTransfer_BackgroundDownloadProgress;
    };
    struct struct_Windows_Networking_BackgroundTransfer_BackgroundTransferFileRange
    {
        uint64_t Offset;
        uint64_t Length;
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
    {
        using type = struct_Windows_Networking_BackgroundTransfer_BackgroundTransferFileRange;
    };
    struct struct_Windows_Networking_BackgroundTransfer_BackgroundUploadProgress
    {
        uint64_t BytesReceived;
        uint64_t BytesSent;
        uint64_t TotalBytesToReceive;
        uint64_t TotalBytesToSend;
        int32_t Status;
        bool HasResponseChanged;
        bool HasRestarted;
    };
    template <> struct abi<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>
    {
        using type = struct_Windows_Networking_BackgroundTransfer_BackgroundUploadProgress;
    };
}
#endif
