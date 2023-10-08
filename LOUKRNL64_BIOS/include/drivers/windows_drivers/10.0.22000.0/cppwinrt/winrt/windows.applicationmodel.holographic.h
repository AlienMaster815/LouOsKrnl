// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Holographic_H
#define WINRT_Windows_ApplicationModel_Holographic_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.ApplicationModel.Holographic.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::quaternion const& orientation) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Holographic::IHolographicKeyboard)->SetPlacementOverride(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(orientation)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::SetPlacementOverride(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& topCenterPosition, Windows::Foundation::Numerics::quaternion const& orientation, Windows::Foundation::Numerics::float2 const& maxSize) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Holographic::IHolographicKeyboard)->SetPlacementOverrideWithMaxSize(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(orientation), impl::bind_in(maxSize)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::ResetPlacementOverride() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Holographic::IHolographicKeyboard)->ResetPlacementOverride());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Holographic::HolographicKeyboard) consume_Windows_ApplicationModel_Holographic_IHolographicKeyboardStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics)->GetDefault(&result));
        return Windows::ApplicationModel::Holographic::HolographicKeyboard{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Holographic::IHolographicKeyboard> : produce_base<D, Windows::ApplicationModel::Holographic::IHolographicKeyboard>
    {
        int32_t __stdcall SetPlacementOverride(void* coordinateSystem, Windows::Foundation::Numerics::float3 topCenterPosition, Windows::Foundation::Numerics::quaternion orientation) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPlacementOverrideWithMaxSize(void* coordinateSystem, Windows::Foundation::Numerics::float3 topCenterPosition, Windows::Foundation::Numerics::quaternion orientation, Windows::Foundation::Numerics::float2 maxSize) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&maxSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetPlacementOverride() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetPlacementOverride();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics> : produce_base<D, Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Holographic::HolographicKeyboard>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Holographic
{
    inline auto HolographicKeyboard::GetDefault()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Holographic::HolographicKeyboard(*)(IHolographicKeyboardStatics const&), HolographicKeyboard, IHolographicKeyboardStatics>([](IHolographicKeyboardStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::HolographicKeyboard> : winrt::impl::hash_base {};
#endif
}
#endif
