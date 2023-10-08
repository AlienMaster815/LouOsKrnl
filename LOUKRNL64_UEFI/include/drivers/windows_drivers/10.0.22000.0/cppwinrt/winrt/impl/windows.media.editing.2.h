// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Editing_2_H
#define WINRT_Windows_Media_Editing_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Media.Editing.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Editing
{
    struct __declspec(empty_bases) BackgroundAudioTrack : Windows::Media::Editing::IBackgroundAudioTrack
    {
        BackgroundAudioTrack(std::nullptr_t) noexcept {}
        BackgroundAudioTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IBackgroundAudioTrack(ptr, take_ownership_from_abi) {}
        static auto CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack);
        static auto CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
    };
    struct __declspec(empty_bases) EmbeddedAudioTrack : Windows::Media::Editing::IEmbeddedAudioTrack
    {
        EmbeddedAudioTrack(std::nullptr_t) noexcept {}
        EmbeddedAudioTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IEmbeddedAudioTrack(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaClip : Windows::Media::Editing::IMediaClip
    {
        MediaClip(std::nullptr_t) noexcept {}
        MediaClip(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IMediaClip(ptr, take_ownership_from_abi) {}
        static auto CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration);
        static auto CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
        static auto CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration);
        static auto CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration);
    };
    struct __declspec(empty_bases) MediaComposition : Windows::Media::Editing::IMediaComposition,
        impl::require<MediaComposition, Windows::Media::Editing::IMediaComposition2>
    {
        MediaComposition(std::nullptr_t) noexcept {}
        MediaComposition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IMediaComposition(ptr, take_ownership_from_abi) {}
        MediaComposition();
        static auto LoadAsync(Windows::Storage::StorageFile const& file);
    };
    struct __declspec(empty_bases) MediaOverlay : Windows::Media::Editing::IMediaOverlay
    {
        MediaOverlay(std::nullptr_t) noexcept {}
        MediaOverlay(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IMediaOverlay(ptr, take_ownership_from_abi) {}
        explicit MediaOverlay(Windows::Media::Editing::MediaClip const& clip);
        MediaOverlay(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity);
    };
    struct __declspec(empty_bases) MediaOverlayLayer : Windows::Media::Editing::IMediaOverlayLayer
    {
        MediaOverlayLayer(std::nullptr_t) noexcept {}
        MediaOverlayLayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Editing::IMediaOverlayLayer(ptr, take_ownership_from_abi) {}
        MediaOverlayLayer();
        explicit MediaOverlayLayer(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition);
    };
}
#endif
