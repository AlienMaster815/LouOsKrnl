// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Geolocation_2_H
#define WINRT_Windows_Devices_Geolocation_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct BasicGeoposition
    {
        double Latitude;
        double Longitude;
        double Altitude;
    };
    inline bool operator==(BasicGeoposition const& left, BasicGeoposition const& right) noexcept
    {
        return left.Latitude == right.Latitude && left.Longitude == right.Longitude && left.Altitude == right.Altitude;
    }
    inline bool operator!=(BasicGeoposition const& left, BasicGeoposition const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CivicAddress : Windows::Devices::Geolocation::ICivicAddress
    {
        CivicAddress(std::nullptr_t) noexcept {}
        CivicAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::ICivicAddress(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GeoboundingBox : Windows::Devices::Geolocation::IGeoboundingBox
    {
        GeoboundingBox(std::nullptr_t) noexcept {}
        GeoboundingBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeoboundingBox(ptr, take_ownership_from_abi) {}
        GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner);
        GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        GeoboundingBox(Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
        static auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions);
        static auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem);
        static auto TryCompute(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId);
    };
    struct __declspec(empty_bases) Geocircle : Windows::Devices::Geolocation::IGeocircle
    {
        Geocircle(std::nullptr_t) noexcept {}
        Geocircle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeocircle(ptr, take_ownership_from_abi) {}
        Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius);
        Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geocircle(Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
    };
    struct __declspec(empty_bases) Geocoordinate : Windows::Devices::Geolocation::IGeocoordinate,
        impl::require<Geocoordinate, Windows::Devices::Geolocation::IGeocoordinateWithPositionData, Windows::Devices::Geolocation::IGeocoordinateWithPoint, Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp, Windows::Devices::Geolocation::IGeocoordinateWithRemoteSource>
    {
        Geocoordinate(std::nullptr_t) noexcept {}
        Geocoordinate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeocoordinate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GeocoordinateSatelliteData : Windows::Devices::Geolocation::IGeocoordinateSatelliteData,
        impl::require<GeocoordinateSatelliteData, Windows::Devices::Geolocation::IGeocoordinateSatelliteData2>
    {
        GeocoordinateSatelliteData(std::nullptr_t) noexcept {}
        GeocoordinateSatelliteData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeocoordinateSatelliteData(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Geolocator : Windows::Devices::Geolocation::IGeolocator,
        impl::require<Geolocator, Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy, Windows::Devices::Geolocation::IGeolocator2>
    {
        Geolocator(std::nullptr_t) noexcept {}
        Geolocator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeolocator(ptr, take_ownership_from_abi) {}
        Geolocator();
        static auto RequestAccessAsync();
        static auto GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime);
        static auto GetGeopositionHistoryAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration);
        [[nodiscard]] static auto IsDefaultGeopositionRecommended();
        static auto DefaultGeoposition(Windows::Foundation::IReference<Windows::Devices::Geolocation::BasicGeoposition> const& value);
        [[nodiscard]] static auto DefaultGeoposition();
    };
    struct __declspec(empty_bases) Geopath : Windows::Devices::Geolocation::IGeopath
    {
        Geopath(std::nullptr_t) noexcept {}
        Geopath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeopath(ptr, take_ownership_from_abi) {}
        explicit Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions);
        Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geopath(param::iterable<Windows::Devices::Geolocation::BasicGeoposition> const& positions, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
    };
    struct __declspec(empty_bases) Geopoint : Windows::Devices::Geolocation::IGeopoint
    {
        Geopoint(std::nullptr_t) noexcept {}
        Geopoint(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeopoint(ptr, take_ownership_from_abi) {}
        explicit Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position);
        Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geopoint(Windows::Devices::Geolocation::BasicGeoposition const& position, Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
    };
    struct __declspec(empty_bases) Geoposition : Windows::Devices::Geolocation::IGeoposition,
        impl::require<Geoposition, Windows::Devices::Geolocation::IGeoposition2>
    {
        Geoposition(std::nullptr_t) noexcept {}
        Geoposition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeoposition(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Geovisit : Windows::Devices::Geolocation::IGeovisit
    {
        Geovisit(std::nullptr_t) noexcept {}
        Geovisit(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeovisit(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GeovisitMonitor : Windows::Devices::Geolocation::IGeovisitMonitor
    {
        GeovisitMonitor(std::nullptr_t) noexcept {}
        GeovisitMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeovisitMonitor(ptr, take_ownership_from_abi) {}
        GeovisitMonitor();
        static auto GetLastReportAsync();
    };
    struct __declspec(empty_bases) GeovisitStateChangedEventArgs : Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs
    {
        GeovisitStateChangedEventArgs(std::nullptr_t) noexcept {}
        GeovisitStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GeovisitTriggerDetails : Windows::Devices::Geolocation::IGeovisitTriggerDetails
    {
        GeovisitTriggerDetails(std::nullptr_t) noexcept {}
        GeovisitTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IGeovisitTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PositionChangedEventArgs : Windows::Devices::Geolocation::IPositionChangedEventArgs
    {
        PositionChangedEventArgs(std::nullptr_t) noexcept {}
        PositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IPositionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StatusChangedEventArgs : Windows::Devices::Geolocation::IStatusChangedEventArgs
    {
        StatusChangedEventArgs(std::nullptr_t) noexcept {}
        StatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VenueData : Windows::Devices::Geolocation::IVenueData
    {
        VenueData(std::nullptr_t) noexcept {}
        VenueData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::IVenueData(ptr, take_ownership_from_abi) {}
    };
}
#endif
