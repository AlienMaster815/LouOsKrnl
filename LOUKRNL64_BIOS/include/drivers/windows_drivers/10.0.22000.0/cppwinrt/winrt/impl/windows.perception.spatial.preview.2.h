// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Spatial_Preview_2_H
#define WINRT_Windows_Perception_Spatial_Preview_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview
{
    struct __declspec(empty_bases) SpatialGraphInteropFrameOfReferencePreview : Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview
    {
        SpatialGraphInteropFrameOfReferencePreview(std::nullptr_t) noexcept {}
        SpatialGraphInteropFrameOfReferencePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview(ptr, take_ownership_from_abi) {}
    };
    struct SpatialGraphInteropPreview
    {
        SpatialGraphInteropPreview() = delete;
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation);
        static auto CreateLocatorForNode(winrt::guid const& nodeId);
        static auto TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
        static auto TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation);
    };
}
#endif
