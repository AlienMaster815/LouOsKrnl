// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Compression_2_H
#define WINRT_Windows_Storage_Compression_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.Compression.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Compression
{
    struct __declspec(empty_bases) Compressor : Windows::Storage::Compression::ICompressor
    {
        Compressor(std::nullptr_t) noexcept {}
        Compressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Compression::ICompressor(ptr, take_ownership_from_abi) {}
        explicit Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream);
        Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize);
    };
    struct __declspec(empty_bases) Decompressor : Windows::Storage::Compression::IDecompressor
    {
        Decompressor(std::nullptr_t) noexcept {}
        Decompressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Compression::IDecompressor(ptr, take_ownership_from_abi) {}
        explicit Decompressor(Windows::Storage::Streams::IInputStream const& underlyingStream);
    };
}
#endif
