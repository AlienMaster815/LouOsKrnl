// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Geolocation_0_H
#define WINRT_Windows_Devices_Geolocation_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Devices::Geolocation
{
    enum class AltitudeReferenceSystem : int32_t
    {
        Unspecified = 0,
        Terrain = 1,
        Ellipsoid = 2,
        Geoid = 3,
        Surface = 4,
    };
    enum class GeolocationAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        Denied = 2,
    };
    enum class GeoshapeType : int32_t
    {
        Geopoint = 0,
        Geocircle = 1,
        Geopath = 2,
        GeoboundingBox = 3,
    };
    enum class PositionAccuracy : int32_t
    {
        Default = 0,
        High = 1,
    };
    enum class PositionSource : int32_t
    {
        Cellular = 0,
        Satellite = 1,
        WiFi = 2,
        IPAddress = 3,
        Unknown = 4,
        Default = 5,
        Obfuscated = 6,
    };
    enum class PositionStatus : int32_t
    {
        Ready = 0,
        Initializing = 1,
        NoData = 2,
        Disabled = 3,
        NotInitialized = 4,
        NotAvailable = 5,
    };
    enum class VisitMonitoringScope : int32_t
    {
        Venue = 0,
        City = 1,
    };
    enum class VisitStateChange : int32_t
    {
        TrackingLost = 0,
        Arrived = 1,
        Departed = 2,
        OtherMovement = 3,
    };
    struct ICivicAddress;
    struct IGeoboundingBox;
    struct IGeoboundingBoxFactory;
    struct IGeoboundingBoxStatics;
    struct IGeocircle;
    struct IGeocircleFactory;
    struct IGeocoordinate;
    struct IGeocoordinateSatelliteData;
    struct IGeocoordinateWithPoint;
    struct IGeocoordinateWithPositionData;
    struct IGeocoordinateWithPositionSourceTimestamp;
    struct IGeolocator;
    struct IGeolocator2;
    struct IGeolocatorStatics;
    struct IGeolocatorStatics2;
    struct IGeolocatorWithScalarAccuracy;
    struct IGeopath;
    struct IGeopathFactory;
    struct IGeopoint;
    struct IGeopointFactory;
    struct IGeoposition;
    struct IGeoposition2;
    struct IGeoshape;
    struct IGeovisit;
    struct IGeovisitMonitor;
    struct IGeovisitMonitorStatics;
    struct IGeovisitStateChangedEventArgs;
    struct IGeovisitTriggerDetails;
    struct IPositionChangedEventArgs;
    struct IStatusChangedEventArgs;
    struct IVenueData;
    struct CivicAddress;
    struct GeoboundingBox;
    struct Geocircle;
    struct Geocoordinate;
    struct GeocoordinateSatelliteData;
    struct Geolocator;
    struct Geopath;
    struct Geopoint;
    struct Geoposition;
    struct Geovisit;
    struct GeovisitMonitor;
    struct GeovisitStateChangedEventArgs;
    struct GeovisitTriggerDetails;
    struct PositionChangedEventArgs;
    struct StatusChangedEventArgs;
    struct VenueData;
    struct BasicGeoposition;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Geolocation::ICivicAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoboundingBox>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoboundingBoxFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoboundingBoxStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocircle>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocircleFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocoordinate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPoint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeolocator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeolocator2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeolocatorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeolocatorStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeopath>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeopathFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeopoint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeopointFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoposition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoposition2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeoshape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeovisit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeovisitMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeovisitMonitorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IGeovisitTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IPositionChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IStatusChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::IVenueData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Geolocation::CivicAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeoboundingBox>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geocircle>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geocoordinate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeocoordinateSatelliteData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geolocator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geopath>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geopoint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geoposition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::Geovisit>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeovisitMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeovisitStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeovisitTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::PositionChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::StatusChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::VenueData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Geolocation::AltitudeReferenceSystem>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeolocationAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::GeoshapeType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::PositionAccuracy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::PositionSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::PositionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::VisitMonitoringScope>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::VisitStateChange>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Geolocation::BasicGeoposition>
    {
        using type = struct_category<double, double, double>;
    };
    template <> struct name<Windows::Devices::Geolocation::ICivicAddress>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.ICivicAddress" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoboundingBox>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBox" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoboundingBoxFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBoxFactory" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoboundingBoxStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoboundingBoxStatics" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocircle>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocircle" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocircleFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocircleFactory" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocoordinate>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinate" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateSatelliteData" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPoint>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPoint" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPositionData" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeolocator>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocator" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeolocator2>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocator2" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeolocatorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorStatics" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeolocatorStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorStatics2" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeopath>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopath" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeopathFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopathFactory" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeopoint>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopoint" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeopointFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeopointFactory" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoposition>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoposition" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoposition2>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoposition2" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeoshape>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeoshape" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeovisit>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeovisit" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeovisitMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeovisitMonitor" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeovisitMonitorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeovisitMonitorStatics" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::IGeovisitTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IGeovisitTriggerDetails" };
    };
    template <> struct name<Windows::Devices::Geolocation::IPositionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IPositionChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::IStatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IStatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::IVenueData>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.IVenueData" };
    };
    template <> struct name<Windows::Devices::Geolocation::CivicAddress>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.CivicAddress" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeoboundingBox>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeoboundingBox" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geocircle>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geocircle" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geocoordinate>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geocoordinate" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeocoordinateSatelliteData>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeocoordinateSatelliteData" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geolocator>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geolocator" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geopath>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geopath" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geopoint>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geopoint" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geoposition>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geoposition" };
    };
    template <> struct name<Windows::Devices::Geolocation::Geovisit>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.Geovisit" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeovisitMonitor>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeovisitMonitor" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeovisitStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeovisitStateChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeovisitTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeovisitTriggerDetails" };
    };
    template <> struct name<Windows::Devices::Geolocation::PositionChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::StatusChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.StatusChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Geolocation::VenueData>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.VenueData" };
    };
    template <> struct name<Windows::Devices::Geolocation::AltitudeReferenceSystem>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.AltitudeReferenceSystem" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeolocationAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeolocationAccessStatus" };
    };
    template <> struct name<Windows::Devices::Geolocation::GeoshapeType>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.GeoshapeType" };
    };
    template <> struct name<Windows::Devices::Geolocation::PositionAccuracy>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionAccuracy" };
    };
    template <> struct name<Windows::Devices::Geolocation::PositionSource>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionSource" };
    };
    template <> struct name<Windows::Devices::Geolocation::PositionStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.PositionStatus" };
    };
    template <> struct name<Windows::Devices::Geolocation::VisitMonitoringScope>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.VisitMonitoringScope" };
    };
    template <> struct name<Windows::Devices::Geolocation::VisitStateChange>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.VisitStateChange" };
    };
    template <> struct name<Windows::Devices::Geolocation::BasicGeoposition>
    {
        static constexpr auto & value{ L"Windows.Devices.Geolocation.BasicGeoposition" };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::ICivicAddress>
    {
        static constexpr guid value{ 0xA8567A1A,0x64F4,0x4D48,{ 0xBC,0xEA,0xF6,0xB0,0x08,0xEC,0xA3,0x4C } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoboundingBox>
    {
        static constexpr guid value{ 0x0896C80B,0x274F,0x43DA,{ 0x9A,0x06,0xCB,0xFC,0xDA,0xEB,0x4E,0xC2 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoboundingBoxFactory>
    {
        static constexpr guid value{ 0x4DFBA589,0x0411,0x4ABC,{ 0xB3,0xB5,0x5B,0xBC,0xCB,0x57,0xD9,0x8C } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoboundingBoxStatics>
    {
        static constexpr guid value{ 0x67B80708,0xE61A,0x4CD0,{ 0x84,0x1B,0x93,0x23,0x37,0x92,0xB5,0xCA } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocircle>
    {
        static constexpr guid value{ 0x39E45843,0xA7F9,0x4E63,{ 0x92,0xA7,0xBA,0x0C,0x28,0xD1,0x24,0xB1 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocircleFactory>
    {
        static constexpr guid value{ 0xAFD6531F,0x72B1,0x4F7D,{ 0x87,0xCC,0x4E,0xD4,0xC9,0x84,0x9C,0x05 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocoordinate>
    {
        static constexpr guid value{ 0xEE21A3AA,0x976A,0x4C70,{ 0x80,0x3D,0x08,0x3E,0xA5,0x5B,0xCB,0xC4 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
    {
        static constexpr guid value{ 0xC32A74D9,0x2608,0x474C,{ 0x91,0x2C,0x06,0xDD,0x49,0x0F,0x4A,0xF7 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocoordinateWithPoint>
    {
        static constexpr guid value{ 0xFEEA0525,0xD22C,0x4D46,{ 0xB5,0x27,0x0B,0x96,0x06,0x6F,0xC7,0xDB } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
    {
        static constexpr guid value{ 0x95E634BE,0xDBD6,0x40AC,{ 0xB8,0xF2,0xA6,0x5C,0x03,0x40,0xD9,0xA6 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        static constexpr guid value{ 0x8543FC02,0xC9F1,0x4610,{ 0xAF,0xE0,0x8B,0xC3,0xA6,0xA8,0x70,0x36 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeolocator>
    {
        static constexpr guid value{ 0xA9C3BF62,0x4524,0x4989,{ 0x8A,0xA9,0xDE,0x01,0x9D,0x2E,0x55,0x1F } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeolocator2>
    {
        static constexpr guid value{ 0xD1B42E6D,0x8891,0x43B4,{ 0xAD,0x36,0x27,0xC6,0xFE,0x9A,0x97,0xB1 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeolocatorStatics>
    {
        static constexpr guid value{ 0x9A8E7571,0x2DF5,0x4591,{ 0x9F,0x87,0xEB,0x5F,0xD8,0x94,0xE9,0xB7 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeolocatorStatics2>
    {
        static constexpr guid value{ 0x993011A2,0xFA1C,0x4631,{ 0xA7,0x1D,0x0D,0xBE,0xB1,0x25,0x0D,0x9C } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
    {
        static constexpr guid value{ 0x96F5D3C1,0xB80F,0x460A,{ 0x99,0x4D,0xA9,0x6C,0x47,0xA5,0x1A,0xA4 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeopath>
    {
        static constexpr guid value{ 0xE53FD7B9,0x2DA4,0x4714,{ 0xA6,0x52,0xDE,0x85,0x93,0x28,0x98,0x98 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeopathFactory>
    {
        static constexpr guid value{ 0x27BEA9C8,0xC7E7,0x4359,{ 0x9B,0x9B,0xFC,0xA3,0xE0,0x5E,0xF5,0x93 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeopoint>
    {
        static constexpr guid value{ 0x6BFA00EB,0xE56E,0x49BB,{ 0x9C,0xAF,0xCB,0xAA,0x78,0xA8,0xBC,0xEF } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeopointFactory>
    {
        static constexpr guid value{ 0xDB6B8D33,0x76BD,0x4E30,{ 0x8A,0xF7,0xA8,0x44,0xDC,0x37,0xB7,0xA0 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoposition>
    {
        static constexpr guid value{ 0xC18D0454,0x7D41,0x4FF7,{ 0xA9,0x57,0x9D,0xFF,0xB4,0xEF,0x7F,0x5B } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoposition2>
    {
        static constexpr guid value{ 0x7F62F697,0x8671,0x4B0D,{ 0x86,0xF8,0x47,0x4A,0x84,0x96,0x18,0x7C } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeoshape>
    {
        static constexpr guid value{ 0xC99CA2AF,0xC729,0x43C1,{ 0x8F,0xAB,0xD6,0xDE,0xC9,0x14,0xDF,0x7E } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeovisit>
    {
        static constexpr guid value{ 0xB1877A76,0x9EF6,0x41AB,{ 0xA0,0xDD,0x79,0x3E,0xCE,0x76,0xE2,0xDE } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeovisitMonitor>
    {
        static constexpr guid value{ 0x80118AAF,0x5944,0x4591,{ 0x83,0xC1,0x39,0x66,0x47,0xF5,0x4F,0x2C } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeovisitMonitorStatics>
    {
        static constexpr guid value{ 0xBCF976A7,0xBBF2,0x4CDD,{ 0x95,0xCF,0x55,0x4C,0x82,0xED,0xFB,0x87 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs>
    {
        static constexpr guid value{ 0xCEB4D1FF,0x8B53,0x4968,{ 0xBE,0xED,0x4C,0xEC,0xD0,0x29,0xCE,0x15 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IGeovisitTriggerDetails>
    {
        static constexpr guid value{ 0xEA770D9E,0xD1C9,0x454B,{ 0x99,0xB7,0xB2,0xF8,0xCD,0xD2,0x48,0x2F } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IPositionChangedEventArgs>
    {
        static constexpr guid value{ 0x37859CE5,0x9D1E,0x46C5,{ 0xBF,0x3B,0x6A,0xD8,0xCA,0xC1,0xA0,0x93 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IStatusChangedEventArgs>
    {
        static constexpr guid value{ 0x3453D2DA,0x8C93,0x4111,{ 0xA2,0x05,0x9A,0xEC,0xFC,0x9B,0xE5,0xC0 } };
    };
    template <> struct guid_storage<Windows::Devices::Geolocation::IVenueData>
    {
        static constexpr guid value{ 0x66F39187,0x60E3,0x4B2F,{ 0xB5,0x27,0x4F,0x53,0xF1,0xC3,0xC6,0x77 } };
    };
    template <> struct default_interface<Windows::Devices::Geolocation::CivicAddress>
    {
        using type = Windows::Devices::Geolocation::ICivicAddress;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::GeoboundingBox>
    {
        using type = Windows::Devices::Geolocation::IGeoboundingBox;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geocircle>
    {
        using type = Windows::Devices::Geolocation::IGeocircle;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geocoordinate>
    {
        using type = Windows::Devices::Geolocation::IGeocoordinate;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::GeocoordinateSatelliteData>
    {
        using type = Windows::Devices::Geolocation::IGeocoordinateSatelliteData;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geolocator>
    {
        using type = Windows::Devices::Geolocation::IGeolocator;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geopath>
    {
        using type = Windows::Devices::Geolocation::IGeopath;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geopoint>
    {
        using type = Windows::Devices::Geolocation::IGeopoint;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geoposition>
    {
        using type = Windows::Devices::Geolocation::IGeoposition;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::Geovisit>
    {
        using type = Windows::Devices::Geolocation::IGeovisit;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::GeovisitMonitor>
    {
        using type = Windows::Devices::Geolocation::IGeovisitMonitor;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::GeovisitStateChangedEventArgs>
    {
        using type = Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::GeovisitTriggerDetails>
    {
        using type = Windows::Devices::Geolocation::IGeovisitTriggerDetails;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::PositionChangedEventArgs>
    {
        using type = Windows::Devices::Geolocation::IPositionChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::StatusChangedEventArgs>
    {
        using type = Windows::Devices::Geolocation::IStatusChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Geolocation::VenueData>
    {
        using type = Windows::Devices::Geolocation::IVenueData;
    };
    template <> struct abi<Windows::Devices::Geolocation::ICivicAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
            virtual int32_t __stdcall get_City(void**) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NorthwestCorner(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
            virtual int32_t __stdcall get_SoutheastCorner(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
            virtual int32_t __stdcall get_Center(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
            virtual int32_t __stdcall get_MinAltitude(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAltitude(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBoxFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(struct struct_Windows_Devices_Geolocation_BasicGeoposition, struct struct_Windows_Devices_Geolocation_BasicGeoposition, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReference(struct struct_Windows_Devices_Geolocation_BasicGeoposition, struct struct_Windows_Devices_Geolocation_BasicGeoposition, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceAndSpatialReference(struct struct_Windows_Devices_Geolocation_BasicGeoposition, struct struct_Windows_Devices_Geolocation_BasicGeoposition, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoboundingBoxStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCompute(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryComputeWithAltitudeReference(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryComputeWithAltitudeReferenceAndSpatialReference(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocircle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
            virtual int32_t __stdcall get_Radius(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocircleFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(struct struct_Windows_Devices_Geolocation_BasicGeoposition, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceSystem(struct struct_Windows_Devices_Geolocation_BasicGeoposition, double, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(struct struct_Windows_Devices_Geolocation_BasicGeoposition, double, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocoordinate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Latitude(double*) noexcept = 0;
            virtual int32_t __stdcall get_Longitude(double*) noexcept = 0;
            virtual int32_t __stdcall get_Altitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_Accuracy(double*) noexcept = 0;
            virtual int32_t __stdcall get_AltitudeAccuracy(void**) noexcept = 0;
            virtual int32_t __stdcall get_Heading(void**) noexcept = 0;
            virtual int32_t __stdcall get_Speed(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionDilutionOfPrecision(void**) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalDilutionOfPrecision(void**) noexcept = 0;
            virtual int32_t __stdcall get_VerticalDilutionOfPrecision(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SatelliteData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionSourceTimestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeolocator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredAccuracy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredAccuracy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MovementThreshold(double*) noexcept = 0;
            virtual int32_t __stdcall put_MovementThreshold(double) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_LocationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetGeopositionAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetGeopositionAsyncWithAgeAndTimeout(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_PositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeolocator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AllowFallbackToConsentlessPositions() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeolocatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetGeopositionHistoryAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetGeopositionHistoryWithDurationAsync(int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeolocatorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDefaultGeopositionRecommended(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultGeoposition(void*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultGeoposition(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredAccuracyInMeters(void**) noexcept = 0;
            virtual int32_t __stdcall put_DesiredAccuracyInMeters(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeopath>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Positions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeopathFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReference(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceAndSpatialReference(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeopoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeopointFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(struct struct_Windows_Devices_Geolocation_BasicGeoposition, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceSystem(struct struct_Windows_Devices_Geolocation_BasicGeoposition, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAltitudeReferenceSystemAndSpatialReferenceId(struct struct_Windows_Devices_Geolocation_BasicGeoposition, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoposition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Coordinate(void**) noexcept = 0;
            virtual int32_t __stdcall get_CivicAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoposition2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VenueData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeoshape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GeoshapeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SpatialReferenceId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AltitudeReferenceSystem(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeovisit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(void**) noexcept = 0;
            virtual int32_t __stdcall get_StateChange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeovisitMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MonitoringScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start(int32_t) noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_VisitStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisitStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeovisitMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLastReportAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visit(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IGeovisitTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IPositionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Geolocation::IVenueData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Level(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_ICivicAddress
    {
        [[nodiscard]] auto Country() const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto City() const;
        [[nodiscard]] auto PostalCode() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::ICivicAddress>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_ICivicAddress<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoboundingBox
    {
        [[nodiscard]] auto NorthwestCorner() const;
        [[nodiscard]] auto SoutheastCorner() const;
        [[nodiscard]] auto Center() const;
        [[nodiscard]] auto MinAltitude() const;
        [[nodiscard]] auto MaxAltitude() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBox>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBox<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory
    {
        auto Create(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner) const;
        auto CreateWithAltitudeReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
        auto CreateWithAltitudeReferenceAndSpatialReference(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBoxFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBoxFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics
    {
        auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const;
        auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem) const;
        auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoboundingBoxStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoboundingBoxStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocircle
    {
        [[nodiscard]] auto Center() const;
        [[nodiscard]] auto Radius() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocircle>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocircle<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocircleFactory
    {
        auto Create(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius) const;
        auto CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
        auto CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocircleFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocircleFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocoordinate
    {
        [[nodiscard]] auto Latitude() const;
        [[nodiscard]] auto Longitude() const;
        [[nodiscard]] auto Altitude() const;
        [[nodiscard]] auto Accuracy() const;
        [[nodiscard]] auto AltitudeAccuracy() const;
        [[nodiscard]] auto Heading() const;
        [[nodiscard]] auto Speed() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocoordinate>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinate<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData
    {
        [[nodiscard]] auto PositionDilutionOfPrecision() const;
        [[nodiscard]] auto HorizontalDilutionOfPrecision() const;
        [[nodiscard]] auto VerticalDilutionOfPrecision() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateSatelliteData>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateSatelliteData<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPoint
    {
        [[nodiscard]] auto Point() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPoint>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPoint<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData
    {
        [[nodiscard]] auto PositionSource() const;
        [[nodiscard]] auto SatelliteData() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPositionData>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionData<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp
    {
        [[nodiscard]] auto PositionSourceTimestamp() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeolocator
    {
        [[nodiscard]] auto DesiredAccuracy() const;
        auto DesiredAccuracy(Windows::Devices::Geolocation::PositionAccuracy const& value) const;
        [[nodiscard]] auto MovementThreshold() const;
        auto MovementThreshold(double value) const;
        [[nodiscard]] auto ReportInterval() const;
        auto ReportInterval(uint32_t value) const;
        [[nodiscard]] auto LocationStatus() const;
        auto GetGeopositionAsync() const;
        auto GetGeopositionAsync(Windows::Foundation::TimeSpan const& maximumAge, Windows::Foundation::TimeSpan const& timeout) const;
        auto PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const;
        using PositionChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::IGeolocator, &impl::abi_t<Windows::Devices::Geolocation::IGeolocator>::remove_PositionChanged>;
        PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::PositionChangedEventArgs> const& handler) const;
        auto PositionChanged(winrt::event_token const& token) const noexcept;
        auto StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::IGeolocator, &impl::abi_t<Windows::Devices::Geolocation::IGeolocator>::remove_StatusChanged>;
        StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geolocator, Windows::Devices::Geolocation::StatusChangedEventArgs> const& handler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeolocator>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocator<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeolocator2
    {
        auto AllowFallbackToConsentlessPositions() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeolocator2>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocator2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeolocatorStatics
    {
        auto RequestAccessAsync() const;
        auto GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime) const;
        auto GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeolocatorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeolocatorStatics2
    {
        [[nodiscard]] auto IsDefaultGeopositionRecommended() const;
        auto DefaultGeoposition(Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> const& value) const;
        [[nodiscard]] auto DefaultGeoposition() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeolocatorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy
    {
        [[nodiscard]] auto DesiredAccuracyInMeters() const;
        auto DesiredAccuracyInMeters(Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeopath
    {
        [[nodiscard]] auto Positions() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeopath>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopath<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeopathFactory
    {
        auto Create(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions) const;
        auto CreateWithAltitudeReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
        auto CreateWithAltitudeReferenceAndSpatialReference(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeopathFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopathFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeopoint
    {
        [[nodiscard]] auto Position() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeopoint>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopoint<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeopointFactory
    {
        auto Create(Windows::Devices::Geolocation::BasicGeoposition const& position) const;
        auto CreateWithAltitudeReferenceSystem(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem) const;
        auto CreateWithAltitudeReferenceSystemAndSpatialReferenceId(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId) const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeopointFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeopointFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoposition
    {
        [[nodiscard]] auto Coordinate() const;
        [[nodiscard]] auto CivicAddress() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoposition>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoposition<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoposition2
    {
        [[nodiscard]] auto VenueData() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoposition2>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoposition2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeoshape
    {
        [[nodiscard]] auto GeoshapeType() const;
        [[nodiscard]] auto SpatialReferenceId() const;
        [[nodiscard]] auto AltitudeReferenceSystem() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeoshape>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeoshape<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeovisit
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto StateChange() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeovisit>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeovisit<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeovisitMonitor
    {
        [[nodiscard]] auto MonitoringScope() const;
        auto Start(Windows::Devices::Geolocation::VisitMonitoringScope const& value) const;
        auto Stop() const;
        auto VisitStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::GeovisitMonitor, Windows::Devices::Geolocation::GeovisitStateChangedEventArgs> const& handler) const;
        using VisitStateChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::IGeovisitMonitor, &impl::abi_t<Windows::Devices::Geolocation::IGeovisitMonitor>::remove_VisitStateChanged>;
        VisitStateChanged_revoker VisitStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::GeovisitMonitor, Windows::Devices::Geolocation::GeovisitStateChangedEventArgs> const& handler) const;
        auto VisitStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeovisitMonitor>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeovisitMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeovisitMonitorStatics
    {
        auto GetLastReportAsync() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeovisitMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeovisitMonitorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeovisitStateChangedEventArgs
    {
        [[nodiscard]] auto Visit() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeovisitStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IGeovisitTriggerDetails
    {
        auto ReadReports() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IGeovisitTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IGeovisitTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IPositionChangedEventArgs
    {
        [[nodiscard]] auto Position() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IPositionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IPositionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IStatusChangedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Geolocation_IVenueData
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Level() const;
    };
    template <> struct consume<Windows::Devices::Geolocation::IVenueData>
    {
        template <typename D> using type = consume_Windows_Devices_Geolocation_IVenueData<D>;
    };
    struct struct_Windows_Devices_Geolocation_BasicGeoposition
    {
        double Latitude;
        double Longitude;
        double Altitude;
    };
    template <> struct abi<Windows::Devices::Geolocation::BasicGeoposition>
    {
        using type = struct_Windows_Devices_Geolocation_BasicGeoposition;
    };
}
#endif
