// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Transcoding_0_H
#define WINRT_Windows_Media_Transcoding_0_H
namespace winrt::Windows::Foundation
{
}
namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
}
namespace winrt::Windows::Media::Core
{
    struct IMediaSource;
}
namespace winrt::Windows::Media::MediaProperties
{
    struct MediaEncodingProfile;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::Media::Transcoding
{
    enum class MediaVideoProcessingAlgorithm : int32_t
    {
        Default = 0,
        MrfCrf444 = 1,
    };
    enum class TranscodeFailureReason : int32_t
    {
        None = 0,
        Unknown = 1,
        InvalidProfile = 2,
        CodecNotFound = 3,
    };
    struct IMediaTranscoder;
    struct IMediaTranscoder2;
    struct IPrepareTranscodeResult;
    struct MediaTranscoder;
    struct PrepareTranscodeResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Transcoding::IMediaTranscoder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Transcoding::IMediaTranscoder2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Transcoding::MediaTranscoder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Transcoding::PrepareTranscodeResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::Transcoding::TranscodeFailureReason>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Transcoding::IMediaTranscoder>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.IMediaTranscoder" };
    };
    template <> struct name<Windows::Media::Transcoding::IMediaTranscoder2>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.IMediaTranscoder2" };
    };
    template <> struct name<Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.IPrepareTranscodeResult" };
    };
    template <> struct name<Windows::Media::Transcoding::MediaTranscoder>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.MediaTranscoder" };
    };
    template <> struct name<Windows::Media::Transcoding::PrepareTranscodeResult>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.PrepareTranscodeResult" };
    };
    template <> struct name<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.MediaVideoProcessingAlgorithm" };
    };
    template <> struct name<Windows::Media::Transcoding::TranscodeFailureReason>
    {
        static constexpr auto & value{ L"Windows.Media.Transcoding.TranscodeFailureReason" };
    };
    template <> struct guid_storage<Windows::Media::Transcoding::IMediaTranscoder>
    {
        static constexpr guid value{ 0x190C99D2,0xA0AA,0x4D34,{ 0x86,0xBC,0xEE,0xD1,0xB1,0x2C,0x2F,0x5B } };
    };
    template <> struct guid_storage<Windows::Media::Transcoding::IMediaTranscoder2>
    {
        static constexpr guid value{ 0x40531D74,0x35E0,0x4F04,{ 0x85,0x74,0xCA,0x8B,0xC4,0xE5,0xA0,0x82 } };
    };
    template <> struct guid_storage<Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        static constexpr guid value{ 0x05F25DCE,0x994F,0x4A34,{ 0x9D,0x68,0x97,0xCC,0xCE,0x17,0x30,0xD6 } };
    };
    template <> struct default_interface<Windows::Media::Transcoding::MediaTranscoder>
    {
        using type = Windows::Media::Transcoding::IMediaTranscoder;
    };
    template <> struct default_interface<Windows::Media::Transcoding::PrepareTranscodeResult>
    {
        using type = Windows::Media::Transcoding::IPrepareTranscodeResult;
    };
    template <> struct abi<Windows::Media::Transcoding::IMediaTranscoder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_TrimStartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrimStopTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TrimStopTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysReencode(bool) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysReencode(bool*) noexcept = 0;
            virtual int32_t __stdcall put_HardwareAccelerationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_HardwareAccelerationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall AddAudioEffect(void*) noexcept = 0;
            virtual int32_t __stdcall AddAudioEffectWithSettings(void*, bool, void*) noexcept = 0;
            virtual int32_t __stdcall AddVideoEffect(void*) noexcept = 0;
            virtual int32_t __stdcall AddVideoEffectWithSettings(void*, bool, void*) noexcept = 0;
            virtual int32_t __stdcall ClearEffects() noexcept = 0;
            virtual int32_t __stdcall PrepareFileTranscodeAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareStreamTranscodeAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Transcoding::IMediaTranscoder2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PrepareMediaStreamSourceTranscodeAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoProcessingAlgorithm(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoProcessingAlgorithm(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanTranscode(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FailureReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TranscodeAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Transcoding_IMediaTranscoder
    {
        auto TrimStartTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto TrimStartTime() const;
        auto TrimStopTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto TrimStopTime() const;
        auto AlwaysReencode(bool value) const;
        [[nodiscard]] auto AlwaysReencode() const;
        auto HardwareAccelerationEnabled(bool value) const;
        [[nodiscard]] auto HardwareAccelerationEnabled() const;
        auto AddAudioEffect(param::hstring const& activatableClassId) const;
        auto AddAudioEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto AddVideoEffect(param::hstring const& activatableClassId) const;
        auto AddVideoEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto ClearEffects() const;
        auto PrepareFileTranscodeAsync(Windows::Storage::IStorageFile const& source, Windows::Storage::IStorageFile const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const;
        auto PrepareStreamTranscodeAsync(Windows::Storage::Streams::IRandomAccessStream const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const;
    };
    template <> struct consume<Windows::Media::Transcoding::IMediaTranscoder>
    {
        template <typename D> using type = consume_Windows_Media_Transcoding_IMediaTranscoder<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Transcoding_IMediaTranscoder2
    {
        auto PrepareMediaStreamSourceTranscodeAsync(Windows::Media::Core::IMediaSource const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const;
        auto VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const;
        [[nodiscard]] auto VideoProcessingAlgorithm() const;
    };
    template <> struct consume<Windows::Media::Transcoding::IMediaTranscoder2>
    {
        template <typename D> using type = consume_Windows_Media_Transcoding_IMediaTranscoder2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Transcoding_IPrepareTranscodeResult
    {
        [[nodiscard]] auto CanTranscode() const;
        [[nodiscard]] auto FailureReason() const;
        auto TranscodeAsync() const;
    };
    template <> struct consume<Windows::Media::Transcoding::IPrepareTranscodeResult>
    {
        template <typename D> using type = consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>;
    };
}
#endif
