// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_DirectX_Direct3D11_1_H
#define WINRT_Windows_Graphics_DirectX_Direct3D11_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct __declspec(empty_bases) IDirect3DDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDirect3DDevice>,
        impl::require<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice, Windows::Foundation::IClosable>
    {
        IDirect3DDevice(std::nullptr_t = nullptr) noexcept {}
        IDirect3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDirect3DSurface :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDirect3DSurface>,
        impl::require<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface, Windows::Foundation::IClosable>
    {
        IDirect3DSurface(std::nullptr_t = nullptr) noexcept {}
        IDirect3DSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
