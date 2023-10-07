// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_FaceAnalysis_0_H
#define WINRT_Windows_Media_FaceAnalysis_0_H
namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapBounds;
    enum class BitmapPixelFormat : int32_t;
    struct BitmapSize;
    struct SoftwareBitmap;
}
namespace winrt::Windows::Media
{
    struct VideoFrame;
}
namespace winrt::Windows::Media::FaceAnalysis
{
    struct IDetectedFace;
    struct IFaceDetector;
    struct IFaceDetectorStatics;
    struct IFaceTracker;
    struct IFaceTrackerStatics;
    struct DetectedFace;
    struct FaceDetector;
    struct FaceTracker;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::FaceAnalysis::IDetectedFace>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::IFaceDetector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::IFaceTracker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::DetectedFace>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::FaceDetector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::FaceAnalysis::FaceTracker>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Media::FaceAnalysis::IDetectedFace>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IDetectedFace" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::IFaceDetector>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceDetector" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceDetectorStatics" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::IFaceTracker>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceTracker" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.IFaceTrackerStatics" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::DetectedFace>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.DetectedFace" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::FaceDetector>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.FaceDetector" };
    };
    template <> struct name<Windows::Media::FaceAnalysis::FaceTracker>
    {
        static constexpr auto & value{ L"Windows.Media.FaceAnalysis.FaceTracker" };
    };
    template <> struct guid_storage<Windows::Media::FaceAnalysis::IDetectedFace>
    {
        static constexpr guid value{ 0x8200D454,0x66BC,0x34DF,{ 0x94,0x10,0xE8,0x94,0x00,0x19,0x54,0x14 } };
    };
    template <> struct guid_storage<Windows::Media::FaceAnalysis::IFaceDetector>
    {
        static constexpr guid value{ 0x16B672DC,0xFE6F,0x3117,{ 0x8D,0x95,0xC3,0xF0,0x4D,0x51,0x63,0x0C } };
    };
    template <> struct guid_storage<Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        static constexpr guid value{ 0xBC042D67,0x9047,0x33F6,{ 0x88,0x1B,0x67,0x46,0xC1,0xB2,0x18,0xB8 } };
    };
    template <> struct guid_storage<Windows::Media::FaceAnalysis::IFaceTracker>
    {
        static constexpr guid value{ 0x6BA67D8C,0xA841,0x4420,{ 0x93,0xE6,0x24,0x20,0xA1,0x88,0x4F,0xCF } };
    };
    template <> struct guid_storage<Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        static constexpr guid value{ 0xE9629198,0x1801,0x3FA5,{ 0x93,0x2E,0x31,0xD7,0x67,0xAF,0x6C,0x4D } };
    };
    template <> struct default_interface<Windows::Media::FaceAnalysis::DetectedFace>
    {
        using type = Windows::Media::FaceAnalysis::IDetectedFace;
    };
    template <> struct default_interface<Windows::Media::FaceAnalysis::FaceDetector>
    {
        using type = Windows::Media::FaceAnalysis::IFaceDetector;
    };
    template <> struct default_interface<Windows::Media::FaceAnalysis::FaceTracker>
    {
        using type = Windows::Media::FaceAnalysis::IFaceTracker;
    };
    template <> struct abi<Windows::Media::FaceAnalysis::IDetectedFace>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FaceBox(struct struct_Windows_Graphics_Imaging_BitmapBounds*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::FaceAnalysis::IFaceDetector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DetectFacesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DetectFacesWithSearchAreaAsync(void*, struct struct_Windows_Graphics_Imaging_BitmapBounds, void**) noexcept = 0;
            virtual int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
            virtual int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall IsBitmapPixelFormatSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::FaceAnalysis::IFaceTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProcessNextFrameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MinDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
            virtual int32_t __stdcall get_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDetectableFaceSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall IsBitmapPixelFormatSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IDetectedFace
    {
        [[nodiscard]] auto FaceBox() const;
    };
    template <> struct consume<Windows::Media::FaceAnalysis::IDetectedFace>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IDetectedFace<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceDetector
    {
        auto DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image) const;
        auto DetectFacesAsync(Windows::Graphics::Imaging::SoftwareBitmap const& image, Windows::Graphics::Imaging::BitmapBounds const& searchArea) const;
        [[nodiscard]] auto MinDetectableFaceSize() const;
        auto MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
        [[nodiscard]] auto MaxDetectableFaceSize() const;
        auto MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    };
    template <> struct consume<Windows::Media::FaceAnalysis::IFaceDetector>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetector<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics
    {
        auto CreateAsync() const;
        auto GetSupportedBitmapPixelFormats() const;
        auto IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
        [[nodiscard]] auto IsSupported() const;
    };
    template <> struct consume<Windows::Media::FaceAnalysis::IFaceDetectorStatics>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceDetectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceTracker
    {
        auto ProcessNextFrameAsync(Windows::Media::VideoFrame const& videoFrame) const;
        [[nodiscard]] auto MinDetectableFaceSize() const;
        auto MinDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
        [[nodiscard]] auto MaxDetectableFaceSize() const;
        auto MaxDetectableFaceSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    };
    template <> struct consume<Windows::Media::FaceAnalysis::IFaceTracker>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTracker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics
    {
        auto CreateAsync() const;
        auto GetSupportedBitmapPixelFormats() const;
        auto IsBitmapPixelFormatSupported(Windows::Graphics::Imaging::BitmapPixelFormat const& bitmapPixelFormat) const;
        [[nodiscard]] auto IsSupported() const;
    };
    template <> struct consume<Windows::Media::FaceAnalysis::IFaceTrackerStatics>
    {
        template <typename D> using type = consume_Windows_Media_FaceAnalysis_IFaceTrackerStatics<D>;
    };
}
#endif
