// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_0_H
#define WINRT_Windows_ApplicationModel_DataTransfer_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Security::EnterpriseData
{
    enum class ProtectionPolicyEvaluationResult : int32_t;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct IStorageItem;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
    struct RandomAccessStreamReference;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::ApplicationModel::DataTransfer
{
    enum class ClipboardHistoryItemsResultStatus : int32_t
    {
        Success = 0,
        AccessDenied = 1,
        ClipboardHistoryDisabled = 2,
    };
    enum class DataPackageOperation : uint32_t
    {
        None = 0,
        Copy = 0x1,
        Move = 0x2,
        Link = 0x4,
    };
    enum class SetHistoryItemAsContentStatus : int32_t
    {
        Success = 0,
        AccessDenied = 1,
        ItemDeleted = 2,
    };
    enum class ShareUITheme : int32_t
    {
        Default = 0,
        Light = 1,
        Dark = 2,
    };
    struct IClipboardContentOptions;
    struct IClipboardHistoryChangedEventArgs;
    struct IClipboardHistoryItem;
    struct IClipboardHistoryItemsResult;
    struct IClipboardStatics;
    struct IClipboardStatics2;
    struct IDataPackage;
    struct IDataPackage2;
    struct IDataPackage3;
    struct IDataPackage4;
    struct IDataPackagePropertySet;
    struct IDataPackagePropertySet2;
    struct IDataPackagePropertySet3;
    struct IDataPackagePropertySet4;
    struct IDataPackagePropertySetView;
    struct IDataPackagePropertySetView2;
    struct IDataPackagePropertySetView3;
    struct IDataPackagePropertySetView4;
    struct IDataPackagePropertySetView5;
    struct IDataPackageView;
    struct IDataPackageView2;
    struct IDataPackageView3;
    struct IDataPackageView4;
    struct IDataProviderDeferral;
    struct IDataProviderRequest;
    struct IDataRequest;
    struct IDataRequestDeferral;
    struct IDataRequestedEventArgs;
    struct IDataTransferManager;
    struct IDataTransferManager2;
    struct IDataTransferManagerStatics;
    struct IDataTransferManagerStatics2;
    struct IDataTransferManagerStatics3;
    struct IHtmlFormatHelperStatics;
    struct IOperationCompletedEventArgs;
    struct IOperationCompletedEventArgs2;
    struct IShareCompletedEventArgs;
    struct IShareProvider;
    struct IShareProviderFactory;
    struct IShareProviderOperation;
    struct IShareProvidersRequestedEventArgs;
    struct IShareTargetInfo;
    struct IShareUIOptions;
    struct ISharedStorageAccessManagerStatics;
    struct IStandardDataFormatsStatics;
    struct IStandardDataFormatsStatics2;
    struct IStandardDataFormatsStatics3;
    struct ITargetApplicationChosenEventArgs;
    struct Clipboard;
    struct ClipboardContentOptions;
    struct ClipboardHistoryChangedEventArgs;
    struct ClipboardHistoryItem;
    struct ClipboardHistoryItemsResult;
    struct DataPackage;
    struct DataPackagePropertySet;
    struct DataPackagePropertySetView;
    struct DataPackageView;
    struct DataProviderDeferral;
    struct DataProviderRequest;
    struct DataRequest;
    struct DataRequestDeferral;
    struct DataRequestedEventArgs;
    struct DataTransferManager;
    struct HtmlFormatHelper;
    struct OperationCompletedEventArgs;
    struct ShareCompletedEventArgs;
    struct ShareProvider;
    struct ShareProviderOperation;
    struct ShareProvidersRequestedEventArgs;
    struct ShareTargetInfo;
    struct ShareUIOptions;
    struct SharedStorageAccessManager;
    struct StandardDataFormats;
    struct TargetApplicationChosenEventArgs;
    struct DataProviderHandler;
    struct ShareProviderHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardContentOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IShareUIOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::Clipboard>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ClipboardContentOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackageView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataTransferManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareUIOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::StandardDataFormats>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResultStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackageOperation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::SetHistoryItemAsContentStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareUITheme>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardContentOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardContentOptions" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardHistoryChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardHistoryItem" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardHistoryItemsResult" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage4" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet4" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView4" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView5" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView4" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataProviderDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataProviderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequest" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequestDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManager" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManager2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProvider>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProvider" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProviderFactory" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProviderOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareTargetInfo" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IShareUIOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareUIOptions" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::Clipboard>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.Clipboard" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ClipboardContentOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ClipboardContentOptions" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ClipboardHistoryChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ClipboardHistoryItem" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ClipboardHistoryItemsResult" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackage>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackage" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySet" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackageView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackageView" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequest" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequestDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataTransferManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataTransferManager" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.HtmlFormatHelper" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProvider>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProvider" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProviderOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTargetInfo" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareUIOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareUIOptions" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::StandardDataFormats>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.StandardDataFormats" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResultStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ClipboardHistoryItemsResultStatus" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackageOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackageOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::SetHistoryItemAsContentStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.SetHistoryItemAsContentStatus" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareUITheme>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareUITheme" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderHandler" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProviderHandler" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardContentOptions>
    {
        static constexpr guid value{ 0xE888A98C,0xAD4B,0x5447,{ 0xA0,0x56,0xAB,0x35,0x56,0x27,0x6D,0x2B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs>
    {
        static constexpr guid value{ 0xC0BE453F,0x8EA2,0x53CE,{ 0x9A,0xBA,0x8D,0x22,0x12,0x57,0x34,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem>
    {
        static constexpr guid value{ 0x0173BD8A,0xAFFF,0x5C50,{ 0xAB,0x92,0x3D,0x19,0xF4,0x81,0xEC,0x58 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult>
    {
        static constexpr guid value{ 0xE6DFDEE6,0x0EE2,0x52E3,{ 0x85,0x2B,0xF2,0x95,0xDB,0x65,0x93,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
    {
        static constexpr guid value{ 0xC627E291,0x34E2,0x4963,{ 0x8E,0xED,0x93,0xCB,0xB0,0xEA,0x3D,0x70 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>
    {
        static constexpr guid value{ 0xD2AC1B6A,0xD29F,0x554B,{ 0xB3,0x03,0xF0,0x45,0x23,0x45,0xFE,0x02 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackage>
    {
        static constexpr guid value{ 0x61EBF5C7,0xEFEA,0x4346,{ 0x95,0x54,0x98,0x1D,0x7E,0x19,0x8F,0xFE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackage2>
    {
        static constexpr guid value{ 0x041C1FE9,0x2409,0x45E1,{ 0xA5,0x38,0x4C,0x53,0xEE,0xEE,0x04,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackage3>
    {
        static constexpr guid value{ 0x88F31F5D,0x787B,0x4D32,{ 0x96,0x5A,0xA9,0x83,0x81,0x05,0xA0,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        static constexpr guid value{ 0x13A24EC8,0x9382,0x536F,{ 0x85,0x2A,0x30,0x45,0xE1,0xB2,0x9A,0x3B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
    {
        static constexpr guid value{ 0xCD1C93EB,0x4C4C,0x443A,{ 0xA8,0xD3,0xF5,0xC2,0x41,0xE9,0x16,0x89 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
    {
        static constexpr guid value{ 0xEB505D4A,0x9800,0x46AA,{ 0xB1,0x81,0x7B,0x6F,0x0F,0x2B,0x91,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
    {
        static constexpr guid value{ 0x9E87FD9B,0x5205,0x401B,{ 0x87,0x4A,0x45,0x56,0x53,0xBD,0x39,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        static constexpr guid value{ 0x6390EBF5,0x1739,0x4C74,{ 0xB2,0x2F,0x86,0x5F,0xAB,0x5E,0x85,0x45 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
    {
        static constexpr guid value{ 0xB94CEC01,0x0C1A,0x4C57,{ 0xBE,0x55,0x75,0xD0,0x12,0x89,0x73,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
    {
        static constexpr guid value{ 0x6054509B,0x8EBE,0x4FEB,{ 0x9C,0x1E,0x75,0xE6,0x9D,0xE5,0x4B,0x84 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
    {
        static constexpr guid value{ 0xDB764CE5,0xD174,0x495C,{ 0x84,0xFC,0x1A,0x51,0xF6,0xAB,0x45,0xD7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
    {
        static constexpr guid value{ 0x4474C80D,0xD16F,0x40AE,{ 0x95,0x80,0x6F,0x85,0x62,0xB9,0x42,0x35 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5>
    {
        static constexpr guid value{ 0x6F0A9445,0x3760,0x50BB,{ 0x85,0x23,0xC4,0x20,0x2D,0xED,0x7D,0x78 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackageView>
    {
        static constexpr guid value{ 0x7B840471,0x5900,0x4D85,{ 0xA9,0x0B,0x10,0xCB,0x85,0xFE,0x35,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackageView2>
    {
        static constexpr guid value{ 0x40ECBA95,0x2450,0x4C1D,{ 0xB6,0xB4,0xED,0x45,0x46,0x3D,0xEE,0x9C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
    {
        static constexpr guid value{ 0xD37771A8,0xDDAD,0x4288,{ 0x84,0x28,0xD1,0xCA,0xE3,0x94,0x12,0x8B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        static constexpr guid value{ 0xDFE96F1F,0xE042,0x4433,{ 0xA0,0x9F,0x26,0xD6,0xFF,0xDA,0x8B,0x85 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
    {
        static constexpr guid value{ 0xC2CF2373,0x2D26,0x43D9,{ 0xB6,0x9D,0xDC,0xB8,0x6D,0x03,0xF6,0xDA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
    {
        static constexpr guid value{ 0xEBBC7157,0xD3C8,0x47DA,{ 0xAC,0xDE,0xF8,0x23,0x88,0xD5,0xF7,0x16 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataRequest>
    {
        static constexpr guid value{ 0x4341AE3B,0xFC12,0x4E53,{ 0x8C,0x02,0xAC,0x71,0x4C,0x41,0x5A,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
    {
        static constexpr guid value{ 0x6DC4B89F,0x0386,0x4263,{ 0x87,0xC1,0xED,0x7D,0xCE,0x30,0x89,0x0E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
    {
        static constexpr guid value{ 0xCB8BA807,0x6AC5,0x43C9,{ 0x8A,0xC5,0x9B,0xA2,0x32,0x16,0x31,0x82 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataTransferManager>
    {
        static constexpr guid value{ 0xA5CAEE9B,0x8708,0x49D1,{ 0x8D,0x36,0x67,0xD2,0x5A,0x8D,0xA0,0x0C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        static constexpr guid value{ 0x30AE7D71,0x8BA8,0x4C02,{ 0x8E,0x3F,0xDD,0xB2,0x3B,0x38,0x87,0x15 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
    {
        static constexpr guid value{ 0xA9DA01AA,0xE00E,0x4CFE,{ 0xAA,0x44,0x2D,0xD9,0x32,0xDC,0xA3,0xD8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
    {
        static constexpr guid value{ 0xC54EC2EC,0x9F97,0x4D63,{ 0x98,0x68,0x39,0x5E,0x27,0x1A,0xD8,0xF5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
    {
        static constexpr guid value{ 0x05845473,0x6C82,0x4F5C,{ 0xAC,0x23,0x62,0xE4,0x58,0x36,0x1F,0xAC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
    {
        static constexpr guid value{ 0xE22E7749,0xDD70,0x446F,{ 0xAE,0xFC,0x61,0xCE,0xE5,0x9F,0x65,0x5E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
    {
        static constexpr guid value{ 0xE7AF329D,0x051D,0x4FAB,{ 0xB1,0xA9,0x47,0xFD,0x77,0xF7,0x0A,0x41 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        static constexpr guid value{ 0x858FA073,0x1E19,0x4105,{ 0xB2,0xF7,0xC8,0x47,0x88,0x08,0xD5,0x62 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
    {
        static constexpr guid value{ 0x4574C442,0xF913,0x4F60,{ 0x9D,0xF7,0xCC,0x40,0x60,0xAB,0x19,0x16 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareProvider>
    {
        static constexpr guid value{ 0x2FABE026,0x443E,0x4CDA,{ 0xAF,0x25,0x8D,0x81,0x07,0x0E,0xFD,0x80 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
    {
        static constexpr guid value{ 0x172A174C,0xE79E,0x4F6D,{ 0xB0,0x7D,0x12,0x8F,0x46,0x9E,0x02,0x96 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
    {
        static constexpr guid value{ 0x19CEF937,0xD435,0x4179,{ 0xB6,0xAF,0x14,0xE0,0x49,0x2B,0x69,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
    {
        static constexpr guid value{ 0xF888F356,0xA3F8,0x4FCE,{ 0x85,0xE4,0x88,0x26,0xE6,0x3B,0xE7,0x99 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
    {
        static constexpr guid value{ 0x385BE607,0xC6E8,0x4114,{ 0xB2,0x94,0x28,0xF3,0xBB,0x6F,0x99,0x04 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IShareUIOptions>
    {
        static constexpr guid value{ 0x72FA8A80,0x342F,0x4D90,{ 0x95,0x51,0x2A,0xE0,0x4E,0x37,0x68,0x0C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
    {
        static constexpr guid value{ 0xC6132ADA,0x34B1,0x4849,{ 0xBD,0x5F,0xD0,0x9F,0xEE,0x31,0x58,0xC5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
    {
        static constexpr guid value{ 0x7ED681A1,0xA880,0x40C9,{ 0xB4,0xED,0x0B,0xEE,0x1E,0x15,0xF5,0x49 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
    {
        static constexpr guid value{ 0x42A254F4,0x9D76,0x42E8,{ 0x86,0x1B,0x47,0xC2,0x5D,0xD0,0xCF,0x71 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
    {
        static constexpr guid value{ 0x3B57B069,0x01D4,0x474C,{ 0x8B,0x5F,0xBC,0x8E,0x27,0xF3,0x8B,0x21 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
    {
        static constexpr guid value{ 0xCA6FB8AC,0x2987,0x4EE3,{ 0x9C,0x54,0xD8,0xAF,0xBC,0xB8,0x6C,0x1D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
    {
        static constexpr guid value{ 0xE7ECD720,0xF2F4,0x4A2D,{ 0x92,0x0E,0x17,0x0A,0x2F,0x48,0x2A,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
    {
        static constexpr guid value{ 0xE7F9D9BA,0xE1BA,0x4E4D,{ 0xBD,0x65,0xD4,0x38,0x45,0xD3,0x21,0x2F } };
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ClipboardContentOptions>
    {
        using type = Windows::ApplicationModel::DataTransfer::IClipboardContentOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem>
    {
        using type = Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResult>
    {
        using type = Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackage>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataPackage;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackageView>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataPackageView;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataProviderDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataProviderRequest>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataProviderRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequest>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataRequestDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataTransferManager>
    {
        using type = Windows::ApplicationModel::DataTransfer::IDataTransferManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProvider>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareProvider;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareProviderOperation;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareTargetInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareUIOptions>
    {
        using type = Windows::ApplicationModel::DataTransfer::IShareUIOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardContentOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRoamable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRoamable(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAllowedInHistory(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAllowedInHistory(bool) noexcept = 0;
            virtual int32_t __stdcall get_RoamingFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_HistoryFormats(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetContent(void**) noexcept = 0;
            virtual int32_t __stdcall SetContent(void*) noexcept = 0;
            virtual int32_t __stdcall Flush() noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall add_ContentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContentChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetHistoryItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearHistory(bool*) noexcept = 0;
            virtual int32_t __stdcall DeleteItemFromHistory(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetHistoryItemAsContent(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsHistoryEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall IsRoamingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall SetContentWithOptions(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall add_HistoryChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HistoryChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RoamingEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RoamingEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HistoryEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HistoryEnabledChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetView(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedOperation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestedOperation(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_OperationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OperationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Destroyed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Destroyed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetData(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetDataProvider(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetText(void*) noexcept = 0;
            virtual int32_t __stdcall SetUri(void*) noexcept = 0;
            virtual int32_t __stdcall SetHtmlFormat(void*) noexcept = 0;
            virtual int32_t __stdcall get_ResourceMap(void**) noexcept = 0;
            virtual int32_t __stdcall SetRtf(void*) noexcept = 0;
            virtual int32_t __stdcall SetBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetStorageItemsReadOnly(void*) noexcept = 0;
            virtual int32_t __stdcall SetStorageItems(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetApplicationLink(void*) noexcept = 0;
            virtual int32_t __stdcall SetWebLink(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ShareCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShareCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ShareCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShareCanceled(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ApplicationName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationListingUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ApplicationListingUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentSourceWebLink(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentSourceWebLink(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentSourceApplicationLink(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentSourceApplicationLink(void*) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_PackageFamilyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square30x30Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Square30x30Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_LogoBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_LogoBackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall put_EnterpriseId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentSourceUserActivityJson(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentSourceUserActivityJson(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationListingUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentSourceWebLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentSourceApplicationLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_Square30x30Logo(void**) noexcept = 0;
            virtual int32_t __stdcall get_LogoBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentSourceUserActivityJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromRoamingClipboard(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedOperation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ReportOperationCompleted(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AvailableFormats(void**) noexcept = 0;
            virtual int32_t __stdcall Contains(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall GetDataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetTextAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCustomTextAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUriAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetHtmlFormatAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetResourceMapAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRtfAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetBitmapAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetStorageItemsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetApplicationLinkAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetWebLinkAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessWithEnterpriseIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnlockAndAssumeEnterpriseIdentity(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAcceptedFormatId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormatId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetData(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall FailWithDisplayText(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_DataRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TargetApplicationChosen(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetApplicationChosen(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ShareProvidersRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShareProvidersRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowShareUI() noexcept = 0;
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowShareUIWithOptions(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStaticFragment(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateHtmlFormat(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AcceptedFormatId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShareTarget(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayIcon(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, struct struct_Windows_UI_Color, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_Provider(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Providers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShareProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareUIOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Theme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Theme(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectionRect(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionRect(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddFile(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RedeemTokenForFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Html(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rtf(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bitmap(void**) noexcept = 0;
            virtual int32_t __stdcall get_StorageItems(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationLink(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserActivityJsonArray(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ApplicationName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardContentOptions
    {
        [[nodiscard]] auto IsRoamable() const;
        auto IsRoamable(bool value) const;
        [[nodiscard]] auto IsAllowedInHistory() const;
        auto IsAllowedInHistory(bool value) const;
        [[nodiscard]] auto RoamingFormats() const;
        [[nodiscard]] auto HistoryFormats() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardContentOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardContentOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryChangedEventArgs
    {
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryItem
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto Content() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryItemsResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Items() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardHistoryItemsResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics
    {
        auto GetContent() const;
        auto SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content) const;
        auto Flush() const;
        auto Clear() const;
        auto ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ContentChanged_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged>;
        ContentChanged_revoker ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto ContentChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics2
    {
        auto GetHistoryItemsAsync() const;
        auto ClearHistory() const;
        auto DeleteItemFromHistory(Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem const& item) const;
        auto SetHistoryItemAsContent(Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem const& item) const;
        auto IsHistoryEnabled() const;
        auto IsRoamingEnabled() const;
        auto SetContentWithOptions(Windows::ApplicationModel::DataTransfer::DataPackage const& content, Windows::ApplicationModel::DataTransfer::ClipboardContentOptions const& options) const;
        auto HistoryChanged(Windows::Foundation::EventHandler<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs> const& handler) const;
        using HistoryChanged_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_HistoryChanged>;
        HistoryChanged_revoker HistoryChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs> const& handler) const;
        auto HistoryChanged(winrt::event_token const& token) const noexcept;
        auto RoamingEnabledChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RoamingEnabledChanged_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_RoamingEnabledChanged>;
        RoamingEnabledChanged_revoker RoamingEnabledChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RoamingEnabledChanged(winrt::event_token const& token) const noexcept;
        auto HistoryEnabledChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using HistoryEnabledChanged_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_HistoryEnabledChanged>;
        HistoryEnabledChanged_revoker HistoryEnabledChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto HistoryEnabledChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage
    {
        auto GetView() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto RequestedOperation() const;
        auto RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
        auto OperationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const;
        using OperationCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_OperationCompleted>;
        OperationCompleted_revoker OperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const;
        auto OperationCompleted(winrt::event_token const& token) const noexcept;
        auto Destroyed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
        using Destroyed_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_Destroyed>;
        Destroyed_revoker Destroyed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
        auto Destroyed(winrt::event_token const& token) const noexcept;
        auto SetData(param::hstring const& formatId, Windows::Foundation::IInspectable const& value) const;
        auto SetDataProvider(param::hstring const& formatId, Windows::ApplicationModel::DataTransfer::DataProviderHandler const& delayRenderer) const;
        auto SetText(param::hstring const& value) const;
        auto SetUri(Windows::Foundation::Uri const& value) const;
        auto SetHtmlFormat(param::hstring const& value) const;
        [[nodiscard]] auto ResourceMap() const;
        auto SetRtf(param::hstring const& value) const;
        auto SetBitmap(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
        auto SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value) const;
        auto SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value, bool readOnly) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage2
    {
        auto SetApplicationLink(Windows::Foundation::Uri const& value) const;
        auto SetWebLink(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage3
    {
        auto ShareCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const;
        using ShareCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage3, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage3>::remove_ShareCompleted>;
        ShareCompleted_revoker ShareCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const;
        auto ShareCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage4
    {
        auto ShareCanceled(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
        using ShareCanceled_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage4, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage4>::remove_ShareCanceled>;
        ShareCanceled_revoker ShareCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
        auto ShareCanceled(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto FileTypes() const;
        [[nodiscard]] auto ApplicationName() const;
        auto ApplicationName(param::hstring const& value) const;
        [[nodiscard]] auto ApplicationListingUri() const;
        auto ApplicationListingUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2
    {
        [[nodiscard]] auto ContentSourceWebLink() const;
        auto ContentSourceWebLink(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ContentSourceApplicationLink() const;
        auto ContentSourceApplicationLink(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto PackageFamilyName() const;
        auto PackageFamilyName(param::hstring const& value) const;
        [[nodiscard]] auto Square30x30Logo() const;
        auto Square30x30Logo(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto LogoBackgroundColor() const;
        auto LogoBackgroundColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3
    {
        [[nodiscard]] auto EnterpriseId() const;
        auto EnterpriseId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet4
    {
        [[nodiscard]] auto ContentSourceUserActivityJson() const;
        auto ContentSourceUserActivityJson(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView
    {
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Thumbnail() const;
        [[nodiscard]] auto FileTypes() const;
        [[nodiscard]] auto ApplicationName() const;
        [[nodiscard]] auto ApplicationListingUri() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2
    {
        [[nodiscard]] auto PackageFamilyName() const;
        [[nodiscard]] auto ContentSourceWebLink() const;
        [[nodiscard]] auto ContentSourceApplicationLink() const;
        [[nodiscard]] auto Square30x30Logo() const;
        [[nodiscard]] auto LogoBackgroundColor() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3
    {
        [[nodiscard]] auto EnterpriseId() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView4
    {
        [[nodiscard]] auto ContentSourceUserActivityJson() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView5
    {
        [[nodiscard]] auto IsFromRoamingClipboard() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView
    {
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto RequestedOperation() const;
        auto ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
        [[nodiscard]] auto AvailableFormats() const;
        auto Contains(param::hstring const& formatId) const;
        auto GetDataAsync(param::hstring const& formatId) const;
        auto GetTextAsync() const;
        auto GetTextAsync(param::hstring const& formatId) const;
        auto GetUriAsync() const;
        auto GetHtmlFormatAsync() const;
        auto GetResourceMapAsync() const;
        auto GetRtfAsync() const;
        auto GetBitmapAsync() const;
        auto GetStorageItemsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2
    {
        auto GetApplicationLinkAsync() const;
        auto GetWebLinkAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3
    {
        auto RequestAccessAsync() const;
        auto RequestAccessAsync(param::hstring const& enterpriseId) const;
        auto UnlockAndAssumeEnterpriseIdentity() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4
    {
        auto SetAcceptedFormatId(param::hstring const& formatId) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest
    {
        [[nodiscard]] auto FormatId() const;
        [[nodiscard]] auto Deadline() const;
        auto GetDeferral() const;
        auto SetData(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataRequest
    {
        [[nodiscard]] auto Data() const;
        auto Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const;
        [[nodiscard]] auto Deadline() const;
        auto FailWithDisplayText(param::hstring const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager
    {
        auto DataRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const;
        using DataRequested_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_DataRequested>;
        DataRequested_revoker DataRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const;
        auto DataRequested(winrt::event_token const& eventCookie) const noexcept;
        auto TargetApplicationChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const;
        using TargetApplicationChosen_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_TargetApplicationChosen>;
        TargetApplicationChosen_revoker TargetApplicationChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const;
        auto TargetApplicationChosen(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2
    {
        auto ShareProvidersRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const;
        using ShareProvidersRequested_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>::remove_ShareProvidersRequested>;
        ShareProvidersRequested_revoker ShareProvidersRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const;
        auto ShareProvidersRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics
    {
        auto ShowShareUI() const;
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics3
    {
        auto ShowShareUI(Windows::ApplicationModel::DataTransfer::ShareUIOptions const& options) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics
    {
        auto GetStaticFragment(param::hstring const& htmlFormat) const;
        auto CreateHtmlFormat(param::hstring const& htmlFragment) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs
    {
        [[nodiscard]] auto Operation() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2
    {
        [[nodiscard]] auto AcceptedFormatId() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs
    {
        [[nodiscard]] auto ShareTarget() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareProvider
    {
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto DisplayIcon() const;
        [[nodiscard]] auto BackgroundColor() const;
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProvider>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory
    {
        auto Create(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation
    {
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto Provider() const;
        auto ReportCompleted() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs
    {
        [[nodiscard]] auto Providers() const;
        [[nodiscard]] auto Data() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo
    {
        [[nodiscard]] auto AppUserModelId() const;
        [[nodiscard]] auto ShareProvider() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions
    {
        [[nodiscard]] auto Theme() const;
        auto Theme(Windows::ApplicationModel::DataTransfer::ShareUITheme const& value) const;
        [[nodiscard]] auto SelectionRect() const;
        auto SelectionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareUIOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics
    {
        auto AddFile(Windows::Storage::IStorageFile const& file) const;
        auto RedeemTokenForFileAsync(param::hstring const& token) const;
        auto RemoveFile(param::hstring const& token) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics
    {
        [[nodiscard]] auto Text() const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Html() const;
        [[nodiscard]] auto Rtf() const;
        [[nodiscard]] auto Bitmap() const;
        [[nodiscard]] auto StorageItems() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2
    {
        [[nodiscard]] auto WebLink() const;
        [[nodiscard]] auto ApplicationLink() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics3
    {
        [[nodiscard]] auto UserActivityJsonArray() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs
    {
        [[nodiscard]] auto ApplicationName() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs<D>;
    };
}
#endif
