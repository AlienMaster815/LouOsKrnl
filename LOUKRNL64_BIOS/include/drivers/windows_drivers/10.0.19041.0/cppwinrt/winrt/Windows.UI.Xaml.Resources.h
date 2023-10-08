// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Resources_H
#define WINRT_Windows_UI_Xaml_Resources_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.UI.Xaml.Resources.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Resources::CustomXamlResourceLoader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides)->GetResource(*(void**)(&resourceId), *(void**)(&objectType), *(void**)(&propertyName), *(void**)(&propertyType), &result));
        return Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->get_Current(&value));
        return Windows::UI::Xaml::Resources::CustomXamlResourceLoader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->put_Current(*(void**)(&value)));
    }
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        int32_t __stdcall GetResource(void* resourceId, void* objectType, void* propertyName, void* propertyType, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().GetResource(*reinterpret_cast<hstring const*>(&resourceId), *reinterpret_cast<hstring const*>(&objectType), *reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<hstring const*>(&propertyType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Current(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Current(*reinterpret_cast<Windows::UI::Xaml::Resources::CustomXamlResourceLoader const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    auto GetResource(hstring resourceId, hstring objectType, hstring propertyName, hstring propertyType)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.GetResource(resourceId, objectType, propertyName, propertyType);
        }

        return this->shim().GetResource(resourceId, objectType, propertyName, propertyType);
    }
};}
namespace winrt::Windows::UI::Xaml::Resources
{
    inline CustomXamlResourceLoader::CustomXamlResourceLoader()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>([&](auto&& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto CustomXamlResourceLoader::Current()
    {
        return impl::call_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>([&](auto&& f) { return f.Current(); });
    }
    inline auto CustomXamlResourceLoader::Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value)
    {
        impl::call_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>([&](auto&& f) { return f.Current(value); });
    }
    template <typename D> auto ICustomXamlResourceLoaderOverridesT<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
    {
        return shim().template try_as<ICustomXamlResourceLoaderOverrides>().GetResource(resourceId, objectType, propertyName, propertyType);
    }
    template <typename D, typename... Interfaces>
    struct CustomXamlResourceLoaderT :
        implements<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>,
        impl::base<D, CustomXamlResourceLoader>,
        Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverridesT<D>
    {
        using composable = CustomXamlResourceLoader;
    protected:
        CustomXamlResourceLoaderT()
        {
            impl::call_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>([&](auto&& f) { f.CreateInstance(*this, this->m_inner); });
        }
    };
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> {};
}
#endif
