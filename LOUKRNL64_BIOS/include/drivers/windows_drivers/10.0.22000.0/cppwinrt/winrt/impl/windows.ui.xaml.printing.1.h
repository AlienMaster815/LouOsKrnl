// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Printing_1_H
#define WINRT_Windows_UI_Xaml_Printing_1_H
#include "winrt/impl/Windows.UI.Xaml.Printing.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing
{
    struct __declspec(empty_bases) IAddPagesEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAddPagesEventArgs>
    {
        IAddPagesEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAddPagesEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGetPreviewPageEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGetPreviewPageEventArgs>
    {
        IGetPreviewPageEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGetPreviewPageEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPaginateEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaginateEventArgs>
    {
        IPaginateEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPaginateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintDocument :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocument>
    {
        IPrintDocument(std::nullptr_t = nullptr) noexcept {}
        IPrintDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintDocumentFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocumentFactory>
    {
        IPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
        IPrintDocumentFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintDocumentStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocumentStatics>
    {
        IPrintDocumentStatics(std::nullptr_t = nullptr) noexcept {}
        IPrintDocumentStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
