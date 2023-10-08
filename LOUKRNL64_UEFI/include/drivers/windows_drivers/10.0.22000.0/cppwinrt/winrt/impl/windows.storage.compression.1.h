// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Compression_1_H
#define WINRT_Windows_Storage_Compression_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.Compression.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Compression
{
    struct __declspec(empty_bases) ICompressor :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompressor>,
        impl::require<Windows::Storage::Compression::ICompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream>
    {
        ICompressor(std::nullptr_t = nullptr) noexcept {}
        ICompressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompressorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompressorFactory>
    {
        ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
        ICompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDecompressor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressor>,
        impl::require<Windows::Storage::Compression::IDecompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream>
    {
        IDecompressor(std::nullptr_t = nullptr) noexcept {}
        IDecompressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDecompressorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressorFactory>
    {
        IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
        IDecompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
