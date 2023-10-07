// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Cortana_H
#define WINRT_Windows_Services_Cortana_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Services.Cortana.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::IsAvailableAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->IsAvailableAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsForImageAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& imageStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsForImageAsync(*(void**)(&imageStream), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsForImageAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& imageStream, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsForImageWithOptionsAsync(*(void**)(&imageStream), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsForTextAsync(param::hstring const& text) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsForTextAsync(*(void**)(&text), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsForTextAsync(param::hstring const& text, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsForTextWithOptionsAsync(*(void**)(&text), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsAsync(Windows::ApplicationModel::DataTransfer::DataPackage const& datapackage) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsAsync(*(void**)(&datapackage), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsights<D>::ShowInsightsAsync(Windows::ApplicationModel::DataTransfer::DataPackage const& datapackage, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsights)->ShowInsightsWithOptionsAsync(*(void**)(&datapackage), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions<D>::ContentSourceWebLink() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsOptions)->get_ContentSourceWebLink(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions<D>::ContentSourceWebLink(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsOptions)->put_ContentSourceWebLink(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions<D>::SurroundingText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsOptions)->get_SurroundingText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions<D>::SurroundingText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsOptions)->put_SurroundingText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsStatics)->GetDefault(&result));
        return Windows::Services::Cortana::CortanaActionableInsights{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaActionableInsightsStatics<D>::GetForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaActionableInsightsStatics)->GetForUser(*(void**)(&user), &result));
        return Windows::Services::Cortana::CortanaActionableInsights{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* getGrantedPermissionsOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->ArePermissionsGrantedAsync(*(void**)(&permissions), &getGrantedPermissionsOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ getGrantedPermissionsOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* grantOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->GrantPermissionsAsync(*(void**)(&permissions), &grantOperation));
        return Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ grantOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* revokeOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->RevokePermissionsAsync(*(void**)(&permissions), &revokeOperation));
        return Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ revokeOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManagerStatics)->GetDefault(&result));
        return Windows::Services::Cortana::CortanaPermissionsManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::HasUserConsentToVoiceActivation() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_HasUserConsentToVoiceActivation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_IsVoiceActivationEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->put_IsVoiceActivationEnabled(value));
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::IsSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->GetDefault(&result));
        return Windows::Services::Cortana::CortanaSettings{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaActionableInsights> : produce_base<D, Windows::Services::Cortana::ICortanaActionableInsights>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsAvailableAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsAvailableAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsForImageAsync(void* imageStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsForImageAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&imageStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsForImageWithOptionsAsync(void* imageStream, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsForImageAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&imageStream), *reinterpret_cast<Windows::Services::Cortana::CortanaActionableInsightsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsForTextAsync(void* text, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsForTextAsync(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsForTextWithOptionsAsync(void* text, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsForTextAsync(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Services::Cortana::CortanaActionableInsightsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsAsync(void* datapackage, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&datapackage)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowInsightsWithOptionsAsync(void* datapackage, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowInsightsAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&datapackage), *reinterpret_cast<Windows::Services::Cortana::CortanaActionableInsightsOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaActionableInsightsOptions> : produce_base<D, Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        int32_t __stdcall get_ContentSourceWebLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentSourceWebLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentSourceWebLink(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceWebLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SurroundingText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SurroundingText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SurroundingText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SurroundingText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaActionableInsightsStatics> : produce_base<D, Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaActionableInsights>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaActionableInsights>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManager> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ArePermissionsGrantedAsync(void* permissions, void** getGrantedPermissionsOperation) noexcept final try
        {
            clear_abi(getGrantedPermissionsOperation);
            typename D::abi_guard guard(this->shim());
            *getGrantedPermissionsOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ArePermissionsGrantedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GrantPermissionsAsync(void* permissions, void** grantOperation) noexcept final try
        {
            clear_abi(grantOperation);
            typename D::abi_guard guard(this->shim());
            *grantOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().GrantPermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RevokePermissionsAsync(void* permissions, void** revokeOperation) noexcept final try
        {
            clear_abi(revokeOperation);
            typename D::abi_guard guard(this->shim());
            *revokeOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().RevokePermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaPermissionsManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaSettings> : produce_base<D, Windows::Services::Cortana::ICortanaSettings>
    {
        int32_t __stdcall get_HasUserConsentToVoiceActivation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasUserConsentToVoiceActivation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsVoiceActivationEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVoiceActivationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsVoiceActivationEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVoiceActivationEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaSettingsStatics> : produce_base<D, Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        int32_t __stdcall IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaSettings>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Services::Cortana
{
    inline auto CortanaActionableInsights::GetDefault()
    {
        return impl::call_factory<CortanaActionableInsights, Windows::Services::Cortana::ICortanaActionableInsightsStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto CortanaActionableInsights::GetForUser(Windows::System::User const& user)
    {
        return impl::call_factory<CortanaActionableInsights, Windows::Services::Cortana::ICortanaActionableInsightsStatics>([&](auto&& f) { return f.GetForUser(user); });
    }
    inline CortanaActionableInsightsOptions::CortanaActionableInsightsOptions() :
        CortanaActionableInsightsOptions(impl::call_factory<CortanaActionableInsightsOptions>([](auto&& f) { return f.template ActivateInstance<CortanaActionableInsightsOptions>(); }))
    {
    }
    inline auto CortanaPermissionsManager::GetDefault()
    {
        return impl::call_factory<CortanaPermissionsManager, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto CortanaSettings::IsSupported()
    {
        return impl::call_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>([&](auto&& f) { return f.IsSupported(); });
    }
    inline auto CortanaSettings::GetDefault()
    {
        return impl::call_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>([&](auto&& f) { return f.GetDefault(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaActionableInsights> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaActionableInsights> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaActionableInsightsOptions> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaActionableInsightsOptions> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaActionableInsightsStatics> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaActionableInsightsStatics> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettings> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaSettings> {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettingsStatics> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaSettingsStatics> {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaActionableInsights> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaActionableInsights> {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions> {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaPermissionsManager> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaPermissionsManager> {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaSettings> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaSettings> {};
}
#endif
