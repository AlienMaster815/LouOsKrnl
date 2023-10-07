// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Maps_0_H
#define WINRT_Windows_Services_Maps_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct GeoboundingBox;
    struct Geopath;
    struct Geopoint;
    struct IGeoshape;
}
namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
    struct Rect;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
namespace winrt::Windows::Services::Maps
{
    enum class ManeuverWarningKind : int32_t
    {
        None = 0,
        Accident = 1,
        AdministrativeDivisionChange = 2,
        Alert = 3,
        BlockedRoad = 4,
        CheckTimetable = 5,
        Congestion = 6,
        Construction = 7,
        CountryChange = 8,
        DisabledVehicle = 9,
        GateAccess = 10,
        GetOffTransit = 11,
        GetOnTransit = 12,
        IllegalUTurn = 13,
        MassTransit = 14,
        Miscellaneous = 15,
        NoIncident = 16,
        Other = 17,
        OtherNews = 18,
        OtherTrafficIncidents = 19,
        PlannedEvent = 20,
        PrivateRoad = 21,
        RestrictedTurn = 22,
        RoadClosures = 23,
        RoadHazard = 24,
        ScheduledConstruction = 25,
        SeasonalClosures = 26,
        Tollbooth = 27,
        TollRoad = 28,
        TollZoneEnter = 29,
        TollZoneExit = 30,
        TrafficFlow = 31,
        TransitLineChange = 32,
        UnpavedRoad = 33,
        UnscheduledConstruction = 34,
        Weather = 35,
    };
    enum class ManeuverWarningSeverity : int32_t
    {
        None = 0,
        LowImpact = 1,
        Minor = 2,
        Moderate = 3,
        Serious = 4,
    };
    enum class MapLocationDesiredAccuracy : int32_t
    {
        High = 0,
        Low = 1,
    };
    enum class MapLocationFinderStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        BadLocation = 3,
        IndexFailure = 4,
        NetworkFailure = 5,
        NotSupported = 6,
    };
    enum class MapManeuverNotices : uint32_t
    {
        None = 0,
        Toll = 0x1,
        Unpaved = 0x2,
    };
    enum class MapRouteFinderStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        NoRouteFound = 3,
        NoRouteFoundWithGivenOptions = 4,
        StartPointNotFound = 5,
        EndPointNotFound = 6,
        NoPedestrianRouteFound = 7,
        NetworkFailure = 8,
        NotSupported = 9,
    };
    enum class MapRouteManeuverKind : int32_t
    {
        None = 0,
        Start = 1,
        Stopover = 2,
        StopoverResume = 3,
        End = 4,
        GoStraight = 5,
        UTurnLeft = 6,
        UTurnRight = 7,
        TurnKeepLeft = 8,
        TurnKeepRight = 9,
        TurnLightLeft = 10,
        TurnLightRight = 11,
        TurnLeft = 12,
        TurnRight = 13,
        TurnHardLeft = 14,
        TurnHardRight = 15,
        FreewayEnterLeft = 16,
        FreewayEnterRight = 17,
        FreewayLeaveLeft = 18,
        FreewayLeaveRight = 19,
        FreewayContinueLeft = 20,
        FreewayContinueRight = 21,
        TrafficCircleLeft = 22,
        TrafficCircleRight = 23,
        TakeFerry = 24,
    };
    enum class MapRouteOptimization : int32_t
    {
        Time = 0,
        Distance = 1,
        TimeWithTraffic = 2,
        Scenic = 3,
    };
    enum class MapRouteRestrictions : uint32_t
    {
        None = 0,
        Highways = 0x1,
        TollRoads = 0x2,
        Ferries = 0x4,
        Tunnels = 0x8,
        DirtRoads = 0x10,
        Motorail = 0x20,
    };
    enum class MapServiceDataUsagePreference : int32_t
    {
        Default = 0,
        OfflineMapDataOnly = 1,
    };
    enum class TrafficCongestion : int32_t
    {
        Unknown = 0,
        Light = 1,
        Mild = 2,
        Medium = 3,
        Heavy = 4,
    };
    enum class WaypointKind : int32_t
    {
        Stop = 0,
        Via = 1,
    };
    struct IEnhancedWaypoint;
    struct IEnhancedWaypointFactory;
    struct IManeuverWarning;
    struct IMapAddress;
    struct IMapAddress2;
    struct IMapLocation;
    struct IMapLocationFinderResult;
    struct IMapLocationFinderStatics;
    struct IMapLocationFinderStatics2;
    struct IMapManagerStatics;
    struct IMapRoute;
    struct IMapRoute2;
    struct IMapRoute3;
    struct IMapRoute4;
    struct IMapRouteDrivingOptions;
    struct IMapRouteDrivingOptions2;
    struct IMapRouteFinderResult;
    struct IMapRouteFinderResult2;
    struct IMapRouteFinderStatics;
    struct IMapRouteFinderStatics2;
    struct IMapRouteFinderStatics3;
    struct IMapRouteLeg;
    struct IMapRouteLeg2;
    struct IMapRouteManeuver;
    struct IMapRouteManeuver2;
    struct IMapRouteManeuver3;
    struct IMapServiceStatics;
    struct IMapServiceStatics2;
    struct IMapServiceStatics3;
    struct IMapServiceStatics4;
    struct IPlaceInfo;
    struct IPlaceInfoCreateOptions;
    struct IPlaceInfoStatics;
    struct IPlaceInfoStatics2;
    struct EnhancedWaypoint;
    struct ManeuverWarning;
    struct MapAddress;
    struct MapLocation;
    struct MapLocationFinder;
    struct MapLocationFinderResult;
    struct MapManager;
    struct MapRoute;
    struct MapRouteDrivingOptions;
    struct MapRouteFinder;
    struct MapRouteFinderResult;
    struct MapRouteLeg;
    struct MapRouteManeuver;
    struct MapService;
    struct PlaceInfo;
    struct PlaceInfoCreateOptions;
}
namespace winrt::impl
{
    template <> struct category<Windows::Services::Maps::IEnhancedWaypoint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IEnhancedWaypointFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IManeuverWarning>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapAddress2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapLocation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapLocationFinderResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapLocationFinderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapLocationFinderStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRoute>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRoute2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRoute3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRoute4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteDrivingOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteFinderResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteFinderResult2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteFinderStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteLeg>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteLeg2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteManeuver>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteManeuver2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapRouteManeuver3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapServiceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapServiceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapServiceStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IMapServiceStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IPlaceInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IPlaceInfoCreateOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IPlaceInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::IPlaceInfoStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::EnhancedWaypoint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::ManeuverWarning>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapLocation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapLocationFinder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapLocationFinderResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRoute>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteDrivingOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteFinder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteFinderResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteLeg>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteManeuver>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::MapService>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::PlaceInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::PlaceInfoCreateOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::ManeuverWarningKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::ManeuverWarningSeverity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapLocationDesiredAccuracy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapLocationFinderStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapManeuverNotices>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteFinderStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteManeuverKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteOptimization>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapRouteRestrictions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::MapServiceDataUsagePreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::TrafficCongestion>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::WaypointKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Services::Maps::IEnhancedWaypoint>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IEnhancedWaypoint" };
    };
    template <> struct name<Windows::Services::Maps::IEnhancedWaypointFactory>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IEnhancedWaypointFactory" };
    };
    template <> struct name<Windows::Services::Maps::IManeuverWarning>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IManeuverWarning" };
    };
    template <> struct name<Windows::Services::Maps::IMapAddress>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapAddress" };
    };
    template <> struct name<Windows::Services::Maps::IMapAddress2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapAddress2" };
    };
    template <> struct name<Windows::Services::Maps::IMapLocation>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapLocation" };
    };
    template <> struct name<Windows::Services::Maps::IMapLocationFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::IMapLocationFinderStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderStatics" };
    };
    template <> struct name<Windows::Services::Maps::IMapLocationFinderStatics2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapLocationFinderStatics2" };
    };
    template <> struct name<Windows::Services::Maps::IMapManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapManagerStatics" };
    };
    template <> struct name<Windows::Services::Maps::IMapRoute>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute" };
    };
    template <> struct name<Windows::Services::Maps::IMapRoute2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRoute3>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute3" };
    };
    template <> struct name<Windows::Services::Maps::IMapRoute4>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRoute4" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteDrivingOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteDrivingOptions" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteDrivingOptions2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteFinderResult2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderResult2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteFinderStatics3>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteFinderStatics3" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteLeg>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteLeg" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteLeg2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteLeg2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteManeuver>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteManeuver2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver2" };
    };
    template <> struct name<Windows::Services::Maps::IMapRouteManeuver3>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapRouteManeuver3" };
    };
    template <> struct name<Windows::Services::Maps::IMapServiceStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics" };
    };
    template <> struct name<Windows::Services::Maps::IMapServiceStatics2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics2" };
    };
    template <> struct name<Windows::Services::Maps::IMapServiceStatics3>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics3" };
    };
    template <> struct name<Windows::Services::Maps::IMapServiceStatics4>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IMapServiceStatics4" };
    };
    template <> struct name<Windows::Services::Maps::IPlaceInfo>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IPlaceInfo" };
    };
    template <> struct name<Windows::Services::Maps::IPlaceInfoCreateOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IPlaceInfoCreateOptions" };
    };
    template <> struct name<Windows::Services::Maps::IPlaceInfoStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IPlaceInfoStatics" };
    };
    template <> struct name<Windows::Services::Maps::IPlaceInfoStatics2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.IPlaceInfoStatics2" };
    };
    template <> struct name<Windows::Services::Maps::EnhancedWaypoint>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.EnhancedWaypoint" };
    };
    template <> struct name<Windows::Services::Maps::ManeuverWarning>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarning" };
    };
    template <> struct name<Windows::Services::Maps::MapAddress>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapAddress" };
    };
    template <> struct name<Windows::Services::Maps::MapLocation>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapLocation" };
    };
    template <> struct name<Windows::Services::Maps::MapLocationFinder>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinder" };
    };
    template <> struct name<Windows::Services::Maps::MapLocationFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::MapManager>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapManager" };
    };
    template <> struct name<Windows::Services::Maps::MapRoute>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRoute" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteDrivingOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteDrivingOptions" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteFinder>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinder" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteLeg>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteLeg" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteManeuver>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteManeuver" };
    };
    template <> struct name<Windows::Services::Maps::MapService>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapService" };
    };
    template <> struct name<Windows::Services::Maps::PlaceInfo>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.PlaceInfo" };
    };
    template <> struct name<Windows::Services::Maps::PlaceInfoCreateOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.PlaceInfoCreateOptions" };
    };
    template <> struct name<Windows::Services::Maps::ManeuverWarningKind>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarningKind" };
    };
    template <> struct name<Windows::Services::Maps::ManeuverWarningSeverity>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.ManeuverWarningSeverity" };
    };
    template <> struct name<Windows::Services::Maps::MapLocationDesiredAccuracy>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapLocationDesiredAccuracy" };
    };
    template <> struct name<Windows::Services::Maps::MapLocationFinderStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapLocationFinderStatus" };
    };
    template <> struct name<Windows::Services::Maps::MapManeuverNotices>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapManeuverNotices" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteFinderStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteFinderStatus" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteManeuverKind>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteManeuverKind" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteOptimization>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteOptimization" };
    };
    template <> struct name<Windows::Services::Maps::MapRouteRestrictions>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapRouteRestrictions" };
    };
    template <> struct name<Windows::Services::Maps::MapServiceDataUsagePreference>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.MapServiceDataUsagePreference" };
    };
    template <> struct name<Windows::Services::Maps::TrafficCongestion>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.TrafficCongestion" };
    };
    template <> struct name<Windows::Services::Maps::WaypointKind>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.WaypointKind" };
    };
    template <> struct guid_storage<Windows::Services::Maps::IEnhancedWaypoint>
    {
        static constexpr guid value{ 0xED268C74,0x5913,0x11E6,{ 0x8B,0x77,0x86,0xF3,0x0C,0xA8,0x93,0xD3 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IEnhancedWaypointFactory>
    {
        static constexpr guid value{ 0xAF868477,0xA2AA,0x46DD,{ 0xB6,0x45,0x23,0xB3,0x1B,0x8A,0xA6,0xC7 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IManeuverWarning>
    {
        static constexpr guid value{ 0xC1A36D8A,0x2630,0x4378,{ 0x9E,0x4A,0x6E,0x44,0x25,0x3D,0xCE,0xBA } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapAddress>
    {
        static constexpr guid value{ 0xCFA7A973,0xA3B4,0x4494,{ 0xB3,0xFF,0xCB,0xA9,0x4D,0xB6,0x96,0x99 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapAddress2>
    {
        static constexpr guid value{ 0x75CD6DF1,0xE5AD,0x45A9,{ 0xBF,0x40,0x6C,0xF2,0x56,0xC1,0xDD,0x13 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapLocation>
    {
        static constexpr guid value{ 0x3C073F57,0x0DA4,0x42E8,{ 0x9E,0xE2,0xA9,0x6F,0xCF,0x23,0x71,0xDC } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapLocationFinderResult>
    {
        static constexpr guid value{ 0x43F1F179,0xE8CC,0x45F6,{ 0xBE,0xD2,0x54,0xCC,0xBF,0x96,0x5D,0x9A } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapLocationFinderStatics>
    {
        static constexpr guid value{ 0x318ADB5D,0x1C5D,0x4F35,{ 0xA2,0xDF,0xAA,0xCA,0x94,0x95,0x95,0x17 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapLocationFinderStatics2>
    {
        static constexpr guid value{ 0x959A8B96,0x6485,0x4DFD,{ 0x85,0x1A,0x33,0xAC,0x31,0x7E,0x3A,0xF6 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapManagerStatics>
    {
        static constexpr guid value{ 0x37E3E515,0x82B4,0x4D54,{ 0x8F,0xD9,0xAF,0x26,0x24,0xB3,0x01,0x1C } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRoute>
    {
        static constexpr guid value{ 0xFB07B732,0x584D,0x4583,{ 0x9C,0x60,0x64,0x1F,0xEA,0x27,0x43,0x49 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRoute2>
    {
        static constexpr guid value{ 0xD1C5D40C,0x2213,0x4AB0,{ 0xA2,0x60,0x46,0xB3,0x81,0x69,0xBE,0xAC } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRoute3>
    {
        static constexpr guid value{ 0x858D1EAE,0xF2AD,0x429F,{ 0xBB,0x37,0xCD,0x21,0x09,0x4F,0xFC,0x92 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRoute4>
    {
        static constexpr guid value{ 0x366C8CA5,0x3053,0x4FA1,{ 0x80,0xFF,0xD4,0x75,0xF3,0xED,0x1E,0x6E } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteDrivingOptions>
    {
        static constexpr guid value{ 0x6815364D,0xC6DC,0x4697,{ 0xA4,0x52,0xB1,0x8F,0x8F,0x0B,0x67,0xA1 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        static constexpr guid value{ 0x35DC8670,0xC298,0x48D0,{ 0xB5,0xAD,0x82,0x54,0x60,0x64,0x56,0x03 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteFinderResult>
    {
        static constexpr guid value{ 0xA868A31A,0x9422,0x46AC,{ 0x8C,0xA1,0xB1,0x61,0x4D,0x4B,0xFB,0xE2 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteFinderResult2>
    {
        static constexpr guid value{ 0x20709C6D,0xD90C,0x46C8,{ 0x91,0xC6,0x7D,0x4B,0xE4,0xEF,0xB2,0x15 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteFinderStatics>
    {
        static constexpr guid value{ 0xB8A5C50F,0x1C64,0x4C3A,{ 0x81,0xEB,0x1F,0x7C,0x15,0x2A,0xFB,0xBB } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteFinderStatics2>
    {
        static constexpr guid value{ 0xAFCC2C73,0x7760,0x49AF,{ 0xB3,0xBD,0xBA,0xF1,0x35,0xB7,0x03,0xE1 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteFinderStatics3>
    {
        static constexpr guid value{ 0xF6098134,0x5913,0x11E6,{ 0x8B,0x77,0x86,0xF3,0x0C,0xA8,0x93,0xD3 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteLeg>
    {
        static constexpr guid value{ 0x96F8B2F6,0x5BBA,0x4D17,{ 0x9D,0xB6,0x1A,0x26,0x3F,0xEC,0x74,0x71 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteLeg2>
    {
        static constexpr guid value{ 0x02E2062D,0xC9C6,0x45B8,{ 0x8E,0x54,0x1A,0x10,0xB5,0x7A,0x17,0xE8 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteManeuver>
    {
        static constexpr guid value{ 0xED5C17F0,0xA6AB,0x4D65,{ 0xA0,0x86,0xFA,0x8A,0x7E,0x34,0x0D,0xF2 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteManeuver2>
    {
        static constexpr guid value{ 0x5D7BCD9C,0x7C9B,0x41DF,{ 0x83,0x8B,0xEA,0xE2,0x1E,0x4B,0x05,0xA9 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapRouteManeuver3>
    {
        static constexpr guid value{ 0xA6A138DF,0x0483,0x4166,{ 0x85,0xBE,0xB9,0x93,0x36,0xC1,0x18,0x75 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapServiceStatics>
    {
        static constexpr guid value{ 0x0144AD85,0xC04C,0x4CDD,{ 0x87,0x1A,0xA0,0x72,0x6D,0x09,0x7C,0xD4 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapServiceStatics2>
    {
        static constexpr guid value{ 0xF8193EED,0x9C85,0x40A9,{ 0x88,0x96,0x0F,0xC3,0xFD,0x2B,0x7C,0x2A } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapServiceStatics3>
    {
        static constexpr guid value{ 0x0A11CE20,0x63A7,0x4854,{ 0xB3,0x55,0xD6,0xDC,0xDA,0x22,0x3D,0x1B } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IMapServiceStatics4>
    {
        static constexpr guid value{ 0x088A2862,0x6ABC,0x420E,{ 0x94,0x5F,0x4C,0xFD,0x89,0xC6,0x73,0x56 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IPlaceInfo>
    {
        static constexpr guid value{ 0x9A0810B6,0x31C8,0x4F6A,{ 0x9F,0x18,0x95,0x0B,0x4C,0x38,0x95,0x1A } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IPlaceInfoCreateOptions>
    {
        static constexpr guid value{ 0xCD33C125,0x67F1,0x4BB3,{ 0x99,0x07,0xEC,0xCE,0x93,0x9B,0x03,0x99 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IPlaceInfoStatics>
    {
        static constexpr guid value{ 0x82B9FF71,0x6CD0,0x48A4,{ 0xAF,0xD9,0x5E,0xD8,0x20,0x97,0x93,0x6B } };
    };
    template <> struct guid_storage<Windows::Services::Maps::IPlaceInfoStatics2>
    {
        static constexpr guid value{ 0x730F0249,0x4047,0x44A3,{ 0x8F,0x81,0x25,0x50,0xA5,0x21,0x63,0x70 } };
    };
    template <> struct default_interface<Windows::Services::Maps::EnhancedWaypoint>
    {
        using type = Windows::Services::Maps::IEnhancedWaypoint;
    };
    template <> struct default_interface<Windows::Services::Maps::ManeuverWarning>
    {
        using type = Windows::Services::Maps::IManeuverWarning;
    };
    template <> struct default_interface<Windows::Services::Maps::MapAddress>
    {
        using type = Windows::Services::Maps::IMapAddress;
    };
    template <> struct default_interface<Windows::Services::Maps::MapLocation>
    {
        using type = Windows::Services::Maps::IMapLocation;
    };
    template <> struct default_interface<Windows::Services::Maps::MapLocationFinderResult>
    {
        using type = Windows::Services::Maps::IMapLocationFinderResult;
    };
    template <> struct default_interface<Windows::Services::Maps::MapRoute>
    {
        using type = Windows::Services::Maps::IMapRoute;
    };
    template <> struct default_interface<Windows::Services::Maps::MapRouteDrivingOptions>
    {
        using type = Windows::Services::Maps::IMapRouteDrivingOptions;
    };
    template <> struct default_interface<Windows::Services::Maps::MapRouteFinderResult>
    {
        using type = Windows::Services::Maps::IMapRouteFinderResult;
    };
    template <> struct default_interface<Windows::Services::Maps::MapRouteLeg>
    {
        using type = Windows::Services::Maps::IMapRouteLeg;
    };
    template <> struct default_interface<Windows::Services::Maps::MapRouteManeuver>
    {
        using type = Windows::Services::Maps::IMapRouteManeuver;
    };
    template <> struct default_interface<Windows::Services::Maps::PlaceInfo>
    {
        using type = Windows::Services::Maps::IPlaceInfo;
    };
    template <> struct default_interface<Windows::Services::Maps::PlaceInfoCreateOptions>
    {
        using type = Windows::Services::Maps::IPlaceInfoCreateOptions;
    };
    template <> struct abi<Windows::Services::Maps::IEnhancedWaypoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IEnhancedWaypointFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IManeuverWarning>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Severity(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BuildingName(void**) noexcept = 0;
            virtual int32_t __stdcall get_BuildingFloor(void**) noexcept = 0;
            virtual int32_t __stdcall get_BuildingRoom(void**) noexcept = 0;
            virtual int32_t __stdcall get_BuildingWing(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreetNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_Street(void**) noexcept = 0;
            virtual int32_t __stdcall get_Neighborhood(void**) noexcept = 0;
            virtual int32_t __stdcall get_District(void**) noexcept = 0;
            virtual int32_t __stdcall get_Town(void**) noexcept = 0;
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegionCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall get_CountryCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PostCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Continent(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapAddress2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormattedAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapLocationFinderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Locations(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapLocationFinderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindLocationsAtAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindLocationsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindLocationsWithMaxCountAsync(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapLocationFinderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindLocationsAtWithAccuracyAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowDownloadedMapsUI() noexcept = 0;
            virtual int32_t __stdcall ShowMapsUpdateUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRoute>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingBox(void**) noexcept = 0;
            virtual int32_t __stdcall get_LengthInMeters(double*) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_Legs(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTrafficBased(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRoute2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViolatedRestrictions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasBlockedRoads(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRoute3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DurationWithoutTraffic(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrafficCongestion(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRoute4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsScenic(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteDrivingOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxAlternateRouteCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxAlternateRouteCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_InitialHeading(void**) noexcept = 0;
            virtual int32_t __stdcall put_InitialHeading(void*) noexcept = 0;
            virtual int32_t __stdcall get_RouteOptimization(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RouteOptimization(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RouteRestrictions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RouteRestrictions(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DepartureTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_DepartureTime(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteFinderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Route(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteFinderResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlternateRoutes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDrivingRouteAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteWithOptimizationAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteWithOptimizationAndRestrictionsAsync(void*, void*, int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(void*, void*, int32_t, uint32_t, double, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteFromWaypointsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteFromWaypointsAndOptimizationAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(void*, int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(void*, int32_t, uint32_t, double, void**) noexcept = 0;
            virtual int32_t __stdcall GetWalkingRouteAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetWalkingRouteFromWaypointsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDrivingRouteWithOptionsAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteFinderStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDrivingRouteFromEnhancedWaypointsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteLeg>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingBox(void**) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_LengthInMeters(double*) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Maneuvers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteLeg2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DurationWithoutTraffic(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TrafficCongestion(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteManeuver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartingPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_LengthInMeters(double*) noexcept = 0;
            virtual int32_t __stdcall get_InstructionText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExitNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManeuverNotices(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteManeuver2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartHeading(double*) noexcept = 0;
            virtual int32_t __stdcall get_EndHeading(double*) noexcept = 0;
            virtual int32_t __stdcall get_StreetName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapRouteManeuver3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Warnings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ServiceToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapServiceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WorldViewRegionCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapServiceStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataAttributions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IMapServiceStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DataUsagePreference(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DataUsagePreference(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IPlaceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Show(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall ShowWithPreferredPlacement(Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Identifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Geoshape(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IPlaceInfoCreateOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IPlaceInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithGeopointAndOptions(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIdentifier(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIdentifierWithOptions(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMapLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_IsShowSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::IPlaceInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromAddress(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromAddressWithName(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IEnhancedWaypoint
    {
        [[nodiscard]] auto Point() const;
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::Services::Maps::IEnhancedWaypoint>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IEnhancedWaypoint<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IEnhancedWaypointFactory
    {
        auto Create(Windows::Devices::Geolocation::Geopoint const& point, Windows::Services::Maps::WaypointKind const& kind) const;
    };
    template <> struct consume<Windows::Services::Maps::IEnhancedWaypointFactory>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IEnhancedWaypointFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IManeuverWarning
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Severity() const;
    };
    template <> struct consume<Windows::Services::Maps::IManeuverWarning>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IManeuverWarning<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapAddress
    {
        [[nodiscard]] auto BuildingName() const;
        [[nodiscard]] auto BuildingFloor() const;
        [[nodiscard]] auto BuildingRoom() const;
        [[nodiscard]] auto BuildingWing() const;
        [[nodiscard]] auto StreetNumber() const;
        [[nodiscard]] auto Street() const;
        [[nodiscard]] auto Neighborhood() const;
        [[nodiscard]] auto District() const;
        [[nodiscard]] auto Town() const;
        [[nodiscard]] auto Region() const;
        [[nodiscard]] auto RegionCode() const;
        [[nodiscard]] auto Country() const;
        [[nodiscard]] auto CountryCode() const;
        [[nodiscard]] auto PostCode() const;
        [[nodiscard]] auto Continent() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapAddress>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapAddress<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapAddress2
    {
        [[nodiscard]] auto FormattedAddress() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapAddress2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapAddress2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapLocation
    {
        [[nodiscard]] auto Point() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Address() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapLocation>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapLocationFinderResult
    {
        [[nodiscard]] auto Locations() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapLocationFinderResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapLocationFinderStatics
    {
        auto FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const;
        auto FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint) const;
        auto FindLocationsAsync(param::hstring const& searchText, Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapLocationFinderStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapLocationFinderStatics2
    {
        auto FindLocationsAtAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapLocationFinderStatics2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapLocationFinderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapManagerStatics
    {
        auto ShowDownloadedMapsUI() const;
        auto ShowMapsUpdateUI() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapManagerStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRoute
    {
        [[nodiscard]] auto BoundingBox() const;
        [[nodiscard]] auto LengthInMeters() const;
        [[nodiscard]] auto EstimatedDuration() const;
        [[nodiscard]] auto Path() const;
        [[nodiscard]] auto Legs() const;
        [[nodiscard]] auto IsTrafficBased() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRoute>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRoute<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRoute2
    {
        [[nodiscard]] auto ViolatedRestrictions() const;
        [[nodiscard]] auto HasBlockedRoads() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRoute2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRoute2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRoute3
    {
        [[nodiscard]] auto DurationWithoutTraffic() const;
        [[nodiscard]] auto TrafficCongestion() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRoute3>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRoute3<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRoute4
    {
        [[nodiscard]] auto IsScenic() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRoute4>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRoute4<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteDrivingOptions
    {
        [[nodiscard]] auto MaxAlternateRouteCount() const;
        auto MaxAlternateRouteCount(uint32_t value) const;
        [[nodiscard]] auto InitialHeading() const;
        auto InitialHeading(Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] auto RouteOptimization() const;
        auto RouteOptimization(Windows::Services::Maps::MapRouteOptimization const& value) const;
        [[nodiscard]] auto RouteRestrictions() const;
        auto RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions const& value) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteDrivingOptions>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteDrivingOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteDrivingOptions2
    {
        [[nodiscard]] auto DepartureTime() const;
        auto DepartureTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteDrivingOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteFinderResult
    {
        [[nodiscard]] auto Route() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteFinderResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteFinderResult2
    {
        [[nodiscard]] auto AlternateRoutes() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteFinderResult2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteFinderStatics
    {
        auto GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const;
        auto GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization) const;
        auto GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const;
        auto GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const;
        auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const;
        auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization) const;
        auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions) const;
        auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints, Windows::Services::Maps::MapRouteOptimization const& optimization, Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees) const;
        auto GetWalkingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint) const;
        auto GetWalkingRouteFromWaypointsAsync(param::async_iterable<Windows::Devices::Geolocation::Geopoint> const& wayPoints) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteFinderStatics2
    {
        auto GetDrivingRouteAsync(Windows::Devices::Geolocation::Geopoint const& startPoint, Windows::Devices::Geolocation::Geopoint const& endPoint, Windows::Services::Maps::MapRouteDrivingOptions const& options) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteFinderStatics3
    {
        auto GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints) const;
        auto GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<Windows::Services::Maps::EnhancedWaypoint> const& waypoints, Windows::Services::Maps::MapRouteDrivingOptions const& options) const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteFinderStatics3>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteFinderStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteLeg
    {
        [[nodiscard]] auto BoundingBox() const;
        [[nodiscard]] auto Path() const;
        [[nodiscard]] auto LengthInMeters() const;
        [[nodiscard]] auto EstimatedDuration() const;
        [[nodiscard]] auto Maneuvers() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteLeg>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteLeg<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteLeg2
    {
        [[nodiscard]] auto DurationWithoutTraffic() const;
        [[nodiscard]] auto TrafficCongestion() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteLeg2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteLeg2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteManeuver
    {
        [[nodiscard]] auto StartingPoint() const;
        [[nodiscard]] auto LengthInMeters() const;
        [[nodiscard]] auto InstructionText() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto ExitNumber() const;
        [[nodiscard]] auto ManeuverNotices() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteManeuver>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteManeuver2
    {
        [[nodiscard]] auto StartHeading() const;
        [[nodiscard]] auto EndHeading() const;
        [[nodiscard]] auto StreetName() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteManeuver2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapRouteManeuver3
    {
        [[nodiscard]] auto Warnings() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapRouteManeuver3>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapRouteManeuver3<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapServiceStatics
    {
        auto ServiceToken(param::hstring const& value) const;
        [[nodiscard]] auto ServiceToken() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapServiceStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapServiceStatics2
    {
        [[nodiscard]] auto WorldViewRegionCode() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapServiceStatics2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapServiceStatics3
    {
        [[nodiscard]] auto DataAttributions() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapServiceStatics3>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IMapServiceStatics4
    {
        auto DataUsagePreference(Windows::Services::Maps::MapServiceDataUsagePreference const& value) const;
        [[nodiscard]] auto DataUsagePreference() const;
    };
    template <> struct consume<Windows::Services::Maps::IMapServiceStatics4>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IMapServiceStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IPlaceInfo
    {
        auto Show(Windows::Foundation::Rect const& selection) const;
        auto Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        [[nodiscard]] auto Identifier() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto DisplayAddress() const;
        [[nodiscard]] auto Geoshape() const;
    };
    template <> struct consume<Windows::Services::Maps::IPlaceInfo>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IPlaceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IPlaceInfoCreateOptions
    {
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayAddress(param::hstring const& value) const;
        [[nodiscard]] auto DisplayAddress() const;
    };
    template <> struct consume<Windows::Services::Maps::IPlaceInfoCreateOptions>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IPlaceInfoCreateOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IPlaceInfoStatics
    {
        auto Create(Windows::Devices::Geolocation::Geopoint const& referencePoint) const;
        auto Create(Windows::Devices::Geolocation::Geopoint const& referencePoint, Windows::Services::Maps::PlaceInfoCreateOptions const& options) const;
        auto CreateFromIdentifier(param::hstring const& identifier) const;
        auto CreateFromIdentifier(param::hstring const& identifier, Windows::Devices::Geolocation::Geopoint const& defaultPoint, Windows::Services::Maps::PlaceInfoCreateOptions const& options) const;
        auto CreateFromMapLocation(Windows::Services::Maps::MapLocation const& location) const;
        [[nodiscard]] auto IsShowSupported() const;
    };
    template <> struct consume<Windows::Services::Maps::IPlaceInfoStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IPlaceInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_IPlaceInfoStatics2
    {
        auto CreateFromAddress(param::hstring const& displayAddress) const;
        auto CreateFromAddress(param::hstring const& displayAddress, param::hstring const& displayName) const;
    };
    template <> struct consume<Windows::Services::Maps::IPlaceInfoStatics2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_IPlaceInfoStatics2<D>;
    };
}
#endif
