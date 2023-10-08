// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Syndication_0_H
#define WINRT_Windows_Web_Syndication_0_H
namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
namespace winrt::Windows::Foundation
{
    struct Uri;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::Web::Syndication
{
    enum class SyndicationErrorStatus : int32_t
    {
        Unknown = 0,
        MissingRequiredElement = 1,
        MissingRequiredAttribute = 2,
        InvalidXml = 3,
        UnexpectedContent = 4,
        UnsupportedFormat = 5,
    };
    enum class SyndicationFormat : int32_t
    {
        Atom10 = 0,
        Rss20 = 1,
        Rss10 = 2,
        Rss092 = 3,
        Rss091 = 4,
        Atom03 = 5,
    };
    enum class SyndicationTextType : int32_t
    {
        Text = 0,
        Html = 1,
        Xhtml = 2,
    };
    struct ISyndicationAttribute;
    struct ISyndicationAttributeFactory;
    struct ISyndicationCategory;
    struct ISyndicationCategoryFactory;
    struct ISyndicationClient;
    struct ISyndicationClientFactory;
    struct ISyndicationContent;
    struct ISyndicationContentFactory;
    struct ISyndicationErrorStatics;
    struct ISyndicationFeed;
    struct ISyndicationFeedFactory;
    struct ISyndicationGenerator;
    struct ISyndicationGeneratorFactory;
    struct ISyndicationItem;
    struct ISyndicationItemFactory;
    struct ISyndicationLink;
    struct ISyndicationLinkFactory;
    struct ISyndicationNode;
    struct ISyndicationNodeFactory;
    struct ISyndicationPerson;
    struct ISyndicationPersonFactory;
    struct ISyndicationText;
    struct ISyndicationTextFactory;
    struct SyndicationAttribute;
    struct SyndicationCategory;
    struct SyndicationClient;
    struct SyndicationContent;
    struct SyndicationError;
    struct SyndicationFeed;
    struct SyndicationGenerator;
    struct SyndicationItem;
    struct SyndicationLink;
    struct SyndicationNode;
    struct SyndicationPerson;
    struct SyndicationText;
    struct RetrievalProgress;
    struct TransferProgress;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Syndication::ISyndicationAttribute>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationAttributeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationCategory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationCategoryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationClient>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationClientFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationContentFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationErrorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationFeed>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationFeedFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationGenerator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationGeneratorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationLink>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationLinkFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationNode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationNodeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationPerson>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationPersonFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationText>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::ISyndicationTextFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationAttribute>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationCategory>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationClient>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationError>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationFeed>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationGenerator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationLink>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationNode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationPerson>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationText>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationErrorStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::Syndication::SyndicationTextType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::Syndication::RetrievalProgress>
    {
        using type = struct_category<uint32_t, uint32_t>;
    };
    template <> struct category<Windows::Web::Syndication::TransferProgress>
    {
        using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t>;
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationAttribute>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationAttribute" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationAttributeFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationAttributeFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationCategory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationCategory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationCategoryFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationCategoryFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationClient>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationClient" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationClientFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationClientFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationContent>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationContent" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationContentFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationContentFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationErrorStatics>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationErrorStatics" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationFeed>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationFeed" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationFeedFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationFeedFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationGenerator>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationGenerator" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationGeneratorFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationGeneratorFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationItem>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationItem" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationItemFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationItemFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationLink>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationLink" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationLinkFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationLinkFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationNode>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationNode" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationNodeFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationNodeFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationPerson>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationPerson" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationPersonFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationPersonFactory" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationText>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationText" };
    };
    template <> struct name<Windows::Web::Syndication::ISyndicationTextFactory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationTextFactory" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationAttribute>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationAttribute" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationCategory>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationCategory" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationClient>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationClient" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationContent>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationContent" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationError>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationError" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationFeed>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationFeed" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationGenerator>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationGenerator" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationItem>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationItem" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationLink>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationLink" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationNode>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationNode" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationPerson>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationPerson" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationText>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationText" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationErrorStatus>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationErrorStatus" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationFormat>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationFormat" };
    };
    template <> struct name<Windows::Web::Syndication::SyndicationTextType>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationTextType" };
    };
    template <> struct name<Windows::Web::Syndication::RetrievalProgress>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.RetrievalProgress" };
    };
    template <> struct name<Windows::Web::Syndication::TransferProgress>
    {
        static constexpr auto & value{ L"Windows.Web.Syndication.TransferProgress" };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationAttribute>
    {
        static constexpr guid value{ 0x71E8F969,0x526E,0x4001,{ 0x9A,0x91,0xE8,0x4F,0x83,0x16,0x1A,0xB1 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationAttributeFactory>
    {
        static constexpr guid value{ 0x624F1599,0xED3E,0x420F,{ 0xBE,0x86,0x64,0x04,0x14,0x88,0x6E,0x4B } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationCategory>
    {
        static constexpr guid value{ 0x8715626F,0x0CBA,0x4A7F,{ 0x89,0xFF,0xEC,0xB5,0x28,0x14,0x23,0xB6 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationCategoryFactory>
    {
        static constexpr guid value{ 0xAB42802F,0x49E0,0x4525,{ 0x8A,0xB2,0xAB,0x45,0xC0,0x25,0x28,0xFF } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationClient>
    {
        static constexpr guid value{ 0x9E18A9B7,0x7249,0x4B45,{ 0xB2,0x29,0x7D,0xF8,0x95,0xA5,0xA1,0xF5 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationClientFactory>
    {
        static constexpr guid value{ 0x2EC4B32C,0xA79B,0x4114,{ 0xB2,0x9A,0x05,0xDF,0xFB,0xAF,0xB9,0xA4 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationContent>
    {
        static constexpr guid value{ 0x4641FEFE,0x0E55,0x40D0,{ 0xB8,0xD0,0x6A,0x2C,0xCB,0xA9,0xFC,0x7C } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationContentFactory>
    {
        static constexpr guid value{ 0x3D2FBB93,0x9520,0x4173,{ 0x93,0x88,0x7E,0x2D,0xF3,0x24,0xA8,0xA0 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationErrorStatics>
    {
        static constexpr guid value{ 0x1FBB2361,0x45C7,0x4833,{ 0x8A,0xA0,0xBE,0x5F,0x3B,0x58,0xA7,0xF4 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationFeed>
    {
        static constexpr guid value{ 0x7FFE3CD2,0x5B66,0x4D62,{ 0x84,0x03,0x1B,0xC1,0x0D,0x91,0x0D,0x6B } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationFeedFactory>
    {
        static constexpr guid value{ 0x23472232,0x8BE9,0x48B7,{ 0x89,0x34,0x62,0x05,0x13,0x1D,0x93,0x57 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationGenerator>
    {
        static constexpr guid value{ 0x9768B379,0xFB2B,0x4F6D,{ 0xB4,0x1C,0x08,0x8A,0x58,0x68,0x82,0x5C } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationGeneratorFactory>
    {
        static constexpr guid value{ 0xA34083E3,0x1E26,0x4DBC,{ 0xBA,0x9D,0x1A,0xB8,0x4B,0xEF,0xF9,0x7B } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationItem>
    {
        static constexpr guid value{ 0x548DB883,0xC384,0x45C1,{ 0x8A,0xE8,0xA3,0x78,0xC4,0xEC,0x48,0x6C } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationItemFactory>
    {
        static constexpr guid value{ 0x251D434F,0x7DB8,0x487A,{ 0x85,0xE4,0x10,0xD1,0x91,0xE6,0x6E,0xBB } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationLink>
    {
        static constexpr guid value{ 0x27553ABD,0xA10E,0x41B5,{ 0x86,0xBD,0x97,0x59,0x08,0x6E,0xB0,0xC5 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationLinkFactory>
    {
        static constexpr guid value{ 0x5ED863D4,0x5535,0x48AC,{ 0x98,0xD4,0xC1,0x90,0x99,0x50,0x80,0xB3 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationNode>
    {
        static constexpr guid value{ 0x753CEF78,0x51F8,0x45C0,{ 0xA9,0xF5,0xF1,0x71,0x9D,0xEC,0x3F,0xB2 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationNodeFactory>
    {
        static constexpr guid value{ 0x12902188,0x4ACB,0x49A8,{ 0xB7,0x77,0xA5,0xEB,0x92,0xE1,0x8A,0x79 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationPerson>
    {
        static constexpr guid value{ 0xFA1EE5DA,0xA7C6,0x4517,{ 0xA0,0x96,0x01,0x43,0xFA,0xF2,0x93,0x27 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationPersonFactory>
    {
        static constexpr guid value{ 0xDCF4886D,0x229D,0x4B58,{ 0xA4,0x9B,0xF3,0xD2,0xF0,0xF5,0xC9,0x9F } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationText>
    {
        static constexpr guid value{ 0xB9CC5E80,0x313A,0x4091,{ 0xA2,0xA6,0x24,0x3E,0x0E,0xE9,0x23,0xF9 } };
    };
    template <> struct guid_storage<Windows::Web::Syndication::ISyndicationTextFactory>
    {
        static constexpr guid value{ 0xEE7342F7,0x11C6,0x4B25,{ 0xAB,0x62,0xE5,0x96,0xBD,0x16,0x29,0x46 } };
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationAttribute>
    {
        using type = Windows::Web::Syndication::ISyndicationAttribute;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationCategory>
    {
        using type = Windows::Web::Syndication::ISyndicationCategory;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationClient>
    {
        using type = Windows::Web::Syndication::ISyndicationClient;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationContent>
    {
        using type = Windows::Web::Syndication::ISyndicationContent;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationFeed>
    {
        using type = Windows::Web::Syndication::ISyndicationFeed;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationGenerator>
    {
        using type = Windows::Web::Syndication::ISyndicationGenerator;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationItem>
    {
        using type = Windows::Web::Syndication::ISyndicationItem;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationLink>
    {
        using type = Windows::Web::Syndication::ISyndicationLink;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationNode>
    {
        using type = Windows::Web::Syndication::ISyndicationNode;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationPerson>
    {
        using type = Windows::Web::Syndication::ISyndicationPerson;
    };
    template <> struct default_interface<Windows::Web::Syndication::SyndicationText>
    {
        using type = Windows::Web::Syndication::ISyndicationText;
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationAttribute>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Namespace(void**) noexcept = 0;
            virtual int32_t __stdcall put_Namespace(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationAttributeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationAttribute(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationCategory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Scheme(void**) noexcept = 0;
            virtual int32_t __stdcall put_Scheme(void*) noexcept = 0;
            virtual int32_t __stdcall get_Term(void**) noexcept = 0;
            virtual int32_t __stdcall put_Term(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationCategoryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationCategory(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSyndicationCategoryEx(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationClient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxResponseBufferSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxResponseBufferSize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Timeout(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Timeout(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BypassCacheOnRetrieve(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BypassCacheOnRetrieve(bool) noexcept = 0;
            virtual int32_t __stdcall SetRequestHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RetrieveFeedAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationClientFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationClient(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationContent(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSyndicationContentWithSourceUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationErrorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationFeed>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Authors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Categories(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contributors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Generator(void**) noexcept = 0;
            virtual int32_t __stdcall put_Generator(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdatedTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastUpdatedTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Links(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ImageUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Rights(void**) noexcept = 0;
            virtual int32_t __stdcall put_Rights(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_FirstUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_NextUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreviousUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Load(void*) noexcept = 0;
            virtual int32_t __stdcall LoadFromXml(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationFeedFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationFeed(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationGenerator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationGeneratorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationGenerator(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Authors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Categories(void**) noexcept = 0;
            virtual int32_t __stdcall get_Contributors(void**) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdatedTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastUpdatedTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Links(void**) noexcept = 0;
            virtual int32_t __stdcall get_PublishedDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_PublishedDate(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Rights(void**) noexcept = 0;
            virtual int32_t __stdcall put_Rights(void*) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_Summary(void**) noexcept = 0;
            virtual int32_t __stdcall put_Summary(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_CommentsUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommentsUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_EditUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_EditMediaUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_ETag(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemUri(void**) noexcept = 0;
            virtual int32_t __stdcall Load(void*) noexcept = 0;
            virtual int32_t __stdcall LoadFromXml(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationItem(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationLink>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(void**) noexcept = 0;
            virtual int32_t __stdcall put_MediaType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Relationship(void**) noexcept = 0;
            virtual int32_t __stdcall put_Relationship(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ResourceLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_ResourceLanguage(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationLinkFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationLink(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSyndicationLinkEx(void*, void*, void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NodeName(void**) noexcept = 0;
            virtual int32_t __stdcall put_NodeName(void*) noexcept = 0;
            virtual int32_t __stdcall get_NodeNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall put_NodeNamespace(void*) noexcept = 0;
            virtual int32_t __stdcall get_NodeValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_NodeValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeExtensions(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementExtensions(void**) noexcept = 0;
            virtual int32_t __stdcall GetXmlDocument(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationNodeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationNode(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationPerson>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Email(void**) noexcept = 0;
            virtual int32_t __stdcall put_Email(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationPersonFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationPerson(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSyndicationPersonEx(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationText>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall put_Type(void*) noexcept = 0;
            virtual int32_t __stdcall get_Xml(void**) noexcept = 0;
            virtual int32_t __stdcall put_Xml(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Syndication::ISyndicationTextFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSyndicationText(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSyndicationTextEx(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationAttribute
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Namespace() const;
        auto Namespace(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationAttribute>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationAttribute<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationAttributeFactory
    {
        auto CreateSyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationAttributeFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationAttributeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationCategory
    {
        [[nodiscard]] auto Label() const;
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto Scheme() const;
        auto Scheme(param::hstring const& value) const;
        [[nodiscard]] auto Term() const;
        auto Term(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationCategory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationCategory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationCategoryFactory
    {
        auto CreateSyndicationCategory(param::hstring const& term) const;
        auto CreateSyndicationCategoryEx(param::hstring const& term, param::hstring const& scheme, param::hstring const& label) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationCategoryFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationCategoryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationClient
    {
        [[nodiscard]] auto ServerCredential() const;
        auto ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto ProxyCredential() const;
        auto ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto MaxResponseBufferSize() const;
        auto MaxResponseBufferSize(uint32_t value) const;
        [[nodiscard]] auto Timeout() const;
        auto Timeout(uint32_t value) const;
        [[nodiscard]] auto BypassCacheOnRetrieve() const;
        auto BypassCacheOnRetrieve(bool value) const;
        auto SetRequestHeader(param::hstring const& name, param::hstring const& value) const;
        auto RetrieveFeedAsync(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationClient>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationClient<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationClientFactory
    {
        auto CreateSyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationClientFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationClientFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationContent
    {
        [[nodiscard]] auto SourceUri() const;
        auto SourceUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationContent>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationContent<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationContentFactory
    {
        auto CreateSyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const;
        auto CreateSyndicationContentWithSourceUri(Windows::Foundation::Uri const& sourceUri) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationErrorStatics
    {
        auto GetStatus(int32_t hresult) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationErrorStatics>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationErrorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationFeed
    {
        [[nodiscard]] auto Authors() const;
        [[nodiscard]] auto Categories() const;
        [[nodiscard]] auto Contributors() const;
        [[nodiscard]] auto Generator() const;
        auto Generator(Windows::Web::Syndication::SyndicationGenerator const& value) const;
        [[nodiscard]] auto IconUri() const;
        auto IconUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Items() const;
        [[nodiscard]] auto LastUpdatedTime() const;
        auto LastUpdatedTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Links() const;
        [[nodiscard]] auto ImageUri() const;
        auto ImageUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Rights() const;
        auto Rights(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto FirstUri() const;
        [[nodiscard]] auto LastUri() const;
        [[nodiscard]] auto NextUri() const;
        [[nodiscard]] auto PreviousUri() const;
        [[nodiscard]] auto SourceFormat() const;
        auto Load(param::hstring const& feed) const;
        auto LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& feedDocument) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationFeed>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationFeed<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationFeedFactory
    {
        auto CreateSyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationFeedFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationFeedFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationGenerator
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Version() const;
        auto Version(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationGenerator>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationGenerator<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationGeneratorFactory
    {
        auto CreateSyndicationGenerator(param::hstring const& text) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationGeneratorFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationGeneratorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationItem
    {
        [[nodiscard]] auto Authors() const;
        [[nodiscard]] auto Categories() const;
        [[nodiscard]] auto Contributors() const;
        [[nodiscard]] auto Content() const;
        auto Content(Windows::Web::Syndication::SyndicationContent const& value) const;
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto LastUpdatedTime() const;
        auto LastUpdatedTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Links() const;
        [[nodiscard]] auto PublishedDate() const;
        auto PublishedDate(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Rights() const;
        auto Rights(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto Source() const;
        auto Source(Windows::Web::Syndication::SyndicationFeed const& value) const;
        [[nodiscard]] auto Summary() const;
        auto Summary(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(Windows::Web::Syndication::ISyndicationText const& value) const;
        [[nodiscard]] auto CommentsUri() const;
        auto CommentsUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto EditUri() const;
        [[nodiscard]] auto EditMediaUri() const;
        [[nodiscard]] auto ETag() const;
        [[nodiscard]] auto ItemUri() const;
        auto Load(param::hstring const& item) const;
        auto LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& itemDocument) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationItem>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationItem<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationItemFactory
    {
        auto CreateSyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationItemFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationLink
    {
        [[nodiscard]] auto Length() const;
        auto Length(uint32_t value) const;
        [[nodiscard]] auto MediaType() const;
        auto MediaType(param::hstring const& value) const;
        [[nodiscard]] auto Relationship() const;
        auto Relationship(param::hstring const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ResourceLanguage() const;
        auto ResourceLanguage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationLink>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationLink<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationLinkFactory
    {
        auto CreateSyndicationLink(Windows::Foundation::Uri const& uri) const;
        auto CreateSyndicationLinkEx(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationLinkFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationLinkFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationNode
    {
        [[nodiscard]] auto NodeName() const;
        auto NodeName(param::hstring const& value) const;
        [[nodiscard]] auto NodeNamespace() const;
        auto NodeNamespace(param::hstring const& value) const;
        [[nodiscard]] auto NodeValue() const;
        auto NodeValue(param::hstring const& value) const;
        [[nodiscard]] auto Language() const;
        auto Language(param::hstring const& value) const;
        [[nodiscard]] auto BaseUri() const;
        auto BaseUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto AttributeExtensions() const;
        [[nodiscard]] auto ElementExtensions() const;
        auto GetXmlDocument(Windows::Web::Syndication::SyndicationFormat const& format) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationNode>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationNode<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationNodeFactory
    {
        auto CreateSyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationNodeFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationNodeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationPerson
    {
        [[nodiscard]] auto Email() const;
        auto Email(param::hstring const& value) const;
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationPerson>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationPerson<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationPersonFactory
    {
        auto CreateSyndicationPerson(param::hstring const& name) const;
        auto CreateSyndicationPersonEx(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationPersonFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationPersonFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationText
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto Type() const;
        auto Type(param::hstring const& value) const;
        [[nodiscard]] auto Xml() const;
        auto Xml(Windows::Data::Xml::Dom::XmlDocument const& value) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationText>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationText<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Syndication_ISyndicationTextFactory
    {
        auto CreateSyndicationText(param::hstring const& text) const;
        auto CreateSyndicationTextEx(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const;
    };
    template <> struct consume<Windows::Web::Syndication::ISyndicationTextFactory>
    {
        template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationTextFactory<D>;
    };
    struct struct_Windows_Web_Syndication_RetrievalProgress
    {
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    template <> struct abi<Windows::Web::Syndication::RetrievalProgress>
    {
        using type = struct_Windows_Web_Syndication_RetrievalProgress;
    };
    struct struct_Windows_Web_Syndication_TransferProgress
    {
        uint32_t BytesSent;
        uint32_t TotalBytesToSend;
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    template <> struct abi<Windows::Web::Syndication::TransferProgress>
    {
        using type = struct_Windows_Web_Syndication_TransferProgress;
    };
}
#endif
