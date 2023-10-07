// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Imaging_2_H
#define WINRT_Windows_Graphics_Imaging_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapBounds
    {
        uint32_t X;
        uint32_t Y;
        uint32_t Width;
        uint32_t Height;
    };
    inline bool operator==(BitmapBounds const& left, BitmapBounds const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y && left.Width == right.Width && left.Height == right.Height;
    }
    inline bool operator!=(BitmapBounds const& left, BitmapBounds const& right) noexcept
    {
        return !(left == right);
    }
    struct BitmapPlaneDescription
    {
        int32_t StartIndex;
        int32_t Width;
        int32_t Height;
        int32_t Stride;
    };
    inline bool operator==(BitmapPlaneDescription const& left, BitmapPlaneDescription const& right) noexcept
    {
        return left.StartIndex == right.StartIndex && left.Width == right.Width && left.Height == right.Height && left.Stride == right.Stride;
    }
    inline bool operator!=(BitmapPlaneDescription const& left, BitmapPlaneDescription const& right) noexcept
    {
        return !(left == right);
    }
    struct BitmapSize
    {
        uint32_t Width;
        uint32_t Height;
    };
    inline bool operator==(BitmapSize const& left, BitmapSize const& right) noexcept
    {
        return left.Width == right.Width && left.Height == right.Height;
    }
    inline bool operator!=(BitmapSize const& left, BitmapSize const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) BitmapBuffer : Windows::Graphics::Imaging::IBitmapBuffer
    {
        BitmapBuffer(std::nullptr_t) noexcept {}
        BitmapBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapBuffer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BitmapCodecInformation : Windows::Graphics::Imaging::IBitmapCodecInformation
    {
        BitmapCodecInformation(std::nullptr_t) noexcept {}
        BitmapCodecInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapCodecInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BitmapDecoder : Windows::Graphics::Imaging::IBitmapDecoder,
        impl::require<BitmapDecoder, Windows::Graphics::Imaging::IBitmapFrame, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        BitmapDecoder(std::nullptr_t) noexcept {}
        BitmapDecoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapDecoder(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto BmpDecoderId();
        [[nodiscard]] static auto JpegDecoderId();
        [[nodiscard]] static auto PngDecoderId();
        [[nodiscard]] static auto TiffDecoderId();
        [[nodiscard]] static auto GifDecoderId();
        [[nodiscard]] static auto JpegXRDecoderId();
        [[nodiscard]] static auto IcoDecoderId();
        static auto GetDecoderInformationEnumerator();
        static auto CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream);
        static auto CreateAsync(winrt::guid const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream);
        [[nodiscard]] static auto HeifDecoderId();
        [[nodiscard]] static auto WebpDecoderId();
    };
    struct __declspec(empty_bases) BitmapEncoder : Windows::Graphics::Imaging::IBitmapEncoder,
        impl::require<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
    {
        BitmapEncoder(std::nullptr_t) noexcept {}
        BitmapEncoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapEncoder(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto BmpEncoderId();
        [[nodiscard]] static auto JpegEncoderId();
        [[nodiscard]] static auto PngEncoderId();
        [[nodiscard]] static auto TiffEncoderId();
        [[nodiscard]] static auto GifEncoderId();
        [[nodiscard]] static auto JpegXREncoderId();
        static auto GetEncoderInformationEnumerator();
        static auto CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream);
        static auto CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions);
        static auto CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
        static auto CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
        [[nodiscard]] static auto HeifEncoderId();
    };
    struct __declspec(empty_bases) BitmapFrame : Windows::Graphics::Imaging::IBitmapFrame,
        impl::require<BitmapFrame, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        BitmapFrame(std::nullptr_t) noexcept {}
        BitmapFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BitmapProperties : Windows::Graphics::Imaging::IBitmapProperties
    {
        BitmapProperties(std::nullptr_t) noexcept {}
        BitmapProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BitmapPropertiesView : Windows::Graphics::Imaging::IBitmapPropertiesView
    {
        BitmapPropertiesView(std::nullptr_t) noexcept {}
        BitmapPropertiesView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapPropertiesView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BitmapPropertySet : Windows::Foundation::Collections::IMap<hstring, Windows::Graphics::Imaging::BitmapTypedValue>
    {
        BitmapPropertySet(std::nullptr_t) noexcept {}
        BitmapPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<hstring, Windows::Graphics::Imaging::BitmapTypedValue>(ptr, take_ownership_from_abi) {}
        BitmapPropertySet();
    };
    struct __declspec(empty_bases) BitmapTransform : Windows::Graphics::Imaging::IBitmapTransform
    {
        BitmapTransform(std::nullptr_t) noexcept {}
        BitmapTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapTransform(ptr, take_ownership_from_abi) {}
        BitmapTransform();
    };
    struct __declspec(empty_bases) BitmapTypedValue : Windows::Graphics::Imaging::IBitmapTypedValue
    {
        BitmapTypedValue(std::nullptr_t) noexcept {}
        BitmapTypedValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IBitmapTypedValue(ptr, take_ownership_from_abi) {}
        BitmapTypedValue(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type);
    };
    struct __declspec(empty_bases) ImageStream : Windows::Storage::Streams::IRandomAccessStreamWithContentType
    {
        ImageStream(std::nullptr_t) noexcept {}
        ImageStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PixelDataProvider : Windows::Graphics::Imaging::IPixelDataProvider
    {
        PixelDataProvider(std::nullptr_t) noexcept {}
        PixelDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::IPixelDataProvider(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SoftwareBitmap : Windows::Graphics::Imaging::ISoftwareBitmap
    {
        SoftwareBitmap(std::nullptr_t) noexcept {}
        SoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Imaging::ISoftwareBitmap(ptr, take_ownership_from_abi) {}
        SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        static auto Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source);
        static auto Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format);
        static auto Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        static auto CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        static auto CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        static auto CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
        static auto CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    };
}
#endif
