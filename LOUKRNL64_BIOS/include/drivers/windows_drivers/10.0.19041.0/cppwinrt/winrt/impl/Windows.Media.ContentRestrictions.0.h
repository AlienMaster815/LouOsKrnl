// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ContentRestrictions_0_H
#define WINRT_Windows_Media_ContentRestrictions_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVector;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Media::ContentRestrictions
{
    enum class ContentAccessRestrictionLevel : int32_t
    {
        Allow = 0,
        Warn = 1,
        Block = 2,
        Hide = 3,
    };
    enum class RatedContentCategory : int32_t
    {
        General = 0,
        Application = 1,
        Game = 2,
        Movie = 3,
        Television = 4,
        Music = 5,
    };
    struct IContentRestrictionsBrowsePolicy;
    struct IRatedContentDescription;
    struct IRatedContentDescriptionFactory;
    struct IRatedContentRestrictions;
    struct IRatedContentRestrictionsFactory;
    struct ContentRestrictionsBrowsePolicy;
    struct RatedContentDescription;
    struct RatedContentRestrictions;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::RatedContentDescription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::RatedContentRestrictions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::ContentRestrictions::RatedContentCategory>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentDescription" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentRestrictions" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::RatedContentDescription>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentDescription" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::RatedContentRestrictions>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentRestrictions" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel" };
    };
    template <> struct name<Windows::Media::ContentRestrictions::RatedContentCategory>
    {
        static constexpr auto & value{ L"Windows.Media.ContentRestrictions.RatedContentCategory" };
    };
    template <> struct guid_storage<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        static constexpr guid value{ 0x8C0133A4,0x442E,0x461A,{ 0x87,0x57,0xFA,0xD2,0xF5,0xBD,0x37,0xE4 } };
    };
    template <> struct guid_storage<Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        static constexpr guid value{ 0x694866DF,0x66B2,0x4DC3,{ 0x96,0xB1,0xF0,0x90,0xEE,0xDE,0xE2,0x55 } };
    };
    template <> struct guid_storage<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        static constexpr guid value{ 0x2E38DF62,0x9B90,0x4FA6,{ 0x89,0xC1,0x4B,0x8D,0x2F,0xFB,0x35,0x73 } };
    };
    template <> struct guid_storage<Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        static constexpr guid value{ 0x3F7F23CB,0xBA07,0x4401,{ 0xA4,0x9D,0x8B,0x92,0x22,0x20,0x57,0x23 } };
    };
    template <> struct guid_storage<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        static constexpr guid value{ 0xFB4B2996,0xC3BD,0x4910,{ 0x96,0x19,0x97,0xCF,0xD0,0x69,0x4D,0x56 } };
    };
    template <> struct default_interface<Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>
    {
        using type = Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy;
    };
    template <> struct default_interface<Windows::Media::ContentRestrictions::RatedContentDescription>
    {
        using type = Windows::Media::ContentRestrictions::IRatedContentDescription;
    };
    template <> struct default_interface<Windows::Media::ContentRestrictions::RatedContentRestrictions>
    {
        using type = Windows::Media::ContentRestrictions::IRatedContentRestrictions;
    };
    template <> struct abi<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GeographicRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxBrowsableAgeRating(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreferredAgeRating(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Category(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Ratings(void**) noexcept = 0;
            virtual int32_t __stdcall put_Ratings(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetBrowsePolicyAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRestrictionLevelAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestContentAccessAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_RestrictionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RestrictionsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithMaxAgeRating(uint32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy
    {
        [[nodiscard]] auto GeographicRegion() const;
        [[nodiscard]] auto MaxBrowsableAgeRating() const;
        [[nodiscard]] auto PreferredAgeRating() const;
    };
    template <> struct consume<Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        template <typename D> using type = consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ContentRestrictions_IRatedContentDescription
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Category() const;
        auto Category(Windows::Media::ContentRestrictions::RatedContentCategory const& value) const;
        [[nodiscard]] auto Ratings() const;
        auto Ratings(param::vector<hstring> const& value) const;
    };
    template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory
    {
        auto Create(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category) const;
    };
    template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions
    {
        auto GetBrowsePolicyAsync() const;
        auto GetRestrictionLevelAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const;
        auto RequestContentAccessAsync(Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const;
        auto RestrictionsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RestrictionsChanged_revoker = impl::event_revoker<Windows::Media::ContentRestrictions::IRatedContentRestrictions, &impl::abi_t<Windows::Media::ContentRestrictions::IRatedContentRestrictions>::remove_RestrictionsChanged>;
        RestrictionsChanged_revoker RestrictionsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto RestrictionsChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory
    {
        auto CreateWithMaxAgeRating(uint32_t maxAgeRating) const;
    };
    template <> struct consume<Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        template <typename D> using type = consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory<D>;
    };
}
#endif
