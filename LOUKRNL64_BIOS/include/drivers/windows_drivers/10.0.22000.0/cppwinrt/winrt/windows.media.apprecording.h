// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_AppRecording_H
#define WINRT_Windows_Media_AppRecording_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Media.AppRecording.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::AppRecording::AppRecordingStatus) consume_Windows_Media_AppRecording_IAppRecordingManager<D>::GetStatus() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManager)->GetStatus(&result));
        return Windows::Media::AppRecording::AppRecordingStatus{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>) consume_Windows_Media_AppRecording_IAppRecordingManager<D>::StartRecordingToFileAsync(Windows::Storage::StorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManager)->StartRecordingToFileAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>) consume_Windows_Media_AppRecording_IAppRecordingManager<D>::RecordTimeSpanToFileAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration, Windows::Storage::StorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManager)->RecordTimeSpanToFileAsync(impl::bind_in(startTime), impl::bind_in(duration), *(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Media_AppRecording_IAppRecordingManager<D>::SupportedScreenshotMediaEncodingSubtypes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManager)->get_SupportedScreenshotMediaEncodingSubtypes(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>) consume_Windows_Media_AppRecording_IAppRecordingManager<D>::SaveScreenshotToFilesAsync(Windows::Storage::StorageFolder const& folder, param::hstring const& filenamePrefix, Windows::Media::AppRecording::AppRecordingSaveScreenshotOption const& option, param::async_iterable<hstring> const& requestedFormats) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManager)->SaveScreenshotToFilesAsync(*(void**)(&folder), *(void**)(&filenamePrefix), static_cast<int32_t>(option), *(void**)(&requestedFormats), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::AppRecording::AppRecordingManager) consume_Windows_Media_AppRecording_IAppRecordingManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingManagerStatics)->GetDefault(&result));
        return Windows::Media::AppRecording::AppRecordingManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Media_AppRecording_IAppRecordingResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_AppRecording_IAppRecordingResult<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingResult)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingResult<D>::IsFileTruncated() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingResult)->get_IsFileTruncated(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>) consume_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult<D>::SavedScreenshotInfos() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult)->get_SavedScreenshotInfos(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFile) consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo)->get_File(&value));
        return Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo<D>::MediaEncodingSubtype() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo)->get_MediaEncodingSubtype(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatus<D>::CanRecord() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatus)->get_CanRecord(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatus<D>::CanRecordTimeSpan() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatus)->get_CanRecordTimeSpan(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_AppRecording_IAppRecordingStatus<D>::HistoricalBufferDuration() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatus)->get_HistoricalBufferDuration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::AppRecording::AppRecordingStatusDetails) consume_Windows_Media_AppRecording_IAppRecordingStatus<D>::Details() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatus)->get_Details(&value));
        return Windows::Media::AppRecording::AppRecordingStatusDetails{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsAnyAppBroadcasting() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsAnyAppBroadcasting(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsCaptureResourceUnavailable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsCaptureResourceUnavailable(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsGameStreamInProgress() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsGameStreamInProgress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsTimeSpanRecordingDisabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsTimeSpanRecordingDisabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsGpuConstrained() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsGpuConstrained(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsAppInactive() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsAppInactive(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsBlockedForApp() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsBlockedForApp(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsDisabledByUser() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsDisabledByUser(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_AppRecording_IAppRecordingStatusDetails<D>::IsDisabledBySystem() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::AppRecording::IAppRecordingStatusDetails)->get_IsDisabledBySystem(&value));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingManager> : produce_base<D, Windows::Media::AppRecording::IAppRecordingManager>
    {
        int32_t __stdcall GetStatus(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::AppRecording::AppRecordingStatus>(this->shim().GetStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartRecordingToFileAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>>(this->shim().StartRecordingToFileAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RecordTimeSpanToFileAsync(int64_t startTime, int64_t duration, void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingResult>>(this->shim().RecordTimeSpanToFileAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration), *reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedScreenshotMediaEncodingSubtypes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedScreenshotMediaEncodingSubtypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveScreenshotToFilesAsync(void* folder, void* filenamePrefix, int32_t option, void* requestedFormats, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>>(this->shim().SaveScreenshotToFilesAsync(*reinterpret_cast<Windows::Storage::StorageFolder const*>(&folder), *reinterpret_cast<hstring const*>(&filenamePrefix), *reinterpret_cast<Windows::Media::AppRecording::AppRecordingSaveScreenshotOption const*>(&option), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedFormats)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingManagerStatics> : produce_base<D, Windows::Media::AppRecording::IAppRecordingManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::AppRecording::AppRecordingManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingResult> : produce_base<D, Windows::Media::AppRecording::IAppRecordingResult>
    {
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFileTruncated(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFileTruncated());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult> : produce_base<D, Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult>
    {
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SavedScreenshotInfos(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>>(this->shim().SavedScreenshotInfos());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo> : produce_base<D, Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo>
    {
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MediaEncodingSubtype(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaEncodingSubtype());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingStatus> : produce_base<D, Windows::Media::AppRecording::IAppRecordingStatus>
    {
        int32_t __stdcall get_CanRecord(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanRecord());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanRecordTimeSpan(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanRecordTimeSpan());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HistoricalBufferDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().HistoricalBufferDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Details(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AppRecording::AppRecordingStatusDetails>(this->shim().Details());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::AppRecording::IAppRecordingStatusDetails> : produce_base<D, Windows::Media::AppRecording::IAppRecordingStatusDetails>
    {
        int32_t __stdcall get_IsAnyAppBroadcasting(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAnyAppBroadcasting());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCaptureResourceUnavailable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCaptureResourceUnavailable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsGameStreamInProgress(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGameStreamInProgress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTimeSpanRecordingDisabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTimeSpanRecordingDisabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsGpuConstrained(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGpuConstrained());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsAppInactive(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAppInactive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsBlockedForApp(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBlockedForApp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDisabledByUser(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisabledByUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDisabledBySystem(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisabledBySystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::AppRecording
{
    inline auto AppRecordingManager::GetDefault()
    {
        return impl::call_factory_cast<Windows::Media::AppRecording::AppRecordingManager(*)(IAppRecordingManagerStatics const&), AppRecordingManager, IAppRecordingManagerStatics>([](IAppRecordingManagerStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::IAppRecordingStatusDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::AppRecording::AppRecordingStatusDetails> : winrt::impl::hash_base {};
#endif
}
#endif
