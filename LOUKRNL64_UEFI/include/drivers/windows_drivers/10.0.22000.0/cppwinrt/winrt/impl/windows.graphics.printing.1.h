// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_1_H
#define WINRT_Windows_Graphics_Printing_1_H
#include "winrt/impl/Windows.Graphics.Printing.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing
{
    struct __declspec(empty_bases) IPrintDocumentSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintDocumentSource>
    {
        IPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
        IPrintDocumentSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintManager>
    {
        IPrintManager(std::nullptr_t = nullptr) noexcept {}
        IPrintManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintManagerStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintManagerStatic>
    {
        IPrintManagerStatic(std::nullptr_t = nullptr) noexcept {}
        IPrintManagerStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintManagerStatic2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintManagerStatic2>
    {
        IPrintManagerStatic2(std::nullptr_t = nullptr) noexcept {}
        IPrintManagerStatic2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintPageInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintPageInfo>
    {
        IPrintPageInfo(std::nullptr_t = nullptr) noexcept {}
        IPrintPageInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintPageRange :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintPageRange>
    {
        IPrintPageRange(std::nullptr_t = nullptr) noexcept {}
        IPrintPageRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintPageRangeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintPageRangeFactory>
    {
        IPrintPageRangeFactory(std::nullptr_t = nullptr) noexcept {}
        IPrintPageRangeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintPageRangeOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintPageRangeOptions>
    {
        IPrintPageRangeOptions(std::nullptr_t = nullptr) noexcept {}
        IPrintPageRangeOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTask :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTask>
    {
        IPrintTask(std::nullptr_t = nullptr) noexcept {}
        IPrintTask(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTask2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTask2>
    {
        IPrintTask2(std::nullptr_t = nullptr) noexcept {}
        IPrintTask2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskCompletedEventArgs>
    {
        IPrintTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptions>
    {
        IPrintTaskOptions(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskOptions2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptions2>
    {
        IPrintTaskOptions2(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskOptions2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskOptionsCore :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionsCore>
    {
        IPrintTaskOptionsCore(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskOptionsCore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskOptionsCoreProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionsCoreProperties>
    {
        IPrintTaskOptionsCoreProperties(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskOptionsCoreProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskOptionsCoreUIConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskOptionsCoreUIConfiguration>
    {
        IPrintTaskOptionsCoreUIConfiguration(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskOptionsCoreUIConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskProgressingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskProgressingEventArgs>
    {
        IPrintTaskProgressingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskProgressingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskRequest>
    {
        IPrintTaskRequest(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskRequestedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskRequestedDeferral>
    {
        IPrintTaskRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskRequestedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskRequestedEventArgs>
    {
        IPrintTaskRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskSourceRequestedArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskSourceRequestedArgs>
    {
        IPrintTaskSourceRequestedArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskSourceRequestedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskSourceRequestedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskSourceRequestedDeferral>
    {
        IPrintTaskSourceRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskSourceRequestedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskTargetDeviceSupport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskTargetDeviceSupport>
    {
        IPrintTaskTargetDeviceSupport(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskTargetDeviceSupport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardPrintTaskOptionsStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardPrintTaskOptionsStatic>
    {
        IStandardPrintTaskOptionsStatic(std::nullptr_t = nullptr) noexcept {}
        IStandardPrintTaskOptionsStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardPrintTaskOptionsStatic2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardPrintTaskOptionsStatic2>
    {
        IStandardPrintTaskOptionsStatic2(std::nullptr_t = nullptr) noexcept {}
        IStandardPrintTaskOptionsStatic2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStandardPrintTaskOptionsStatic3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStandardPrintTaskOptionsStatic3>
    {
        IStandardPrintTaskOptionsStatic3(std::nullptr_t = nullptr) noexcept {}
        IStandardPrintTaskOptionsStatic3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
