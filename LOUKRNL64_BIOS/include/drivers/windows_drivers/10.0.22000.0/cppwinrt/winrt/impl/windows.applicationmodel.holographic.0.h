// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Holographic_0_H
#define WINRT_Windows_ApplicationModel_Holographic_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Holographic
{
    struct IHolographicKeyboard;
    struct IHolographicKeyboardStatics;
    struct HolographicKeyboard;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Holographic::IHolographicKeyboard>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Holographic::HolographicKeyboard>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Holographic::HolographicKeyboard> = L"Windows.ApplicationModel.Holographic.HolographicKeyboard";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Holographic::IHolographicKeyboard> = L"Windows.ApplicationModel.Holographic.IHolographicKeyboard";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics> = L"Windows.ApplicationModel.Holographic.IHolographicKeyboardStatics";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Holographic::IHolographicKeyboard>{ 0x07DD0893,0xAA21,0x5E6F,{ 0xA9,0x1B,0x11,0xB2,0xB3,0xFD,0x7B,0xE3 } }; // 07DD0893-AA21-5E6F-A91B-11B2B3FD7BE3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>{ 0xB676C624,0x63D7,0x58CF,{ 0xB0,0x6B,0x08,0xBA,0xA0,0x32,0xA2,0x3F } }; // B676C624-63D7-58CF-B06B-08BAA032A23F
    template <> struct default_interface<Windows::ApplicationModel::Holographic::HolographicKeyboard>{ using type = Windows::ApplicationModel::Holographic::IHolographicKeyboard; };
    template <> struct abi<Windows::ApplicationModel::Holographic::IHolographicKeyboard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetPlacementOverride(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall SetPlacementOverrideWithMaxSize(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion, Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall ResetPlacementOverride() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard
    {
        WINRT_IMPL_AUTO(void) SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::quaternion const& orientation) const;
        WINRT_IMPL_AUTO(void) SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::quaternion const& orientation, Windows::Foundation::Numerics::float2 const& maxSize) const;
        WINRT_IMPL_AUTO(void) ResetPlacementOverride() const;
    };
    template <> struct consume<Windows::ApplicationModel::Holographic::IHolographicKeyboard>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Holographic_IHolographicKeyboardStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Holographic::HolographicKeyboard) GetDefault() const;
    };
    template <> struct consume<Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Holographic_IHolographicKeyboardStatics<D>;
    };
}
#endif
