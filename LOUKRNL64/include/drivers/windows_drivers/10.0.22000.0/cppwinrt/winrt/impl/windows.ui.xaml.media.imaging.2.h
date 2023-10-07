// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_Imaging_2_H
#define WINRT_Windows_UI_Xaml_Media_Imaging_2_H
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging
{
    struct DownloadProgressEventHandler : Windows::Foundation::IUnknown
    {
        DownloadProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
        DownloadProgressEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DownloadProgressEventHandler(L lambda);
        template <typename F> DownloadProgressEventHandler(F* function);
        template <typename O, typename M> DownloadProgressEventHandler(O* object, M method);
        template <typename O, typename M> DownloadProgressEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DownloadProgressEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs const& e) const;
    };
    struct __declspec(empty_bases) BitmapImage : Windows::UI::Xaml::Media::Imaging::IBitmapImage,
        impl::base<BitmapImage, Windows::UI::Xaml::Media::Imaging::BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImage2, Windows::UI::Xaml::Media::Imaging::IBitmapImage3, Windows::UI::Xaml::Media::Imaging::IBitmapSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BitmapImage(std::nullptr_t) noexcept {}
        BitmapImage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IBitmapImage(ptr, take_ownership_from_abi) {}
        BitmapImage();
        explicit BitmapImage(Windows::Foundation::Uri const& uriSource);
        [[nodiscard]] static auto CreateOptionsProperty();
        [[nodiscard]] static auto UriSourceProperty();
        [[nodiscard]] static auto DecodePixelWidthProperty();
        [[nodiscard]] static auto DecodePixelHeightProperty();
        [[nodiscard]] static auto DecodePixelTypeProperty();
        [[nodiscard]] static auto IsAnimatedBitmapProperty();
        [[nodiscard]] static auto IsPlayingProperty();
        [[nodiscard]] static auto AutoPlayProperty();
    };
    struct __declspec(empty_bases) BitmapSource : Windows::UI::Xaml::Media::Imaging::IBitmapSource,
        impl::base<BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<BitmapSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BitmapSource(std::nullptr_t) noexcept {}
        BitmapSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IBitmapSource(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto PixelWidthProperty();
        [[nodiscard]] static auto PixelHeightProperty();
    };
    struct __declspec(empty_bases) DownloadProgressEventArgs : Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs
    {
        DownloadProgressEventArgs(std::nullptr_t) noexcept {}
        DownloadProgressEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RenderTargetBitmap : Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap,
        impl::base<RenderTargetBitmap, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<RenderTargetBitmap, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RenderTargetBitmap(std::nullptr_t) noexcept {}
        RenderTargetBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap(ptr, take_ownership_from_abi) {}
        RenderTargetBitmap();
        [[nodiscard]] static auto PixelWidthProperty();
        [[nodiscard]] static auto PixelHeightProperty();
    };
    struct __declspec(empty_bases) SoftwareBitmapSource : Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource,
        impl::base<SoftwareBitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<SoftwareBitmapSource, Windows::Foundation::IClosable, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SoftwareBitmapSource(std::nullptr_t) noexcept {}
        SoftwareBitmapSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource(ptr, take_ownership_from_abi) {}
        SoftwareBitmapSource();
    };
    struct __declspec(empty_bases) SurfaceImageSource : Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource,
        impl::base<SurfaceImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<SurfaceImageSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SurfaceImageSource(std::nullptr_t) noexcept {}
        SurfaceImageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource(ptr, take_ownership_from_abi) {}
        SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight);
        SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque);
    };
    struct __declspec(empty_bases) SvgImageSource : Windows::UI::Xaml::Media::Imaging::ISvgImageSource,
        impl::base<SvgImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<SvgImageSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SvgImageSource(std::nullptr_t) noexcept {}
        SvgImageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::ISvgImageSource(ptr, take_ownership_from_abi) {}
        SvgImageSource();
        explicit SvgImageSource(Windows::Foundation::Uri const& uriSource);
        [[nodiscard]] static auto UriSourceProperty();
        [[nodiscard]] static auto RasterizePixelWidthProperty();
        [[nodiscard]] static auto RasterizePixelHeightProperty();
    };
    struct __declspec(empty_bases) SvgImageSourceFailedEventArgs : Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs
    {
        SvgImageSourceFailedEventArgs(std::nullptr_t) noexcept {}
        SvgImageSourceFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SvgImageSourceOpenedEventArgs : Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs
    {
        SvgImageSourceOpenedEventArgs(std::nullptr_t) noexcept {}
        SvgImageSourceOpenedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VirtualSurfaceImageSource : Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource,
        impl::base<VirtualSurfaceImageSource, Windows::UI::Xaml::Media::Imaging::SurfaceImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<VirtualSurfaceImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        VirtualSurfaceImageSource(std::nullptr_t) noexcept {}
        VirtualSurfaceImageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource(ptr, take_ownership_from_abi) {}
        VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight);
        VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque);
    };
    struct __declspec(empty_bases) WriteableBitmap : Windows::UI::Xaml::Media::Imaging::IWriteableBitmap,
        impl::base<WriteableBitmap, Windows::UI::Xaml::Media::Imaging::BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<WriteableBitmap, Windows::UI::Xaml::Media::Imaging::IBitmapSource, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        WriteableBitmap(std::nullptr_t) noexcept {}
        WriteableBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IWriteableBitmap(ptr, take_ownership_from_abi) {}
        WriteableBitmap(int32_t pixelWidth, int32_t pixelHeight);
    };
    struct __declspec(empty_bases) XamlRenderingBackgroundTask : Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask,
        impl::require<XamlRenderingBackgroundTask, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
    {
        XamlRenderingBackgroundTask(std::nullptr_t) noexcept {}
        XamlRenderingBackgroundTask(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask(ptr, take_ownership_from_abi) {}
    };
    template <typename D>
    class IXamlRenderingBackgroundTaskOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IXamlRenderingBackgroundTaskOverrides = winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides;
        WINRT_IMPL_AUTO(void) OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
    };
}
#endif
