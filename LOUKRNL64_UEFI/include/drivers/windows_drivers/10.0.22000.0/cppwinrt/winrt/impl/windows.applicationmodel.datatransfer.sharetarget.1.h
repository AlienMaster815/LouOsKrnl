// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_1_H
#define WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_1_H
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget
{
    struct __declspec(empty_bases) IQuickLink :
        Windows::Foundation::IInspectable,
        impl::consume_t<IQuickLink>
    {
        IQuickLink(std::nullptr_t = nullptr) noexcept {}
        IQuickLink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareOperation>
    {
        IShareOperation(std::nullptr_t = nullptr) noexcept {}
        IShareOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareOperation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareOperation2>
    {
        IShareOperation2(std::nullptr_t = nullptr) noexcept {}
        IShareOperation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareOperation3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareOperation3>
    {
        IShareOperation3(std::nullptr_t = nullptr) noexcept {}
        IShareOperation3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
