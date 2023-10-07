// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_2_H
#define WINRT_Windows_ApplicationModel_DataTransfer_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataProviderHandler : Windows::Foundation::IUnknown
    {
        DataProviderHandler(std::nullptr_t = nullptr) noexcept {}
        DataProviderHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DataProviderHandler(L lambda);
        template <typename F> DataProviderHandler(F* function);
        template <typename O, typename M> DataProviderHandler(O* object, M method);
        template <typename O, typename M> DataProviderHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DataProviderHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::ApplicationModel::DataTransfer::DataProviderRequest const& request) const;
    };
    struct ShareProviderHandler : Windows::Foundation::IUnknown
    {
        ShareProviderHandler(std::nullptr_t = nullptr) noexcept {}
        ShareProviderHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ShareProviderHandler(L lambda);
        template <typename F> ShareProviderHandler(F* function);
        template <typename O, typename M> ShareProviderHandler(O* object, M method);
        template <typename O, typename M> ShareProviderHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ShareProviderHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::ApplicationModel::DataTransfer::ShareProviderOperation const& operation) const;
    };
    struct Clipboard
    {
        Clipboard() = delete;
        static auto GetContent();
        static auto SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content);
        static auto Flush();
        static auto Clear();
        static auto ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ContentChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged>;
        [[nodiscard]] static ContentChanged_revoker ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto ContentChanged(winrt::event_token const& token);
        static auto GetHistoryItemsAsync();
        static auto ClearHistory();
        static auto DeleteItemFromHistory(Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem const& item);
        static auto SetHistoryItemAsContent(Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem const& item);
        static auto IsHistoryEnabled();
        static auto IsRoamingEnabled();
        static auto SetContentWithOptions(Windows::ApplicationModel::DataTransfer::DataPackage const& content, Windows::ApplicationModel::DataTransfer::ClipboardContentOptions const& options);
        static auto HistoryChanged(Windows::Foundation::EventHandler<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs> const& handler);
        using HistoryChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_HistoryChanged>;
        [[nodiscard]] static HistoryChanged_revoker HistoryChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs> const& handler);
        static auto HistoryChanged(winrt::event_token const& token);
        static auto RoamingEnabledChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RoamingEnabledChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_RoamingEnabledChanged>;
        [[nodiscard]] static RoamingEnabledChanged_revoker RoamingEnabledChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RoamingEnabledChanged(winrt::event_token const& token);
        static auto HistoryEnabledChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using HistoryEnabledChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics2, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics2>::remove_HistoryEnabledChanged>;
        [[nodiscard]] static HistoryEnabledChanged_revoker HistoryEnabledChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto HistoryEnabledChanged(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) ClipboardContentOptions : Windows::ApplicationModel::DataTransfer::IClipboardContentOptions
    {
        ClipboardContentOptions(std::nullptr_t) noexcept {}
        ClipboardContentOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IClipboardContentOptions(ptr, take_ownership_from_abi) {}
        ClipboardContentOptions();
    };
    struct __declspec(empty_bases) ClipboardHistoryChangedEventArgs : Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs
    {
        ClipboardHistoryChangedEventArgs(std::nullptr_t) noexcept {}
        ClipboardHistoryChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IClipboardHistoryChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ClipboardHistoryItem : Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem
    {
        ClipboardHistoryItem(std::nullptr_t) noexcept {}
        ClipboardHistoryItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IClipboardHistoryItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ClipboardHistoryItemsResult : Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult
    {
        ClipboardHistoryItemsResult(std::nullptr_t) noexcept {}
        ClipboardHistoryItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IClipboardHistoryItemsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataPackage : Windows::ApplicationModel::DataTransfer::IDataPackage,
        impl::require<DataPackage, Windows::ApplicationModel::DataTransfer::IDataPackage2, Windows::ApplicationModel::DataTransfer::IDataPackage3, Windows::ApplicationModel::DataTransfer::IDataPackage4>
    {
        DataPackage(std::nullptr_t) noexcept {}
        DataPackage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataPackage(ptr, take_ownership_from_abi) {}
        DataPackage();
    };
    struct __declspec(empty_bases) DataPackagePropertySet : Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet,
        impl::require<DataPackagePropertySet, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
    {
        DataPackagePropertySet(std::nullptr_t) noexcept {}
        DataPackagePropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataPackagePropertySetView : Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView,
        impl::require<DataPackagePropertySetView, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView5, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
    {
        DataPackagePropertySetView(std::nullptr_t) noexcept {}
        DataPackagePropertySetView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataPackageView : Windows::ApplicationModel::DataTransfer::IDataPackageView,
        impl::require<DataPackageView, Windows::ApplicationModel::DataTransfer::IDataPackageView2, Windows::ApplicationModel::DataTransfer::IDataPackageView3, Windows::ApplicationModel::DataTransfer::IDataPackageView4>
    {
        DataPackageView(std::nullptr_t) noexcept {}
        DataPackageView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataPackageView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataProviderDeferral : Windows::ApplicationModel::DataTransfer::IDataProviderDeferral
    {
        DataProviderDeferral(std::nullptr_t) noexcept {}
        DataProviderDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataProviderDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataProviderRequest : Windows::ApplicationModel::DataTransfer::IDataProviderRequest
    {
        DataProviderRequest(std::nullptr_t) noexcept {}
        DataProviderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataProviderRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataRequest : Windows::ApplicationModel::DataTransfer::IDataRequest
    {
        DataRequest(std::nullptr_t) noexcept {}
        DataRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataRequestDeferral : Windows::ApplicationModel::DataTransfer::IDataRequestDeferral
    {
        DataRequestDeferral(std::nullptr_t) noexcept {}
        DataRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataRequestedEventArgs : Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs
    {
        DataRequestedEventArgs(std::nullptr_t) noexcept {}
        DataRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataTransferManager : Windows::ApplicationModel::DataTransfer::IDataTransferManager,
        impl::require<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
    {
        DataTransferManager(std::nullptr_t) noexcept {}
        DataTransferManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IDataTransferManager(ptr, take_ownership_from_abi) {}
        static auto ShowShareUI();
        static auto GetForCurrentView();
        static auto IsSupported();
        static auto ShowShareUI(Windows::ApplicationModel::DataTransfer::ShareUIOptions const& options);
    };
    struct HtmlFormatHelper
    {
        HtmlFormatHelper() = delete;
        static auto GetStaticFragment(param::hstring const& htmlFormat);
        static auto CreateHtmlFormat(param::hstring const& htmlFragment);
    };
    struct __declspec(empty_bases) OperationCompletedEventArgs : Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs,
        impl::require<OperationCompletedEventArgs, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
    {
        OperationCompletedEventArgs(std::nullptr_t) noexcept {}
        OperationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareCompletedEventArgs : Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs
    {
        ShareCompletedEventArgs(std::nullptr_t) noexcept {}
        ShareCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareProvider : Windows::ApplicationModel::DataTransfer::IShareProvider
    {
        ShareProvider(std::nullptr_t) noexcept {}
        ShareProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareProvider(ptr, take_ownership_from_abi) {}
        ShareProvider(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler);
    };
    struct __declspec(empty_bases) ShareProviderOperation : Windows::ApplicationModel::DataTransfer::IShareProviderOperation
    {
        ShareProviderOperation(std::nullptr_t) noexcept {}
        ShareProviderOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareProviderOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareProvidersRequestedEventArgs : Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs
    {
        ShareProvidersRequestedEventArgs(std::nullptr_t) noexcept {}
        ShareProvidersRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareTargetInfo : Windows::ApplicationModel::DataTransfer::IShareTargetInfo
    {
        ShareTargetInfo(std::nullptr_t) noexcept {}
        ShareTargetInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareTargetInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareUIOptions : Windows::ApplicationModel::DataTransfer::IShareUIOptions
    {
        ShareUIOptions(std::nullptr_t) noexcept {}
        ShareUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::IShareUIOptions(ptr, take_ownership_from_abi) {}
        ShareUIOptions();
    };
    struct SharedStorageAccessManager
    {
        SharedStorageAccessManager() = delete;
        static auto AddFile(Windows::Storage::IStorageFile const& file);
        static auto RedeemTokenForFileAsync(param::hstring const& token);
        static auto RemoveFile(param::hstring const& token);
    };
    struct StandardDataFormats
    {
        StandardDataFormats() = delete;
        [[nodiscard]] static auto Text();
        [[nodiscard]] static auto Uri();
        [[nodiscard]] static auto Html();
        [[nodiscard]] static auto Rtf();
        [[nodiscard]] static auto Bitmap();
        [[nodiscard]] static auto StorageItems();
        [[nodiscard]] static auto WebLink();
        [[nodiscard]] static auto ApplicationLink();
        [[nodiscard]] static auto UserActivityJsonArray();
    };
    struct __declspec(empty_bases) TargetApplicationChosenEventArgs : Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs
    {
        TargetApplicationChosenEventArgs(std::nullptr_t) noexcept {}
        TargetApplicationChosenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
