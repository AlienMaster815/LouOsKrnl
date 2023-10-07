// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Capture_2_H
#define WINRT_Windows_Graphics_Capture_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.Graphics.Capture.1.h"
namespace winrt::Windows::Graphics::Capture
{
    struct __declspec(empty_bases) Direct3D11CaptureFrame : Windows::Graphics::Capture::IDirect3D11CaptureFrame,
        impl::require<Direct3D11CaptureFrame, Windows::Foundation::IClosable>
    {
        Direct3D11CaptureFrame(std::nullptr_t) noexcept {}
        Direct3D11CaptureFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Capture::IDirect3D11CaptureFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Direct3D11CaptureFramePool : Windows::Graphics::Capture::IDirect3D11CaptureFramePool,
        impl::require<Direct3D11CaptureFramePool, Windows::Foundation::IClosable>
    {
        Direct3D11CaptureFramePool(std::nullptr_t) noexcept {}
        Direct3D11CaptureFramePool(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Capture::IDirect3D11CaptureFramePool(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size);
        static auto CreateFreeThreaded(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size);
    };
    struct __declspec(empty_bases) GraphicsCaptureItem : Windows::Graphics::Capture::IGraphicsCaptureItem
    {
        GraphicsCaptureItem(std::nullptr_t) noexcept {}
        GraphicsCaptureItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Capture::IGraphicsCaptureItem(ptr, take_ownership_from_abi) {}
        static auto CreateFromVisual(Windows::UI::Composition::Visual const& visual);
    };
    struct __declspec(empty_bases) GraphicsCapturePicker : Windows::Graphics::Capture::IGraphicsCapturePicker
    {
        GraphicsCapturePicker(std::nullptr_t) noexcept {}
        GraphicsCapturePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Capture::IGraphicsCapturePicker(ptr, take_ownership_from_abi) {}
        GraphicsCapturePicker();
    };
    struct __declspec(empty_bases) GraphicsCaptureSession : Windows::Graphics::Capture::IGraphicsCaptureSession,
        impl::require<GraphicsCaptureSession, Windows::Graphics::Capture::IGraphicsCaptureSession2, Windows::Foundation::IClosable>
    {
        GraphicsCaptureSession(std::nullptr_t) noexcept {}
        GraphicsCaptureSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Capture::IGraphicsCaptureSession(ptr, take_ownership_from_abi) {}
        static auto IsSupported();
    };
}
#endif
