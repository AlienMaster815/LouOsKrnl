// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintTicket_0_H
#define WINRT_Windows_Graphics_Printing_PrintTicket_0_H
namespace winrt::Windows::Data::Xml::Dom
{
    struct IXmlNode;
}
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
}
namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    enum class PrintTicketFeatureSelectionType : int32_t
    {
        PickOne = 0,
        PickMany = 1,
    };
    enum class PrintTicketParameterDataType : int32_t
    {
        Integer = 0,
        NumericString = 1,
        String = 2,
    };
    enum class PrintTicketValueType : int32_t
    {
        Integer = 0,
        String = 1,
        Unknown = 2,
    };
    struct IPrintTicketCapabilities;
    struct IPrintTicketFeature;
    struct IPrintTicketOption;
    struct IPrintTicketParameterDefinition;
    struct IPrintTicketParameterInitializer;
    struct IPrintTicketValue;
    struct IWorkflowPrintTicket;
    struct IWorkflowPrintTicketValidationResult;
    struct PrintTicketCapabilities;
    struct PrintTicketFeature;
    struct PrintTicketOption;
    struct PrintTicketParameterDefinition;
    struct PrintTicketParameterInitializer;
    struct PrintTicketValue;
    struct WorkflowPrintTicket;
    struct WorkflowPrintTicketValidationResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketOption" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketValue" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeature" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketOption" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketValue" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeatureSelectionType" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDataType" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketValueType" };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
    {
        static constexpr guid value{ 0x8C45508B,0xBBDC,0x4256,{ 0xA1,0x42,0x2F,0xD6,0x15,0xEC,0xB4,0x16 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
    {
        static constexpr guid value{ 0xE7607D6A,0x59F5,0x4103,{ 0x88,0x58,0xB9,0x77,0x10,0x96,0x3D,0x39 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
    {
        static constexpr guid value{ 0xB086CF90,0xB367,0x4E4B,{ 0xBD,0x48,0x9C,0x78,0xA0,0xBB,0x31,0xCE } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
    {
        static constexpr guid value{ 0xD6BAB4E4,0x2962,0x4C01,{ 0xB7,0xF3,0x9A,0x92,0x94,0xEB,0x83,0x35 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
    {
        static constexpr guid value{ 0x5E3335BB,0xA0A5,0x48B1,{ 0x9D,0x5C,0x07,0x11,0x6D,0xDC,0x59,0x7A } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
    {
        static constexpr guid value{ 0x66B30A32,0x244D,0x4E22,{ 0xA9,0x8B,0xBB,0x3C,0xF1,0xF2,0xDD,0x91 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
    {
        static constexpr guid value{ 0x41D52285,0x35E8,0x448E,{ 0xA8,0xC5,0xE4,0xB6,0xA2,0xCF,0x82,0x6C } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
    {
        static constexpr guid value{ 0x0AD1F392,0xDA7B,0x4A36,{ 0xBF,0x36,0x6A,0x99,0xA6,0x2E,0x20,0x59 } };
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketOption;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketValue;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>
    {
        using type = Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult;
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentBindingFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentCollateFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentDuplexFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentHolePunchFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentInputBinFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentNUpFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentStapleFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_JobPasscodeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageBorderlessFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageMediaSizeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageMediaTypeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOrientationFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOutputColorFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOutputQualityFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageResolutionFeature(void**) noexcept = 0;
            virtual int32_t __stdcall GetFeature(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetParameterDefinition(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall GetOption(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall GetSelectedOption(void**) noexcept = 0;
            virtual int32_t __stdcall SetSelectedOption(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall GetPropertyNode(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetScoredPropertyNode(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPropertyValue(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetScoredPropertyValue(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnitType(void**) noexcept = 0;
            virtual int32_t __stdcall get_RangeMin(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RangeMax(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetValueAsInteger(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetValueAsString(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNamespace(void**) noexcept = 0;
            virtual int32_t __stdcall get_XmlNode(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentBindingFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentCollateFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentDuplexFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentHolePunchFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentInputBinFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentNUpFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentStapleFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_JobPasscodeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageBorderlessFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageMediaSizeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageMediaTypeFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOrientationFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOutputColorFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageOutputQualityFeature(void**) noexcept = 0;
            virtual int32_t __stdcall get_PageResolutionFeature(void**) noexcept = 0;
            virtual int32_t __stdcall GetFeature(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall NotifyXmlChangedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ValidateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetParameterInitializer(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetParameterInitializerAsInteger(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetParameterInitializerAsString(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall MergeAndValidateTicket(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Validated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        [[nodiscard]] auto DocumentBindingFeature() const;
        [[nodiscard]] auto DocumentCollateFeature() const;
        [[nodiscard]] auto DocumentDuplexFeature() const;
        [[nodiscard]] auto DocumentHolePunchFeature() const;
        [[nodiscard]] auto DocumentInputBinFeature() const;
        [[nodiscard]] auto DocumentNUpFeature() const;
        [[nodiscard]] auto DocumentStapleFeature() const;
        [[nodiscard]] auto JobPasscodeFeature() const;
        [[nodiscard]] auto PageBorderlessFeature() const;
        [[nodiscard]] auto PageMediaSizeFeature() const;
        [[nodiscard]] auto PageMediaTypeFeature() const;
        [[nodiscard]] auto PageOrientationFeature() const;
        [[nodiscard]] auto PageOutputColorFeature() const;
        [[nodiscard]] auto PageOutputQualityFeature() const;
        [[nodiscard]] auto PageResolutionFeature() const;
        auto GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto GetParameterDefinition(param::hstring const& name, param::hstring const& xmlNamespace) const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        [[nodiscard]] auto DisplayName() const;
        auto GetOption(param::hstring const& name, param::hstring const& xmlNamespace) const;
        [[nodiscard]] auto Options() const;
        auto GetSelectedOption() const;
        auto SetSelectedOption(Windows::Graphics::Printing::PrintTicket::PrintTicketOption const& value) const;
        [[nodiscard]] auto SelectionType() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        [[nodiscard]] auto DisplayName() const;
        auto GetPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto GetScoredPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto GetPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto GetScoredPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        [[nodiscard]] auto DataType() const;
        [[nodiscard]] auto UnitType() const;
        [[nodiscard]] auto RangeMin() const;
        [[nodiscard]] auto RangeMax() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        auto Value(Windows::Graphics::Printing::PrintTicket::PrintTicketValue const& value) const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue
    {
        [[nodiscard]] auto Type() const;
        auto GetValueAsInteger() const;
        auto GetValueAsString() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto XmlNamespace() const;
        [[nodiscard]] auto XmlNode() const;
        auto GetCapabilities() const;
        [[nodiscard]] auto DocumentBindingFeature() const;
        [[nodiscard]] auto DocumentCollateFeature() const;
        [[nodiscard]] auto DocumentDuplexFeature() const;
        [[nodiscard]] auto DocumentHolePunchFeature() const;
        [[nodiscard]] auto DocumentInputBinFeature() const;
        [[nodiscard]] auto DocumentNUpFeature() const;
        [[nodiscard]] auto DocumentStapleFeature() const;
        [[nodiscard]] auto JobPasscodeFeature() const;
        [[nodiscard]] auto PageBorderlessFeature() const;
        [[nodiscard]] auto PageMediaSizeFeature() const;
        [[nodiscard]] auto PageMediaTypeFeature() const;
        [[nodiscard]] auto PageOrientationFeature() const;
        [[nodiscard]] auto PageOutputColorFeature() const;
        [[nodiscard]] auto PageOutputQualityFeature() const;
        [[nodiscard]] auto PageResolutionFeature() const;
        auto GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto NotifyXmlChangedAsync() const;
        auto ValidateAsync() const;
        auto GetParameterInitializer(param::hstring const& name, param::hstring const& xmlNamespace) const;
        auto SetParameterInitializerAsInteger(param::hstring const& name, param::hstring const& xmlNamespace, int32_t integerValue) const;
        auto SetParameterInitializerAsString(param::hstring const& name, param::hstring const& xmlNamespace, param::hstring const& stringValue) const;
        auto MergeAndValidateTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& deltaShemaTicket) const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult
    {
        [[nodiscard]] auto Validated() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult<D>;
    };
}
#endif
