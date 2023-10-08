// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_Core_2_H
#define WINRT_Windows_Media_Capture_Core_2_H
#include "winrt/impl/Windows.Media.Capture.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core
{
    struct __declspec(empty_bases) VariablePhotoCapturedEventArgs : Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs
    {
        VariablePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
        VariablePhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VariablePhotoSequenceCapture : Windows::Media::Capture::Core::IVariablePhotoSequenceCapture,
        impl::require<VariablePhotoSequenceCapture, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        VariablePhotoSequenceCapture(std::nullptr_t) noexcept {}
        VariablePhotoSequenceCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::Core::IVariablePhotoSequenceCapture(ptr, take_ownership_from_abi) {}
    };
}
#endif
