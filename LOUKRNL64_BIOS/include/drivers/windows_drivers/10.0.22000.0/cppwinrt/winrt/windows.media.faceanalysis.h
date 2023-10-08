// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_FaceAnalysis_H
#define WINRT_Windows_Media_FaceAnalysis_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapBounds) consume_Windows_Media_FaceAnalysis_IDetectedFace<D>::FaceBox() const
    {
        Windows::Graphics::Imaging::BitmapBounds returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IDetectedFace)->get_FaceBox(put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->DetectFacesAsync(*(void**)(&image), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image, Windows::Graphics::Imaging::BitmapBounds const& searchArea) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->DetectFacesWithSearchAreaAsync(*(void**)(&image), impl::bind_in(searchArea), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapSize) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MinDetectableFaceSize() const
    {
        Windows::Graphics::Imaging::BitmapSize returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->get_MinDetectableFaceSize(put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->put_MinDetectableFaceSize(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapSize) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MaxDetectableFaceSize() const
    {
        Windows::Graphics::Imaging::BitmapSize returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->get_MaxDetectableFaceSize(put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_FaceAnalysis_IFaceDetector<D>::MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetector)->put_MaxDetectableFaceSize(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector>) consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::CreateAsync() const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->CreateAsync(&returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>) consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::GetSupportedBitmapPixelFormats() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->GetSupportedBitmapPixelFormats(&result));
        return Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->IsBitmapPixelFormatSupported(static_cast<int32_t>(bitmapPixelFormat), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>::IsSupported() const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceDetectorStatics)->get_IsSupported(&returnValue));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>) consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::ProcessNextFrameAsync(Windows::Media::VideoFrame const& videoFrame) const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->ProcessNextFrameAsync(*(void**)(&videoFrame), &returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapSize) consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MinDetectableFaceSize() const
    {
        Windows::Graphics::Imaging::BitmapSize returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->get_MinDetectableFaceSize(put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->put_MinDetectableFaceSize(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapSize) consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MaxDetectableFaceSize() const
    {
        Windows::Graphics::Imaging::BitmapSize returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->get_MaxDetectableFaceSize(put_abi(returnValue)));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_FaceAnalysis_IFaceTracker<D>::MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTracker)->put_MaxDetectableFaceSize(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker>) consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::CreateAsync() const
    {
        void* returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->CreateAsync(&returnValue));
        return Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker>{ returnValue, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>) consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::GetSupportedBitmapPixelFormats() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->GetSupportedBitmapPixelFormats(&result));
        return Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->IsBitmapPixelFormatSupported(static_cast<int32_t>(bitmapPixelFormat), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>::IsSupported() const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::FaceAnalysis::IFaceTrackerStatics)->get_IsSupported(&returnValue));
        return returnValue;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::FaceAnalysis::IDetectedFace> : produce_base<D, Windows::Media::FaceAnalysis::IDetectedFace>
    {
        int32_t __stdcall get_FaceBox(struct struct_Windows_Graphics_Imaging_BitmapBounds* returnValue) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapBounds>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Graphics::Imaging::BitmapBounds>(this->shim().FaceBox());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::FaceAnalysis::IFaceDetector> : produce_base<D, Windows::Media::FaceAnalysis::IFaceDetector>
    {
        int32_t __stdcall DetectFacesAsync(void* image, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>>(this->shim().DetectFacesAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&image)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DetectFacesWithSearchAreaAsync(void* image, struct struct_Windows_Graphics_Imaging_BitmapBounds searchArea, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>>(this->shim().DetectFacesAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&image), *reinterpret_cast<Windows::Graphics::Imaging::BitmapBounds const*>(&searchArea)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize* returnValue) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().MinDetectableFaceSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize* returnValue) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().MaxDetectableFaceSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::FaceAnalysis::IFaceDetectorStatics> : produce_base<D, Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        int32_t __stdcall CreateAsync(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector>>(this->shim().CreateAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSupportedBitmapPixelFormats(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>>(this->shim().GetSupportedBitmapPixelFormats());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsBitmapPixelFormatSupported(int32_t bitmapPixelFormat, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsBitmapPixelFormatSupported(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&bitmapPixelFormat)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSupported(bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::FaceAnalysis::IFaceTracker> : produce_base<D, Windows::Media::FaceAnalysis::IFaceTracker>
    {
        int32_t __stdcall ProcessNextFrameAsync(void* videoFrame, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::Media::FaceAnalysis::DetectedFace>>>(this->shim().ProcessNextFrameAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&videoFrame)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize* returnValue) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().MinDetectableFaceSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize* returnValue) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().MaxDetectableFaceSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDetectableFaceSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::FaceAnalysis::IFaceTrackerStatics> : produce_base<D, Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        int32_t __stdcall CreateAsync(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker>>(this->shim().CreateAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSupportedBitmapPixelFormats(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>>(this->shim().GetSupportedBitmapPixelFormats());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsBitmapPixelFormatSupported(int32_t bitmapPixelFormat, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsBitmapPixelFormatSupported(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&bitmapPixelFormat)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSupported(bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis
{
    inline auto FaceDetector::CreateAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceDetector>(*)(IFaceDetectorStatics const&), FaceDetector, IFaceDetectorStatics>([](IFaceDetectorStatics const& f) { return f.CreateAsync(); });
    }
    inline auto FaceDetector::GetSupportedBitmapPixelFormats()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>(*)(IFaceDetectorStatics const&), FaceDetector, IFaceDetectorStatics>([](IFaceDetectorStatics const& f) { return f.GetSupportedBitmapPixelFormats(); });
    }
    inline auto FaceDetector::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat)
    {
        return impl::call_factory<FaceDetector, IFaceDetectorStatics>([&](IFaceDetectorStatics const& f) { return f.IsBitmapPixelFormatSupported(bitmapPixelFormat); });
    }
    inline auto FaceDetector::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IFaceDetectorStatics const&), FaceDetector, IFaceDetectorStatics>([](IFaceDetectorStatics const& f) { return f.IsSupported(); });
    }
    inline auto FaceTracker::CreateAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::Media::FaceAnalysis::FaceTracker>(*)(IFaceTrackerStatics const&), FaceTracker, IFaceTrackerStatics>([](IFaceTrackerStatics const& f) { return f.CreateAsync(); });
    }
    inline auto FaceTracker::GetSupportedBitmapPixelFormats()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>(*)(IFaceTrackerStatics const&), FaceTracker, IFaceTrackerStatics>([](IFaceTrackerStatics const& f) { return f.GetSupportedBitmapPixelFormats(); });
    }
    inline auto FaceTracker::IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat)
    {
        return impl::call_factory<FaceTracker, IFaceTrackerStatics>([&](IFaceTrackerStatics const& f) { return f.IsBitmapPixelFormatSupported(bitmapPixelFormat); });
    }
    inline auto FaceTracker::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IFaceTrackerStatics const&), FaceTracker, IFaceTrackerStatics>([](IFaceTrackerStatics const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::IDetectedFace> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceDetector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceDetectorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceTracker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::IFaceTrackerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::DetectedFace> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::FaceDetector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::FaceAnalysis::FaceTracker> : winrt::impl::hash_base {};
#endif
}
#endif
