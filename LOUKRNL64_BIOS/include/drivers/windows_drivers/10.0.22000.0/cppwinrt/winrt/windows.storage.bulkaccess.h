// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_BulkAccess_H
#define WINRT_Windows_Storage_BulkAccess_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Storage.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.BulkAccess.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetItemsAsync(startIndex, maxItemsToRetrieve, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetItemsAsyncDefaultStartAndCount(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFilesAsync(startIndex, maxItemsToRetrieve, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFilesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFilesAsyncDefaultStartAndCount(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFoldersAsync(startIndex, maxItemsToRetrieve, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFoldersAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFoldersAsyncDefaultStartAndCount(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedItemsVector() const
    {
        void* vector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedItemsVector(&vector));
        return Windows::Foundation::IInspectable{ vector, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedFilesVector() const
    {
        void* vector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedFilesVector(&vector));
        return Windows::Foundation::IInspectable{ vector, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedFoldersVector() const
    {
        void* vector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedFoldersVector(&vector));
        return Windows::Foundation::IInspectable{ vector, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::BulkAccess::FileInformationFactory) consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithMode(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithMode(*(void**)(&queryResult), static_cast<int32_t>(mode), &value));
        return Windows::Storage::BulkAccess::FileInformationFactory{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::BulkAccess::FileInformationFactory) consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSize(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSize(*(void**)(&queryResult), static_cast<int32_t>(mode), requestedThumbnailSize, &value));
        return Windows::Storage::BulkAccess::FileInformationFactory{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::BulkAccess::FileInformationFactory) consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptions(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSizeAndOptions(*(void**)(&queryResult), static_cast<int32_t>(mode), requestedThumbnailSize, static_cast<uint32_t>(thumbnailOptions), &value));
        return Windows::Storage::BulkAccess::FileInformationFactory{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::BulkAccess::FileInformationFactory) consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptionsAndFlags(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSizeAndOptionsAndFlags(*(void**)(&queryResult), static_cast<int32_t>(mode), requestedThumbnailSize, static_cast<uint32_t>(thumbnailOptions), delayLoad, &value));
        return Windows::Storage::BulkAccess::FileInformationFactory{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::MusicProperties) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::MusicProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_MusicProperties(&value));
        return Windows::Storage::FileProperties::MusicProperties{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::VideoProperties) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::VideoProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_VideoProperties(&value));
        return Windows::Storage::FileProperties::VideoProperties{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::ImageProperties) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ImageProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_ImageProperties(&value));
        return Windows::Storage::FileProperties::ImageProperties{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::DocumentProperties) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::DocumentProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_DocumentProperties(&value));
        return Windows::Storage::FileProperties::DocumentProperties{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::BasicProperties) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::BasicProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_BasicProperties(&value));
        return Windows::Storage::FileProperties::BasicProperties{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::FileProperties::StorageItemThumbnail) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::Thumbnail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_Thumbnail(&value));
        return Windows::Storage::FileProperties::StorageItemThumbnail{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
    {
        winrt::event_token eventCookie{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->add_ThumbnailUpdated(*(void**)(&changedHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated_revoker consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
    {
        return impl::make_event_revoker<D, ThumbnailUpdated_revoker>(this, ThumbnailUpdated(changedHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->remove_ThumbnailUpdated(impl::bind_in(eventCookie)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
    {
        winrt::event_token eventCookie{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->add_PropertiesUpdated(*(void**)(&changedHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated_revoker consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
    {
        return impl::make_event_revoker<D, PropertiesUpdated_revoker>(this, PropertiesUpdated(changedHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->remove_PropertiesUpdated(impl::bind_in(eventCookie)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::BulkAccess::IFileInformationFactory> : produce_base<D, Windows::Storage::BulkAccess::IFileInformationFactory>
    {
        int32_t __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>>(this->shim().GetItemsAsync(startIndex, maxItemsToRetrieve));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetItemsAsyncDefaultStartAndCount(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>>(this->shim().GetItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>>(this->shim().GetFilesAsync(startIndex, maxItemsToRetrieve));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFilesAsyncDefaultStartAndCount(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>>(this->shim().GetFilesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>>(this->shim().GetFoldersAsync(startIndex, maxItemsToRetrieve));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFoldersAsyncDefaultStartAndCount(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>>(this->shim().GetFoldersAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVirtualizedItemsVector(void** vector) noexcept final try
        {
            clear_abi(vector);
            typename D::abi_guard guard(this->shim());
            *vector = detach_from<Windows::Foundation::IInspectable>(this->shim().GetVirtualizedItemsVector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVirtualizedFilesVector(void** vector) noexcept final try
        {
            clear_abi(vector);
            typename D::abi_guard guard(this->shim());
            *vector = detach_from<Windows::Foundation::IInspectable>(this->shim().GetVirtualizedFilesVector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVirtualizedFoldersVector(void** vector) noexcept final try
        {
            clear_abi(vector);
            typename D::abi_guard guard(this->shim());
            *vector = detach_from<Windows::Foundation::IInspectable>(this->shim().GetVirtualizedFoldersVector());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::BulkAccess::IFileInformationFactoryFactory> : produce_base<D, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
    {
        int32_t __stdcall CreateWithMode(void* queryResult, int32_t mode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::BulkAccess::FileInformationFactory>(this->shim().CreateWithMode(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithModeAndSize(void* queryResult, int32_t mode, uint32_t requestedThumbnailSize, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::BulkAccess::FileInformationFactory>(this->shim().CreateWithModeAndSize(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithModeAndSizeAndOptions(void* queryResult, int32_t mode, uint32_t requestedThumbnailSize, uint32_t thumbnailOptions, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::BulkAccess::FileInformationFactory>(this->shim().CreateWithModeAndSizeAndOptions(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&thumbnailOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithModeAndSizeAndOptionsAndFlags(void* queryResult, int32_t mode, uint32_t requestedThumbnailSize, uint32_t thumbnailOptions, bool delayLoad, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::BulkAccess::FileInformationFactory>(this->shim().CreateWithModeAndSizeAndOptionsAndFlags(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&thumbnailOptions), delayLoad));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Storage::BulkAccess::IStorageItemInformation> : produce_base<D, Windows::Storage::BulkAccess::IStorageItemInformation>
    {
        int32_t __stdcall get_MusicProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::MusicProperties>(this->shim().MusicProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::VideoProperties>(this->shim().VideoProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::ImageProperties>(this->shim().ImageProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DocumentProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::DocumentProperties>(this->shim().DocumentProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BasicProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::BasicProperties>(this->shim().BasicProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::FileProperties::StorageItemThumbnail>(this->shim().Thumbnail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ThumbnailUpdated(void* changedHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().ThumbnailUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ThumbnailUpdated(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailUpdated(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall add_PropertiesUpdated(void* changedHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().PropertiesUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PropertiesUpdated(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesUpdated(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
    };
}
WINRT_EXPORT namespace winrt::Windows::Storage::BulkAccess
{
    inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) :
        FileInformationFactory(impl::call_factory<FileInformationFactory, IFileInformationFactoryFactory>([&](IFileInformationFactoryFactory const& f) { return f.CreateWithMode(queryResult, mode); }))
    {
    }
    inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) :
        FileInformationFactory(impl::call_factory<FileInformationFactory, IFileInformationFactoryFactory>([&](IFileInformationFactoryFactory const& f) { return f.CreateWithModeAndSize(queryResult, mode, requestedThumbnailSize); }))
    {
    }
    inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) :
        FileInformationFactory(impl::call_factory<FileInformationFactory, IFileInformationFactoryFactory>([&](IFileInformationFactoryFactory const& f) { return f.CreateWithModeAndSizeAndOptions(queryResult, mode, requestedThumbnailSize, thumbnailOptions); }))
    {
    }
    inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) :
        FileInformationFactory(impl::call_factory<FileInformationFactory, IFileInformationFactoryFactory>([&](IFileInformationFactoryFactory const& f) { return f.CreateWithModeAndSizeAndOptionsAndFlags(queryResult, mode, requestedThumbnailSize, thumbnailOptions, delayLoad); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Storage::BulkAccess::IFileInformationFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::BulkAccess::IFileInformationFactoryFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::BulkAccess::IStorageItemInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::BulkAccess::FileInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::BulkAccess::FileInformationFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::BulkAccess::FolderInformation> : winrt::impl::hash_base {};
#endif
}
#endif
