// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WebUI_1_H
#define WINRT_Windows_UI_WebUI_1_H
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.UI.WebUI.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI
{
    struct __declspec(empty_bases) IActivatedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedDeferral>
    {
        IActivatedDeferral(std::nullptr_t = nullptr) noexcept {}
        IActivatedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivatedEventArgsDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedEventArgsDeferral>
    {
        IActivatedEventArgsDeferral(std::nullptr_t = nullptr) noexcept {}
        IActivatedEventArgsDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivatedOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedOperation>
    {
        IActivatedOperation(std::nullptr_t = nullptr) noexcept {}
        IActivatedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHtmlPrintDocumentSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHtmlPrintDocumentSource>,
        impl::require<Windows::UI::WebUI::IHtmlPrintDocumentSource, Windows::Graphics::Printing::IPrintDocumentSource>
    {
        IHtmlPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
        IHtmlPrintDocumentSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INewWebUIViewCreatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INewWebUIViewCreatedEventArgs>
    {
        INewWebUIViewCreatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INewWebUIViewCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIActivationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIActivationStatics>
    {
        IWebUIActivationStatics(std::nullptr_t = nullptr) noexcept {}
        IWebUIActivationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIActivationStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIActivationStatics2>
    {
        IWebUIActivationStatics2(std::nullptr_t = nullptr) noexcept {}
        IWebUIActivationStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIActivationStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIActivationStatics3>
    {
        IWebUIActivationStatics3(std::nullptr_t = nullptr) noexcept {}
        IWebUIActivationStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIActivationStatics4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIActivationStatics4>
    {
        IWebUIActivationStatics4(std::nullptr_t = nullptr) noexcept {}
        IWebUIActivationStatics4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIBackgroundTaskInstance :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIBackgroundTaskInstance>
    {
        IWebUIBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
        IWebUIBackgroundTaskInstance(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIBackgroundTaskInstanceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIBackgroundTaskInstanceStatics>
    {
        IWebUIBackgroundTaskInstanceStatics(std::nullptr_t = nullptr) noexcept {}
        IWebUIBackgroundTaskInstanceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUINavigatedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUINavigatedDeferral>
    {
        IWebUINavigatedDeferral(std::nullptr_t = nullptr) noexcept {}
        IWebUINavigatedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUINavigatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUINavigatedEventArgs>
    {
        IWebUINavigatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebUINavigatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUINavigatedOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUINavigatedOperation>
    {
        IWebUINavigatedOperation(std::nullptr_t = nullptr) noexcept {}
        IWebUINavigatedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIView>
    {
        IWebUIView(std::nullptr_t = nullptr) noexcept {}
        IWebUIView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebUIViewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebUIViewStatics>
    {
        IWebUIViewStatics(std::nullptr_t = nullptr) noexcept {}
        IWebUIViewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
