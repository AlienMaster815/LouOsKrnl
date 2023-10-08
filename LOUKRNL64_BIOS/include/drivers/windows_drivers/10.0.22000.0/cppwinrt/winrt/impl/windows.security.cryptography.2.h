// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_2_H
#define WINRT_Windows_Security_Cryptography_2_H
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Cryptography.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography
{
    struct CryptographicBuffer
    {
        CryptographicBuffer() = delete;
        static auto Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2);
        static auto GenerateRandom(uint32_t length);
        static auto GenerateRandomNumber();
        static auto CreateFromByteArray(array_view<uint8_t const> value);
        static auto CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value);
        static auto DecodeFromHexString(param::hstring const& value);
        static auto EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer);
        static auto DecodeFromBase64String(param::hstring const& value);
        static auto EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer);
        static auto ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding);
        static auto ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer);
    };
}
#endif
