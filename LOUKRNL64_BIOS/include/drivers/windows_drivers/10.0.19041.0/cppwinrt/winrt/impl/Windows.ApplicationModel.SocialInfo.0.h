// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_0_H
#define WINRT_Windows_ApplicationModel_SocialInfo_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapSize;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
}
namespace winrt::Windows::ApplicationModel::SocialInfo
{
    enum class SocialFeedItemStyle : int32_t
    {
        Default = 0,
        Photo = 1,
    };
    enum class SocialFeedKind : int32_t
    {
        HomeFeed = 0,
        ContactFeed = 1,
        Dashboard = 2,
    };
    enum class SocialFeedUpdateMode : int32_t
    {
        Append = 0,
        Replace = 1,
    };
    enum class SocialItemBadgeStyle : int32_t
    {
        Hidden = 0,
        Visible = 1,
        VisibleWithCount = 2,
    };
    struct ISocialFeedChildItem;
    struct ISocialFeedContent;
    struct ISocialFeedItem;
    struct ISocialFeedSharedItem;
    struct ISocialItemThumbnail;
    struct ISocialUserInfo;
    struct SocialFeedChildItem;
    struct SocialFeedContent;
    struct SocialFeedItem;
    struct SocialFeedSharedItem;
    struct SocialItemThumbnail;
    struct SocialUserInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialUserInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedContent" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.ISocialUserInfo" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedContent>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedContent" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialUserInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialUserInfo" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedItemStyle" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedKind" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialFeedUpdateMode" };
    };
    template <> struct name<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.SocialInfo.SocialItemBadgeStyle" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        static constexpr guid value{ 0x0B6A985A,0xD59D,0x40BE,{ 0x98,0x0C,0x48,0x8A,0x2A,0xB3,0x0A,0x83 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        static constexpr guid value{ 0xA234E429,0x3E39,0x494D,{ 0xA3,0x7C,0xF4,0x62,0xA2,0x49,0x45,0x14 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        static constexpr guid value{ 0x4F1392AB,0x1F72,0x4D33,{ 0xB6,0x95,0xDE,0x3E,0x1D,0xB6,0x03,0x17 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        static constexpr guid value{ 0x7BFB9E40,0xA6AA,0x45A7,{ 0x9F,0xF6,0x54,0xC4,0x21,0x05,0xDD,0x1F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        static constexpr guid value{ 0x5CBF831A,0x3F08,0x497F,{ 0x91,0x7F,0x57,0xE0,0x9D,0x84,0xB1,0x41 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        static constexpr guid value{ 0x9E5E1BD1,0x90D0,0x4E1D,{ 0x95,0x54,0x84,0x4D,0x46,0x60,0x7F,0x61 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedContent>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialFeedContent;
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedItem>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialFeedItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail;
    };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::SocialUserInfo>
    {
        using type = Windows::ApplicationModel::SocialInfo::ISocialUserInfo;
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryContent(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecondaryContent(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Timestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnails(void**) noexcept = 0;
            virtual int32_t __stdcall get_SharedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SharedItem(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall put_Message(void*) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryContent(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecondaryContent(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Timestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnails(void**) noexcept = 0;
            virtual int32_t __stdcall get_SharedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SharedItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_BadgeStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BadgeStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BadgeCountValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BadgeCountValue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChildItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChildItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_Style(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Style(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OriginalSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_OriginalSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Timestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ImageUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ImageUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall put_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize) noexcept = 0;
            virtual int32_t __stdcall SetImageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserName(void*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto PrimaryContent() const;
        [[nodiscard]] auto SecondaryContent() const;
        [[nodiscard]] auto Timestamp() const;
        auto Timestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Thumbnails() const;
        [[nodiscard]] auto SharedItem() const;
        auto SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Message() const;
        auto Message(param::hstring const& value) const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto PrimaryContent() const;
        [[nodiscard]] auto SecondaryContent() const;
        [[nodiscard]] auto Timestamp() const;
        auto Timestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Thumbnails() const;
        [[nodiscard]] auto SharedItem() const;
        auto SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const;
        [[nodiscard]] auto BadgeStyle() const;
        auto BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const& value) const;
        [[nodiscard]] auto BadgeCountValue() const;
        auto BadgeCountValue(int32_t value) const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto ChildItem() const;
        auto ChildItem(Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const& value) const;
        [[nodiscard]] auto Style() const;
        auto Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem
    {
        [[nodiscard]] auto OriginalSource() const;
        auto OriginalSource(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto Timestamp() const;
        auto Timestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
        auto Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const;
        [[nodiscard]] auto Thumbnail() const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail
    {
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ImageUri() const;
        auto ImageUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto BitmapSize() const;
        auto BitmapSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
        auto SetImageAsync(Windows::Storage::Streams::IInputStream const& image) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo
    {
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto UserName() const;
        auto UserName(param::hstring const& value) const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>;
    };
}
#endif
