// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Html_1_H
#define WINRT_Windows_Data_Html_1_H
#include "winrt/impl/Windows.Data.Html.0.h"
namespace winrt::Windows::Data::Html
{
    struct __declspec(empty_bases) IHtmlUtilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHtmlUtilities>
    {
        IHtmlUtilities(std::nullptr_t = nullptr) noexcept {}
        IHtmlUtilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
