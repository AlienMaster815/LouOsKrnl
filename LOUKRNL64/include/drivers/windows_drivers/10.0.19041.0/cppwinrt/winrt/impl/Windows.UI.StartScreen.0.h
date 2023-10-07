// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_StartScreen_0_H
#define WINRT_Windows_UI_StartScreen_0_H
namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Perception::Spatial
{
    struct SpatialBoundingBox;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
namespace winrt::Windows::UI::StartScreen
{
    enum class ForegroundText : int32_t
    {
        Dark = 0,
        Light = 1,
    };
    enum class JumpListItemKind : int32_t
    {
        Arguments = 0,
        Separator = 1,
    };
    enum class JumpListSystemGroupKind : int32_t
    {
        None = 0,
        Frequent = 1,
        Recent = 2,
    };
    enum class TileMixedRealityModelActivationBehavior : int32_t
    {
        Default = 0,
        None = 1,
    };
    enum class TileOptions : uint32_t
    {
        None = 0,
        ShowNameOnLogo = 0x1,
        ShowNameOnWideLogo = 0x2,
        CopyOnDeployment = 0x4,
    };
    enum class TileSize : int32_t
    {
        Default = 0,
        Square30x30 = 1,
        Square70x70 = 2,
        Square150x150 = 3,
        Wide310x150 = 4,
        Square310x310 = 5,
        Square71x71 = 6,
        Square44x44 = 7,
    };
    struct IJumpList;
    struct IJumpListItem;
    struct IJumpListItemStatics;
    struct IJumpListStatics;
    struct ISecondaryTile;
    struct ISecondaryTile2;
    struct ISecondaryTileFactory;
    struct ISecondaryTileFactory2;
    struct ISecondaryTileStatics;
    struct ISecondaryTileVisualElements;
    struct ISecondaryTileVisualElements2;
    struct ISecondaryTileVisualElements3;
    struct ISecondaryTileVisualElements4;
    struct IStartScreenManager;
    struct IStartScreenManager2;
    struct IStartScreenManagerStatics;
    struct ITileMixedRealityModel;
    struct ITileMixedRealityModel2;
    struct IVisualElementsRequest;
    struct IVisualElementsRequestDeferral;
    struct IVisualElementsRequestedEventArgs;
    struct JumpList;
    struct JumpListItem;
    struct SecondaryTile;
    struct SecondaryTileVisualElements;
    struct StartScreenManager;
    struct TileMixedRealityModel;
    struct VisualElementsRequest;
    struct VisualElementsRequestDeferral;
    struct VisualElementsRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::StartScreen::IJumpList>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IJumpListItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IJumpListItemStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IJumpListStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTile2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileFactory2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IStartScreenManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IStartScreenManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IStartScreenManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ITileMixedRealityModel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IVisualElementsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::StartScreen::JumpList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::JumpListItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::SecondaryTile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::SecondaryTileVisualElements>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::StartScreenManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::TileMixedRealityModel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::VisualElementsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::VisualElementsRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::StartScreen::ForegroundText>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::StartScreen::JumpListItemKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::StartScreen::JumpListSystemGroupKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::StartScreen::TileOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::StartScreen::TileSize>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::StartScreen::IJumpList>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpList" };
    };
    template <> struct name<Windows::UI::StartScreen::IJumpListItem>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListItem" };
    };
    template <> struct name<Windows::UI::StartScreen::IJumpListItemStatics>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListItemStatics" };
    };
    template <> struct name<Windows::UI::StartScreen::IJumpListStatics>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListStatics" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTile>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTile" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTile2>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTile2" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileFactory>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileFactory" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileFactory2>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileFactory2" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileStatics>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileStatics" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements2" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements3" };
    };
    template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements4" };
    };
    template <> struct name<Windows::UI::StartScreen::IStartScreenManager>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IStartScreenManager" };
    };
    template <> struct name<Windows::UI::StartScreen::IStartScreenManager2>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IStartScreenManager2" };
    };
    template <> struct name<Windows::UI::StartScreen::IStartScreenManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IStartScreenManagerStatics" };
    };
    template <> struct name<Windows::UI::StartScreen::ITileMixedRealityModel>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ITileMixedRealityModel" };
    };
    template <> struct name<Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ITileMixedRealityModel2" };
    };
    template <> struct name<Windows::UI::StartScreen::IVisualElementsRequest>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequest" };
    };
    template <> struct name<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequestDeferral" };
    };
    template <> struct name<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::StartScreen::JumpList>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.JumpList" };
    };
    template <> struct name<Windows::UI::StartScreen::JumpListItem>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListItem" };
    };
    template <> struct name<Windows::UI::StartScreen::SecondaryTile>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.SecondaryTile" };
    };
    template <> struct name<Windows::UI::StartScreen::SecondaryTileVisualElements>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.SecondaryTileVisualElements" };
    };
    template <> struct name<Windows::UI::StartScreen::StartScreenManager>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.StartScreenManager" };
    };
    template <> struct name<Windows::UI::StartScreen::TileMixedRealityModel>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.TileMixedRealityModel" };
    };
    template <> struct name<Windows::UI::StartScreen::VisualElementsRequest>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequest" };
    };
    template <> struct name<Windows::UI::StartScreen::VisualElementsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequestDeferral" };
    };
    template <> struct name<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::StartScreen::ForegroundText>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.ForegroundText" };
    };
    template <> struct name<Windows::UI::StartScreen::JumpListItemKind>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListItemKind" };
    };
    template <> struct name<Windows::UI::StartScreen::JumpListSystemGroupKind>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListSystemGroupKind" };
    };
    template <> struct name<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.TileMixedRealityModelActivationBehavior" };
    };
    template <> struct name<Windows::UI::StartScreen::TileOptions>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.TileOptions" };
    };
    template <> struct name<Windows::UI::StartScreen::TileSize>
    {
        static constexpr auto & value{ L"Windows.UI.StartScreen.TileSize" };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IJumpList>
    {
        static constexpr guid value{ 0xB0234C3E,0xCD6F,0x4CB6,{ 0xA6,0x11,0x61,0xFD,0x50,0x5F,0x3E,0xD1 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IJumpListItem>
    {
        static constexpr guid value{ 0x7ADB6717,0x8B5D,0x4820,{ 0x99,0x5B,0x9B,0x41,0x8D,0xBE,0x48,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IJumpListItemStatics>
    {
        static constexpr guid value{ 0xF1BFC4E8,0xC7AA,0x49CB,{ 0x8D,0xDE,0xEC,0xFC,0xCD,0x7A,0xD7,0xE4 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IJumpListStatics>
    {
        static constexpr guid value{ 0xA7E0C681,0xE67E,0x4B74,{ 0x82,0x50,0x3F,0x32,0x2C,0x4D,0x92,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTile>
    {
        static constexpr guid value{ 0x9E9E51E0,0x2BB5,0x4BC0,{ 0xBB,0x8D,0x42,0xB2,0x3A,0xBC,0xC8,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTile2>
    {
        static constexpr guid value{ 0xB2F6CC35,0x3250,0x4990,{ 0x92,0x3C,0x29,0x4A,0xB4,0xB6,0x94,0xDD } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileFactory>
    {
        static constexpr guid value{ 0x57F52CA0,0x51BC,0x4ABF,{ 0x8E,0xBF,0x62,0x7A,0x03,0x98,0xB0,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileFactory2>
    {
        static constexpr guid value{ 0x274B8A3B,0x522D,0x448E,{ 0x9E,0xB2,0xD0,0x67,0x2A,0xB3,0x45,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileStatics>
    {
        static constexpr guid value{ 0x99908DAE,0xD051,0x4676,{ 0x87,0xFE,0x9E,0xC2,0x42,0xD8,0x3C,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileVisualElements>
    {
        static constexpr guid value{ 0x1D8DF333,0x815E,0x413F,{ 0x9F,0x50,0xA8,0x1D,0xA7,0x0A,0x96,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
    {
        static constexpr guid value{ 0xFD2E31D0,0x57DC,0x4794,{ 0x8E,0xCF,0x56,0x82,0xF5,0xF3,0xE6,0xEF } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
    {
        static constexpr guid value{ 0x56B55AD6,0xD15C,0x40F4,{ 0x81,0xE7,0x57,0xFF,0xD8,0xF8,0xA4,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        static constexpr guid value{ 0x66566117,0xB544,0x40D2,{ 0x8D,0x12,0x74,0xD4,0xEC,0x24,0xD0,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IStartScreenManager>
    {
        static constexpr guid value{ 0x4A1DCBCB,0x26E9,0x4EB4,{ 0x89,0x33,0x85,0x9E,0xB6,0xEC,0xDB,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IStartScreenManager2>
    {
        static constexpr guid value{ 0x08A716B6,0x316B,0x4AD9,{ 0xAC,0xB8,0xFE,0x9C,0xF0,0x0B,0xD6,0x08 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IStartScreenManagerStatics>
    {
        static constexpr guid value{ 0x7865EF0F,0xB585,0x464E,{ 0x89,0x93,0x34,0xE8,0xF8,0x73,0x8D,0x48 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ITileMixedRealityModel>
    {
        static constexpr guid value{ 0xB0764E5B,0x887D,0x4242,{ 0x9A,0x19,0x3D,0x0A,0x4E,0xA7,0x80,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        static constexpr guid value{ 0x439470B2,0xD7C5,0x410B,{ 0x83,0x19,0x94,0x86,0xA2,0x7B,0x6C,0x67 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IVisualElementsRequest>
    {
        static constexpr guid value{ 0xC138333A,0x9308,0x4072,{ 0x88,0xCC,0xD0,0x68,0xDB,0x34,0x7C,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
    {
        static constexpr guid value{ 0xA1656EB0,0x0126,0x4357,{ 0x82,0x04,0xBD,0x82,0xBB,0x2A,0x04,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
    {
        static constexpr guid value{ 0x7B6FC982,0x3A0D,0x4ECE,{ 0xAF,0x96,0xCD,0x17,0xE1,0xB0,0x0B,0x2D } };
    };
    template <> struct default_interface<Windows::UI::StartScreen::JumpList>
    {
        using type = Windows::UI::StartScreen::IJumpList;
    };
    template <> struct default_interface<Windows::UI::StartScreen::JumpListItem>
    {
        using type = Windows::UI::StartScreen::IJumpListItem;
    };
    template <> struct default_interface<Windows::UI::StartScreen::SecondaryTile>
    {
        using type = Windows::UI::StartScreen::ISecondaryTile;
    };
    template <> struct default_interface<Windows::UI::StartScreen::SecondaryTileVisualElements>
    {
        using type = Windows::UI::StartScreen::ISecondaryTileVisualElements;
    };
    template <> struct default_interface<Windows::UI::StartScreen::StartScreenManager>
    {
        using type = Windows::UI::StartScreen::IStartScreenManager;
    };
    template <> struct default_interface<Windows::UI::StartScreen::TileMixedRealityModel>
    {
        using type = Windows::UI::StartScreen::ITileMixedRealityModel;
    };
    template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequest>
    {
        using type = Windows::UI::StartScreen::IVisualElementsRequest;
    };
    template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequestDeferral>
    {
        using type = Windows::UI::StartScreen::IVisualElementsRequestDeferral;
    };
    template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>
    {
        using type = Windows::UI::StartScreen::IVisualElementsRequestedEventArgs;
    };
    template <> struct abi<Windows::UI::StartScreen::IJumpList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemGroupKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SystemGroupKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IJumpListItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemovedByUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_GroupName(void**) noexcept = 0;
            virtual int32_t __stdcall put_GroupName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IJumpListItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithArguments(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSeparator(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IJumpListStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadCurrentAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_TileId(void*) noexcept = 0;
            virtual int32_t __stdcall get_TileId(void**) noexcept = 0;
            virtual int32_t __stdcall put_Arguments(void*) noexcept = 0;
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
            virtual int32_t __stdcall put_ShortName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShortName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_SmallLogo(void*) noexcept = 0;
            virtual int32_t __stdcall get_SmallLogo(void**) noexcept = 0;
            virtual int32_t __stdcall put_WideLogo(void*) noexcept = 0;
            virtual int32_t __stdcall get_WideLogo(void**) noexcept = 0;
            virtual int32_t __stdcall put_LockScreenBadgeLogo(void*) noexcept = 0;
            virtual int32_t __stdcall get_LockScreenBadgeLogo(void**) noexcept = 0;
            virtual int32_t __stdcall put_LockScreenDisplayBadgeAndTileText(bool) noexcept = 0;
            virtual int32_t __stdcall get_LockScreenDisplayBadgeAndTileText(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TileOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TileOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundText(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundText(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall RequestCreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestCreateAsyncWithPoint(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCreateAsyncWithRect(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCreateAsyncWithRectAndPlacement(Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsyncWithPoint(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsyncWithRect(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsyncWithRectAndPlacement(Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PhoneticName(void*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneticName(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisualElements(void**) noexcept = 0;
            virtual int32_t __stdcall put_RoamingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RoamingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_VisualElementsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisualElementsRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateTile(void*, void*, void*, void*, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWideTile(void*, void*, void*, void*, uint32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMinimalTile(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Exists(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllForApplicationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllForPackageAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Square30x30Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square30x30Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Square70x70Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square70x70Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Square150x150Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square150x150Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Wide310x150Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Wide310x150Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_Square310x310Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square310x310Logo(void**) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundText(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundText(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ShowNameOnSquare150x150Logo(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowNameOnSquare150x150Logo(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowNameOnWide310x150Logo(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowNameOnWide310x150Logo(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowNameOnSquare310x310Logo(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowNameOnSquare310x310Logo(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Square71x71Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square71x71Logo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Square44x44Logo(void*) noexcept = 0;
            virtual int32_t __stdcall get_Square44x44Logo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MixedRealityModel(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IStartScreenManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall SupportsAppListEntry(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ContainsAppListEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAddAppListEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IStartScreenManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ContainsSecondaryTileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryRemoveSecondaryTileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IStartScreenManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ITileMixedRealityModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_BoundingBox(void*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingBox(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ActivationBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ActivationBehavior(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VisualElements(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlternateVisualElements(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IJumpList
    {
        [[nodiscard]] auto Items() const;
        [[nodiscard]] auto SystemGroupKind() const;
        auto SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind const& value) const;
        auto SaveAsync() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IJumpList>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IJumpList<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IJumpListItem
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Arguments() const;
        [[nodiscard]] auto RemovedByUser() const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto GroupName() const;
        auto GroupName(param::hstring const& value) const;
        [[nodiscard]] auto Logo() const;
        auto Logo(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::UI::StartScreen::IJumpListItem>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IJumpListItemStatics
    {
        auto CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName) const;
        auto CreateSeparator() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IJumpListItemStatics>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IJumpListStatics
    {
        auto LoadCurrentAsync() const;
        auto IsSupported() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IJumpListStatics>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTile
    {
        auto TileId(param::hstring const& value) const;
        [[nodiscard]] auto TileId() const;
        auto Arguments(param::hstring const& value) const;
        [[nodiscard]] auto Arguments() const;
        auto ShortName(param::hstring const& value) const;
        [[nodiscard]] auto ShortName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Logo() const;
        auto SmallLogo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto SmallLogo() const;
        auto WideLogo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto WideLogo() const;
        auto LockScreenBadgeLogo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto LockScreenBadgeLogo() const;
        auto LockScreenDisplayBadgeAndTileText(bool value) const;
        [[nodiscard]] auto LockScreenDisplayBadgeAndTileText() const;
        auto TileOptions(Windows::UI::StartScreen::TileOptions const& value) const;
        [[nodiscard]] auto TileOptions() const;
        auto ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const;
        [[nodiscard]] auto ForegroundText() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto RequestCreateAsync() const;
        auto RequestCreateAsync(Windows::Foundation::Point const& invocationPoint) const;
        auto RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection) const;
        auto RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto RequestDeleteAsync() const;
        auto RequestDeleteAsync(Windows::Foundation::Point const& invocationPoint) const;
        auto RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection) const;
        auto RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto UpdateAsync() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTile>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTile<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTile2
    {
        auto PhoneticName(param::hstring const& value) const;
        [[nodiscard]] auto PhoneticName() const;
        [[nodiscard]] auto VisualElements() const;
        auto RoamingEnabled(bool value) const;
        [[nodiscard]] auto RoamingEnabled() const;
        auto VisualElementsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const;
        using VisualElementsRequested_revoker = impl::event_revoker<Windows::UI::StartScreen::ISecondaryTile2, &impl::abi_t<Windows::UI::StartScreen::ISecondaryTile2>::remove_VisualElementsRequested>;
        VisualElementsRequested_revoker VisualElementsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const;
        auto VisualElementsRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTile2>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTile2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileFactory
    {
        auto CreateTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) const;
        auto CreateWideTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) const;
        auto CreateWithId(param::hstring const& tileId) const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileFactory>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileFactory2
    {
        auto CreateMinimalTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileFactory2>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileStatics
    {
        auto Exists(param::hstring const& tileId) const;
        auto FindAllAsync() const;
        auto FindAllAsync(param::hstring const& applicationId) const;
        auto FindAllForPackageAsync() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileStatics>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements
    {
        auto Square30x30Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square30x30Logo() const;
        auto Square70x70Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square70x70Logo() const;
        auto Square150x150Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square150x150Logo() const;
        auto Wide310x150Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Wide310x150Logo() const;
        auto Square310x310Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square310x310Logo() const;
        auto ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const;
        [[nodiscard]] auto ForegroundText() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto ShowNameOnSquare150x150Logo(bool value) const;
        [[nodiscard]] auto ShowNameOnSquare150x150Logo() const;
        auto ShowNameOnWide310x150Logo(bool value) const;
        [[nodiscard]] auto ShowNameOnWide310x150Logo() const;
        auto ShowNameOnSquare310x310Logo(bool value) const;
        [[nodiscard]] auto ShowNameOnSquare310x310Logo() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2
    {
        auto Square71x71Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square71x71Logo() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3
    {
        auto Square44x44Logo(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Square44x44Logo() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements4
    {
        [[nodiscard]] auto MixedRealityModel() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IStartScreenManager
    {
        [[nodiscard]] auto User() const;
        auto SupportsAppListEntry(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto ContainsAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto RequestAddAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    };
    template <> struct consume<Windows::UI::StartScreen::IStartScreenManager>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IStartScreenManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IStartScreenManager2
    {
        auto ContainsSecondaryTileAsync(param::hstring const& tileId) const;
        auto TryRemoveSecondaryTileAsync(param::hstring const& tileId) const;
    };
    template <> struct consume<Windows::UI::StartScreen::IStartScreenManager2>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IStartScreenManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IStartScreenManagerStatics
    {
        auto GetDefault() const;
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::UI::StartScreen::IStartScreenManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ITileMixedRealityModel
    {
        auto Uri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Uri() const;
        auto BoundingBox(Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox> const& value) const;
        [[nodiscard]] auto BoundingBox() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ITileMixedRealityModel>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_ITileMixedRealityModel2
    {
        auto ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior const& value) const;
        [[nodiscard]] auto ActivationBehavior() const;
    };
    template <> struct consume<Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_ITileMixedRealityModel2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IVisualElementsRequest
    {
        [[nodiscard]] auto VisualElements() const;
        [[nodiscard]] auto AlternateVisualElements() const;
        [[nodiscard]] auto Deadline() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequest>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs<D>;
    };
}
#endif
