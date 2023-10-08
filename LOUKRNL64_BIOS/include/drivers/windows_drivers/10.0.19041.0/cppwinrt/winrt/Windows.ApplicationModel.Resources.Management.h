// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Resources_Management_H
#define WINRT_Windows_ApplicationModel_Resources_Management_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.Resources.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Type() const
    {
        Windows::ApplicationModel::Resources::Management::IndexedResourceType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Type(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Metadata() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Metadata(&value));
        return Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Qualifiers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Qualifiers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::ValueAsString() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_ValueAsString(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::GetQualifierValue(param::hstring const& qualifierName) const
    {
        void* qualifierValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->GetQualifierValue(*(void**)(&qualifierName), &qualifierValue));
        return hstring{ qualifierValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier<D>::QualifierName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier)->get_QualifierName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier<D>::QualifierValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier)->get_QualifierValue(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IResourceIndexer<D>::IndexFilePath(Windows::Foundation::Uri const& filePath) const
    {
        void* candidate{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexer)->IndexFilePath(*(void**)(&filePath), &candidate));
        return Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate{ candidate, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IResourceIndexer<D>::IndexFileContentsAsync(Windows::Foundation::Uri const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexer)->IndexFileContentsAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory<D>::CreateResourceIndexer(Windows::Foundation::Uri const& projectRoot) const
    {
        void* indexer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory)->CreateResourceIndexer(*(void**)(&projectRoot), &indexer));
        return Windows::ApplicationModel::Resources::Management::ResourceIndexer{ indexer, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory2<D>::CreateResourceIndexerWithExtension(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath) const
    {
        void* indexer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2)->CreateResourceIndexerWithExtension(*(void**)(&projectRoot), *(void**)(&extensionDllPath), &indexer));
        return Windows::ApplicationModel::Resources::Management::ResourceIndexer{ indexer, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Resources::Management::IndexedResourceType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Metadata(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Metadata());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Qualifiers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>>(this->shim().Qualifiers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValueAsString(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ValueAsString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetQualifierValue(void* qualifierName, void** qualifierValue) noexcept final try
        {
            clear_abi(qualifierValue);
            typename D::abi_guard guard(this->shim());
            *qualifierValue = detach_from<hstring>(this->shim().GetQualifierValue(*reinterpret_cast<hstring const*>(&qualifierName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier>
    {
        int32_t __stdcall get_QualifierName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QualifierName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_QualifierValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QualifierValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer>
    {
        int32_t __stdcall IndexFilePath(void* filePath, void** candidate) noexcept final try
        {
            clear_abi(candidate);
            typename D::abi_guard guard(this->shim());
            *candidate = detach_from<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>(this->shim().IndexFilePath(*reinterpret_cast<Windows::Foundation::Uri const*>(&filePath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndexFileContentsAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>>>(this->shim().IndexFileContentsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>
    {
        int32_t __stdcall CreateResourceIndexer(void* projectRoot, void** indexer) noexcept final try
        {
            clear_abi(indexer);
            typename D::abi_guard guard(this->shim());
            *indexer = detach_from<Windows::ApplicationModel::Resources::Management::ResourceIndexer>(this->shim().CreateResourceIndexer(*reinterpret_cast<Windows::Foundation::Uri const*>(&projectRoot)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>
    {
        int32_t __stdcall CreateResourceIndexerWithExtension(void* projectRoot, void* extensionDllPath, void** indexer) noexcept final try
        {
            clear_abi(indexer);
            typename D::abi_guard guard(this->shim());
            *indexer = detach_from<Windows::ApplicationModel::Resources::Management::ResourceIndexer>(this->shim().CreateResourceIndexerWithExtension(*reinterpret_cast<Windows::Foundation::Uri const*>(&projectRoot), *reinterpret_cast<Windows::Foundation::Uri const*>(&extensionDllPath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Resources::Management
{
    inline ResourceIndexer::ResourceIndexer(Windows::Foundation::Uri const& projectRoot) :
        ResourceIndexer(impl::call_factory<ResourceIndexer, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>([&](auto&& f) { return f.CreateResourceIndexer(projectRoot); }))
    {
    }
    inline ResourceIndexer::ResourceIndexer(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath) :
        ResourceIndexer(impl::call_factory<ResourceIndexer, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>([&](auto&& f) { return f.CreateResourceIndexerWithExtension(projectRoot, extensionDllPath); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexer> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexer> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer> {};
}
#endif
