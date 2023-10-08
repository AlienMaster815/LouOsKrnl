// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_DataProtection_H
#define WINRT_Windows_Security_DataProtection_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Security.DataProtection.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataAvailabilityStateChangedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataBufferUnprotectResult<D>::Status() const
    {
        Windows::Security::DataProtection::UserDataBufferUnprotectStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataBufferUnprotectResult)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataBufferUnprotectResult<D>::UnprotectedBuffer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataBufferUnprotectResult)->get_UnprotectedBuffer(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::ProtectStorageItemAsync(Windows::Storage::IStorageItem const& storageItem, Windows::Security::DataProtection::UserDataAvailability const& availability) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->ProtectStorageItemAsync(*(void**)(&storageItem), static_cast<int32_t>(availability), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataStorageItemProtectionStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::GetStorageItemProtectionInfoAsync(Windows::Storage::IStorageItem const& storageItem) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->GetStorageItemProtectionInfoAsync(*(void**)(&storageItem), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::ProtectBufferAsync(Windows::Storage::Streams::IBuffer const& unprotectedBuffer, Windows::Security::DataProtection::UserDataAvailability const& availability) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->ProtectBufferAsync(*(void**)(&unprotectedBuffer), static_cast<int32_t>(availability), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::UnprotectBufferAsync(Windows::Storage::Streams::IBuffer const& protectedBuffer) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->UnprotectBufferAsync(*(void**)(&protectedBuffer), &result));
        return Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataBufferUnprotectResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::IsContinuedDataAvailabilityExpected(Windows::Security::DataProtection::UserDataAvailability const& availability) const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->IsContinuedDataAvailabilityExpected(static_cast<int32_t>(availability), &value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::DataAvailabilityStateChanged(Windows::Foundation::TypedEventHandler<Windows::Security::DataProtection::UserDataProtectionManager, Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->add_DataAvailabilityStateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::DataAvailabilityStateChanged_revoker consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::DataAvailabilityStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::DataProtection::UserDataProtectionManager, Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, DataAvailabilityStateChanged_revoker>(this, DataAvailabilityStateChanged(handler));
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>::DataAvailabilityStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManager)->remove_DataAvailabilityStateChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManagerStatics<D>::TryGetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManagerStatics)->TryGetDefault(&result));
        return Windows::Security::DataProtection::UserDataProtectionManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataProtectionManagerStatics<D>::TryGetForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataProtectionManagerStatics)->TryGetForUser(*(void**)(&user), &result));
        return Windows::Security::DataProtection::UserDataProtectionManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_DataProtection_IUserDataStorageItemProtectionInfo<D>::Availability() const
    {
        Windows::Security::DataProtection::UserDataAvailability value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo)->get_Availability(put_abi(value)));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs> : produce_base<D, Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::DataProtection::IUserDataBufferUnprotectResult> : produce_base<D, Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::DataProtection::UserDataBufferUnprotectStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnprotectedBuffer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().UnprotectedBuffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::DataProtection::IUserDataProtectionManager> : produce_base<D, Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        int32_t __stdcall ProtectStorageItemAsync(void* storageItem, int32_t availability, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataStorageItemProtectionStatus>>(this->shim().ProtectStorageItemAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&storageItem), *reinterpret_cast<Windows::Security::DataProtection::UserDataAvailability const*>(&availability)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStorageItemProtectionInfoAsync(void* storageItem, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>>(this->shim().GetStorageItemProtectionInfoAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&storageItem)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ProtectBufferAsync(void* unprotectedBuffer, int32_t availability, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().ProtectBufferAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&unprotectedBuffer), *reinterpret_cast<Windows::Security::DataProtection::UserDataAvailability const*>(&availability)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprotectBufferAsync(void* protectedBuffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::DataProtection::UserDataBufferUnprotectResult>>(this->shim().UnprotectBufferAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&protectedBuffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsContinuedDataAvailabilityExpected(int32_t availability, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContinuedDataAvailabilityExpected(*reinterpret_cast<Windows::Security::DataProtection::UserDataAvailability const*>(&availability)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_DataAvailabilityStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().DataAvailabilityStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::DataProtection::UserDataProtectionManager, Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DataAvailabilityStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataAvailabilityStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Security::DataProtection::IUserDataProtectionManagerStatics> : produce_base<D, Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        int32_t __stdcall TryGetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::DataProtection::UserDataProtectionManager>(this->shim().TryGetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::DataProtection::UserDataProtectionManager>(this->shim().TryGetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo> : produce_base<D, Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        int32_t __stdcall get_Availability(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::DataProtection::UserDataAvailability>(this->shim().Availability());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::DataProtection
{
    inline auto UserDataProtectionManager::TryGetDefault()
    {
        return impl::call_factory<UserDataProtectionManager, Windows::Security::DataProtection::IUserDataProtectionManagerStatics>([&](auto&& f) { return f.TryGetDefault(); });
    }
    inline auto UserDataProtectionManager::TryGetForUser(Windows::System::User const& user)
    {
        return impl::call_factory<UserDataProtectionManager, Windows::Security::DataProtection::IUserDataProtectionManagerStatics>([&](auto&& f) { return f.TryGetForUser(user); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::IUserDataBufferUnprotectResult> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::IUserDataBufferUnprotectResult> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::IUserDataProtectionManager> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::IUserDataProtectionManager> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::IUserDataProtectionManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::IUserDataProtectionManagerStatics> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::UserDataBufferUnprotectResult> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::UserDataBufferUnprotectResult> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::UserDataProtectionManager> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::UserDataProtectionManager> {};
    template<> struct hash<winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo> : winrt::impl::hash_base<winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo> {};
}
#endif
