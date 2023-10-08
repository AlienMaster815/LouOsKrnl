// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Markup_2_H
#define WINRT_Windows_UI_Xaml_Markup_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Markup
{
    struct XamlBinaryWriterErrorInformation
    {
        uint32_t InputStreamIndex;
        uint32_t LineNumber;
        uint32_t LinePosition;
    };
    inline bool operator==(XamlBinaryWriterErrorInformation const& left, XamlBinaryWriterErrorInformation const& right) noexcept
    {
        return left.InputStreamIndex == right.InputStreamIndex && left.LineNumber == right.LineNumber && left.LinePosition == right.LinePosition;
    }
    inline bool operator!=(XamlBinaryWriterErrorInformation const& left, XamlBinaryWriterErrorInformation const& right) noexcept
    {
        return !(left == right);
    }
    struct XmlnsDefinition
    {
        hstring XmlNamespace;
        hstring Namespace;
    };
    inline bool operator==(XmlnsDefinition const& left, XmlnsDefinition const& right) noexcept
    {
        return left.XmlNamespace == right.XmlNamespace && left.Namespace == right.Namespace;
    }
    inline bool operator!=(XmlnsDefinition const& left, XmlnsDefinition const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) MarkupExtension : Windows::UI::Xaml::Markup::IMarkupExtension,
        impl::require<MarkupExtension, Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        MarkupExtension(std::nullptr_t) noexcept {}
        MarkupExtension(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Markup::IMarkupExtension(ptr, take_ownership_from_abi) {}
        MarkupExtension();
    };
    struct __declspec(empty_bases) XamlBinaryWriter : Windows::UI::Xaml::Markup::IXamlBinaryWriter
    {
        XamlBinaryWriter(std::nullptr_t) noexcept {}
        XamlBinaryWriter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Markup::IXamlBinaryWriter(ptr, take_ownership_from_abi) {}
        static auto Write(param::vector<Windows::Storage::Streams::IRandomAccessStream> const& inputStreams, param::vector<Windows::Storage::Streams::IRandomAccessStream> const& outputStreams, Windows::UI::Xaml::Markup::IXamlMetadataProvider const& xamlMetadataProvider);
    };
    struct __declspec(empty_bases) XamlBindingHelper : Windows::UI::Xaml::Markup::IXamlBindingHelper
    {
        XamlBindingHelper(std::nullptr_t) noexcept {}
        XamlBindingHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Markup::IXamlBindingHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DataTemplateComponentProperty();
        static auto GetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Markup::IDataTemplateComponent const& value);
        static auto SuspendRendering(Windows::UI::Xaml::UIElement const& target);
        static auto ResumeRendering(Windows::UI::Xaml::UIElement const& target);
        static auto ConvertValue(Windows::UI::Xaml::Interop::TypeName const& type, Windows::Foundation::IInspectable const& value);
        static auto SetPropertyFromString(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, param::hstring const& value);
        static auto SetPropertyFromBoolean(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, bool value);
        static auto SetPropertyFromChar16(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, char16_t value);
        static auto SetPropertyFromDateTime(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::DateTime const& value);
        static auto SetPropertyFromDouble(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, double value);
        static auto SetPropertyFromInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int32_t value);
        static auto SetPropertyFromUInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint32_t value);
        static auto SetPropertyFromInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int64_t value);
        static auto SetPropertyFromUInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint64_t value);
        static auto SetPropertyFromSingle(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, float value);
        static auto SetPropertyFromPoint(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Point const& value);
        static auto SetPropertyFromRect(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Rect const& value);
        static auto SetPropertyFromSize(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Size const& value);
        static auto SetPropertyFromTimeSpan(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::TimeSpan const& value);
        static auto SetPropertyFromByte(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint8_t value);
        static auto SetPropertyFromUri(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Uri const& value);
        static auto SetPropertyFromObject(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::IInspectable const& value);
    };
    struct __declspec(empty_bases) XamlMarkupHelper : Windows::UI::Xaml::Markup::IXamlMarkupHelper
    {
        XamlMarkupHelper(std::nullptr_t) noexcept {}
        XamlMarkupHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Markup::IXamlMarkupHelper(ptr, take_ownership_from_abi) {}
        static auto UnloadObject(Windows::UI::Xaml::DependencyObject const& element);
    };
    struct __declspec(empty_bases) XamlReader : Windows::UI::Xaml::Markup::IXamlReader
    {
        XamlReader(std::nullptr_t) noexcept {}
        XamlReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Markup::IXamlReader(ptr, take_ownership_from_abi) {}
        static auto Load(param::hstring const& xaml);
        static auto LoadWithInitialTemplateValidation(param::hstring const& xaml);
    };
    template <typename D>
    class IMarkupExtensionOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IMarkupExtensionOverrides = winrt::Windows::UI::Xaml::Markup::IMarkupExtensionOverrides;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) ProvideValue() const;
    };
}
#endif
