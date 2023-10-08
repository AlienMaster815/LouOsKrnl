// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_H
#define WINRT_Windows_Security_Cryptography_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2) const
    {
        bool isEqual;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->Compare(*(void**)(&object1), *(void**)(&object2), &isEqual));
        return isEqual;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandom(uint32_t length) const
    {
        void* buffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandom(length, &buffer));
        return Windows::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::GenerateRandomNumber() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->GenerateRandomNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CreateFromByteArray(array_view<uint8_t const> value) const
    {
        void* buffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->CreateFromByteArray(value.size(), get_abi(value), &buffer));
        return Windows::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->CopyToByteArray(*(void**)(&buffer), impl::put_size_abi(value), put_abi(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromHexString(param::hstring const& value) const
    {
        void* buffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromHexString(*(void**)(&value), &buffer));
        return Windows::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->EncodeToHexString(*(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::DecodeFromBase64String(param::hstring const& value) const
    {
        void* buffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->DecodeFromBase64String(*(void**)(&value), &buffer));
        return Windows::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->EncodeToBase64String(*(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding) const
    {
        void* buffer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->ConvertStringToBinary(*(void**)(&value), static_cast<int32_t>(encoding), &buffer));
        return Windows::Storage::Streams::IBuffer{ buffer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_ICryptographicBufferStatics<D>::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::ICryptographicBufferStatics)->ConvertBinaryToString(static_cast<int32_t>(encoding), *(void**)(&buffer), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::ICryptographicBufferStatics> : produce_base<D, Windows::Security::Cryptography::ICryptographicBufferStatics>
    {
        int32_t __stdcall Compare(void* object1, void* object2, bool* isEqual) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isEqual = detach_from<bool>(this->shim().Compare(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&object1), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&object2)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateRandom(uint32_t length, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GenerateRandom(length));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateRandomNumber(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GenerateRandomNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromByteArray(uint32_t __valueSize, uint8_t* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().CreateFromByteArray(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyToByteArray(void* buffer, uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            this->shim().CopyToByteArray(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), detach_abi<uint8_t>(__valueSize, value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecodeFromHexString(void* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DecodeFromHexString(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncodeToHexString(void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EncodeToHexString(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecodeFromBase64String(void* value, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DecodeFromBase64String(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncodeToBase64String(void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EncodeToBase64String(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertStringToBinary(void* value, int32_t encoding, void** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ConvertStringToBinary(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Security::Cryptography::BinaryStringEncoding const*>(&encoding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertBinaryToString(int32_t encoding, void* buffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConvertBinaryToString(*reinterpret_cast<Windows::Security::Cryptography::BinaryStringEncoding const*>(&encoding), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Cryptography
{
    inline auto CryptographicBuffer::Compare(Windows::Storage::Streams::IBuffer const& object1, Windows::Storage::Streams::IBuffer const& object2)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.Compare(object1, object2); });
    }
    inline auto CryptographicBuffer::GenerateRandom(uint32_t length)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.GenerateRandom(length); });
    }
    inline auto CryptographicBuffer::GenerateRandomNumber()
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.GenerateRandomNumber(); });
    }
    inline auto CryptographicBuffer::CreateFromByteArray(array_view<uint8_t const> value)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.CreateFromByteArray(value); });
    }
    inline auto CryptographicBuffer::CopyToByteArray(Windows::Storage::Streams::IBuffer const& buffer, com_array<uint8_t>& value)
    {
        impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.CopyToByteArray(buffer, value); });
    }
    inline auto CryptographicBuffer::DecodeFromHexString(param::hstring const& value)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.DecodeFromHexString(value); });
    }
    inline auto CryptographicBuffer::EncodeToHexString(Windows::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.EncodeToHexString(buffer); });
    }
    inline auto CryptographicBuffer::DecodeFromBase64String(param::hstring const& value)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.DecodeFromBase64String(value); });
    }
    inline auto CryptographicBuffer::EncodeToBase64String(Windows::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.EncodeToBase64String(buffer); });
    }
    inline auto CryptographicBuffer::ConvertStringToBinary(param::hstring const& value, Windows::Security::Cryptography::BinaryStringEncoding const& encoding)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.ConvertStringToBinary(value, encoding); });
    }
    inline auto CryptographicBuffer::ConvertBinaryToString(Windows::Security::Cryptography::BinaryStringEncoding const& encoding, Windows::Storage::Streams::IBuffer const& buffer)
    {
        return impl::call_factory<CryptographicBuffer, Windows::Security::Cryptography::ICryptographicBufferStatics>([&](auto&& f) { return f.ConvertBinaryToString(encoding, buffer); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::ICryptographicBufferStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::CryptographicBuffer> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::CryptographicBuffer> {};
}
#endif
