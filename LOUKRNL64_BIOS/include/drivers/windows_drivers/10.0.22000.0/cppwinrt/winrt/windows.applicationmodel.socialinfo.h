// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_H
#define WINRT_Windows_ApplicationModel_SocialInfo_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialUserInfo) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Author() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Author(&value));
        return Windows::ApplicationModel::SocialInfo::SocialUserInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedContent) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::PrimaryContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_PrimaryContent(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedContent) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SecondaryContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_SecondaryContent(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_Timestamp(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_TargetUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Thumbnails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Thumbnails(&value));
        return Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SharedItem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_SharedItem(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_SharedItem(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_Title(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Message(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_Message(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_TargetUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialUserInfo) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Author() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Author(&value));
        return Windows::ApplicationModel::SocialInfo::SocialUserInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedContent) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::PrimaryContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_PrimaryContent(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedContent) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SecondaryContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_SecondaryContent(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_Timestamp(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_TargetUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Thumbnails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Thumbnails(&value));
        return Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SharedItem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_SharedItem(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_SharedItem(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeStyle() const
    {
        Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_BadgeStyle(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_BadgeStyle(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeCountValue() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_BadgeCountValue(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeCountValue(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_BadgeCountValue(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::RemoteId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_RemoteId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::RemoteId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_RemoteId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedChildItem) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::ChildItem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_ChildItem(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedChildItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::ChildItem(Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_ChildItem(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Style() const
    {
        Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Style(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_Style(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::OriginalSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_OriginalSource(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::OriginalSource(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_OriginalSource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialFeedContent) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Content(&value));
        return Windows::ApplicationModel::SocialInfo::SocialFeedContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_Timestamp(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_TargetUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_Thumbnail(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail) consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Thumbnail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Thumbnail(&value));
        return Windows::ApplicationModel::SocialInfo::SocialItemThumbnail{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_TargetUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::ImageUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_ImageUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::ImageUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_ImageUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapSize) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::BitmapSize() const
    {
        Windows::Graphics::Imaging::BitmapSize value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_BitmapSize(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::BitmapSize(Windows::Graphics::Imaging::BitmapSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_BitmapSize(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::SetImageAsync(Windows::Storage::Streams::IInputStream const& image) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->SetImageAsync(*(void**)(&image), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::DisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_DisplayName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::UserName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_UserName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::UserName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_UserName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::RemoteId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_RemoteId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::RemoteId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_RemoteId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::TargetUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_TargetUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::TargetUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_TargetUri(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        int32_t __stdcall get_Author(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialUserInfo>(this->shim().Author());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrimaryContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().PrimaryContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecondaryContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().SecondaryContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Timestamp(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>>(this->shim().Thumbnails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharedItem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>(this->shim().SharedItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SharedItem(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Message(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        int32_t __stdcall get_Author(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialUserInfo>(this->shim().Author());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrimaryContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().PrimaryContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecondaryContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().SecondaryContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Timestamp(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>>(this->shim().Thumbnails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharedItem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>(this->shim().SharedItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SharedItem(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BadgeStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>(this->shim().BadgeStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BadgeStyle(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgeStyle(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BadgeCountValue(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().BadgeCountValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BadgeCountValue(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgeCountValue(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChildItem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>(this->shim().ChildItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ChildItem(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChildItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Style(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>(this->shim().Style());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Style(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        int32_t __stdcall get_OriginalSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OriginalSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OriginalSource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginalSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Timestamp(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Thumbnail(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>(this->shim().Thumbnail());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ImageUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ImageUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize* value) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().BitmapSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetImageAsync(void* image, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetImageAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&image)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo
{
    inline SocialFeedChildItem::SocialFeedChildItem() :
        SocialFeedChildItem(impl::call_factory_cast<SocialFeedChildItem(*)(Windows::Foundation::IActivationFactory const&), SocialFeedChildItem>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SocialFeedChildItem>(); }))
    {
    }
    inline SocialFeedItem::SocialFeedItem() :
        SocialFeedItem(impl::call_factory_cast<SocialFeedItem(*)(Windows::Foundation::IActivationFactory const&), SocialFeedItem>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SocialFeedItem>(); }))
    {
    }
    inline SocialFeedSharedItem::SocialFeedSharedItem() :
        SocialFeedSharedItem(impl::call_factory_cast<SocialFeedSharedItem(*)(Windows::Foundation::IActivationFactory const&), SocialFeedSharedItem>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SocialFeedSharedItem>(); }))
    {
    }
    inline SocialItemThumbnail::SocialItemThumbnail() :
        SocialItemThumbnail(impl::call_factory_cast<SocialItemThumbnail(*)(Windows::Foundation::IActivationFactory const&), SocialItemThumbnail>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SocialItemThumbnail>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialUserInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialUserInfo> : winrt::impl::hash_base {};
#endif
}
#endif
