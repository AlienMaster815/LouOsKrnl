// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Transcoding_H
#define WINRT_Windows_Media_Transcoding_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStartTime(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_TrimStartTime(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStartTime() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_TrimStartTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStopTime(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_TrimStopTime(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStopTime() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_TrimStopTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AlwaysReencode(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_AlwaysReencode(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AlwaysReencode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_AlwaysReencode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::HardwareAccelerationEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_HardwareAccelerationEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::HardwareAccelerationEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_HardwareAccelerationEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddAudioEffect(param::hstring const& activatableClassId) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddAudioEffect(*(void**)(&activatableClassId)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddAudioEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddAudioEffectWithSettings(*(void**)(&activatableClassId), effectRequired, *(void**)(&configuration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddVideoEffect(param::hstring const& activatableClassId) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddVideoEffect(*(void**)(&activatableClassId)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddVideoEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddVideoEffectWithSettings(*(void**)(&activatableClassId), effectRequired, *(void**)(&configuration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::ClearEffects() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->ClearEffects());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::PrepareFileTranscodeAsync(Windows::Storage::IStorageFile const& source, Windows::Storage::IStorageFile const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->PrepareFileTranscodeAsync(*(void**)(&source), *(void**)(&destination), *(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>) consume_Windows_Media_Transcoding_IMediaTranscoder<D>::PrepareStreamTranscodeAsync(Windows::Storage::Streams::IRandomAccessStream const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->PrepareStreamTranscodeAsync(*(void**)(&source), *(void**)(&destination), *(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>) consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::PrepareMediaStreamSourceTranscodeAsync(Windows::Media::Core::IMediaSource const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->PrepareMediaStreamSourceTranscodeAsync(*(void**)(&source), *(void**)(&destination), *(void**)(&profile), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->put_VideoProcessingAlgorithm(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm) consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::VideoProcessingAlgorithm() const
    {
        Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->get_VideoProcessingAlgorithm(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::CanTranscode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->get_CanTranscode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Transcoding::TranscodeFailureReason) consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::FailureReason() const
    {
        Windows::Media::Transcoding::TranscodeFailureReason value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->get_FailureReason(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncActionWithProgress<double>) consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::TranscodeAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->TranscodeAsync(&operation));
        return Windows::Foundation::IAsyncActionWithProgress<double>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Transcoding::IMediaTranscoder> : produce_base<D, Windows::Media::Transcoding::IMediaTranscoder>
    {
        int32_t __stdcall put_TrimStartTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimStartTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimStartTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimStartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrimStopTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimStopTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimStopTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimStopTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlwaysReencode(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysReencode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysReencode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysReencode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HardwareAccelerationEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HardwareAccelerationEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareAccelerationEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HardwareAccelerationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddAudioEffect(void* activatableClassId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAudioEffect(*reinterpret_cast<hstring const*>(&activatableClassId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddAudioEffectWithSettings(void* activatableClassId, bool effectRequired, void* configuration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAudioEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectRequired, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddVideoEffect(void* activatableClassId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddVideoEffect(*reinterpret_cast<hstring const*>(&activatableClassId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddVideoEffectWithSettings(void* activatableClassId, bool effectRequired, void* configuration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddVideoEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectRequired, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearEffects() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearEffects();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PrepareFileTranscodeAsync(void* source, void* destination, void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>>(this->shim().PrepareFileTranscodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&source), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PrepareStreamTranscodeAsync(void* source, void* destination, void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>>(this->shim().PrepareStreamTranscodeAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Transcoding::IMediaTranscoder2> : produce_base<D, Windows::Media::Transcoding::IMediaTranscoder2>
    {
        int32_t __stdcall PrepareMediaStreamSourceTranscodeAsync(void* source, void* destination, void* profile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>>(this->shim().PrepareMediaStreamSourceTranscodeAsync(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_VideoProcessingAlgorithm(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProcessingAlgorithm(*reinterpret_cast<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoProcessingAlgorithm(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>(this->shim().VideoProcessingAlgorithm());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Transcoding::IPrepareTranscodeResult> : produce_base<D, Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        int32_t __stdcall get_CanTranscode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanTranscode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Transcoding::TranscodeFailureReason>(this->shim().FailureReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TranscodeAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncActionWithProgress<double>>(this->shim().TranscodeAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    inline MediaTranscoder::MediaTranscoder() :
        MediaTranscoder(impl::call_factory_cast<MediaTranscoder(*)(Windows::Foundation::IActivationFactory const&), MediaTranscoder>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MediaTranscoder>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::Transcoding::IMediaTranscoder> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Transcoding::IMediaTranscoder2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Transcoding::IPrepareTranscodeResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Transcoding::MediaTranscoder> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Transcoding::PrepareTranscodeResult> : winrt::impl::hash_base {};
#endif
}
#endif
