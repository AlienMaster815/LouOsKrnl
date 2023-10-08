// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_Frames_1_H
#define WINRT_Windows_Media_Capture_Frames_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Capture.Frames.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames
{
    struct __declspec(empty_bases) IAudioMediaFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioMediaFrame>
    {
        IAudioMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IAudioMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBufferMediaFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBufferMediaFrame>
    {
        IBufferMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IBufferMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDepthMediaFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDepthMediaFrame>
    {
        IDepthMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IDepthMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDepthMediaFrame2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDepthMediaFrame2>
    {
        IDepthMediaFrame2(std::nullptr_t = nullptr) noexcept {}
        IDepthMediaFrame2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDepthMediaFrameFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDepthMediaFrameFormat>
    {
        IDepthMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
        IDepthMediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInfraredMediaFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInfraredMediaFrame>
    {
        IInfraredMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IInfraredMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameArrivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameArrivedEventArgs>
    {
        IMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameFormat>
    {
        IMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameFormat2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameFormat2>
    {
        IMediaFrameFormat2(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameFormat2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameReader>,
        impl::require<Windows::Media::Capture::Frames::IMediaFrameReader, Windows::Foundation::IClosable>
    {
        IMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameReader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameReader2>
    {
        IMediaFrameReader2(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameReader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameReference :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameReference>,
        impl::require<Windows::Media::Capture::Frames::IMediaFrameReference, Windows::Foundation::IClosable>
    {
        IMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameReference2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameReference2>
    {
        IMediaFrameReference2(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameReference2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSource>
    {
        IMediaFrameSource(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceController>
    {
        IMediaFrameSourceController(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceController2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceController2>
    {
        IMediaFrameSourceController2(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceController2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceController3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceController3>
    {
        IMediaFrameSourceController3(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceController3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceGetPropertyResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceGetPropertyResult>
    {
        IMediaFrameSourceGetPropertyResult(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceGetPropertyResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceGroup>
    {
        IMediaFrameSourceGroup(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceGroupStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceGroupStatics>
    {
        IMediaFrameSourceGroupStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceGroupStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceInfo>
    {
        IMediaFrameSourceInfo(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceInfo2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceInfo2>
    {
        IMediaFrameSourceInfo2(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceInfo2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaFrameSourceInfo3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrameSourceInfo3>
    {
        IMediaFrameSourceInfo3(std::nullptr_t = nullptr) noexcept {}
        IMediaFrameSourceInfo3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMultiSourceMediaFrameArrivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMultiSourceMediaFrameArrivedEventArgs>
    {
        IMultiSourceMediaFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMultiSourceMediaFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMultiSourceMediaFrameReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMultiSourceMediaFrameReader>,
        impl::require<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader, Windows::Foundation::IClosable>
    {
        IMultiSourceMediaFrameReader(std::nullptr_t = nullptr) noexcept {}
        IMultiSourceMediaFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMultiSourceMediaFrameReader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMultiSourceMediaFrameReader2>
    {
        IMultiSourceMediaFrameReader2(std::nullptr_t = nullptr) noexcept {}
        IMultiSourceMediaFrameReader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMultiSourceMediaFrameReference :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMultiSourceMediaFrameReference>,
        impl::require<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference, Windows::Foundation::IClosable>
    {
        IMultiSourceMediaFrameReference(std::nullptr_t = nullptr) noexcept {}
        IMultiSourceMediaFrameReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoMediaFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoMediaFrame>
    {
        IVideoMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IVideoMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoMediaFrameFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoMediaFrameFormat>
    {
        IVideoMediaFrameFormat(std::nullptr_t = nullptr) noexcept {}
        IVideoMediaFrameFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
