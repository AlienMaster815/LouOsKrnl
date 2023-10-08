// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Spatial_0_H
#define WINRT_Windows_Perception_Spatial_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
    struct ValueSet;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::System::RemoteSystems
{
    struct RemoteSystemSession;
}
namespace winrt::Windows::Perception::Spatial
{
    enum class SpatialAnchorExportPurpose : int32_t
    {
        Relocalization = 0,
        Sharing = 1,
    };
    enum class SpatialEntityWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class SpatialLocatability : int32_t
    {
        Unavailable = 0,
        OrientationOnly = 1,
        PositionalTrackingActivating = 2,
        PositionalTrackingActive = 3,
        PositionalTrackingInhibited = 4,
    };
    enum class SpatialLookDirectionRange : int32_t
    {
        ForwardOnly = 0,
        Omnidirectional = 1,
    };
    enum class SpatialMovementRange : int32_t
    {
        NoMovement = 0,
        Bounded = 1,
    };
    enum class SpatialPerceptionAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    struct ISpatialAnchor;
    struct ISpatialAnchor2;
    struct ISpatialAnchorExportSufficiency;
    struct ISpatialAnchorExporter;
    struct ISpatialAnchorExporterStatics;
    struct ISpatialAnchorManagerStatics;
    struct ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    struct ISpatialAnchorStatics;
    struct ISpatialAnchorStore;
    struct ISpatialAnchorTransferManagerStatics;
    struct ISpatialBoundingVolume;
    struct ISpatialBoundingVolumeStatics;
    struct ISpatialCoordinateSystem;
    struct ISpatialEntity;
    struct ISpatialEntityAddedEventArgs;
    struct ISpatialEntityFactory;
    struct ISpatialEntityRemovedEventArgs;
    struct ISpatialEntityStore;
    struct ISpatialEntityStoreStatics;
    struct ISpatialEntityUpdatedEventArgs;
    struct ISpatialEntityWatcher;
    struct ISpatialLocation;
    struct ISpatialLocation2;
    struct ISpatialLocator;
    struct ISpatialLocatorAttachedFrameOfReference;
    struct ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
    struct ISpatialLocatorStatics;
    struct ISpatialStageFrameOfReference;
    struct ISpatialStageFrameOfReferenceStatics;
    struct ISpatialStationaryFrameOfReference;
    struct SpatialAnchor;
    struct SpatialAnchorExportSufficiency;
    struct SpatialAnchorExporter;
    struct SpatialAnchorManager;
    struct SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    struct SpatialAnchorStore;
    struct SpatialAnchorTransferManager;
    struct SpatialBoundingVolume;
    struct SpatialCoordinateSystem;
    struct SpatialEntity;
    struct SpatialEntityAddedEventArgs;
    struct SpatialEntityRemovedEventArgs;
    struct SpatialEntityStore;
    struct SpatialEntityUpdatedEventArgs;
    struct SpatialEntityWatcher;
    struct SpatialLocation;
    struct SpatialLocator;
    struct SpatialLocatorAttachedFrameOfReference;
    struct SpatialLocatorPositionalTrackingDeactivatingEventArgs;
    struct SpatialStageFrameOfReference;
    struct SpatialStationaryFrameOfReference;
    struct SpatialBoundingBox;
    struct SpatialBoundingFrustum;
    struct SpatialBoundingOrientedBox;
    struct SpatialBoundingSphere;
    struct SpatialRay;
}
namespace winrt::impl
{
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntity>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorExportSufficiency>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorExporter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorTransferManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialBoundingVolume>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialCoordinateSystem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntity>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityWatcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLocation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLocator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialStageFrameOfReference>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialAnchorExportPurpose>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialEntityWatcherStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLocatability>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialLookDirectionRange>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialMovementRange>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialBoundingBox>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3>;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        using type = struct_category<Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::plane>;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion>;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, float>;
    };
    template <> struct category<Windows::Perception::Spatial::SpatialRay>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3>;
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchor>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchor" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchor2>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchor2" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorExportSufficiency" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorExporter" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorExporterStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorStore" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialBoundingVolume" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialCoordinateSystem" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntity>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntity" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityFactory" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityStore>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityStore" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityStoreStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialEntityWatcher" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocation>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocation" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocation2>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocation2" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocator>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocator" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialLocatorStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStageFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics" };
    };
    template <> struct name<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchor>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchor" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorExportSufficiency>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorExportSufficiency" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorExporter>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorExporter" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorManager>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorManager" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorStore>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorStore" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorTransferManager>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorTransferManager" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialBoundingVolume>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingVolume" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialCoordinateSystem>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialCoordinateSystem" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntity>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntity" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityStore>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityStore" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityWatcher>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityWatcher" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLocation>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocation" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLocator>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocator" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialStageFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialStageFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialAnchorExportPurpose>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialAnchorExportPurpose" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialEntityWatcherStatus>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialEntityWatcherStatus" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLocatability>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLocatability" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialLookDirectionRange>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialLookDirectionRange" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialMovementRange>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialMovementRange" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialPerceptionAccessStatus" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialBoundingBox>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingBox" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingFrustum" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingOrientedBox" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialBoundingSphere" };
    };
    template <> struct name<Windows::Perception::Spatial::SpatialRay>
    {
        static constexpr auto & value{ L"Windows.Perception.Spatial.SpatialRay" };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchor>
    {
        static constexpr guid value{ 0x0529E5CE,0x1D34,0x3702,{ 0xBC,0xEC,0xEA,0xBF,0xF5,0x78,0xA8,0x69 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchor2>
    {
        static constexpr guid value{ 0xED17C908,0xA695,0x4CF6,{ 0x92,0xFD,0x97,0x26,0x3B,0xA7,0x10,0x47 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        static constexpr guid value{ 0x77C25B2B,0x3409,0x4088,{ 0xB9,0x1B,0xFD,0xFD,0x05,0xD1,0x64,0x8F } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        static constexpr guid value{ 0x9A2A4338,0x24FB,0x4269,{ 0x89,0xC5,0x88,0x30,0x4A,0xEE,0xF2,0x0F } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        static constexpr guid value{ 0xED2507B8,0x2475,0x439C,{ 0x85,0xFF,0x7F,0xED,0x34,0x1F,0xDC,0x88 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        static constexpr guid value{ 0x88E30EAB,0xF3B7,0x420B,{ 0xB0,0x86,0x8A,0x80,0xC0,0x7D,0x91,0x0D } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        static constexpr guid value{ 0xA1E81EB8,0x56C7,0x3117,{ 0xA2,0xE4,0x81,0xE0,0xFC,0xF2,0x8E,0x00 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        static constexpr guid value{ 0xA9928642,0x0174,0x311C,{ 0xAE,0x79,0x0E,0x51,0x07,0x66,0x9F,0x16 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        static constexpr guid value{ 0xB0BC3636,0x486A,0x3CB0,{ 0x9E,0x6F,0x12,0x45,0x16,0x5C,0x4D,0xB6 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        static constexpr guid value{ 0x03BBF9B9,0x12D8,0x4BCE,{ 0x88,0x35,0xC5,0xDF,0x3A,0xC0,0xAD,0xAB } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        static constexpr guid value{ 0xFB2065DA,0x68C3,0x33DF,{ 0xB7,0xAF,0x4C,0x78,0x72,0x07,0x99,0x9C } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        static constexpr guid value{ 0x05889117,0xB3E1,0x36D8,{ 0xB0,0x17,0x56,0x61,0x81,0xA5,0xB1,0x96 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        static constexpr guid value{ 0x69EBCA4B,0x60A3,0x3586,{ 0xA6,0x53,0x59,0xA7,0xBD,0x67,0x6D,0x07 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntity>
    {
        static constexpr guid value{ 0x166DE955,0xE1EB,0x454C,{ 0xBA,0x08,0xE6,0xC0,0x66,0x8D,0xDC,0x65 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        static constexpr guid value{ 0xA397F49B,0x156A,0x4707,{ 0xAC,0x2C,0xD3,0x1D,0x57,0x0E,0xD3,0x99 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        static constexpr guid value{ 0xE1F1E325,0x349F,0x4225,{ 0xA2,0xF3,0x4B,0x01,0xC1,0x5F,0xE0,0x56 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        static constexpr guid value{ 0x91741800,0x536D,0x4E9F,{ 0xAB,0xF6,0x41,0x5B,0x54,0x44,0xD6,0x51 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityStore>
    {
        static constexpr guid value{ 0x329788BA,0xE513,0x4F06,{ 0x88,0x9D,0x1B,0xE3,0x0E,0xCF,0x43,0xE6 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        static constexpr guid value{ 0x6B4B389E,0x7C50,0x4E92,{ 0x8A,0x62,0x4D,0x1D,0x4B,0x7C,0xCD,0x3E } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        static constexpr guid value{ 0xE5671766,0x627B,0x43CB,{ 0xA4,0x9F,0xB3,0xBE,0x6D,0x47,0xDE,0xED } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        static constexpr guid value{ 0xB3B85FA0,0x6D5E,0x4BBC,{ 0x80,0x5D,0x5F,0xE5,0xB9,0xBA,0x19,0x59 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocation>
    {
        static constexpr guid value{ 0x1D81D29D,0x24A1,0x37D5,{ 0x8F,0xA1,0x39,0xB4,0xF9,0xAD,0x67,0xE2 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocation2>
    {
        static constexpr guid value{ 0x117F2416,0x38A7,0x4A18,{ 0xB4,0x04,0xAB,0x8F,0xAB,0xE1,0xD7,0x8B } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocator>
    {
        static constexpr guid value{ 0xF6478925,0x9E0C,0x3BB6,{ 0x99,0x7E,0xB6,0x4E,0xCC,0xA2,0x4C,0xF4 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        static constexpr guid value{ 0xE1774EF6,0x1F4F,0x499C,{ 0x96,0x25,0xEF,0x5E,0x6E,0xD7,0xA0,0x48 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        static constexpr guid value{ 0xB8A84063,0xE3F4,0x368B,{ 0x90,0x61,0x9E,0xA9,0xD1,0xD6,0xCC,0x16 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        static constexpr guid value{ 0xB76E3340,0xA7C2,0x361B,{ 0xBB,0x82,0x56,0xE9,0x3B,0x89,0xB1,0xBB } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        static constexpr guid value{ 0x7A8A3464,0xAD0D,0x4590,{ 0xAB,0x86,0x33,0x06,0x2B,0x67,0x49,0x26 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        static constexpr guid value{ 0xF78D5C4D,0xA0A4,0x499C,{ 0x8D,0x91,0xA8,0xC9,0x65,0xD4,0x06,0x54 } };
    };
    template <> struct guid_storage<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        static constexpr guid value{ 0x09DBCCB9,0xBCF8,0x3E7F,{ 0xBE,0x7E,0x7E,0xDC,0xCB,0xB1,0x78,0xA8 } };
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchor>
    {
        using type = Windows::Perception::Spatial::ISpatialAnchor;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorExportSufficiency>
    {
        using type = Windows::Perception::Spatial::ISpatialAnchorExportSufficiency;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorExporter>
    {
        using type = Windows::Perception::Spatial::ISpatialAnchorExporter;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        using type = Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialAnchorStore>
    {
        using type = Windows::Perception::Spatial::ISpatialAnchorStore;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialBoundingVolume>
    {
        using type = Windows::Perception::Spatial::ISpatialBoundingVolume;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialCoordinateSystem>
    {
        using type = Windows::Perception::Spatial::ISpatialCoordinateSystem;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntity>
    {
        using type = Windows::Perception::Spatial::ISpatialEntity;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityAddedEventArgs>
    {
        using type = Windows::Perception::Spatial::ISpatialEntityAddedEventArgs;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>
    {
        using type = Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityStore>
    {
        using type = Windows::Perception::Spatial::ISpatialEntityStore;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>
    {
        using type = Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialEntityWatcher>
    {
        using type = Windows::Perception::Spatial::ISpatialEntityWatcher;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialLocation>
    {
        using type = Windows::Perception::Spatial::ISpatialLocation;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialLocator>
    {
        using type = Windows::Perception::Spatial::ISpatialLocator;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>
    {
        using type = Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        using type = Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialStageFrameOfReference>
    {
        using type = Windows::Perception::Spatial::ISpatialStageFrameOfReference;
    };
    template <> struct default_interface<Windows::Perception::Spatial::SpatialStationaryFrameOfReference>
    {
        using type = Windows::Perception::Spatial::ISpatialStationaryFrameOfReference;
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawCoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall add_RawCoordinateSystemAdjusted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RawCoordinateSystemAdjusted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemovedByUser(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMinimallySufficient(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SufficiencyLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_RecommendedSufficiencyLevel(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAnchorExportSufficiencyAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryExportAnchorAsync(void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(Windows::Foundation::Numerics::float4x4*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateRelativeTo(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateWithPositionRelativeTo(void*, Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateWithPositionAndOrientationRelativeTo(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAllSavedAnchors(void**) noexcept = 0;
            virtual int32_t __stdcall TrySave(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryImportAnchorsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryExportAnchorsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromBox(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingBox, void**) noexcept = 0;
            virtual int32_t __stdcall FromOrientedBox(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox, void**) noexcept = 0;
            virtual int32_t __stdcall FromSphere(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingSphere, void**) noexcept = 0;
            virtual int32_t __stdcall FromFrustum(void*, struct struct_Windows_Perception_Spatial_SpatialBoundingFrustum, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetTransformTo(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Anchor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithSpatialAnchor(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSpatialAnchorAndProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEntityWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetForRemoteSystemSession(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Entity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteLinearVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteLinearAcceleration(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularVelocity(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularAcceleration(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteAngularVelocityAxisAngle(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteAngularAccelerationAxisAngle(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Locatability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_LocatabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LocatabilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PositionalTrackingDeactivating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionalTrackingDeactivating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryLocateAtTimestamp(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeading(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativePosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RelativePosition(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_RelativeOrientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeOrientation(Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall AdjustHeading(double) noexcept = 0;
            virtual int32_t __stdcall GetStationaryCoordinateSystemAtTimestamp(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetRelativeHeadingAtTimestamp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Canceled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Canceled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_MovementRange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LookDirectionRange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCoordinateSystemAtCurrentLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetMovementBounds(void*, uint32_t* __valueSize, Windows::Foundation::Numerics::float3**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall add_CurrentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestNewStageAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchor
    {
        [[nodiscard]] auto CoordinateSystem() const;
        [[nodiscard]] auto RawCoordinateSystem() const;
        auto RawCoordinateSystemAdjusted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
        using RawCoordinateSystemAdjusted_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialAnchor, &impl::abi_t<Windows::Perception::Spatial::ISpatialAnchor>::remove_RawCoordinateSystemAdjusted>;
        RawCoordinateSystemAdjusted_revoker RawCoordinateSystemAdjusted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialAnchor, Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs> const& handler) const;
        auto RawCoordinateSystemAdjusted(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchor>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchor2
    {
        [[nodiscard]] auto RemovedByUser() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchor2>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchor2<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExportSufficiency
    {
        [[nodiscard]] auto IsMinimallySufficient() const;
        [[nodiscard]] auto SufficiencyLevel() const;
        [[nodiscard]] auto RecommendedSufficiencyLevel() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorExportSufficiency>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExportSufficiency<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExporter
    {
        auto GetAnchorExportSufficiencyAsync(Windows::Perception::Spatial::SpatialAnchor const& anchor, Windows::Perception::Spatial::SpatialAnchorExportPurpose const& purpose) const;
        auto TryExportAnchorAsync(Windows::Perception::Spatial::SpatialAnchor const& anchor, Windows::Perception::Spatial::SpatialAnchorExportPurpose const& purpose, Windows::Storage::Streams::IOutputStream const& stream) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorExporter>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExporter<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorExporterStatics
    {
        auto GetDefault() const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorExporterStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorExporterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics
    {
        auto RequestStoreAsync() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorManagerStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
    {
        [[nodiscard]] auto OldRawCoordinateSystemToNewRawCoordinateSystemTransform() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorStatics
    {
        auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const;
        auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorStore
    {
        auto GetAllSavedAnchors() const;
        auto TrySave(param::hstring const& id, Windows::Perception::Spatial::SpatialAnchor const& anchor) const;
        auto Remove(param::hstring const& id) const;
        auto Clear() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorStore>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorStore<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics
    {
        auto TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream) const;
        auto TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream) const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialBoundingVolume
    {
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialBoundingVolume>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolume<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics
    {
        auto FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box) const;
        auto FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box) const;
        auto FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere) const;
        auto FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialBoundingVolumeStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialCoordinateSystem
    {
        auto TryGetTransformTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& target) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialCoordinateSystem>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialCoordinateSystem<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntity
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Anchor() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntity>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntity<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs
    {
        [[nodiscard]] auto Entity() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityFactory
    {
        auto CreateWithSpatialAnchor(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor) const;
        auto CreateWithSpatialAnchorAndProperties(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityFactory>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs
    {
        [[nodiscard]] auto Entity() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityStore
    {
        auto SaveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const;
        auto RemoveAsync(Windows::Perception::Spatial::SpatialEntity const& entity) const;
        auto CreateEntityWatcher() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityStore>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStore<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics
    {
        [[nodiscard]] auto IsSupported() const;
        auto TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityStoreStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityStoreStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs
    {
        [[nodiscard]] auto Entity() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialEntityWatcher
    {
        [[nodiscard]] auto Status() const;
        auto Added(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Added>;
        Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityAddedEventArgs> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto Updated(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Updated>;
        Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
        auto Removed(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_Removed>;
        Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Perception::Spatial::SpatialEntityRemovedEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialEntityWatcher, &impl::abi_t<Windows::Perception::Spatial::ISpatialEntityWatcher>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialEntityWatcher, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialEntityWatcher>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialEntityWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocation
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto AbsoluteLinearVelocity() const;
        [[nodiscard]] auto AbsoluteLinearAcceleration() const;
        [[nodiscard]] auto AbsoluteAngularVelocity() const;
        [[nodiscard]] auto AbsoluteAngularAcceleration() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocation>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocation2
    {
        [[nodiscard]] auto AbsoluteAngularVelocityAxisAngle() const;
        [[nodiscard]] auto AbsoluteAngularAccelerationAxisAngle() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocation2>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocation2<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocator
    {
        [[nodiscard]] auto Locatability() const;
        auto LocatabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const;
        using LocatabilityChanged_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialLocator, &impl::abi_t<Windows::Perception::Spatial::ISpatialLocator>::remove_LocatabilityChanged>;
        LocatabilityChanged_revoker LocatabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Foundation::IInspectable> const& handler) const;
        auto LocatabilityChanged(winrt::event_token const& cookie) const noexcept;
        auto PositionalTrackingDeactivating(Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
        using PositionalTrackingDeactivating_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialLocator, &impl::abi_t<Windows::Perception::Spatial::ISpatialLocator>::remove_PositionalTrackingDeactivating>;
        PositionalTrackingDeactivating_revoker PositionalTrackingDeactivating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Perception::Spatial::SpatialLocator, Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs> const& handler) const;
        auto PositionalTrackingDeactivating(winrt::event_token const& cookie) const noexcept;
        auto TryLocateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp, Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto CreateAttachedFrameOfReferenceAtCurrentHeading() const;
        auto CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition) const;
        auto CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
        auto CreateAttachedFrameOfReferenceAtCurrentHeading(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
        auto CreateStationaryFrameOfReferenceAtCurrentLocation() const;
        auto CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition) const;
        auto CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
        auto CreateStationaryFrameOfReferenceAtCurrentLocation(Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation, double relativeHeadingInRadians) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocator>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocator<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference
    {
        [[nodiscard]] auto RelativePosition() const;
        auto RelativePosition(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto RelativeOrientation() const;
        auto RelativeOrientation(Windows::Foundation::Numerics::quaternion const& value) const;
        auto AdjustHeading(double headingOffsetInRadians) const;
        auto GetStationaryCoordinateSystemAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const;
        auto TryGetRelativeHeadingAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs
    {
        [[nodiscard]] auto Canceled() const;
        auto Canceled(bool value) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialLocatorStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialLocatorStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialLocatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference
    {
        [[nodiscard]] auto CoordinateSystem() const;
        [[nodiscard]] auto MovementRange() const;
        [[nodiscard]] auto LookDirectionRange() const;
        auto GetCoordinateSystemAtCurrentLocation(Windows::Perception::Spatial::SpatialLocator const& locator) const;
        auto TryGetMovementBounds(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialStageFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReference<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics
    {
        [[nodiscard]] auto Current() const;
        auto CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using CurrentChanged_revoker = impl::event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics, &impl::abi_t<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>::remove_CurrentChanged>;
        CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto CurrentChanged(winrt::event_token const& cookie) const noexcept;
        auto RequestNewStageAsync() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference
    {
        [[nodiscard]] auto CoordinateSystem() const;
    };
    template <> struct consume<Windows::Perception::Spatial::ISpatialStationaryFrameOfReference>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference<D>;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingBox
    {
        Windows::Foundation::Numerics::float3 Center;
        Windows::Foundation::Numerics::float3 Extents;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingBox>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingBox;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingFrustum
    {
        Windows::Foundation::Numerics::plane Near;
        Windows::Foundation::Numerics::plane Far;
        Windows::Foundation::Numerics::plane Right;
        Windows::Foundation::Numerics::plane Left;
        Windows::Foundation::Numerics::plane Top;
        Windows::Foundation::Numerics::plane Bottom;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingFrustum;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox
    {
        Windows::Foundation::Numerics::float3 Center;
        Windows::Foundation::Numerics::float3 Extents;
        Windows::Foundation::Numerics::quaternion Orientation;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingOrientedBox;
    };
    struct struct_Windows_Perception_Spatial_SpatialBoundingSphere
    {
        Windows::Foundation::Numerics::float3 Center;
        float Radius;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        using type = struct_Windows_Perception_Spatial_SpatialBoundingSphere;
    };
    struct struct_Windows_Perception_Spatial_SpatialRay
    {
        Windows::Foundation::Numerics::float3 Origin;
        Windows::Foundation::Numerics::float3 Direction;
    };
    template <> struct abi<Windows::Perception::Spatial::SpatialRay>
    {
        using type = struct_Windows_Perception_Spatial_SpatialRay;
    };
}
#endif
