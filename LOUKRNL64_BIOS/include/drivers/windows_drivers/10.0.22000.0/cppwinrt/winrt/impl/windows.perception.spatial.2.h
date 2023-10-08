// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Spatial_2_H
#define WINRT_Windows_Perception_Spatial_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialBoundingBox
    {
        Windows::Foundation::Numerics::float3 Center;
        Windows::Foundation::Numerics::float3 Extents;
    };
    inline bool operator==(SpatialBoundingBox const& left, SpatialBoundingBox const& right) noexcept
    {
        return left.Center == right.Center && left.Extents == right.Extents;
    }
    inline bool operator!=(SpatialBoundingBox const& left, SpatialBoundingBox const& right) noexcept
    {
        return !(left == right);
    }
    struct SpatialBoundingFrustum
    {
        Windows::Foundation::Numerics::plane Near;
        Windows::Foundation::Numerics::plane Far;
        Windows::Foundation::Numerics::plane Right;
        Windows::Foundation::Numerics::plane Left;
        Windows::Foundation::Numerics::plane Top;
        Windows::Foundation::Numerics::plane Bottom;
    };
    inline bool operator==(SpatialBoundingFrustum const& left, SpatialBoundingFrustum const& right) noexcept
    {
        return left.Near == right.Near && left.Far == right.Far && left.Right == right.Right && left.Left == right.Left && left.Top == right.Top && left.Bottom == right.Bottom;
    }
    inline bool operator!=(SpatialBoundingFrustum const& left, SpatialBoundingFrustum const& right) noexcept
    {
        return !(left == right);
    }
    struct SpatialBoundingOrientedBox
    {
        Windows::Foundation::Numerics::float3 Center;
        Windows::Foundation::Numerics::float3 Extents;
        Windows::Foundation::Numerics::quaternion Orientation;
    };
    inline bool operator==(SpatialBoundingOrientedBox const& left, SpatialBoundingOrientedBox const& right) noexcept
    {
        return left.Center == right.Center && left.Extents == right.Extents && left.Orientation == right.Orientation;
    }
    inline bool operator!=(SpatialBoundingOrientedBox const& left, SpatialBoundingOrientedBox const& right) noexcept
    {
        return !(left == right);
    }
    struct SpatialBoundingSphere
    {
        Windows::Foundation::Numerics::float3 Center;
        float Radius;
    };
    inline bool operator==(SpatialBoundingSphere const& left, SpatialBoundingSphere const& right) noexcept
    {
        return left.Center == right.Center && left.Radius == right.Radius;
    }
    inline bool operator!=(SpatialBoundingSphere const& left, SpatialBoundingSphere const& right) noexcept
    {
        return !(left == right);
    }
    struct SpatialRay
    {
        Windows::Foundation::Numerics::float3 Origin;
        Windows::Foundation::Numerics::float3 Direction;
    };
    inline bool operator==(SpatialRay const& left, SpatialRay const& right) noexcept
    {
        return left.Origin == right.Origin && left.Direction == right.Direction;
    }
    inline bool operator!=(SpatialRay const& left, SpatialRay const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) SpatialAnchor : Windows::Perception::Spatial::ISpatialAnchor,
        impl::require<SpatialAnchor, Windows::Perception::Spatial::ISpatialAnchor2>
    {
        SpatialAnchor(std::nullptr_t) noexcept {}
        SpatialAnchor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialAnchor(ptr, take_ownership_from_abi) {}
        static auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
        static auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position);
        static auto TryCreateRelativeTo(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation);
    };
    struct __declspec(empty_bases) SpatialAnchorExportSufficiency : Windows::Perception::Spatial::ISpatialAnchorExportSufficiency
    {
        SpatialAnchorExportSufficiency(std::nullptr_t) noexcept {}
        SpatialAnchorExportSufficiency(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialAnchorExportSufficiency(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialAnchorExporter : Windows::Perception::Spatial::ISpatialAnchorExporter
    {
        SpatialAnchorExporter(std::nullptr_t) noexcept {}
        SpatialAnchorExporter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialAnchorExporter(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto RequestAccessAsync();
    };
    struct SpatialAnchorManager
    {
        SpatialAnchorManager() = delete;
        static auto RequestStoreAsync();
    };
    struct __declspec(empty_bases) SpatialAnchorRawCoordinateSystemAdjustedEventArgs : Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
    {
        SpatialAnchorRawCoordinateSystemAdjustedEventArgs(std::nullptr_t) noexcept {}
        SpatialAnchorRawCoordinateSystemAdjustedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialAnchorStore : Windows::Perception::Spatial::ISpatialAnchorStore
    {
        SpatialAnchorStore(std::nullptr_t) noexcept {}
        SpatialAnchorStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialAnchorStore(ptr, take_ownership_from_abi) {}
    };
    struct SpatialAnchorTransferManager
    {
        SpatialAnchorTransferManager() = delete;
        static auto TryImportAnchorsAsync(Windows::Storage::Streams::IInputStream const& stream);
        static auto TryExportAnchorsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Perception::Spatial::SpatialAnchor>> const& anchors, Windows::Storage::Streams::IOutputStream const& stream);
        static auto RequestAccessAsync();
    };
    struct __declspec(empty_bases) SpatialBoundingVolume : Windows::Perception::Spatial::ISpatialBoundingVolume
    {
        SpatialBoundingVolume(std::nullptr_t) noexcept {}
        SpatialBoundingVolume(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialBoundingVolume(ptr, take_ownership_from_abi) {}
        static auto FromBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingBox const& box);
        static auto FromOrientedBox(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingOrientedBox const& box);
        static auto FromSphere(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingSphere const& sphere);
        static auto FromFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::Spatial::SpatialBoundingFrustum const& frustum);
    };
    struct __declspec(empty_bases) SpatialCoordinateSystem : Windows::Perception::Spatial::ISpatialCoordinateSystem
    {
        SpatialCoordinateSystem(std::nullptr_t) noexcept {}
        SpatialCoordinateSystem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialCoordinateSystem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialEntity : Windows::Perception::Spatial::ISpatialEntity
    {
        SpatialEntity(std::nullptr_t) noexcept {}
        SpatialEntity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntity(ptr, take_ownership_from_abi) {}
        explicit SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor);
        SpatialEntity(Windows::Perception::Spatial::SpatialAnchor const& spatialAnchor, Windows::Foundation::Collections::ValueSet const& propertySet);
    };
    struct __declspec(empty_bases) SpatialEntityAddedEventArgs : Windows::Perception::Spatial::ISpatialEntityAddedEventArgs
    {
        SpatialEntityAddedEventArgs(std::nullptr_t) noexcept {}
        SpatialEntityAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntityAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialEntityRemovedEventArgs : Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs
    {
        SpatialEntityRemovedEventArgs(std::nullptr_t) noexcept {}
        SpatialEntityRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialEntityStore : Windows::Perception::Spatial::ISpatialEntityStore
    {
        SpatialEntityStore(std::nullptr_t) noexcept {}
        SpatialEntityStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntityStore(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsSupported();
        static auto TryGet(Windows::System::RemoteSystems::RemoteSystemSession const& session);
    };
    struct __declspec(empty_bases) SpatialEntityUpdatedEventArgs : Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs
    {
        SpatialEntityUpdatedEventArgs(std::nullptr_t) noexcept {}
        SpatialEntityUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialEntityWatcher : Windows::Perception::Spatial::ISpatialEntityWatcher
    {
        SpatialEntityWatcher(std::nullptr_t) noexcept {}
        SpatialEntityWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialEntityWatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialLocation : Windows::Perception::Spatial::ISpatialLocation,
        impl::require<SpatialLocation, Windows::Perception::Spatial::ISpatialLocation2>
    {
        SpatialLocation(std::nullptr_t) noexcept {}
        SpatialLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialLocation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialLocator : Windows::Perception::Spatial::ISpatialLocator
    {
        SpatialLocator(std::nullptr_t) noexcept {}
        SpatialLocator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialLocator(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) SpatialLocatorAttachedFrameOfReference : Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference
    {
        SpatialLocatorAttachedFrameOfReference(std::nullptr_t) noexcept {}
        SpatialLocatorAttachedFrameOfReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialLocatorPositionalTrackingDeactivatingEventArgs : Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs
    {
        SpatialLocatorPositionalTrackingDeactivatingEventArgs(std::nullptr_t) noexcept {}
        SpatialLocatorPositionalTrackingDeactivatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpatialStageFrameOfReference : Windows::Perception::Spatial::ISpatialStageFrameOfReference
    {
        SpatialStageFrameOfReference(std::nullptr_t) noexcept {}
        SpatialStageFrameOfReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialStageFrameOfReference(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
        static auto CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using CurrentChanged_revoker = impl::factory_event_revoker<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics, &impl::abi_t<Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics>::remove_CurrentChanged>;
        [[nodiscard]] static CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto CurrentChanged(winrt::event_token const& cookie);
        static auto RequestNewStageAsync();
    };
    struct __declspec(empty_bases) SpatialStationaryFrameOfReference : Windows::Perception::Spatial::ISpatialStationaryFrameOfReference
    {
        SpatialStationaryFrameOfReference(std::nullptr_t) noexcept {}
        SpatialStationaryFrameOfReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::ISpatialStationaryFrameOfReference(ptr, take_ownership_from_abi) {}
    };
}
#endif
