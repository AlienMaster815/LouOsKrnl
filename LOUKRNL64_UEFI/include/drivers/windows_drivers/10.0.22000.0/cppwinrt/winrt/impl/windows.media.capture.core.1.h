// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_Core_1_H
#define WINRT_Windows_Media_Capture_Core_1_H
#include "winrt/impl/Windows.Media.Capture.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core
{
    struct __declspec(empty_bases) IVariablePhotoCapturedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVariablePhotoCapturedEventArgs>
    {
        IVariablePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVariablePhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVariablePhotoSequenceCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVariablePhotoSequenceCapture>
    {
        IVariablePhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
        IVariablePhotoSequenceCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVariablePhotoSequenceCapture2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVariablePhotoSequenceCapture2>
    {
        IVariablePhotoSequenceCapture2(std::nullptr_t = nullptr) noexcept {}
        IVariablePhotoSequenceCapture2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
