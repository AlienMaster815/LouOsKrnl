// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Devices_Core_H
#define WINRT_Windows_Media_Devices_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Media.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float2) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::FocalLength() const
    {
        Windows::Foundation::Numerics::float2 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_FocalLength(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float2) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::PrincipalPoint() const
    {
        Windows::Foundation::Numerics::float2 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_PrincipalPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::RadialDistortion() const
    {
        Windows::Foundation::Numerics::float3 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_RadialDistortion(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float2) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::TangentialDistortion() const
    {
        Windows::Foundation::Numerics::float2 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_TangentialDistortion(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::ImageWidth() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_ImageWidth(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::ImageHeight() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->get_ImageHeight(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::ProjectOntoFrame(Windows::Foundation::Numerics::float3 const& coordinate) const
    {
        Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->ProjectOntoFrame(impl::bind_in(coordinate), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float2) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::UnprojectAtUnitDepth(Windows::Foundation::Point const& pixelCoordinate) const
    {
        Windows::Foundation::Numerics::float2 result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->UnprojectAtUnitDepth(impl::bind_in(pixelCoordinate), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::ProjectManyOntoFrame(array_view<Windows::Foundation::Numerics::float3 const> coordinates, array_view<Windows::Foundation::Point> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->ProjectManyOntoFrame(coordinates.size(), get_abi(coordinates), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>::UnprojectPixelsAtUnitDepth(array_view<Windows::Foundation::Point const> pixelCoordinates, array_view<Windows::Foundation::Numerics::float2> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics)->UnprojectPixelsAtUnitDepth(pixelCoordinates.size(), get_abi(pixelCoordinates), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float4x4) consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>::UndistortedProjectionTransform() const
    {
        Windows::Foundation::Numerics::float4x4 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics2)->get_UndistortedProjectionTransform(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>::DistortPoint(Windows::Foundation::Point const& input) const
    {
        Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics2)->DistortPoint(impl::bind_in(input), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>::DistortPoints(array_view<Windows::Foundation::Point const> inputs, array_view<Windows::Foundation::Point> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics2)->DistortPoints(inputs.size(), get_abi(inputs), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>::UndistortPoint(Windows::Foundation::Point const& input) const
    {
        Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics2)->UndistortPoint(impl::bind_in(input), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>::UndistortPoints(array_view<Windows::Foundation::Point const> inputs, array_view<Windows::Foundation::Point> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsics2)->UndistortPoints(inputs.size(), get_abi(inputs), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::CameraIntrinsics) consume_Windows_Media_Devices_Core_ICameraIntrinsicsFactory<D>::Create(Windows::Foundation::Numerics::float2 const& focalLength, Windows::Foundation::Numerics::float2 const& principalPoint, Windows::Foundation::Numerics::float3 const& radialDistortion, Windows::Foundation::Numerics::float2 const& tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::ICameraIntrinsicsFactory)->Create(impl::bind_in(focalLength), impl::bind_in(principalPoint), impl::bind_in(radialDistortion), impl::bind_in(tangentialDistortion), imageWidth, imageHeight, &result));
        return Windows::Media::Devices::Core::CameraIntrinsics{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper<D>::UnprojectPoint(Windows::Foundation::Point const& sourcePoint, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem) const
    {
        Windows::Foundation::Numerics::float3 result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper)->UnprojectPoint(impl::bind_in(sourcePoint), *(void**)(&targetCoordinateSystem), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper<D>::UnprojectPoints(array_view<Windows::Foundation::Point const> sourcePoints, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, array_view<Windows::Foundation::Numerics::float3> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper)->UnprojectPoints(sourcePoints.size(), get_abi(sourcePoints), *(void**)(&targetCoordinateSystem), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper<D>::MapPoint(Windows::Foundation::Point const& sourcePoint, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, Windows::Media::Devices::Core::CameraIntrinsics const& targetCameraIntrinsics) const
    {
        Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper)->MapPoint(impl::bind_in(sourcePoint), *(void**)(&targetCoordinateSystem), *(void**)(&targetCameraIntrinsics), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper<D>::MapPoints(array_view<Windows::Foundation::Point const> sourcePoints, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, Windows::Media::Devices::Core::CameraIntrinsics const& targetCameraIntrinsics, array_view<Windows::Foundation::Point> results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper)->MapPoints(sourcePoints.size(), get_abi(sourcePoints), *(void**)(&targetCoordinateSystem), *(void**)(&targetCameraIntrinsics), results.size(), put_abi(results)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameExposureCapabilities) consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>::Exposure() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities)->get_Exposure(&value));
        return Windows::Media::Devices::Core::FrameExposureCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameExposureCompensationCapabilities) consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>::ExposureCompensation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities)->get_ExposureCompensation(&value));
        return Windows::Media::Devices::Core::FrameExposureCompensationCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameIsoSpeedCapabilities) consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>::IsoSpeed() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities)->get_IsoSpeed(&value));
        return Windows::Media::Devices::Core::FrameIsoSpeedCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameFocusCapabilities) consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>::Focus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities)->get_Focus(&value));
        return Windows::Media::Devices::Core::FrameFocusCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>::PhotoConfirmationSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities)->get_PhotoConfirmationSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameFlashCapabilities) consume_Windows_Media_Devices_Core_IFrameControlCapabilities2<D>::Flash() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameControlCapabilities2)->get_Flash(&value));
        return Windows::Media::Devices::Core::FrameFlashCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameExposureControl) consume_Windows_Media_Devices_Core_IFrameController<D>::ExposureControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->get_ExposureControl(&value));
        return Windows::Media::Devices::Core::FrameExposureControl{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameExposureCompensationControl) consume_Windows_Media_Devices_Core_IFrameController<D>::ExposureCompensationControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->get_ExposureCompensationControl(&value));
        return Windows::Media::Devices::Core::FrameExposureCompensationControl{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameIsoSpeedControl) consume_Windows_Media_Devices_Core_IFrameController<D>::IsoSpeedControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->get_IsoSpeedControl(&value));
        return Windows::Media::Devices::Core::FrameIsoSpeedControl{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameFocusControl) consume_Windows_Media_Devices_Core_IFrameController<D>::FocusControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->get_FocusControl(&value));
        return Windows::Media::Devices::Core::FrameFocusControl{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) consume_Windows_Media_Devices_Core_IFrameController<D>::PhotoConfirmationEnabled() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->get_PhotoConfirmationEnabled(&value));
        return Windows::Foundation::IReference<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameController<D>::PhotoConfirmationEnabled(Windows::Foundation::IReference<bool> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController)->put_PhotoConfirmationEnabled(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameFlashControl) consume_Windows_Media_Devices_Core_IFrameController2<D>::FlashControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameController2)->get_FlashControl(&value));
        return Windows::Media::Devices::Core::FrameFlashControl{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameExposureCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_Devices_Core_IFrameExposureCapabilities<D>::Min() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCapabilities)->get_Min(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_Devices_Core_IFrameExposureCapabilities<D>::Max() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCapabilities)->get_Max(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Media_Devices_Core_IFrameExposureCapabilities<D>::Step() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCapabilities)->get_Step(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities<D>::Min() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities)->get_Min(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities<D>::Max() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities)->get_Max(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities<D>::Step() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities)->get_Step(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) consume_Windows_Media_Devices_Core_IFrameExposureCompensationControl<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationControl)->get_Value(&value));
        return Windows::Foundation::IReference<float>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameExposureCompensationControl<D>::Value(Windows::Foundation::IReference<float> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureCompensationControl)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameExposureControl<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureControl)->get_Auto(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameExposureControl<D>::Auto(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureControl)->put_Auto(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) consume_Windows_Media_Devices_Core_IFrameExposureControl<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureControl)->get_Value(&value));
        return Windows::Foundation::IReference<Windows::Foundation::TimeSpan>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameExposureControl<D>::Value(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameExposureControl)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFlashCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFlashCapabilities<D>::RedEyeReductionSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashCapabilities)->get_RedEyeReductionSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFlashCapabilities<D>::PowerSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashCapabilities)->get_PowerSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameFlashMode) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::Mode() const
    {
        Windows::Media::Devices::Core::FrameFlashMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::Mode(Windows::Media::Devices::Core::FrameFlashMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->get_Auto(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::Auto(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->put_Auto(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::RedEyeReduction() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->get_RedEyeReduction(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::RedEyeReduction(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->put_RedEyeReduction(value));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::PowerPercent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->get_PowerPercent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameFlashControl<D>::PowerPercent(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFlashControl)->put_PowerPercent(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameFocusCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameFocusCapabilities<D>::Min() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusCapabilities)->get_Min(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameFocusCapabilities<D>::Max() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusCapabilities)->get_Max(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameFocusCapabilities<D>::Step() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusCapabilities)->get_Step(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) consume_Windows_Media_Devices_Core_IFrameFocusControl<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusControl)->get_Value(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameFocusControl<D>::Value(Windows::Foundation::IReference<uint32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameFocusControl)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities<D>::Min() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities)->get_Min(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities<D>::Max() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities)->get_Max(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities<D>::Step() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities)->get_Step(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedControl)->get_Auto(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl<D>::Auto(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedControl)->put_Auto(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedControl)->get_Value(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl<D>::Value(Windows::Foundation::IReference<uint32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IFrameIsoSpeedControl)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->get_Supported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::MaxPhotosPerSecond() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->get_MaxPhotosPerSecond(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::PhotosPerSecondLimit() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->get_PhotosPerSecondLimit(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::PhotosPerSecondLimit(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->put_PhotosPerSecondLimit(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaRatio) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->GetHighestConcurrentFrameRate(*(void**)(&captureProperties), &value));
        return Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaRatio) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::GetCurrentFrameRate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->GetCurrentFrameRate(&value));
        return Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Devices::Core::FrameControlCapabilities) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::FrameCapabilities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->get_FrameCapabilities(&value));
        return Windows::Media::Devices::Core::FrameControlCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController>) consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>::DesiredFrameControllers() const
    {
        void* items{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Devices::Core::IVariablePhotoSequenceController)->get_DesiredFrameControllers(&items));
        return Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController>{ items, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsics> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        int32_t __stdcall get_FocalLength(Windows::Foundation::Numerics::float2* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float2>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().FocalLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrincipalPoint(Windows::Foundation::Numerics::float2* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float2>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().PrincipalPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadialDistortion(Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().RadialDistortion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TangentialDistortion(Windows::Foundation::Numerics::float2* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float2>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().TangentialDistortion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ImageWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ImageHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ProjectOntoFrame(Windows::Foundation::Numerics::float3 coordinate, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().ProjectOntoFrame(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&coordinate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectAtUnitDepth(Windows::Foundation::Point pixelCoordinate, Windows::Foundation::Numerics::float2* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float2>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Numerics::float2>(this->shim().UnprojectAtUnitDepth(*reinterpret_cast<Windows::Foundation::Point const*>(&pixelCoordinate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ProjectManyOntoFrame(uint32_t __coordinatesSize, Windows::Foundation::Numerics::float3* coordinates, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectManyOntoFrame(array_view<Windows::Foundation::Numerics::float3 const>(reinterpret_cast<Windows::Foundation::Numerics::float3 const *>(coordinates), reinterpret_cast<Windows::Foundation::Numerics::float3 const *>(coordinates) + __coordinatesSize), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectPixelsAtUnitDepth(uint32_t __pixelCoordinatesSize, Windows::Foundation::Point* pixelCoordinates, uint32_t __resultsSize, Windows::Foundation::Numerics::float2* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float2>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().UnprojectPixelsAtUnitDepth(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(pixelCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(pixelCoordinates) + __pixelCoordinatesSize), array_view<Windows::Foundation::Numerics::float2>(reinterpret_cast<Windows::Foundation::Numerics::float2*>(results), reinterpret_cast<Windows::Foundation::Numerics::float2*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsics2> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        int32_t __stdcall get_UndistortedProjectionTransform(Windows::Foundation::Numerics::float4x4* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float4x4>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float4x4>(this->shim().UndistortedProjectionTransform());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DistortPoint(Windows::Foundation::Point input, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().DistortPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DistortPoints(uint32_t __inputsSize, Windows::Foundation::Point* inputs, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().DistortPoints(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(inputs), reinterpret_cast<Windows::Foundation::Point const *>(inputs) + __inputsSize), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UndistortPoint(Windows::Foundation::Point input, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().UndistortPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UndistortPoints(uint32_t __inputsSize, Windows::Foundation::Point* inputs, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().UndistortPoints(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(inputs), reinterpret_cast<Windows::Foundation::Point const *>(inputs) + __inputsSize), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsicsFactory> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        int32_t __stdcall Create(Windows::Foundation::Numerics::float2 focalLength, Windows::Foundation::Numerics::float2 principalPoint, Windows::Foundation::Numerics::float3 radialDistortion, Windows::Foundation::Numerics::float2 tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&focalLength), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&principalPoint), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&radialDistortion), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&tangentialDistortion), imageWidth, imageHeight));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper> : produce_base<D, Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        int32_t __stdcall UnprojectPoint(Windows::Foundation::Point sourcePoint, void* targetCoordinateSystem, Windows::Foundation::Numerics::float3* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Numerics::float3>(this->shim().UnprojectPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&sourcePoint), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&targetCoordinateSystem)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprojectPoints(uint32_t __sourcePointsSize, Windows::Foundation::Point* sourcePoints, void* targetCoordinateSystem, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().UnprojectPoints(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourcePoints), reinterpret_cast<Windows::Foundation::Point const *>(sourcePoints) + __sourcePointsSize), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&targetCoordinateSystem), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MapPoint(Windows::Foundation::Point sourcePoint, void* targetCoordinateSystem, void* targetCameraIntrinsics, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().MapPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&sourcePoint), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&targetCoordinateSystem), *reinterpret_cast<Windows::Media::Devices::Core::CameraIntrinsics const*>(&targetCameraIntrinsics)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MapPoints(uint32_t __sourcePointsSize, Windows::Foundation::Point* sourcePoints, void* targetCoordinateSystem, void* targetCameraIntrinsics, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(results, __resultsSize);
            typename D::abi_guard guard(this->shim());
            this->shim().MapPoints(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourcePoints), reinterpret_cast<Windows::Foundation::Point const *>(sourcePoints) + __sourcePointsSize), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&targetCoordinateSystem), *reinterpret_cast<Windows::Media::Devices::Core::CameraIntrinsics const*>(&targetCameraIntrinsics), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameControlCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        int32_t __stdcall get_Exposure(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameExposureCapabilities>(this->shim().Exposure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureCompensation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>(this->shim().ExposureCompensation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsoSpeed(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>(this->shim().IsoSpeed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Focus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameFocusCapabilities>(this->shim().Focus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotoConfirmationSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PhotoConfirmationSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameControlCapabilities2> : produce_base<D, Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        int32_t __stdcall get_Flash(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameFlashCapabilities>(this->shim().Flash());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameController> : produce_base<D, Windows::Media::Devices::Core::IFrameController>
    {
        int32_t __stdcall get_ExposureControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameExposureControl>(this->shim().ExposureControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureCompensationControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameExposureCompensationControl>(this->shim().ExposureCompensationControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsoSpeedControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameIsoSpeedControl>(this->shim().IsoSpeedControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameFocusControl>(this->shim().FocusControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotoConfirmationEnabled(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().PhotoConfirmationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PhotoConfirmationEnabled(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoConfirmationEnabled(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameController2> : produce_base<D, Windows::Media::Devices::Core::IFrameController2>
    {
        int32_t __stdcall get_FlashControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameFlashControl>(this->shim().FlashControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameExposureCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameExposureCompensationControl> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IReference<float> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameExposureControl> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureControl>
    {
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Auto(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Auto(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameFlashCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RedEyeReductionSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RedEyeReductionSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PowerSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameFlashControl> : produce_base<D, Windows::Media::Devices::Core::IFrameFlashControl>
    {
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameFlashMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::Core::FrameFlashMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Auto(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Auto(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RedEyeReduction(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RedEyeReduction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RedEyeReduction(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedEyeReduction(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerPercent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PowerPercent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PowerPercent(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerPercent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameFocusCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameFocusControl> : produce_base<D, Windows::Media::Devices::Core::IFrameFocusControl>
    {
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IFrameIsoSpeedControl> : produce_base<D, Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Auto(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Auto(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Devices::Core::IVariablePhotoSequenceController> : produce_base<D, Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPhotosPerSecond(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxPhotosPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosPerSecondLimit(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PhotosPerSecondLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PhotosPerSecondLimit(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotosPerSecondLimit(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHighestConcurrentFrameRate(void* captureProperties, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaRatio>(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&captureProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentFrameRate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaRatio>(this->shim().GetCurrentFrameRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameCapabilities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::FrameControlCapabilities>(this->shim().FrameCapabilities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredFrameControllers(void** items) noexcept final try
        {
            clear_abi(items);
            typename D::abi_guard guard(this->shim());
            *items = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController>>(this->shim().DesiredFrameControllers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    inline CameraIntrinsics::CameraIntrinsics(Windows::Foundation::Numerics::float2 const& focalLength, Windows::Foundation::Numerics::float2 const& principalPoint, Windows::Foundation::Numerics::float3 const& radialDistortion, Windows::Foundation::Numerics::float2 const& tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight) :
        CameraIntrinsics(impl::call_factory<CameraIntrinsics, ICameraIntrinsicsFactory>([&](ICameraIntrinsicsFactory const& f) { return f.Create(focalLength, principalPoint, radialDistortion, tangentialDistortion, imageWidth, imageHeight); }))
    {
    }
    inline FrameController::FrameController() :
        FrameController(impl::call_factory_cast<FrameController(*)(Windows::Foundation::IActivationFactory const&), FrameController>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<FrameController>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::Devices::Core::ICameraIntrinsics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::ICameraIntrinsics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::ICameraIntrinsicsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameControlCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameControlCapabilities2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameController2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameExposureCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameExposureCompensationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameExposureControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameFlashCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameFlashControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameFocusCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameFocusControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IFrameIsoSpeedControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::IVariablePhotoSequenceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::CameraIntrinsics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameControlCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameExposureCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameExposureCompensationCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameExposureCompensationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameExposureControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameFlashCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameFlashControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameFocusCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameFocusControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameIsoSpeedCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::FrameIsoSpeedControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController> : winrt::impl::hash_base {};
#endif
}
#endif
