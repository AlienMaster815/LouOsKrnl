// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_1_H
#define WINRT_Windows_Media_Core_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    struct __declspec(empty_bases) IAudioStreamDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStreamDescriptor>,
        impl::require<Windows::Media::Core::IAudioStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
    {
        IAudioStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
        IAudioStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioStreamDescriptor2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStreamDescriptor2>,
        impl::require<Windows::Media::Core::IAudioStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor>
    {
        IAudioStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
        IAudioStreamDescriptor2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioStreamDescriptor3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStreamDescriptor3>
    {
        IAudioStreamDescriptor3(std::nullptr_t = nullptr) noexcept {}
        IAudioStreamDescriptor3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioStreamDescriptorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioStreamDescriptorFactory>
    {
        IAudioStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioStreamDescriptorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioTrack :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioTrack>
    {
        IAudioTrack(std::nullptr_t = nullptr) noexcept {}
        IAudioTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioTrackOpenFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioTrackOpenFailedEventArgs>
    {
        IAudioTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAudioTrackOpenFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioTrackSupportInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioTrackSupportInfo>
    {
        IAudioTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
        IAudioTrackSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChapterCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChapterCue>,
        impl::require<Windows::Media::Core::IChapterCue, Windows::Media::Core::IMediaCue>
    {
        IChapterCue(std::nullptr_t = nullptr) noexcept {}
        IChapterCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICodecInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICodecInfo>
    {
        ICodecInfo(std::nullptr_t = nullptr) noexcept {}
        ICodecInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICodecQuery :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICodecQuery>
    {
        ICodecQuery(std::nullptr_t = nullptr) noexcept {}
        ICodecQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICodecSubtypesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICodecSubtypesStatics>
    {
        ICodecSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
        ICodecSubtypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataCue>,
        impl::require<Windows::Media::Core::IDataCue, Windows::Media::Core::IMediaCue>
    {
        IDataCue(std::nullptr_t = nullptr) noexcept {}
        IDataCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataCue2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataCue2>,
        impl::require<Windows::Media::Core::IDataCue2, Windows::Media::Core::IMediaCue, Windows::Media::Core::IDataCue>
    {
        IDataCue2(std::nullptr_t = nullptr) noexcept {}
        IDataCue2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetectedEventArgs>
    {
        IFaceDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFaceDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetectionEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetectionEffect>,
        impl::require<Windows::Media::Core::IFaceDetectionEffect, Windows::Media::IMediaExtension>
    {
        IFaceDetectionEffect(std::nullptr_t = nullptr) noexcept {}
        IFaceDetectionEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetectionEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetectionEffectDefinition>,
        impl::require<Windows::Media::Core::IFaceDetectionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
    {
        IFaceDetectionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IFaceDetectionEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFaceDetectionEffectFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFaceDetectionEffectFrame>,
        impl::require<Windows::Media::Core::IFaceDetectionEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
    {
        IFaceDetectionEffectFrame(std::nullptr_t = nullptr) noexcept {}
        IFaceDetectionEffectFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHighDynamicRangeControl :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHighDynamicRangeControl>
    {
        IHighDynamicRangeControl(std::nullptr_t = nullptr) noexcept {}
        IHighDynamicRangeControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHighDynamicRangeOutput :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHighDynamicRangeOutput>
    {
        IHighDynamicRangeOutput(std::nullptr_t = nullptr) noexcept {}
        IHighDynamicRangeOutput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IImageCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageCue>,
        impl::require<Windows::Media::Core::IImageCue, Windows::Media::Core::IMediaCue>
    {
        IImageCue(std::nullptr_t = nullptr) noexcept {}
        IImageCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInitializeMediaStreamSourceRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInitializeMediaStreamSourceRequestedEventArgs>
    {
        IInitializeMediaStreamSourceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IInitializeMediaStreamSourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLightFusionResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLightFusionResult>
    {
        ILowLightFusionResult(std::nullptr_t = nullptr) noexcept {}
        ILowLightFusionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLightFusionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLightFusionStatics>
    {
        ILowLightFusionStatics(std::nullptr_t = nullptr) noexcept {}
        ILowLightFusionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBinder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBinder>
    {
        IMediaBinder(std::nullptr_t = nullptr) noexcept {}
        IMediaBinder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBindingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBindingEventArgs>
    {
        IMediaBindingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaBindingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBindingEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBindingEventArgs2>
    {
        IMediaBindingEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IMediaBindingEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBindingEventArgs3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBindingEventArgs3>
    {
        IMediaBindingEventArgs3(std::nullptr_t = nullptr) noexcept {}
        IMediaBindingEventArgs3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCue>
    {
        IMediaCue(std::nullptr_t = nullptr) noexcept {}
        IMediaCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCueEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCueEventArgs>
    {
        IMediaCueEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaCueEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSource>
    {
        IMediaSource(std::nullptr_t = nullptr) noexcept {}
        IMediaSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSource2>,
        impl::require<Windows::Media::Core::IMediaSource2, Windows::Media::Playback::IMediaPlaybackSource, Windows::Foundation::IClosable>
    {
        IMediaSource2(std::nullptr_t = nullptr) noexcept {}
        IMediaSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSource3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSource3>,
        impl::require<Windows::Media::Core::IMediaSource3, Windows::Media::Playback::IMediaPlaybackSource, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2>
    {
        IMediaSource3(std::nullptr_t = nullptr) noexcept {}
        IMediaSource3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSource4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSource4>,
        impl::require<Windows::Media::Core::IMediaSource4, Windows::Media::Playback::IMediaPlaybackSource, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Core::IMediaSource3>
    {
        IMediaSource4(std::nullptr_t = nullptr) noexcept {}
        IMediaSource4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSource5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSource5>
    {
        IMediaSource5(std::nullptr_t = nullptr) noexcept {}
        IMediaSource5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceAppServiceConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceAppServiceConnection>
    {
        IMediaSourceAppServiceConnection(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceAppServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceAppServiceConnectionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceAppServiceConnectionFactory>
    {
        IMediaSourceAppServiceConnectionFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceAppServiceConnectionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceError :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceError>
    {
        IMediaSourceError(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceOpenOperationCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceOpenOperationCompletedEventArgs>
    {
        IMediaSourceOpenOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceOpenOperationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceStateChangedEventArgs>
    {
        IMediaSourceStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceStatics>
    {
        IMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceStatics2>
    {
        IMediaSourceStatics2(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceStatics3>
    {
        IMediaSourceStatics3(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaSourceStatics4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaSourceStatics4>
    {
        IMediaSourceStatics4(std::nullptr_t = nullptr) noexcept {}
        IMediaSourceStatics4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamDescriptor>
    {
        IMediaStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamDescriptor2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamDescriptor2>,
        impl::require<Windows::Media::Core::IMediaStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor>
    {
        IMediaStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamDescriptor2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSample :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSample>
    {
        IMediaStreamSample(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSample(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSample2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSample2>
    {
        IMediaStreamSample2(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSample2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSampleProtectionProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSampleProtectionProperties>
    {
        IMediaStreamSampleProtectionProperties(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSampleProtectionProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSampleStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSampleStatics>
    {
        IMediaStreamSampleStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSampleStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSampleStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSampleStatics2>
    {
        IMediaStreamSampleStatics2(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSampleStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSource>,
        impl::require<Windows::Media::Core::IMediaStreamSource, Windows::Media::Core::IMediaSource>
    {
        IMediaStreamSource(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSource2>,
        impl::require<Windows::Media::Core::IMediaStreamSource2, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
    {
        IMediaStreamSource2(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSource3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSource3>,
        impl::require<Windows::Media::Core::IMediaStreamSource3, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
    {
        IMediaStreamSource3(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSource3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSource4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSource4>,
        impl::require<Windows::Media::Core::IMediaStreamSource4, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
    {
        IMediaStreamSource4(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSource4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceClosedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceClosedEventArgs>
    {
        IMediaStreamSourceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceClosedRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceClosedRequest>
    {
        IMediaStreamSourceClosedRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceClosedRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceFactory>
    {
        IMediaStreamSourceFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSampleRenderedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSampleRenderedEventArgs>
    {
        IMediaStreamSourceSampleRenderedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSampleRenderedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSampleRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSampleRequest>
    {
        IMediaStreamSourceSampleRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSampleRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSampleRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSampleRequestDeferral>
    {
        IMediaStreamSourceSampleRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSampleRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSampleRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSampleRequestedEventArgs>
    {
        IMediaStreamSourceSampleRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSampleRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceStartingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceStartingEventArgs>
    {
        IMediaStreamSourceStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceStartingRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceStartingRequest>
    {
        IMediaStreamSourceStartingRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceStartingRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceStartingRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceStartingRequestDeferral>
    {
        IMediaStreamSourceStartingRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceStartingRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSwitchStreamsRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSwitchStreamsRequest>
    {
        IMediaStreamSourceSwitchStreamsRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSwitchStreamsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSwitchStreamsRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSwitchStreamsRequestDeferral>
    {
        IMediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSwitchStreamsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaStreamSourceSwitchStreamsRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        IMediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaStreamSourceSwitchStreamsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaTrack :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTrack>
    {
        IMediaTrack(std::nullptr_t = nullptr) noexcept {}
        IMediaTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMseSourceBuffer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMseSourceBuffer>
    {
        IMseSourceBuffer(std::nullptr_t = nullptr) noexcept {}
        IMseSourceBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMseSourceBufferList :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMseSourceBufferList>
    {
        IMseSourceBufferList(std::nullptr_t = nullptr) noexcept {}
        IMseSourceBufferList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMseStreamSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMseStreamSource>,
        impl::require<Windows::Media::Core::IMseStreamSource, Windows::Media::Core::IMediaSource>
    {
        IMseStreamSource(std::nullptr_t = nullptr) noexcept {}
        IMseStreamSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMseStreamSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMseStreamSource2>
    {
        IMseStreamSource2(std::nullptr_t = nullptr) noexcept {}
        IMseStreamSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMseStreamSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMseStreamSourceStatics>
    {
        IMseStreamSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IMseStreamSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISceneAnalysisEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneAnalysisEffect>,
        impl::require<Windows::Media::Core::ISceneAnalysisEffect, Windows::Media::IMediaExtension>
    {
        ISceneAnalysisEffect(std::nullptr_t = nullptr) noexcept {}
        ISceneAnalysisEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISceneAnalysisEffectFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneAnalysisEffectFrame>,
        impl::require<Windows::Media::Core::ISceneAnalysisEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
    {
        ISceneAnalysisEffectFrame(std::nullptr_t = nullptr) noexcept {}
        ISceneAnalysisEffectFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISceneAnalysisEffectFrame2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneAnalysisEffectFrame2>,
        impl::require<Windows::Media::Core::ISceneAnalysisEffectFrame2, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
    {
        ISceneAnalysisEffectFrame2(std::nullptr_t = nullptr) noexcept {}
        ISceneAnalysisEffectFrame2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISceneAnalyzedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneAnalyzedEventArgs>
    {
        ISceneAnalyzedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISceneAnalyzedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISingleSelectMediaTrackList :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISingleSelectMediaTrackList>
    {
        ISingleSelectMediaTrackList(std::nullptr_t = nullptr) noexcept {}
        ISingleSelectMediaTrackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpeechCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechCue>,
        impl::require<Windows::Media::Core::ISpeechCue, Windows::Media::Core::IMediaCue>
    {
        ISpeechCue(std::nullptr_t = nullptr) noexcept {}
        ISpeechCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataStreamDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataStreamDescriptor>
    {
        ITimedMetadataStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataStreamDescriptorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataStreamDescriptorFactory>
    {
        ITimedMetadataStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataStreamDescriptorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrack :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrack>,
        impl::require<Windows::Media::Core::ITimedMetadataTrack, Windows::Media::Core::IMediaTrack>
    {
        ITimedMetadataTrack(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrack2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrack2>,
        impl::require<Windows::Media::Core::ITimedMetadataTrack2, Windows::Media::Core::IMediaTrack, Windows::Media::Core::ITimedMetadataTrack>
    {
        ITimedMetadataTrack2(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrack2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrackError :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrackError>
    {
        ITimedMetadataTrackError(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrackError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrackFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrackFactory>
    {
        ITimedMetadataTrackFactory(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrackFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrackFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrackFailedEventArgs>
    {
        ITimedMetadataTrackFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrackFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataTrackProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataTrackProvider>
    {
        ITimedMetadataTrackProvider(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataTrackProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextBouten :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextBouten>
    {
        ITimedTextBouten(std::nullptr_t = nullptr) noexcept {}
        ITimedTextBouten(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextCue :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextCue>,
        impl::require<Windows::Media::Core::ITimedTextCue, Windows::Media::Core::IMediaCue>
    {
        ITimedTextCue(std::nullptr_t = nullptr) noexcept {}
        ITimedTextCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextLine :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextLine>
    {
        ITimedTextLine(std::nullptr_t = nullptr) noexcept {}
        ITimedTextLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextRegion :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextRegion>
    {
        ITimedTextRegion(std::nullptr_t = nullptr) noexcept {}
        ITimedTextRegion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextRuby :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextRuby>
    {
        ITimedTextRuby(std::nullptr_t = nullptr) noexcept {}
        ITimedTextRuby(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextSource>
    {
        ITimedTextSource(std::nullptr_t = nullptr) noexcept {}
        ITimedTextSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextSourceResolveResultEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextSourceResolveResultEventArgs>
    {
        ITimedTextSourceResolveResultEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITimedTextSourceResolveResultEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextSourceStatics>
    {
        ITimedTextSourceStatics(std::nullptr_t = nullptr) noexcept {}
        ITimedTextSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextSourceStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextSourceStatics2>
    {
        ITimedTextSourceStatics2(std::nullptr_t = nullptr) noexcept {}
        ITimedTextSourceStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextStyle :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextStyle>
    {
        ITimedTextStyle(std::nullptr_t = nullptr) noexcept {}
        ITimedTextStyle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextStyle2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextStyle2>
    {
        ITimedTextStyle2(std::nullptr_t = nullptr) noexcept {}
        ITimedTextStyle2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextStyle3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextStyle3>
    {
        ITimedTextStyle3(std::nullptr_t = nullptr) noexcept {}
        ITimedTextStyle3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedTextSubformat :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedTextSubformat>
    {
        ITimedTextSubformat(std::nullptr_t = nullptr) noexcept {}
        ITimedTextSubformat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStabilizationEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStabilizationEffect>,
        impl::require<Windows::Media::Core::IVideoStabilizationEffect, Windows::Media::IMediaExtension>
    {
        IVideoStabilizationEffect(std::nullptr_t = nullptr) noexcept {}
        IVideoStabilizationEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStabilizationEffectEnabledChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStabilizationEffectEnabledChangedEventArgs>
    {
        IVideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVideoStabilizationEffectEnabledChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStreamDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStreamDescriptor>,
        impl::require<Windows::Media::Core::IVideoStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
    {
        IVideoStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
        IVideoStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStreamDescriptor2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStreamDescriptor2>
    {
        IVideoStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
        IVideoStreamDescriptor2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStreamDescriptorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStreamDescriptorFactory>
    {
        IVideoStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoStreamDescriptorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTrack :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTrack>
    {
        IVideoTrack(std::nullptr_t = nullptr) noexcept {}
        IVideoTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTrackOpenFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTrackOpenFailedEventArgs>
    {
        IVideoTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVideoTrackOpenFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTrackSupportInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTrackSupportInfo>
    {
        IVideoTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
        IVideoTrackSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
