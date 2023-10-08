// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Editing_0_H
#define WINRT_Windows_Media_Editing_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Rect;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
namespace winrt::Windows::Media::Core
{
    struct MediaStreamSource;
}
namespace winrt::Windows::Media::Effects
{
    struct IVideoCompositorDefinition;
}
namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct MediaEncodingProfile;
    struct VideoEncodingProperties;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::Media::Editing
{
    enum class MediaTrimmingPreference : int32_t
    {
        Fast = 0,
        Precise = 1,
    };
    enum class VideoFramePrecision : int32_t
    {
        NearestFrame = 0,
        NearestKeyFrame = 1,
    };
    struct IBackgroundAudioTrack;
    struct IBackgroundAudioTrackStatics;
    struct IEmbeddedAudioTrack;
    struct IMediaClip;
    struct IMediaClipStatics;
    struct IMediaClipStatics2;
    struct IMediaComposition;
    struct IMediaComposition2;
    struct IMediaCompositionStatics;
    struct IMediaOverlay;
    struct IMediaOverlayFactory;
    struct IMediaOverlayLayer;
    struct IMediaOverlayLayerFactory;
    struct BackgroundAudioTrack;
    struct EmbeddedAudioTrack;
    struct MediaClip;
    struct MediaComposition;
    struct MediaOverlay;
    struct MediaOverlayLayer;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Editing::IBackgroundAudioTrack>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaClip>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaClipStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaClipStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaComposition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaComposition2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaCompositionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaOverlay>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaOverlayFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaOverlayLayer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Editing::BackgroundAudioTrack>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::EmbeddedAudioTrack>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::MediaClip>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::MediaComposition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::MediaOverlay>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::MediaOverlayLayer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Editing::MediaTrimmingPreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Editing::VideoFramePrecision>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Editing::IBackgroundAudioTrack>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IBackgroundAudioTrack" };
    };
    template <> struct name<Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IBackgroundAudioTrackStatics" };
    };
    template <> struct name<Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IEmbeddedAudioTrack" };
    };
    template <> struct name<Windows::Media::Editing::IMediaClip>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaClip" };
    };
    template <> struct name<Windows::Media::Editing::IMediaClipStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaClipStatics" };
    };
    template <> struct name<Windows::Media::Editing::IMediaClipStatics2>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaClipStatics2" };
    };
    template <> struct name<Windows::Media::Editing::IMediaComposition>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaComposition" };
    };
    template <> struct name<Windows::Media::Editing::IMediaComposition2>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaComposition2" };
    };
    template <> struct name<Windows::Media::Editing::IMediaCompositionStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaCompositionStatics" };
    };
    template <> struct name<Windows::Media::Editing::IMediaOverlay>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlay" };
    };
    template <> struct name<Windows::Media::Editing::IMediaOverlayFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayFactory" };
    };
    template <> struct name<Windows::Media::Editing::IMediaOverlayLayer>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayLayer" };
    };
    template <> struct name<Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayLayerFactory" };
    };
    template <> struct name<Windows::Media::Editing::BackgroundAudioTrack>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.BackgroundAudioTrack" };
    };
    template <> struct name<Windows::Media::Editing::EmbeddedAudioTrack>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.EmbeddedAudioTrack" };
    };
    template <> struct name<Windows::Media::Editing::MediaClip>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.MediaClip" };
    };
    template <> struct name<Windows::Media::Editing::MediaComposition>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.MediaComposition" };
    };
    template <> struct name<Windows::Media::Editing::MediaOverlay>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.MediaOverlay" };
    };
    template <> struct name<Windows::Media::Editing::MediaOverlayLayer>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.MediaOverlayLayer" };
    };
    template <> struct name<Windows::Media::Editing::MediaTrimmingPreference>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.MediaTrimmingPreference" };
    };
    template <> struct name<Windows::Media::Editing::VideoFramePrecision>
    {
        static constexpr auto & value{ L"Windows.Media.Editing.VideoFramePrecision" };
    };
    template <> struct guid_storage<Windows::Media::Editing::IBackgroundAudioTrack>
    {
        static constexpr guid value{ 0x4B91B3BD,0x9E21,0x4266,{ 0xA9,0xC2,0x67,0xDD,0x01,0x1A,0x23,0x57 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        static constexpr guid value{ 0xD9B1C0D7,0xD018,0x42A8,{ 0xA5,0x59,0xCB,0x4D,0x9E,0x97,0xE6,0x64 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        static constexpr guid value{ 0x55EE5A7A,0x2D30,0x3FBA,{ 0xA1,0x90,0x4F,0x1A,0x64,0x54,0xF8,0x8F } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaClip>
    {
        static constexpr guid value{ 0x53F25366,0x5FBA,0x3EA4,{ 0x86,0x93,0x24,0x76,0x18,0x11,0x14,0x0A } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaClipStatics>
    {
        static constexpr guid value{ 0xFA402B68,0x928F,0x43C4,{ 0xBC,0x6E,0x78,0x3A,0x1A,0x35,0x96,0x56 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaClipStatics2>
    {
        static constexpr guid value{ 0x5B1DD7B3,0x854E,0x4D9B,{ 0x87,0x7D,0x47,0x74,0xA5,0x56,0xCD,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaComposition>
    {
        static constexpr guid value{ 0x2E06E605,0xDC71,0x41D6,{ 0xB8,0x37,0x2D,0x2B,0xC1,0x4A,0x29,0x47 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaComposition2>
    {
        static constexpr guid value{ 0xA59E5372,0x2366,0x492C,{ 0xBE,0xC8,0xE6,0xDF,0xBA,0x6D,0x02,0x81 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaCompositionStatics>
    {
        static constexpr guid value{ 0x87A08F04,0xE32A,0x45CE,{ 0x8F,0x66,0xA3,0x0D,0xF0,0x76,0x62,0x24 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaOverlay>
    {
        static constexpr guid value{ 0xA902AE5D,0x7869,0x4830,{ 0x8A,0xB1,0x94,0xDC,0x01,0xC0,0x5F,0xA4 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaOverlayFactory>
    {
        static constexpr guid value{ 0xB584828A,0x6188,0x4F8F,{ 0xA2,0xE0,0xAA,0x55,0x2D,0x59,0x8E,0x18 } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaOverlayLayer>
    {
        static constexpr guid value{ 0xA6D9BA57,0xEEDA,0x46C6,{ 0xBB,0xE5,0xE3,0x98,0xC8,0x41,0x68,0xAC } };
    };
    template <> struct guid_storage<Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        static constexpr guid value{ 0x947CB473,0xA39E,0x4362,{ 0xAB,0xBF,0x9F,0x8B,0x50,0x70,0xA0,0x62 } };
    };
    template <> struct default_interface<Windows::Media::Editing::BackgroundAudioTrack>
    {
        using type = Windows::Media::Editing::IBackgroundAudioTrack;
    };
    template <> struct default_interface<Windows::Media::Editing::EmbeddedAudioTrack>
    {
        using type = Windows::Media::Editing::IEmbeddedAudioTrack;
    };
    template <> struct default_interface<Windows::Media::Editing::MediaClip>
    {
        using type = Windows::Media::Editing::IMediaClip;
    };
    template <> struct default_interface<Windows::Media::Editing::MediaComposition>
    {
        using type = Windows::Media::Editing::IMediaComposition;
    };
    template <> struct default_interface<Windows::Media::Editing::MediaOverlay>
    {
        using type = Windows::Media::Editing::IMediaOverlay;
    };
    template <> struct default_interface<Windows::Media::Editing::MediaOverlayLayer>
    {
        using type = Windows::Media::Editing::IMediaOverlayLayer;
    };
    template <> struct abi<Windows::Media::Editing::IBackgroundAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrimTimeFromStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimTimeFromEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromEnd(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_OriginalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrimmedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEffectDefinitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromEmbeddedAudioTrack(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAudioEncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaClip>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrimTimeFromStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimTimeFromEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimTimeFromEnd(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_OriginalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrimmedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTimeInComposition(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndTimeInComposition(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EmbeddedAudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedEmbeddedAudioTrackIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedEmbeddedAudioTrackIndex(uint32_t) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall GetVideoEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEffectDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoEffectDefinitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaClipStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromColor(struct struct_Windows_UI_Color, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromImageFileAsync(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaClipStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromSurface(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaComposition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Clips(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundAudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserData(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailAsync(int64_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailsAsync(void*, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileWithTrimmingPreferenceAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToFileWithProfileAsync(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDefaultEncodingProfile(void**) noexcept = 0;
            virtual int32_t __stdcall GenerateMediaStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall GenerateMediaStreamSourceWithProfile(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GeneratePreviewMediaStreamSource(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaComposition2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayLayers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaCompositionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaOverlay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_Position(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Delay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Clip(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AudioEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaOverlayFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPositionAndOpacity(void*, Windows::Foundation::Rect, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaOverlayLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Overlays(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomCompositorDefinition(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithCompositorDefinition(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IBackgroundAudioTrack
    {
        [[nodiscard]] auto TrimTimeFromStart() const;
        auto TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto TrimTimeFromEnd() const;
        auto TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto OriginalDuration() const;
        [[nodiscard]] auto TrimmedDuration() const;
        [[nodiscard]] auto UserData() const;
        auto Delay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Delay() const;
        auto Volume(double value) const;
        [[nodiscard]] auto Volume() const;
        auto Clone() const;
        auto GetAudioEncodingProperties() const;
        [[nodiscard]] auto AudioEffectDefinitions() const;
    };
    template <> struct consume<Windows::Media::Editing::IBackgroundAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IBackgroundAudioTrackStatics
    {
        auto CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack) const;
        auto CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const;
    };
    template <> struct consume<Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IEmbeddedAudioTrack
    {
        auto GetAudioEncodingProperties() const;
    };
    template <> struct consume<Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IEmbeddedAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClip
    {
        [[nodiscard]] auto TrimTimeFromStart() const;
        auto TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto TrimTimeFromEnd() const;
        auto TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto OriginalDuration() const;
        [[nodiscard]] auto TrimmedDuration() const;
        [[nodiscard]] auto UserData() const;
        auto Clone() const;
        [[nodiscard]] auto StartTimeInComposition() const;
        [[nodiscard]] auto EndTimeInComposition() const;
        [[nodiscard]] auto EmbeddedAudioTracks() const;
        [[nodiscard]] auto SelectedEmbeddedAudioTrackIndex() const;
        auto SelectedEmbeddedAudioTrackIndex(uint32_t value) const;
        auto Volume(double value) const;
        [[nodiscard]] auto Volume() const;
        auto GetVideoEncodingProperties() const;
        [[nodiscard]] auto AudioEffectDefinitions() const;
        [[nodiscard]] auto VideoEffectDefinitions() const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaClip>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClip<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClipStatics
    {
        auto CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration) const;
        auto CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const;
        auto CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaClipStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaClipStatics2
    {
        auto CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaClipStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaComposition
    {
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Clips() const;
        [[nodiscard]] auto BackgroundAudioTracks() const;
        [[nodiscard]] auto UserData() const;
        auto Clone() const;
        auto SaveAsync(Windows::Storage::IStorageFile const& file) const;
        auto GetThumbnailAsync(Windows::Foundation::TimeSpan const& timeFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
        auto GetThumbnailsAsync(param::async_iterable<Windows::Foundation::TimeSpan> const& timesFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
        auto RenderToFileAsync(Windows::Storage::IStorageFile const& destination) const;
        auto RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference) const;
        auto RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference, Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
        auto CreateDefaultEncodingProfile() const;
        auto GenerateMediaStreamSource() const;
        auto GenerateMediaStreamSource(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
        auto GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaComposition>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaComposition2
    {
        [[nodiscard]] auto OverlayLayers() const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaComposition2>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaCompositionStatics
    {
        auto LoadAsync(Windows::Storage::StorageFile const& file) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaCompositionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaCompositionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlay
    {
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Foundation::Rect const& value) const;
        auto Delay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Delay() const;
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
        auto Clone() const;
        [[nodiscard]] auto Clip() const;
        [[nodiscard]] auto AudioEnabled() const;
        auto AudioEnabled(bool value) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaOverlay>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlay<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayFactory
    {
        auto Create(Windows::Media::Editing::MediaClip const& clip) const;
        auto CreateWithPositionAndOpacity(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaOverlayFactory>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayLayer
    {
        auto Clone() const;
        [[nodiscard]] auto Overlays() const;
        [[nodiscard]] auto CustomCompositorDefinition() const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaOverlayLayer>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Editing_IMediaOverlayLayerFactory
    {
        auto CreateWithCompositorDefinition(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) const;
    };
    template <> struct consume<Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayerFactory<D>;
    };
}
#endif