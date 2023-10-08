// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_FaceAnalysis_1_H
#define WINRT_Windows_Media_FaceAnalysis_1_H
#include "winrt/impl/Windows.Media.FaceAnalysis.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis
{
    struct __declspec(empty_bases) IDetectedFace :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDetectedFace>
    {
        IDetectedFace(std::nullptr_t = nullptr) noexcept {}
        IDetectedFace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetector>
    {
        IFaceDetector(std::nullptr_t = nullptr) noexcept {}
        IFaceDetector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetectorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetectorStatics>
    {
        IFaceDetectorStatics(std::nullptr_t = nullptr) noexcept {}
        IFaceDetectorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceTracker :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceTracker>
    {
        IFaceTracker(std::nullptr_t = nullptr) noexcept {}
        IFaceTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceTrackerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceTrackerStatics>
    {
        IFaceTrackerStatics(std::nullptr_t = nullptr) noexcept {}
        IFaceTrackerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
