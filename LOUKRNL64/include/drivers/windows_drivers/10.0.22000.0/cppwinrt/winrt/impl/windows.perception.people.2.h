// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_People_2_H
#define WINRT_Windows_Perception_People_2_H
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Perception.People.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    struct HandMeshVertex
    {
        Windows::Foundation::Numerics::float3 Position;
        Windows::Foundation::Numerics::float3 Normal;
    };
    inline bool operator==(HandMeshVertex const& left, HandMeshVertex const& right) noexcept
    {
        return left.Position == right.Position && left.Normal == right.Normal;
    }
    inline bool operator!=(HandMeshVertex const& left, HandMeshVertex const& right) noexcept
    {
        return !(left == right);
    }
    struct JointPose
    {
        Windows::Foundation::Numerics::quaternion Orientation;
        Windows::Foundation::Numerics::float3 Position;
        float Radius;
        Windows::Perception::People::JointPoseAccuracy Accuracy;
    };
    inline bool operator==(JointPose const& left, JointPose const& right) noexcept
    {
        return left.Orientation == right.Orientation && left.Position == right.Position && left.Radius == right.Radius && left.Accuracy == right.Accuracy;
    }
    inline bool operator!=(JointPose const& left, JointPose const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) EyesPose : Windows::Perception::People::IEyesPose
    {
        EyesPose(std::nullptr_t) noexcept {}
        EyesPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::People::IEyesPose(ptr, take_ownership_from_abi) {}
        static auto IsSupported();
        static auto RequestAccessAsync();
    };
    struct __declspec(empty_bases) HandMeshObserver : Windows::Perception::People::IHandMeshObserver
    {
        HandMeshObserver(std::nullptr_t) noexcept {}
        HandMeshObserver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::People::IHandMeshObserver(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HandMeshVertexState : Windows::Perception::People::IHandMeshVertexState
    {
        HandMeshVertexState(std::nullptr_t) noexcept {}
        HandMeshVertexState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::People::IHandMeshVertexState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HandPose : Windows::Perception::People::IHandPose
    {
        HandPose(std::nullptr_t) noexcept {}
        HandPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::People::IHandPose(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HeadPose : Windows::Perception::People::IHeadPose
    {
        HeadPose(std::nullptr_t) noexcept {}
        HeadPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::People::IHeadPose(ptr, take_ownership_from_abi) {}
    };
}
#endif
