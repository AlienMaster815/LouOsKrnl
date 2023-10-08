// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_1_H
#define WINRT_Windows_ApplicationModel_DataTransfer_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct __declspec(empty_bases) IClipboardContentOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardContentOptions>
    {
        IClipboardContentOptions(std::nullptr_t = nullptr) noexcept {}
        IClipboardContentOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClipboardHistoryChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardHistoryChangedEventArgs>
    {
        IClipboardHistoryChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IClipboardHistoryChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClipboardHistoryItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardHistoryItem>
    {
        IClipboardHistoryItem(std::nullptr_t = nullptr) noexcept {}
        IClipboardHistoryItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClipboardHistoryItemsResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardHistoryItemsResult>
    {
        IClipboardHistoryItemsResult(std::nullptr_t = nullptr) noexcept {}
        IClipboardHistoryItemsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClipboardStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardStatics>
    {
        IClipboardStatics(std::nullptr_t = nullptr) noexcept {}
        IClipboardStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClipboardStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClipboardStatics2>
    {
        IClipboardStatics2(std::nullptr_t = nullptr) noexcept {}
        IClipboardStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackage>
    {
        IDataPackage(std::nullptr_t = nullptr) noexcept {}
        IDataPackage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackage2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackage2>
    {
        IDataPackage2(std::nullptr_t = nullptr) noexcept {}
        IDataPackage2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackage3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackage3>
    {
        IDataPackage3(std::nullptr_t = nullptr) noexcept {}
        IDataPackage3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackage4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackage4>
    {
        IDataPackage4(std::nullptr_t = nullptr) noexcept {}
        IDataPackage4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySet :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySet>,
        impl::require<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>
    {
        IDataPackagePropertySet(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySet2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySet2>
    {
        IDataPackagePropertySet2(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySet2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySet3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySet3>
    {
        IDataPackagePropertySet3(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySet3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySet4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySet4>
    {
        IDataPackagePropertySet4(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySet4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySetView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySetView>
    {
        IDataPackagePropertySetView(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySetView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySetView2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySetView2>
    {
        IDataPackagePropertySetView2(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySetView2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySetView3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySetView3>
    {
        IDataPackagePropertySetView3(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySetView3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySetView4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySetView4>
    {
        IDataPackagePropertySetView4(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySetView4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackagePropertySetView5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackagePropertySetView5>
    {
        IDataPackagePropertySetView5(std::nullptr_t = nullptr) noexcept {}
        IDataPackagePropertySetView5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackageView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackageView>
    {
        IDataPackageView(std::nullptr_t = nullptr) noexcept {}
        IDataPackageView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackageView2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackageView2>
    {
        IDataPackageView2(std::nullptr_t = nullptr) noexcept {}
        IDataPackageView2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackageView3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackageView3>
    {
        IDataPackageView3(std::nullptr_t = nullptr) noexcept {}
        IDataPackageView3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataPackageView4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataPackageView4>
    {
        IDataPackageView4(std::nullptr_t = nullptr) noexcept {}
        IDataPackageView4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataProviderDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataProviderDeferral>
    {
        IDataProviderDeferral(std::nullptr_t = nullptr) noexcept {}
        IDataProviderDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataProviderRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataProviderRequest>
    {
        IDataProviderRequest(std::nullptr_t = nullptr) noexcept {}
        IDataProviderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataRequest>
    {
        IDataRequest(std::nullptr_t = nullptr) noexcept {}
        IDataRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataRequestDeferral>
    {
        IDataRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IDataRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataRequestedEventArgs>
    {
        IDataRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDataRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataTransferManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataTransferManager>
    {
        IDataTransferManager(std::nullptr_t = nullptr) noexcept {}
        IDataTransferManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataTransferManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataTransferManager2>
    {
        IDataTransferManager2(std::nullptr_t = nullptr) noexcept {}
        IDataTransferManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataTransferManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataTransferManagerStatics>
    {
        IDataTransferManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IDataTransferManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataTransferManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataTransferManagerStatics2>
    {
        IDataTransferManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IDataTransferManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataTransferManagerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataTransferManagerStatics3>
    {
        IDataTransferManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IDataTransferManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHtmlFormatHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHtmlFormatHelperStatics>
    {
        IHtmlFormatHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IHtmlFormatHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOperationCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOperationCompletedEventArgs>
    {
        IOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IOperationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOperationCompletedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOperationCompletedEventArgs2>
    {
        IOperationCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IOperationCompletedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareCompletedEventArgs>
    {
        IShareCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareProvider>
    {
        IShareProvider(std::nullptr_t = nullptr) noexcept {}
        IShareProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareProviderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareProviderFactory>
    {
        IShareProviderFactory(std::nullptr_t = nullptr) noexcept {}
        IShareProviderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareProviderOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareProviderOperation>
    {
        IShareProviderOperation(std::nullptr_t = nullptr) noexcept {}
        IShareProviderOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareProvidersRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareProvidersRequestedEventArgs>
    {
        IShareProvidersRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareProvidersRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareTargetInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareTargetInfo>
    {
        IShareTargetInfo(std::nullptr_t = nullptr) noexcept {}
        IShareTargetInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareUIOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareUIOptions>
    {
        IShareUIOptions(std::nullptr_t = nullptr) noexcept {}
        IShareUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISharedStorageAccessManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISharedStorageAccessManagerStatics>
    {
        ISharedStorageAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ISharedStorageAccessManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardDataFormatsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardDataFormatsStatics>
    {
        IStandardDataFormatsStatics(std::nullptr_t = nullptr) noexcept {}
        IStandardDataFormatsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardDataFormatsStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardDataFormatsStatics2>
    {
        IStandardDataFormatsStatics2(std::nullptr_t = nullptr) noexcept {}
        IStandardDataFormatsStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardDataFormatsStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardDataFormatsStatics3>
    {
        IStandardDataFormatsStatics3(std::nullptr_t = nullptr) noexcept {}
        IStandardDataFormatsStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITargetApplicationChosenEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetApplicationChosenEventArgs>
    {
        ITargetApplicationChosenEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITargetApplicationChosenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
