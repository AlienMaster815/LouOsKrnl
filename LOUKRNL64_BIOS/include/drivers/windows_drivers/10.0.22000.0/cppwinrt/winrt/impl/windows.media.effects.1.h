// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Effects_1_H
#define WINRT_Windows_Media_Effects_1_H
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct __declspec(empty_bases) IAudioCaptureEffectsManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioCaptureEffectsManager>
    {
        IAudioCaptureEffectsManager(std::nullptr_t = nullptr) noexcept {}
        IAudioCaptureEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffect>
    {
        IAudioEffect(std::nullptr_t = nullptr) noexcept {}
        IAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinition>
    {
        IAudioEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectDefinitionFactory>
    {
        IAudioEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioEffectsManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioEffectsManagerStatics>
    {
        IAudioEffectsManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IAudioEffectsManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioRenderEffectsManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager>
    {
        IAudioRenderEffectsManager(std::nullptr_t = nullptr) noexcept {}
        IAudioRenderEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAudioRenderEffectsManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAudioRenderEffectsManager2>
    {
        IAudioRenderEffectsManager2(std::nullptr_t = nullptr) noexcept {}
        IAudioRenderEffectsManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBasicAudioEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicAudioEffect>,
        impl::require<Windows::Media::Effects::IBasicAudioEffect, Windows::Media::IMediaExtension>
    {
        IBasicAudioEffect(std::nullptr_t = nullptr) noexcept {}
        IBasicAudioEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBasicVideoEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicVideoEffect>,
        impl::require<Windows::Media::Effects::IBasicVideoEffect, Windows::Media::IMediaExtension>
    {
        IBasicVideoEffect(std::nullptr_t = nullptr) noexcept {}
        IBasicVideoEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompositeVideoFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompositeVideoFrameContext>
    {
        ICompositeVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
        ICompositeVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProcessAudioFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProcessAudioFrameContext>
    {
        IProcessAudioFrameContext(std::nullptr_t = nullptr) noexcept {}
        IProcessAudioFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProcessVideoFrameContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProcessVideoFrameContext>
    {
        IProcessVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
        IProcessVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoCompositor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositor>,
        impl::require<Windows::Media::Effects::IVideoCompositor, Windows::Media::IMediaExtension>
    {
        IVideoCompositor(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoCompositorDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinition>
    {
        IVideoCompositorDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositorDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoCompositorDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoCompositorDefinitionFactory>
    {
        IVideoCompositorDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoCompositorDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinition>
    {
        IVideoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoEffectDefinitionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectDefinitionFactory>
    {
        IVideoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectDefinitionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTransformEffectDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition>,
        impl::require<Windows::Media::Effects::IVideoTransformEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
    {
        IVideoTransformEffectDefinition(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTransformEffectDefinition2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformEffectDefinition2>
    {
        IVideoTransformEffectDefinition2(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformEffectDefinition2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoTransformSphericalProjection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoTransformSphericalProjection>
    {
        IVideoTransformSphericalProjection(std::nullptr_t = nullptr) noexcept {}
        IVideoTransformSphericalProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
