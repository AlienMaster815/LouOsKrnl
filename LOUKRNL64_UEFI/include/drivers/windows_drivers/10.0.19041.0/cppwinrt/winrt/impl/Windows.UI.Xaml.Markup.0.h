// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Markup_0_H
#define WINRT_Windows_UI_Xaml_Markup_0_H
namespace winrt::Windows::Foundation
{
    struct Point;
    struct Rect;
    struct Size;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVector;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyObject;
    struct DependencyProperty;
    struct UIElement;
}
namespace winrt::Windows::UI::Xaml::Interop
{
    struct TypeName;
}
namespace winrt::Windows::UI::Xaml::Markup
{
    struct IComponentConnector;
    struct IComponentConnector2;
    struct IDataTemplateComponent;
    struct IMarkupExtension;
    struct IMarkupExtensionFactory;
    struct IMarkupExtensionOverrides;
    struct IXamlBinaryWriter;
    struct IXamlBinaryWriterStatics;
    struct IXamlBindScopeDiagnostics;
    struct IXamlBindingHelper;
    struct IXamlBindingHelperStatics;
    struct IXamlMarkupHelper;
    struct IXamlMarkupHelperStatics;
    struct IXamlMember;
    struct IXamlMetadataProvider;
    struct IXamlReader;
    struct IXamlReaderStatics;
    struct IXamlType;
    struct IXamlType2;
    struct MarkupExtension;
    struct XamlBinaryWriter;
    struct XamlBindingHelper;
    struct XamlMarkupHelper;
    struct XamlReader;
    struct XamlBinaryWriterErrorInformation;
    struct XmlnsDefinition;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Markup::IComponentConnector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IComponentConnector2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IDataTemplateComponent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IMarkupExtension>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IMarkupExtensionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlBinaryWriter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlBindScopeDiagnostics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlBindingHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlMarkupHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlMember>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlReaderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlType>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::IXamlType2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::MarkupExtension>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XamlBinaryWriter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XamlBindingHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XamlMarkupHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XamlReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation>
    {
        using type = struct_category<uint32_t, uint32_t, uint32_t>;
    };
    template <> struct category<Windows::UI::Xaml::Markup::XmlnsDefinition>
    {
        using type = struct_category<hstring, hstring>;
    };
    template <> struct name<Windows::UI::Xaml::Markup::IComponentConnector>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IComponentConnector" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IComponentConnector2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IComponentConnector2" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IDataTemplateComponent>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IDataTemplateComponent" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IMarkupExtension>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IMarkupExtension" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IMarkupExtensionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IMarkupExtensionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IMarkupExtensionOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlBinaryWriter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlBinaryWriter" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlBindScopeDiagnostics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlBindScopeDiagnostics" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlBindingHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlBindingHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlBindingHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlMarkupHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlMarkupHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlMember>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlMember" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlMetadataProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlReader>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlReader" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlReaderStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlReaderStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlType" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::IXamlType2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.IXamlType2" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::MarkupExtension>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.MarkupExtension" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XamlBinaryWriter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XamlBinaryWriter" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XamlBindingHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XamlBindingHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XamlMarkupHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XamlMarkupHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XamlReader>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XamlReader" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XamlBinaryWriterErrorInformation" };
    };
    template <> struct name<Windows::UI::Xaml::Markup::XmlnsDefinition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Markup.XmlnsDefinition" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IComponentConnector>
    {
        static constexpr guid value{ 0xF6790987,0xE6E5,0x47F2,{ 0x92,0xC6,0xEC,0xCC,0xE4,0xBA,0x15,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IComponentConnector2>
    {
        static constexpr guid value{ 0xDC8F368B,0xECCC,0x498E,{ 0xB1,0x39,0x91,0x14,0x22,0x54,0xD7,0xAE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IDataTemplateComponent>
    {
        static constexpr guid value{ 0x08429DC8,0x8AB0,0x4747,{ 0xAA,0x9A,0xFE,0xAD,0xFC,0x8D,0xA8,0xE1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IMarkupExtension>
    {
        static constexpr guid value{ 0x1EE3416D,0x562B,0x486E,{ 0x9E,0xE5,0x0F,0x0C,0xBC,0xC8,0x04,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IMarkupExtensionFactory>
    {
        static constexpr guid value{ 0x65329C05,0xFB5A,0x4567,{ 0x9D,0x55,0x5C,0xDF,0xBA,0xDA,0x27,0x39 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        static constexpr guid value{ 0x393779BF,0xB9C0,0x4FFB,{ 0xA5,0x7F,0x58,0xE7,0x35,0x6E,0x42,0x5F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlBinaryWriter>
    {
        static constexpr guid value{ 0x829D2AD3,0x620A,0x46F6,{ 0x84,0x5D,0x43,0x6A,0x05,0x92,0x71,0x00 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
    {
        static constexpr guid value{ 0x0D8ED07A,0x9B82,0x4AA8,{ 0xB6,0x8B,0x02,0x6F,0x2D,0xE1,0xCC,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlBindScopeDiagnostics>
    {
        static constexpr guid value{ 0xF264A29D,0xBDED,0x43AA,{ 0xA5,0xB0,0x26,0xAC,0x21,0xA8,0x1E,0xB8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlBindingHelper>
    {
        static constexpr guid value{ 0xFAA6FB06,0x8AB9,0x4EF7,{ 0x8A,0xE7,0xFB,0xD3,0x0B,0xBF,0xD0,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
    {
        static constexpr guid value{ 0xF65CFB71,0xC80C,0x4FFA,{ 0x86,0xEE,0x55,0x87,0x54,0xEE,0x33,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlMarkupHelper>
    {
        static constexpr guid value{ 0xD0E6673C,0x5342,0x44EF,{ 0x85,0xA7,0xED,0x32,0x7A,0x73,0x9D,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
    {
        static constexpr guid value{ 0xC9BC3725,0xF34F,0x445C,{ 0x81,0xA2,0x6B,0x72,0xA5,0xE8,0xF0,0x72 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlMember>
    {
        static constexpr guid value{ 0xC541F58C,0x43A9,0x4216,{ 0xB7,0x18,0xE0,0xB1,0x1B,0x14,0xE9,0x3E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        static constexpr guid value{ 0xB3765D69,0x68A5,0x4B32,{ 0x88,0x61,0xFD,0xB9,0x0C,0x1F,0x58,0x36 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlReader>
    {
        static constexpr guid value{ 0x24374CF1,0xCCEB,0x48BF,{ 0xA5,0x14,0x41,0xB0,0x18,0x6F,0x84,0xC2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlReaderStatics>
    {
        static constexpr guid value{ 0x9891C6BD,0x534F,0x4955,{ 0xB8,0x5A,0x8A,0x8D,0xC0,0xDC,0xA6,0x02 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlType>
    {
        static constexpr guid value{ 0x7920EAB1,0xA2E5,0x479A,{ 0xBD,0x50,0x6C,0xEF,0x3C,0x0B,0x49,0x70 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Markup::IXamlType2>
    {
        static constexpr guid value{ 0x9F0C6E3B,0x433B,0x56AD,{ 0x8F,0x69,0x78,0xA4,0xDD,0x3E,0x64,0xF9 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Markup::MarkupExtension>
    {
        using type = Windows::UI::Xaml::Markup::IMarkupExtension;
    };
    template <> struct default_interface<Windows::UI::Xaml::Markup::XamlBinaryWriter>
    {
        using type = Windows::UI::Xaml::Markup::IXamlBinaryWriter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Markup::XamlBindingHelper>
    {
        using type = Windows::UI::Xaml::Markup::IXamlBindingHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Markup::XamlMarkupHelper>
    {
        using type = Windows::UI::Xaml::Markup::IXamlMarkupHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Markup::XamlReader>
    {
        using type = Windows::UI::Xaml::Markup::IXamlReader;
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IComponentConnector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Connect(int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IComponentConnector2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetBindingConnector(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IDataTemplateComponent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Recycle() noexcept = 0;
            virtual int32_t __stdcall ProcessBindings(void*, int32_t, int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IMarkupExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IMarkupExtensionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProvideValue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlBinaryWriter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Write(void*, void*, void*, struct struct_Windows_UI_Xaml_Markup_XamlBinaryWriterErrorInformation*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlBindScopeDiagnostics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Disable(int32_t, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlBindingHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataTemplateComponentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetDataTemplateComponent(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDataTemplateComponent(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SuspendRendering(void*) noexcept = 0;
            virtual int32_t __stdcall ResumeRendering(void*) noexcept = 0;
            virtual int32_t __stdcall ConvertValue(struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromString(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromBoolean(void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromChar16(void*, void*, char16_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromDateTime(void*, void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromDouble(void*, void*, double) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromInt32(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromUInt32(void*, void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromInt64(void*, void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromUInt64(void*, void*, uint64_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromSingle(void*, void*, float) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromPoint(void*, void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromRect(void*, void*, Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromSize(void*, void*, Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromTimeSpan(void*, void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromByte(void*, void*, uint8_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromUri(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetPropertyFromObject(void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlMarkupHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnloadObject(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlMember>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAttachable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDependencyProperty(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall GetValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetValue(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetXamlType(struct struct_Windows_UI_Xaml_Interop_TypeName, void**) noexcept = 0;
            virtual int32_t __stdcall GetXamlTypeByFullName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetXmlnsDefinitions(uint32_t* __resultSize, struct struct_Windows_UI_Xaml_Markup_XmlnsDefinition**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlReaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Load(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadWithInitialTemplateValidation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlType>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseType(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsArray(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCollection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsConstructible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDictionary(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMarkupExtension(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBindable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ItemType(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyType(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnderlyingType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall ActivateInstance(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMember(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddToVector(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddToMap(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RunInitializer() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Markup::IXamlType2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoxedType(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IComponentConnector
    {
        auto Connect(int32_t connectionId, Windows::Foundation::IInspectable const& target) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IComponentConnector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IComponentConnector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IComponentConnector2
    {
        auto GetBindingConnector(int32_t connectionId, Windows::Foundation::IInspectable const& target) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IComponentConnector2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IComponentConnector2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IDataTemplateComponent
    {
        auto Recycle() const;
        auto ProcessBindings(Windows::Foundation::IInspectable const& item, int32_t itemIndex, int32_t phase, int32_t& nextPhase) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IDataTemplateComponent>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IDataTemplateComponent<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IMarkupExtension
    {
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IMarkupExtension>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IMarkupExtension<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IMarkupExtensionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IMarkupExtensionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IMarkupExtensionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IMarkupExtensionOverrides
    {
        auto ProvideValue() const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IMarkupExtensionOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IMarkupExtensionOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlBinaryWriter
    {
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlBinaryWriter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlBinaryWriter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics
    {
        auto Write(param::vector<Windows::Storage::Streams::IRandomAccessStream> const& inputStreams, param::vector<Windows::Storage::Streams::IRandomAccessStream> const& outputStreams, Windows::UI::Xaml::Markup::IXamlMetadataProvider const& xamlMetadataProvider) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlBindScopeDiagnostics
    {
        auto Disable(int32_t lineNumber, int32_t columnNumber) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlBindScopeDiagnostics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlBindScopeDiagnostics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlBindingHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlBindingHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlBindingHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics
    {
        [[nodiscard]] auto DataTemplateComponentProperty() const;
        auto GetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Markup::IDataTemplateComponent const& value) const;
        auto SuspendRendering(Windows::UI::Xaml::UIElement const& target) const;
        auto ResumeRendering(Windows::UI::Xaml::UIElement const& target) const;
        auto ConvertValue(Windows::UI::Xaml::Interop::TypeName const& type, Windows::Foundation::IInspectable const& value) const;
        auto SetPropertyFromString(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, param::hstring const& value) const;
        auto SetPropertyFromBoolean(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, bool value) const;
        auto SetPropertyFromChar16(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, char16_t value) const;
        auto SetPropertyFromDateTime(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::DateTime const& value) const;
        auto SetPropertyFromDouble(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, double value) const;
        auto SetPropertyFromInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int32_t value) const;
        auto SetPropertyFromUInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint32_t value) const;
        auto SetPropertyFromInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int64_t value) const;
        auto SetPropertyFromUInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint64_t value) const;
        auto SetPropertyFromSingle(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, float value) const;
        auto SetPropertyFromPoint(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Point const& value) const;
        auto SetPropertyFromRect(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Rect const& value) const;
        auto SetPropertyFromSize(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Size const& value) const;
        auto SetPropertyFromTimeSpan(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::TimeSpan const& value) const;
        auto SetPropertyFromByte(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint8_t value) const;
        auto SetPropertyFromUri(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Uri const& value) const;
        auto SetPropertyFromObject(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlMarkupHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlMarkupHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlMarkupHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics
    {
        auto UnloadObject(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlMember
    {
        [[nodiscard]] auto IsAttachable() const;
        [[nodiscard]] auto IsDependencyProperty() const;
        [[nodiscard]] auto IsReadOnly() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto TargetType() const;
        [[nodiscard]] auto Type() const;
        auto GetValue(Windows::Foundation::IInspectable const& instance) const;
        auto SetValue(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlMember>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlMember<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider
    {
        auto GetXamlType(Windows::UI::Xaml::Interop::TypeName const& type) const;
        auto GetXamlType(param::hstring const& fullName) const;
        auto GetXmlnsDefinitions() const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlMetadataProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlReader
    {
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlReader>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlReader<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlReaderStatics
    {
        auto Load(param::hstring const& xaml) const;
        auto LoadWithInitialTemplateValidation(param::hstring const& xaml) const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlReaderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlReaderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlType
    {
        [[nodiscard]] auto BaseType() const;
        [[nodiscard]] auto ContentProperty() const;
        [[nodiscard]] auto FullName() const;
        [[nodiscard]] auto IsArray() const;
        [[nodiscard]] auto IsCollection() const;
        [[nodiscard]] auto IsConstructible() const;
        [[nodiscard]] auto IsDictionary() const;
        [[nodiscard]] auto IsMarkupExtension() const;
        [[nodiscard]] auto IsBindable() const;
        [[nodiscard]] auto ItemType() const;
        [[nodiscard]] auto KeyType() const;
        [[nodiscard]] auto UnderlyingType() const;
        auto ActivateInstance() const;
        auto CreateFromString(param::hstring const& value) const;
        auto GetMember(param::hstring const& name) const;
        auto AddToVector(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& value) const;
        auto AddToMap(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& key, Windows::Foundation::IInspectable const& value) const;
        auto RunInitializer() const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlType>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlType<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Markup_IXamlType2
    {
        [[nodiscard]] auto BoxedType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Markup::IXamlType2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Markup_IXamlType2<D>;
    };
    struct struct_Windows_UI_Xaml_Markup_XamlBinaryWriterErrorInformation
    {
        uint32_t InputStreamIndex;
        uint32_t LineNumber;
        uint32_t LinePosition;
    };
    template <> struct abi<Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation>
    {
        using type = struct_Windows_UI_Xaml_Markup_XamlBinaryWriterErrorInformation;
    };
    struct struct_Windows_UI_Xaml_Markup_XmlnsDefinition
    {
        void* XmlNamespace;
        void* Namespace;
    };
    template <> struct abi<Windows::UI::Xaml::Markup::XmlnsDefinition>
    {
        using type = struct_Windows_UI_Xaml_Markup_XmlnsDefinition;
    };
}
#endif
