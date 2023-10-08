// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Core_Direct_H
#define WINRT_Windows_UI_Xaml_Core_Direct_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.2.h"
#include "winrt/impl/Windows.UI.Xaml.Core.Direct.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetObject(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetObject(*(void**)(&xamlDirectObject), &result));
        return Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Core::Direct::IXamlDirectObject) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetXamlDirectObject(Windows::Foundation::IInspectable const& object) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetXamlDirectObject(*(void**)(&object), &result));
        return Windows::UI::Xaml::Core::Direct::IXamlDirectObject{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Core::Direct::IXamlDirectObject) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::CreateInstance(Windows::UI::Xaml::Core::Direct::XamlTypeIndex const& typeIndex) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->CreateInstance(static_cast<int32_t>(typeIndex), &result));
        return Windows::UI::Xaml::Core::Direct::IXamlDirectObject{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetObjectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetObjectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetXamlDirectObjectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetXamlDirectObjectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetBooleanProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetBooleanProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetDoubleProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetDoubleProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetInt32Property(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetInt32Property(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetStringProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetStringProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetDateTimeProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetDateTimeProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetPointProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetPointProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetRectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::Rect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetRectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetSizeProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::Size const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetSizeProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetTimeSpanProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetTimeSpanProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetColorProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetColorProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetCornerRadiusProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::CornerRadius const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetCornerRadiusProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetDurationProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::Duration const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetDurationProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetGridLengthProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::GridLength const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetGridLengthProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetThicknessProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::Thickness const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetThicknessProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetMatrixProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::Media::Matrix const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetMatrixProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetMatrix3DProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, Windows::UI::Xaml::Media::Media3D::Matrix3D const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetMatrix3DProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::SetEnumProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex, uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->SetEnumProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetObjectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetObjectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Core::Direct::IXamlDirectObject) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetXamlDirectObjectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetXamlDirectObjectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return Windows::UI::Xaml::Core::Direct::IXamlDirectObject{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetBooleanProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetBooleanProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetDoubleProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        double result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetDoubleProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetInt32Property(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetInt32Property(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetStringProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetStringProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetDateTimeProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::Foundation::DateTime result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetDateTimeProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Point) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetPointProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetPointProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Rect) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetRectProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::Foundation::Rect result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetRectProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Size) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetSizeProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::Foundation::Size result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetSizeProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetTimeSpanProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::Foundation::TimeSpan result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetTimeSpanProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetColorProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Color result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetColorProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::CornerRadius) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetCornerRadiusProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::CornerRadius result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetCornerRadiusProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Duration) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetDurationProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::Duration result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetDurationProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::GridLength) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetGridLengthProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::GridLength result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetGridLengthProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetThicknessProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::Thickness result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetThicknessProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Matrix) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetMatrixProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::Media::Matrix result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetMatrixProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetMatrix3DProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        Windows::UI::Xaml::Media::Media3D::Matrix3D result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetMatrix3DProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetEnumProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        uint32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetEnumProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::ClearProperty(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const& propertyIndex) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->ClearProperty(*(void**)(&xamlDirectObject), static_cast<int32_t>(propertyIndex)));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetCollectionCount(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject) const
    {
        uint32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetCollectionCount(*(void**)(&xamlDirectObject), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Core::Direct::IXamlDirectObject) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::GetXamlDirectObjectFromCollectionAt(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, uint32_t index) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->GetXamlDirectObjectFromCollectionAt(*(void**)(&xamlDirectObject), index, &result));
        return Windows::UI::Xaml::Core::Direct::IXamlDirectObject{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::AddToCollection(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->AddToCollection(*(void**)(&xamlDirectObject), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::InsertIntoCollectionAt(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, uint32_t index, Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->InsertIntoCollectionAt(*(void**)(&xamlDirectObject), index, *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::RemoveFromCollection(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->RemoveFromCollection(*(void**)(&xamlDirectObject), *(void**)(&value), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::RemoveFromCollectionAt(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, uint32_t index) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->RemoveFromCollectionAt(*(void**)(&xamlDirectObject), index));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::ClearCollection(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->ClearCollection(*(void**)(&xamlDirectObject)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::AddEventHandler(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlEventIndex const& eventIndex, Windows::Foundation::IInspectable const& handler) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->AddEventHandler(*(void**)(&xamlDirectObject), static_cast<int32_t>(eventIndex), *(void**)(&handler)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::AddEventHandler(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlEventIndex const& eventIndex, Windows::Foundation::IInspectable const& handler, bool handledEventsToo) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->AddEventHandler_HandledEventsToo(*(void**)(&xamlDirectObject), static_cast<int32_t>(eventIndex), *(void**)(&handler), handledEventsToo));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Core_Direct_IXamlDirect<D>::RemoveEventHandler(Windows::UI::Xaml::Core::Direct::IXamlDirectObject const& xamlDirectObject, Windows::UI::Xaml::Core::Direct::XamlEventIndex const& eventIndex, Windows::Foundation::IInspectable const& handler) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirect)->RemoveEventHandler(*(void**)(&xamlDirectObject), static_cast<int32_t>(eventIndex), *(void**)(&handler)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Core::Direct::XamlDirect) consume_Windows_UI_Xaml_Core_Direct_IXamlDirectStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Core::Direct::IXamlDirectStatics)->GetDefault(&result));
        return Windows::UI::Xaml::Core::Direct::XamlDirect{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Core::Direct::IXamlDirect> : produce_base<D, Windows::UI::Xaml::Core::Direct::IXamlDirect>
    {
        int32_t __stdcall GetObject(void* xamlDirectObject, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().GetObject(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetXamlDirectObject(void* object, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Core::Direct::IXamlDirectObject>(this->shim().GetXamlDirectObject(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&object)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance(int32_t typeIndex, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Core::Direct::IXamlDirectObject>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlTypeIndex const*>(&typeIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetObjectProperty(void* xamlDirectObject, int32_t propertyIndex, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetObjectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetXamlDirectObjectProperty(void* xamlDirectObject, int32_t propertyIndex, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetXamlDirectObjectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetBooleanProperty(void* xamlDirectObject, int32_t propertyIndex, bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBooleanProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDoubleProperty(void* xamlDirectObject, int32_t propertyIndex, double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDoubleProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetInt32Property(void* xamlDirectObject, int32_t propertyIndex, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInt32Property(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetStringProperty(void* xamlDirectObject, int32_t propertyIndex, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStringProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDateTimeProperty(void* xamlDirectObject, int32_t propertyIndex, int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDateTimeProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPointProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPointProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRectProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Rect value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSizeProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Size value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSizeProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTimeSpanProperty(void* xamlDirectObject, int32_t propertyIndex, int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTimeSpanProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColorProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetCornerRadiusProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_CornerRadius value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCornerRadiusProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::CornerRadius const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDurationProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Duration value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDurationProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::Duration const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetGridLengthProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_GridLength value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetGridLengthProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetThicknessProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Thickness value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetThicknessProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetMatrixProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Media_Matrix value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrixProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::Media::Matrix const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetMatrix3DProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrix3DProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), *reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetEnumProperty(void* xamlDirectObject, int32_t propertyIndex, uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEnumProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetObjectProperty(void* xamlDirectObject, int32_t propertyIndex, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().GetObjectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetXamlDirectObjectProperty(void* xamlDirectObject, int32_t propertyIndex, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Core::Direct::IXamlDirectObject>(this->shim().GetXamlDirectObjectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBooleanProperty(void* xamlDirectObject, int32_t propertyIndex, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetBooleanProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDoubleProperty(void* xamlDirectObject, int32_t propertyIndex, double* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<double>(this->shim().GetDoubleProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInt32Property(void* xamlDirectObject, int32_t propertyIndex, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetInt32Property(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStringProperty(void* xamlDirectObject, int32_t propertyIndex, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetStringProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDateTimeProperty(void* xamlDirectObject, int32_t propertyIndex, int64_t* result) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::DateTime>(this->shim().GetDateTimeProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPointProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().GetPointProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRectProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Rect* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Rect>(this->shim().GetRectProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSizeProperty(void* xamlDirectObject, int32_t propertyIndex, Windows::Foundation::Size* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Size>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Size>(this->shim().GetSizeProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTimeSpanProperty(void* xamlDirectObject, int32_t propertyIndex, int64_t* result) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::TimeSpan>(this->shim().GetTimeSpanProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetColorProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Color* result) noexcept final try
        {
            zero_abi<Windows::UI::Color>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Color>(this->shim().GetColorProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCornerRadiusProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_CornerRadius* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::CornerRadius>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::CornerRadius>(this->shim().GetCornerRadiusProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDurationProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Duration* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Duration>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Duration>(this->shim().GetDurationProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetGridLengthProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_GridLength* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::GridLength>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::GridLength>(this->shim().GetGridLengthProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetThicknessProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Thickness* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Thickness>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Thickness>(this->shim().GetThicknessProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMatrixProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Media_Matrix* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Media::Matrix>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Media::Matrix>(this->shim().GetMatrixProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMatrix3DProperty(void* xamlDirectObject, int32_t propertyIndex, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D* result) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Media::Media3D::Matrix3D>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Media::Media3D::Matrix3D>(this->shim().GetMatrix3DProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetEnumProperty(void* xamlDirectObject, int32_t propertyIndex, uint32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint32_t>(this->shim().GetEnumProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearProperty(void* xamlDirectObject, int32_t propertyIndex) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearProperty(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlPropertyIndex const*>(&propertyIndex));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCollectionCount(void* xamlDirectObject, uint32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint32_t>(this->shim().GetCollectionCount(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetXamlDirectObjectFromCollectionAt(void* xamlDirectObject, uint32_t index, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Core::Direct::IXamlDirectObject>(this->shim().GetXamlDirectObjectFromCollectionAt(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddToCollection(void* xamlDirectObject, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToCollection(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InsertIntoCollectionAt(void* xamlDirectObject, uint32_t index, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertIntoCollectionAt(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), index, *reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveFromCollection(void* xamlDirectObject, void* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().RemoveFromCollection(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveFromCollectionAt(void* xamlDirectObject, uint32_t index) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromCollectionAt(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), index);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearCollection(void* xamlDirectObject) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearCollection(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddEventHandler(void* xamlDirectObject, int32_t eventIndex, void* handler) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEventHandler(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlEventIndex const*>(&eventIndex), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&handler));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddEventHandler_HandledEventsToo(void* xamlDirectObject, int32_t eventIndex, void* handler, bool handledEventsToo) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddEventHandler(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlEventIndex const*>(&eventIndex), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&handler), handledEventsToo);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveEventHandler(void* xamlDirectObject, int32_t eventIndex, void* handler) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveEventHandler(*reinterpret_cast<Windows::UI::Xaml::Core::Direct::IXamlDirectObject const*>(&xamlDirectObject), *reinterpret_cast<Windows::UI::Xaml::Core::Direct::XamlEventIndex const*>(&eventIndex), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&handler));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Core::Direct::IXamlDirectObject> : produce_base<D, Windows::UI::Xaml::Core::Direct::IXamlDirectObject>
    {
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Core::Direct::IXamlDirectStatics> : produce_base<D, Windows::UI::Xaml::Core::Direct::IXamlDirectStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Core::Direct::XamlDirect>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Core::Direct
{
    inline auto XamlDirect::GetDefault()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Core::Direct::XamlDirect(*)(IXamlDirectStatics const&), XamlDirect, IXamlDirectStatics>([](IXamlDirectStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Core::Direct::IXamlDirect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Core::Direct::IXamlDirectObject> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Core::Direct::IXamlDirectStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Core::Direct::XamlDirect> : winrt::impl::hash_base {};
#endif
}
#endif
