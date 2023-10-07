// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Ocr_1_H
#define WINRT_Windows_Media_Ocr_1_H
#include "winrt/impl/Windows.Media.Ocr.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Ocr
{
    struct __declspec(empty_bases) IOcrEngine :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOcrEngine>
    {
        IOcrEngine(std::nullptr_t = nullptr) noexcept {}
        IOcrEngine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOcrEngineStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOcrEngineStatics>
    {
        IOcrEngineStatics(std::nullptr_t = nullptr) noexcept {}
        IOcrEngineStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOcrLine :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOcrLine>
    {
        IOcrLine(std::nullptr_t = nullptr) noexcept {}
        IOcrLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOcrResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOcrResult>
    {
        IOcrResult(std::nullptr_t = nullptr) noexcept {}
        IOcrResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOcrWord :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOcrWord>
    {
        IOcrWord(std::nullptr_t = nullptr) noexcept {}
        IOcrWord(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
