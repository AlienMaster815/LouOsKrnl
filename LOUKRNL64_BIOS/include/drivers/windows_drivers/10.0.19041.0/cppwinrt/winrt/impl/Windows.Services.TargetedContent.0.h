// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_TargetedContent_0_H
#define WINRT_Windows_Services_TargetedContent_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::Services::TargetedContent
{
    enum class TargetedContentAppInstallationState : int32_t
    {
        NotApplicable = 0,
        NotInstalled = 1,
        Installed = 2,
    };
    enum class TargetedContentAvailability : int32_t
    {
        None = 0,
        Partial = 1,
        All = 2,
    };
    enum class TargetedContentInteraction : int32_t
    {
        Impression = 0,
        ClickThrough = 1,
        Hover = 2,
        Like = 3,
        Dislike = 4,
        Dismiss = 5,
        Ineligible = 6,
        Accept = 7,
        Decline = 8,
        Defer = 9,
        Canceled = 10,
        Conversion = 11,
        Opportunity = 12,
    };
    enum class TargetedContentObjectKind : int32_t
    {
        Collection = 0,
        Item = 1,
        Value = 2,
    };
    enum class TargetedContentValueKind : int32_t
    {
        String = 0,
        Uri = 1,
        Number = 2,
        Boolean = 3,
        File = 4,
        ImageFile = 5,
        Action = 6,
        Strings = 7,
        Uris = 8,
        Numbers = 9,
        Booleans = 10,
        Files = 11,
        ImageFiles = 12,
        Actions = 13,
    };
    struct ITargetedContentAction;
    struct ITargetedContentAvailabilityChangedEventArgs;
    struct ITargetedContentChangedEventArgs;
    struct ITargetedContentCollection;
    struct ITargetedContentContainer;
    struct ITargetedContentContainerStatics;
    struct ITargetedContentImage;
    struct ITargetedContentItem;
    struct ITargetedContentItemState;
    struct ITargetedContentObject;
    struct ITargetedContentStateChangedEventArgs;
    struct ITargetedContentSubscription;
    struct ITargetedContentSubscriptionOptions;
    struct ITargetedContentSubscriptionStatics;
    struct ITargetedContentValue;
    struct TargetedContentAction;
    struct TargetedContentAvailabilityChangedEventArgs;
    struct TargetedContentChangedEventArgs;
    struct TargetedContentCollection;
    struct TargetedContentContainer;
    struct TargetedContentFile;
    struct TargetedContentImage;
    struct TargetedContentItem;
    struct TargetedContentItemState;
    struct TargetedContentObject;
    struct TargetedContentStateChangedEventArgs;
    struct TargetedContentSubscription;
    struct TargetedContentSubscriptionOptions;
    struct TargetedContentValue;
}
namespace winrt::impl
{
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentAction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentImage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentObject>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::ITargetedContentValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentAction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentContainer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentFile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentImage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentItemState>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentObject>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentSubscription>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentValue>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentAppInstallationState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentAvailability>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentInteraction>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentObjectKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::TargetedContent::TargetedContentValueKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentAction>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentAction" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentCollection" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentContainer" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentContainerStatics" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentImage>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentImage" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentItem>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentItem" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentItemState" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentObject>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentObject" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentStateChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscription" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscriptionOptions" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentSubscriptionStatics" };
    };
    template <> struct name<Windows::Services::TargetedContent::ITargetedContentValue>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.ITargetedContentValue" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentAction>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAction" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentCollection>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentCollection" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentContainer>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentContainer" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentFile>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentFile" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentImage>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentImage" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentItem>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentItem" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentItemState>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentItemState" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentObject>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentObject" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentStateChangedEventArgs" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentSubscription>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentSubscription" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentSubscriptionOptions" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentValue>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentValue" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentAppInstallationState>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAppInstallationState" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentAvailability>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentAvailability" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentInteraction>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentInteraction" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentObjectKind>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentObjectKind" };
    };
    template <> struct name<Windows::Services::TargetedContent::TargetedContentValueKind>
    {
        static constexpr auto & value{ L"Windows.Services.TargetedContent.TargetedContentValueKind" };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentAction>
    {
        static constexpr guid value{ 0xD75B691E,0x6CD6,0x4CA0,{ 0x9D,0x8F,0x47,0x28,0xB0,0xB7,0xE6,0xB6 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        static constexpr guid value{ 0xE0F59D26,0x5927,0x4450,{ 0x96,0x5C,0x1C,0xEB,0x7B,0xEC,0xDE,0x65 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        static constexpr guid value{ 0x99D488C9,0x587E,0x4586,{ 0x8E,0xF7,0xB5,0x4C,0xA9,0x45,0x3A,0x16 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        static constexpr guid value{ 0x2D4B66C5,0xF163,0x44BA,{ 0x9F,0x6E,0xE1,0xA4,0xC2,0xBB,0x55,0x9D } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        static constexpr guid value{ 0xBC2494C9,0x8837,0x47C2,{ 0x85,0x0F,0xD7,0x9D,0x64,0x59,0x59,0x26 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        static constexpr guid value{ 0x5B47E7FB,0x2140,0x4C1F,{ 0xA7,0x36,0xC5,0x95,0x83,0xF2,0x27,0xD8 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentImage>
    {
        static constexpr guid value{ 0xA7A585D9,0x779F,0x4B1E,{ 0xBB,0xB1,0x8E,0xAF,0x53,0xFB,0xEA,0xB2 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentItem>
    {
        static constexpr guid value{ 0x38168DC4,0x276C,0x4C32,{ 0x96,0xBA,0x56,0x5C,0x6E,0x40,0x6E,0x74 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        static constexpr guid value{ 0x73935454,0x4C65,0x4B47,{ 0xA4,0x41,0x47,0x2D,0xE5,0x3C,0x79,0xB6 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentObject>
    {
        static constexpr guid value{ 0x041D7969,0x2212,0x42D1,{ 0x9D,0xFA,0x88,0xA8,0xE3,0x03,0x3A,0xA3 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        static constexpr guid value{ 0x9A1CEF3D,0x8073,0x4416,{ 0x8D,0xF2,0x54,0x68,0x35,0xA6,0x41,0x4F } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        static constexpr guid value{ 0x882C2C49,0xC652,0x4C7A,{ 0xAC,0xAD,0x1F,0x7F,0xA2,0x98,0x6C,0x73 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        static constexpr guid value{ 0x61EE6AD0,0x2C83,0x421B,{ 0x84,0x67,0x41,0x3E,0xAF,0x1A,0xEB,0x97 } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        static constexpr guid value{ 0xFADDFE80,0x360D,0x4916,{ 0xB5,0x3C,0x7E,0xA2,0x70,0x90,0xD0,0x2A } };
    };
    template <> struct guid_storage<Windows::Services::TargetedContent::ITargetedContentValue>
    {
        static constexpr guid value{ 0xAAFDE4B3,0x4215,0x4BF8,{ 0x86,0x7F,0x43,0xF0,0x48,0x65,0xF9,0xBF } };
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentAction>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentAction;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentChangedEventArgs;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentCollection>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentCollection;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentContainer>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentContainer;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentFile>
    {
        using type = Windows::Storage::Streams::IRandomAccessStreamReference;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentImage>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentImage;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentItem>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentItem;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentItemState>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentItemState;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentObject>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentObject;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentSubscription>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentSubscription;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions;
    };
    template <> struct default_interface<Windows::Services::TargetedContent::TargetedContentValue>
    {
        using type = Windows::Services::TargetedContent::ITargetedContentValue;
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentAction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InvokeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasPreviousContentExpired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall ReportInteraction(int32_t) noexcept = 0;
            virtual int32_t __stdcall ReportCustomInteraction(void*) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Collections(void**) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Availability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall SelectSingleObject(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentImage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall ReportInteraction(int32_t) noexcept = 0;
            virtual int32_t __stdcall ReportCustomInteraction(void*) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Collections(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldDisplay(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AppInstallationState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ObjectKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Collection(void**) noexcept = 0;
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall GetContentContainerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ContentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AvailabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailabilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SubscriptionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowPartialContentAvailability(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowPartialContentAvailability(bool) noexcept = 0;
            virtual int32_t __stdcall get_CloudQueryParameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalFilters(void**) noexcept = 0;
            virtual int32_t __stdcall Update() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetOptions(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::TargetedContent::ITargetedContentValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_String(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Number(double*) noexcept = 0;
            virtual int32_t __stdcall get_Boolean(bool*) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageFile(void**) noexcept = 0;
            virtual int32_t __stdcall get_Action(void**) noexcept = 0;
            virtual int32_t __stdcall get_Strings(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uris(void**) noexcept = 0;
            virtual int32_t __stdcall get_Numbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Booleans(void**) noexcept = 0;
            virtual int32_t __stdcall get_Files(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageFiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_Actions(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentAction
    {
        auto InvokeAsync() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentAction>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentAction<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto HasPreviousContentExpired() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentCollection
    {
        [[nodiscard]] auto Id() const;
        auto ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const;
        auto ReportCustomInteraction(param::hstring const& customInteractionName) const;
        [[nodiscard]] auto Path() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto Collections() const;
        [[nodiscard]] auto Items() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentContainer
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto Availability() const;
        [[nodiscard]] auto Content() const;
        auto SelectSingleObject(param::hstring const& path) const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics
    {
        auto GetAsync(param::hstring const& contentId) const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentImage
    {
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Width() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentImage>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentImage<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentItem
    {
        [[nodiscard]] auto Path() const;
        auto ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const;
        auto ReportCustomInteraction(param::hstring const& customInteractionName) const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto Collections() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentItem>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentItem<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentItemState
    {
        [[nodiscard]] auto ShouldDisplay() const;
        [[nodiscard]] auto AppInstallationState() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentObject
    {
        [[nodiscard]] auto ObjectKind() const;
        [[nodiscard]] auto Collection() const;
        [[nodiscard]] auto Item() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentObject>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentObject<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentSubscription
    {
        [[nodiscard]] auto Id() const;
        auto GetContentContainerAsync() const;
        auto ContentChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const;
        using ContentChanged_revoker = impl::event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription, &impl::abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_ContentChanged>;
        ContentChanged_revoker ContentChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const;
        auto ContentChanged(winrt::event_token const& cookie) const noexcept;
        auto AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const;
        using AvailabilityChanged_revoker = impl::event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription, &impl::abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_AvailabilityChanged>;
        AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const;
        auto AvailabilityChanged(winrt::event_token const& cookie) const noexcept;
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription, &impl::abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const;
        auto StateChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions
    {
        [[nodiscard]] auto SubscriptionId() const;
        [[nodiscard]] auto AllowPartialContentAvailability() const;
        auto AllowPartialContentAvailability(bool value) const;
        [[nodiscard]] auto CloudQueryParameters() const;
        [[nodiscard]] auto LocalFilters() const;
        auto Update() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics
    {
        auto GetAsync(param::hstring const& subscriptionId) const;
        auto GetOptions(param::hstring const& subscriptionId) const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_TargetedContent_ITargetedContentValue
    {
        [[nodiscard]] auto ValueKind() const;
        [[nodiscard]] auto Path() const;
        [[nodiscard]] auto String() const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Number() const;
        [[nodiscard]] auto Boolean() const;
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto ImageFile() const;
        [[nodiscard]] auto Action() const;
        [[nodiscard]] auto Strings() const;
        [[nodiscard]] auto Uris() const;
        [[nodiscard]] auto Numbers() const;
        [[nodiscard]] auto Booleans() const;
        [[nodiscard]] auto Files() const;
        [[nodiscard]] auto ImageFiles() const;
        [[nodiscard]] auto Actions() const;
    };
    template <> struct consume<Windows::Services::TargetedContent::ITargetedContentValue>
    {
        template <typename D> using type = consume_Windows_Services_TargetedContent_ITargetedContentValue<D>;
    };
}
#endif
