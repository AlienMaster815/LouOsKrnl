// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Documents_0_H
#define WINRT_Windows_UI_Xaml_Documents_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVector;
}
namespace winrt::Windows::UI::Core
{
    enum class CoreCursorType : int32_t;
}
namespace winrt::Windows::UI::Text
{
    struct ContentLinkInfo;
    enum class FontStretch : int32_t;
    enum class FontStyle : int32_t;
    struct FontWeight;
    enum class TextDecorations : uint32_t;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyObject;
    struct DependencyProperty;
    enum class ElementSoundMode : int32_t;
    enum class FlowDirection : int32_t;
    enum class FocusState : int32_t;
    enum class FontCapitals : int32_t;
    enum class FontEastAsianLanguage : int32_t;
    enum class FontEastAsianWidths : int32_t;
    enum class FontFraction : int32_t;
    enum class FontNumeralAlignment : int32_t;
    enum class FontNumeralStyle : int32_t;
    enum class FontVariants : int32_t;
    struct FrameworkElement;
    enum class LineStackingStrategy : int32_t;
    struct RoutedEventHandler;
    enum class TextAlignment : int32_t;
    struct Thickness;
    struct UIElement;
    struct XamlRoot;
}
namespace winrt::Windows::UI::Xaml::Input
{
    struct AccessKeyDisplayDismissedEventArgs;
    struct AccessKeyDisplayRequestedEventArgs;
    struct AccessKeyInvokedEventArgs;
    enum class KeyTipPlacementMode : int32_t;
    enum class XYFocusNavigationStrategy : int32_t;
}
namespace winrt::Windows::UI::Xaml::Media
{
    struct Brush;
    struct FontFamily;
    enum class StyleSimulations : int32_t;
}
namespace winrt::Windows::UI::Xaml::Documents
{
    enum class LogicalDirection : int32_t
    {
        Backward = 0,
        Forward = 1,
    };
    enum class UnderlineStyle : int32_t
    {
        None = 0,
        Single = 1,
    };
    struct IBlock;
    struct IBlock2;
    struct IBlockFactory;
    struct IBlockStatics;
    struct IBlockStatics2;
    struct IBold;
    struct IContactContentLinkProvider;
    struct IContentLink;
    struct IContentLinkInvokedEventArgs;
    struct IContentLinkProvider;
    struct IContentLinkProviderCollection;
    struct IContentLinkProviderFactory;
    struct IContentLinkStatics;
    struct IGlyphs;
    struct IGlyphs2;
    struct IGlyphsStatics;
    struct IGlyphsStatics2;
    struct IHyperlink;
    struct IHyperlink2;
    struct IHyperlink3;
    struct IHyperlink4;
    struct IHyperlink5;
    struct IHyperlinkClickEventArgs;
    struct IHyperlinkStatics;
    struct IHyperlinkStatics2;
    struct IHyperlinkStatics3;
    struct IHyperlinkStatics4;
    struct IHyperlinkStatics5;
    struct IInline;
    struct IInlineFactory;
    struct IInlineUIContainer;
    struct IItalic;
    struct ILineBreak;
    struct IParagraph;
    struct IParagraphStatics;
    struct IPlaceContentLinkProvider;
    struct IRun;
    struct IRunStatics;
    struct ISpan;
    struct ISpanFactory;
    struct ITextElement;
    struct ITextElement2;
    struct ITextElement3;
    struct ITextElement4;
    struct ITextElement5;
    struct ITextElementFactory;
    struct ITextElementOverrides;
    struct ITextElementStatics;
    struct ITextElementStatics2;
    struct ITextElementStatics3;
    struct ITextElementStatics4;
    struct ITextHighlighter;
    struct ITextHighlighterBase;
    struct ITextHighlighterBaseFactory;
    struct ITextHighlighterFactory;
    struct ITextHighlighterStatics;
    struct ITextPointer;
    struct ITypography;
    struct ITypographyStatics;
    struct IUnderline;
    struct Block;
    struct BlockCollection;
    struct Bold;
    struct ContactContentLinkProvider;
    struct ContentLink;
    struct ContentLinkInvokedEventArgs;
    struct ContentLinkProvider;
    struct ContentLinkProviderCollection;
    struct Glyphs;
    struct Hyperlink;
    struct HyperlinkClickEventArgs;
    struct Inline;
    struct InlineCollection;
    struct InlineUIContainer;
    struct Italic;
    struct LineBreak;
    struct Paragraph;
    struct PlaceContentLinkProvider;
    struct Run;
    struct Span;
    struct TextElement;
    struct TextHighlighter;
    struct TextHighlighterBase;
    struct TextPointer;
    struct Typography;
    struct Underline;
    struct TextRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Documents::IBlock>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IBlock2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IBlockFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IBlockStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IBlockStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IBold>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContactContentLinkProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLink>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLinkProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLinkProviderCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLinkProviderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IContentLinkStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IGlyphs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IGlyphs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IGlyphsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IGlyphsStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlink>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlink2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlink3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlink4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlink5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IInline>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IInlineFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IInlineUIContainer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IItalic>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ILineBreak>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IParagraph>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IParagraphStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IPlaceContentLinkProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IRun>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IRunStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ISpan>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ISpanFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElement2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElement3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElement4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElement5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITextPointer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITypography>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ITypographyStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::IUnderline>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Block>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::BlockCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Bold>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ContactContentLinkProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ContentLink>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ContentLinkProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::ContentLinkProviderCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Glyphs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Hyperlink>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Inline>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::InlineCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::InlineUIContainer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Italic>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::LineBreak>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Paragraph>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::PlaceContentLinkProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Run>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Span>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::TextElement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::TextHighlighter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::TextHighlighterBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::TextPointer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Typography>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::Underline>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::LogicalDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::UnderlineStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Documents::TextRange>
    {
        using type = struct_category<int32_t, int32_t>;
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBlock>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlock" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBlock2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlock2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBlockFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBlockStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBlockStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IBold>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBold" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContactContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContactContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLink>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLink" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLinkInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLinkProviderCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLinkProviderCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLinkProviderFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLinkProviderFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IContentLinkStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IContentLinkStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IGlyphs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IGlyphs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphs2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IGlyphsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphsStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IGlyphsStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphsStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlink>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlink2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlink3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink3" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlink4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink4" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlink5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink5" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics5" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IInline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInline" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IInlineFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInlineFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IInlineUIContainer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInlineUIContainer" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IItalic>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IItalic" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ILineBreak>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ILineBreak" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IParagraph>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IParagraph" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IParagraphStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IParagraphStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IPlaceContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IPlaceContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IRun>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IRun" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IRunStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IRunStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ISpan>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ISpan" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ISpanFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ISpanFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElement2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElement3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement3" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElement4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement4" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElement5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement5" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighter" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterBase" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITextPointer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextPointer" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITypography>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITypography" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ITypographyStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITypographyStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::IUnderline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IUnderline" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Block>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Block" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::BlockCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.BlockCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Bold>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Bold" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ContactContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ContactContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ContentLink>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ContentLink" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ContentLinkInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::ContentLinkProviderCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ContentLinkProviderCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Glyphs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Glyphs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Hyperlink>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Hyperlink" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Inline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Inline" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::InlineCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.InlineCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::InlineUIContainer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.InlineUIContainer" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Italic>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Italic" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::LineBreak>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.LineBreak" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Paragraph>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Paragraph" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::PlaceContentLinkProvider>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.PlaceContentLinkProvider" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Run>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Run" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Span>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Span" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::TextElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextElement" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::TextHighlighter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextHighlighter" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::TextHighlighterBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextHighlighterBase" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::TextPointer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextPointer" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Typography>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Typography" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::Underline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Underline" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::LogicalDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.LogicalDirection" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::UnderlineStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.UnderlineStyle" };
    };
    template <> struct name<Windows::UI::Xaml::Documents::TextRange>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextRange" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBlock>
    {
        static constexpr guid value{ 0x4BCE0016,0xDD47,0x4350,{ 0x8C,0xB0,0xE1,0x71,0x60,0x0A,0xC8,0x96 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBlock2>
    {
        static constexpr guid value{ 0x5EC7BDF3,0x1333,0x4A92,{ 0x83,0x18,0x6C,0xAE,0xDC,0x12,0xEF,0x89 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBlockFactory>
    {
        static constexpr guid value{ 0x07110532,0x4F59,0x4F3B,{ 0x9C,0xE5,0x25,0x78,0x4C,0x43,0x05,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBlockStatics>
    {
        static constexpr guid value{ 0xF86A8C34,0x8D18,0x4C53,{ 0xAE,0xBD,0x91,0xE6,0x10,0xA5,0xE0,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBlockStatics2>
    {
        static constexpr guid value{ 0xAF01A4D6,0x03E3,0x4CEE,{ 0x9B,0x02,0x2B,0xFC,0x30,0x8B,0x27,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IBold>
    {
        static constexpr guid value{ 0xADE73784,0x1B59,0x4DA4,{ 0xBB,0x23,0x0F,0x20,0xE8,0x85,0xB4,0xBF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContactContentLinkProvider>
    {
        static constexpr guid value{ 0xF92FD29B,0x589B,0x4ABD,{ 0x9D,0x37,0x35,0xA1,0x46,0x8F,0x02,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLink>
    {
        static constexpr guid value{ 0x6C60C3E1,0x528C,0x42F8,{ 0x92,0xBE,0x34,0xB8,0xC6,0x8B,0xE3,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs>
    {
        static constexpr guid value{ 0x546717C1,0xE8DF,0x4593,{ 0x96,0x39,0x97,0x59,0x5F,0xDF,0x83,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLinkProvider>
    {
        static constexpr guid value{ 0x730587FD,0xBFDC,0x4CB3,{ 0x90,0x4D,0xB6,0x5A,0xB3,0x39,0xBB,0xF5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLinkProviderCollection>
    {
        static constexpr guid value{ 0xF5B84D0C,0xA9F4,0x4D1A,{ 0xA1,0x3C,0x10,0xDE,0xF1,0x84,0x37,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLinkProviderFactory>
    {
        static constexpr guid value{ 0x57D60D3B,0xEF1A,0x4E8E,{ 0x83,0x9B,0xD3,0x6E,0xF3,0xA5,0x03,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IContentLinkStatics>
    {
        static constexpr guid value{ 0xA34E3063,0xEB16,0x484E,{ 0xA3,0xDF,0x52,0x2B,0x9A,0x83,0x2E,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IGlyphs>
    {
        static constexpr guid value{ 0xD079498B,0xF2B1,0x4281,{ 0x99,0xA2,0xE4,0xD0,0x59,0x32,0xB2,0xB5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IGlyphs2>
    {
        static constexpr guid value{ 0xAA8BFE5C,0x3754,0x4BEE,{ 0xBB,0xE1,0x44,0x03,0xEE,0x9B,0x86,0xF0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IGlyphsStatics>
    {
        static constexpr guid value{ 0x225CF4C5,0xFDF1,0x43ED,{ 0x95,0x8F,0x41,0x4E,0x86,0xF1,0x03,0xF2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IGlyphsStatics2>
    {
        static constexpr guid value{ 0x10489AA7,0x1615,0x4A33,{ 0xAA,0x02,0xD7,0xEF,0x2A,0xEF,0xC7,0x39 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlink>
    {
        static constexpr guid value{ 0x0FE2363B,0x14E9,0x4152,{ 0x9E,0x58,0x5A,0xEA,0x5B,0x21,0xF0,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlink2>
    {
        static constexpr guid value{ 0x4CE9DA5F,0x7CFF,0x4291,{ 0xB7,0x8F,0xDF,0xEC,0x72,0x49,0x05,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlink3>
    {
        static constexpr guid value{ 0xC3F157D9,0xE5D3,0x4FB7,{ 0x87,0x02,0x4F,0x6D,0x85,0xDD,0x9E,0x0A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlink4>
    {
        static constexpr guid value{ 0xF7D02959,0x82FB,0x400A,{ 0xA4,0x07,0x5A,0x4E,0xE6,0x77,0x98,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlink5>
    {
        static constexpr guid value{ 0x607DD7D2,0x0945,0x4328,{ 0x91,0xEE,0x94,0xCC,0xEC,0x2E,0xA6,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
    {
        static constexpr guid value{ 0xC755916B,0x7BDC,0x4BE7,{ 0xB3,0x73,0x92,0x40,0xA5,0x03,0xD8,0x70 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkStatics>
    {
        static constexpr guid value{ 0x3A44D3D4,0xFD41,0x41DB,{ 0x8C,0x72,0x3B,0x79,0x0A,0xCD,0x9F,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
    {
        static constexpr guid value{ 0x5028D8B7,0x7ADF,0x43EE,{ 0xA4,0xAE,0x9C,0x92,0x5F,0x75,0x57,0x16 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
    {
        static constexpr guid value{ 0x3E15DEA0,0x205E,0x4947,{ 0x99,0xA5,0x74,0xE7,0x57,0xE8,0xE1,0xB4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkStatics4>
    {
        static constexpr guid value{ 0x0476B378,0x8FAA,0x4E24,{ 0xB3,0xB6,0xE9,0xDE,0x4D,0x3C,0x70,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IHyperlinkStatics5>
    {
        static constexpr guid value{ 0x59308CEA,0x1E49,0x4921,{ 0xBD,0x88,0xA2,0x87,0x8D,0x07,0xE3,0x0E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IInline>
    {
        static constexpr guid value{ 0x0C92712D,0x1BC9,0x4931,{ 0x8C,0xB1,0x1A,0xEA,0xDF,0x1C,0xC6,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IInlineFactory>
    {
        static constexpr guid value{ 0x4058ACD1,0x2F90,0x4B8F,{ 0x99,0xDD,0x42,0x18,0xEF,0x5F,0x03,0xDE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IInlineUIContainer>
    {
        static constexpr guid value{ 0x1416CE81,0x28EE,0x452E,{ 0xB1,0x21,0x5F,0xC4,0xF6,0x0B,0x86,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IItalic>
    {
        static constexpr guid value{ 0x91F4619C,0xFCBB,0x4157,{ 0x80,0x2C,0x76,0xF6,0x3B,0x5F,0xB6,0x57 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ILineBreak>
    {
        static constexpr guid value{ 0x645589C4,0xF769,0x41ED,{ 0x89,0x5B,0x8A,0x1B,0x2F,0xB3,0x15,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IParagraph>
    {
        static constexpr guid value{ 0xF83EF59A,0xFA61,0x4BEF,{ 0xAE,0x33,0x0B,0x0A,0xD7,0x56,0xA8,0x4D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IParagraphStatics>
    {
        static constexpr guid value{ 0xEF08889A,0x535B,0x4E4C,{ 0x8D,0x84,0x28,0x3B,0x33,0xE9,0x8A,0x37 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IPlaceContentLinkProvider>
    {
        static constexpr guid value{ 0x10348A4C,0x2366,0x41BE,{ 0x90,0xC8,0x32,0x58,0xB5,0x3B,0x54,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IRun>
    {
        static constexpr guid value{ 0x59553C83,0x0E14,0x49BD,{ 0xB8,0x4B,0xC5,0x26,0xF3,0x03,0x43,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IRunStatics>
    {
        static constexpr guid value{ 0xE9303CEF,0x65A0,0x4B8D,{ 0xA7,0xF7,0x8F,0xDB,0x28,0x7B,0x46,0xF3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ISpan>
    {
        static constexpr guid value{ 0x9839D4A9,0x02AF,0x4811,{ 0xAA,0x15,0x6B,0xEF,0x3A,0xCA,0xC9,0x7A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ISpanFactory>
    {
        static constexpr guid value{ 0x5B916F5C,0xCD2D,0x40C0,{ 0x95,0x6A,0x38,0x64,0x48,0x32,0x2F,0x79 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElement>
    {
        static constexpr guid value{ 0xE83B0062,0xD776,0x4F92,{ 0xBA,0xEA,0x40,0xE7,0x7D,0x47,0x91,0xD5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElement2>
    {
        static constexpr guid value{ 0xA8076AA8,0xF892,0x49F6,{ 0x8C,0xD2,0x89,0xAD,0xDA,0xF0,0x6D,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElement3>
    {
        static constexpr guid value{ 0xD1DB340F,0x1BC4,0x4CA8,{ 0xBC,0xF7,0x77,0x0B,0xFF,0x9B,0x27,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElement4>
    {
        static constexpr guid value{ 0xB196E222,0xCA0E,0x48A9,{ 0x83,0xBC,0x36,0xCE,0x50,0x56,0x6A,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElement5>
    {
        static constexpr guid value{ 0xBD9552F3,0x540D,0x58BF,{ 0xB6,0xA8,0x07,0x55,0x6A,0xED,0xA2,0xEA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementFactory>
    {
        static constexpr guid value{ 0x35007285,0xCF47,0x4BFE,{ 0xB1,0xBC,0x39,0xC9,0x3A,0xF4,0xAE,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementOverrides>
    {
        static constexpr guid value{ 0x0CE21EE7,0x4F76,0x4DD9,{ 0xBF,0x91,0x16,0x3B,0xEC,0xCF,0x84,0xBC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementStatics>
    {
        static constexpr guid value{ 0x0A2F9B98,0x6C03,0x4470,{ 0xA7,0x9B,0x32,0x98,0xA1,0x04,0x82,0xCE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementStatics2>
    {
        static constexpr guid value{ 0x164297B2,0x982B,0x49E1,{ 0x8C,0x03,0xCA,0x43,0xBC,0x4D,0x5B,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementStatics3>
    {
        static constexpr guid value{ 0xCFEFCFAF,0x0FA1,0x45EC,{ 0x9A,0x4E,0x9B,0x33,0x66,0x4D,0xC8,0xB1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextElementStatics4>
    {
        static constexpr guid value{ 0xFD8F641E,0x6B12,0x40D5,{ 0xB6,0xEF,0xD1,0xBD,0x12,0xAC,0x90,0x66 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextHighlighter>
    {
        static constexpr guid value{ 0xBA6CB54B,0x7D75,0x4535,{ 0xB3,0x0D,0xA8,0x1A,0x00,0xB6,0x37,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextHighlighterBase>
    {
        static constexpr guid value{ 0xD957601A,0x5F0D,0x4CDF,{ 0x97,0x58,0x97,0xE0,0xEB,0x95,0xC8,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>
    {
        static constexpr guid value{ 0x9592B2D0,0xEADC,0x4C74,{ 0x92,0xC8,0x6E,0x89,0x6E,0x22,0x50,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextHighlighterFactory>
    {
        static constexpr guid value{ 0x70125461,0x9A8F,0x4FA0,{ 0xB2,0x35,0x8F,0xFA,0xA5,0x07,0xBE,0xF2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextHighlighterStatics>
    {
        static constexpr guid value{ 0xB3B009C4,0x3A7E,0x49CC,{ 0xAB,0x84,0x29,0xC4,0x05,0x48,0x87,0x65 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITextPointer>
    {
        static constexpr guid value{ 0xAC687AA1,0x6A41,0x43FF,{ 0x85,0x1E,0x45,0x34,0x8A,0xA2,0xCF,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITypography>
    {
        static constexpr guid value{ 0x866F65D5,0xEA97,0x42AB,{ 0x92,0x88,0x9C,0x01,0xAE,0xBC,0x7A,0x97 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::ITypographyStatics>
    {
        static constexpr guid value{ 0x67B9EC88,0x6C57,0x4CE0,{ 0x95,0xF1,0xD4,0xB9,0xED,0x63,0x2F,0xB4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Documents::IUnderline>
    {
        static constexpr guid value{ 0xA5FA8202,0x61C0,0x47D7,{ 0x93,0xEF,0xBC,0x0B,0x57,0x7C,0x5F,0x26 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Block>
    {
        using type = Windows::UI::Xaml::Documents::IBlock;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::BlockCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Bold>
    {
        using type = Windows::UI::Xaml::Documents::IBold;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::ContactContentLinkProvider>
    {
        using type = Windows::UI::Xaml::Documents::IContactContentLinkProvider;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::ContentLink>
    {
        using type = Windows::UI::Xaml::Documents::IContentLink;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>
    {
        using type = Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::ContentLinkProvider>
    {
        using type = Windows::UI::Xaml::Documents::IContentLinkProvider;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::ContentLinkProviderCollection>
    {
        using type = Windows::UI::Xaml::Documents::IContentLinkProviderCollection;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Glyphs>
    {
        using type = Windows::UI::Xaml::Documents::IGlyphs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Hyperlink>
    {
        using type = Windows::UI::Xaml::Documents::IHyperlink;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>
    {
        using type = Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Inline>
    {
        using type = Windows::UI::Xaml::Documents::IInline;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::InlineCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::InlineUIContainer>
    {
        using type = Windows::UI::Xaml::Documents::IInlineUIContainer;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Italic>
    {
        using type = Windows::UI::Xaml::Documents::IItalic;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::LineBreak>
    {
        using type = Windows::UI::Xaml::Documents::ILineBreak;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Paragraph>
    {
        using type = Windows::UI::Xaml::Documents::IParagraph;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::PlaceContentLinkProvider>
    {
        using type = Windows::UI::Xaml::Documents::IPlaceContentLinkProvider;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Run>
    {
        using type = Windows::UI::Xaml::Documents::IRun;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Span>
    {
        using type = Windows::UI::Xaml::Documents::ISpan;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::TextElement>
    {
        using type = Windows::UI::Xaml::Documents::ITextElement;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::TextHighlighter>
    {
        using type = Windows::UI::Xaml::Documents::ITextHighlighter;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::TextHighlighterBase>
    {
        using type = Windows::UI::Xaml::Documents::ITextHighlighterBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::TextPointer>
    {
        using type = Windows::UI::Xaml::Documents::ITextPointer;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Typography>
    {
        using type = Windows::UI::Xaml::Documents::ITypography;
    };
    template <> struct default_interface<Windows::UI::Xaml::Documents::Underline>
    {
        using type = Windows::UI::Xaml::Documents::IUnderline;
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBlock>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TextAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineHeight(double*) noexcept = 0;
            virtual int32_t __stdcall put_LineHeight(double) noexcept = 0;
            virtual int32_t __stdcall get_LineStackingStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LineStackingStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Margin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_Margin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBlock2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalTextAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalTextAlignment(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBlockFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBlockStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineStackingStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MarginProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBlockStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalTextAlignmentProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IBold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContactContentLinkProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLink>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Info(void**) noexcept = 0;
            virtual int32_t __stdcall put_Info(void*) noexcept = 0;
            virtual int32_t __stdcall get_Background(void**) noexcept = 0;
            virtual int32_t __stdcall put_Background(void*) noexcept = 0;
            virtual int32_t __stdcall get_Cursor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Cursor(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeft(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusLeft(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRight(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusRight(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUp(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusUp(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDown(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusDown(void*) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ElementSoundMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusUpNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusDownNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusLeftNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusRightNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsTabStop(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTabStop(bool) noexcept = 0;
            virtual int32_t __stdcall get_TabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TabIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Invoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Invoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Focus(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentLinkInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLinkProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLinkProviderCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLinkProviderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IContentLinkStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CursorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTabStopProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TabIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IGlyphs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnicodeString(void**) noexcept = 0;
            virtual int32_t __stdcall put_UnicodeString(void*) noexcept = 0;
            virtual int32_t __stdcall get_Indices(void**) noexcept = 0;
            virtual int32_t __stdcall put_Indices(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_FontUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_StyleSimulations(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StyleSimulations(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FontRenderingEmSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_FontRenderingEmSize(double) noexcept = 0;
            virtual int32_t __stdcall get_OriginX(double*) noexcept = 0;
            virtual int32_t __stdcall put_OriginX(double) noexcept = 0;
            virtual int32_t __stdcall get_OriginY(double*) noexcept = 0;
            virtual int32_t __stdcall put_OriginY(double) noexcept = 0;
            virtual int32_t __stdcall get_Fill(void**) noexcept = 0;
            virtual int32_t __stdcall put_Fill(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IGlyphs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsColorFontEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsColorFontEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ColorFontPaletteIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorFontPaletteIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IGlyphsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnicodeStringProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndicesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontUriProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleSimulationsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontRenderingEmSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OriginXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OriginYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FillProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IGlyphsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsColorFontEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorFontPaletteIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NavigateUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_NavigateUri(void*) noexcept = 0;
            virtual int32_t __stdcall add_Click(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Click(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnderlineStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UnderlineStyle(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XYFocusLeft(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusLeft(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRight(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusRight(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUp(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusUp(void*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDown(void**) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusDown(void*) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ElementSoundMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusUpNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusDownNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusLeftNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusRightNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Focus(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTabStop(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTabStop(bool) noexcept = 0;
            virtual int32_t __stdcall get_TabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TabIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NavigateUriProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnderlineStyleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XYFocusLeftProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategyProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTabStopProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TabIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IInline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IInlineFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IInlineUIContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Child(void**) noexcept = 0;
            virtual int32_t __stdcall put_Child(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IItalic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ILineBreak>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IParagraph>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Inlines(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextIndent(double*) noexcept = 0;
            virtual int32_t __stdcall put_TextIndent(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IParagraphStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextIndentProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IPlaceContentLinkProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IRun>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlowDirection(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IRunStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlowDirectionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ISpan>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Inlines(void**) noexcept = 0;
            virtual int32_t __stdcall put_Inlines(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ISpanFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_FontSize(double) noexcept = 0;
            virtual int32_t __stdcall get_FontFamily(void**) noexcept = 0;
            virtual int32_t __stdcall put_FontFamily(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontWeight(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall put_FontWeight(struct struct_Windows_UI_Text_FontWeight) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FontStretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStretch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSpacing(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CharacterSpacing(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Foreground(void**) noexcept = 0;
            virtual int32_t __stdcall put_Foreground(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentStart(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentEnd(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementStart(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementEnd(void**) noexcept = 0;
            virtual int32_t __stdcall FindName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTextScaleFactorEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTextScaleFactorEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElement3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteraction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusOnInteraction(bool) noexcept = 0;
            virtual int32_t __stdcall get_AccessKey(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessKey(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElement4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextDecorations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TextDecorations(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsAccessKeyScope(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAccessKeyScope(bool) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyScopeOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessKeyScopeOwner(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipPlacementMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipPlacementMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyDisplayRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyDisplayRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyDisplayDismissed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyDisplayDismissed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElement5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XamlRoot(void**) noexcept = 0;
            virtual int32_t __stdcall put_XamlRoot(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnDisconnectVisualChildren() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontFamilyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontWeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontStyleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontStretchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSpacingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LanguageProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTextScaleFactorEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteractionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextDecorationsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsAccessKeyScopeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyScopeOwnerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipPlacementModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ranges(void**) noexcept = 0;
            virtual int32_t __stdcall get_Foreground(void**) noexcept = 0;
            virtual int32_t __stdcall put_Foreground(void*) noexcept = 0;
            virtual int32_t __stdcall get_Background(void**) noexcept = 0;
            virtual int32_t __stdcall put_Background(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITextPointer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisualParent(void**) noexcept = 0;
            virtual int32_t __stdcall get_LogicalDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Offset(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCharacterRect(int32_t, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetPositionAtOffset(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITypography>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::ITypographyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnnotationAlternatesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationAlternates(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetAnnotationAlternates(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EastAsianExpertFormsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetEastAsianExpertForms(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetEastAsianExpertForms(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_EastAsianLanguageProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetEastAsianLanguage(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetEastAsianLanguage(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EastAsianWidthsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetEastAsianWidths(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetEastAsianWidths(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StandardLigaturesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetStandardLigatures(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStandardLigatures(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_ContextualLigaturesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetContextualLigatures(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetContextualLigatures(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_DiscretionaryLigaturesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetDiscretionaryLigatures(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetDiscretionaryLigatures(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalLigaturesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetHistoricalLigatures(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetHistoricalLigatures(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StandardSwashesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetStandardSwashes(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetStandardSwashes(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContextualSwashesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetContextualSwashes(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetContextualSwashes(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContextualAlternatesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetContextualAlternates(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetContextualAlternates(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticAlternatesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticAlternates(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticAlternates(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet1Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet1(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet1(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet2Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet2(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet2(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet3Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet3(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet3(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet4Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet4(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet4(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet5Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet5(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet5(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet6Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet6(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet6(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet7Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet7(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet7(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet8Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet8(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet8(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet9Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet9(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet9(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet10Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet10(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet10(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet11Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet11(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet11(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet12Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet12(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet12(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet13Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet13(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet13(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet14Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet14(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet14(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet15Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet15(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet15(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet16Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet16(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet16(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet17Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet17(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet17(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet18Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet18(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet18(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet19Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet19(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet19(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_StylisticSet20Property(void**) noexcept = 0;
            virtual int32_t __stdcall GetStylisticSet20(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetStylisticSet20(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_CapitalsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapitals(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetCapitals(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CapitalSpacingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapitalSpacing(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetCapitalSpacing(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_KerningProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetKerning(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetKerning(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_CaseSensitiveFormsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetCaseSensitiveForms(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetCaseSensitiveForms(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalFormsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetHistoricalForms(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetHistoricalForms(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_FractionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetFraction(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetFraction(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_NumeralStyleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetNumeralStyle(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetNumeralStyle(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_NumeralAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetNumeralAlignment(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetNumeralAlignment(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SlashedZeroProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetSlashedZero(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetSlashedZero(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_MathematicalGreekProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetMathematicalGreek(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetMathematicalGreek(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_VariantsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetVariants(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetVariants(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Documents::IUnderline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBlock
    {
        [[nodiscard]] auto TextAlignment() const;
        auto TextAlignment(Windows::UI::Xaml::TextAlignment const& value) const;
        [[nodiscard]] auto LineHeight() const;
        auto LineHeight(double value) const;
        [[nodiscard]] auto LineStackingStrategy() const;
        auto LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy const& value) const;
        [[nodiscard]] auto Margin() const;
        auto Margin(Windows::UI::Xaml::Thickness const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBlock>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlock<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBlock2
    {
        [[nodiscard]] auto HorizontalTextAlignment() const;
        auto HorizontalTextAlignment(Windows::UI::Xaml::TextAlignment const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBlock2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlock2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBlockFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBlockFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBlockStatics
    {
        [[nodiscard]] auto TextAlignmentProperty() const;
        [[nodiscard]] auto LineHeightProperty() const;
        [[nodiscard]] auto LineStackingStrategyProperty() const;
        [[nodiscard]] auto MarginProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBlockStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBlockStatics2
    {
        [[nodiscard]] auto HorizontalTextAlignmentProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBlockStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IBold
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IBold>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBold<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContactContentLinkProvider
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContactContentLinkProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContactContentLinkProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLink
    {
        [[nodiscard]] auto Info() const;
        auto Info(Windows::UI::Text::ContentLinkInfo const& value) const;
        [[nodiscard]] auto Background() const;
        auto Background(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Cursor() const;
        auto Cursor(Windows::UI::Core::CoreCursorType const& value) const;
        [[nodiscard]] auto XYFocusLeft() const;
        auto XYFocusLeft(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusRight() const;
        auto XYFocusRight(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusUp() const;
        auto XYFocusUp(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusDown() const;
        auto XYFocusDown(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto ElementSoundMode() const;
        auto ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const;
        [[nodiscard]] auto FocusState() const;
        [[nodiscard]] auto XYFocusUpNavigationStrategy() const;
        auto XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusDownNavigationStrategy() const;
        auto XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategy() const;
        auto XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusRightNavigationStrategy() const;
        auto XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto IsTabStop() const;
        auto IsTabStop(bool value) const;
        [[nodiscard]] auto TabIndex() const;
        auto TabIndex(int32_t value) const;
        auto Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::ContentLink, Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs> const& handler) const;
        using Invoked_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IContentLink, &impl::abi_t<Windows::UI::Xaml::Documents::IContentLink>::remove_Invoked>;
        Invoked_revoker Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::ContentLink, Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs> const& handler) const;
        auto Invoked(winrt::event_token const& token) const noexcept;
        auto GotFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IContentLink, &impl::abi_t<Windows::UI::Xaml::Documents::IContentLink>::remove_GotFocus>;
        GotFocus_revoker GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto GotFocus(winrt::event_token const& token) const noexcept;
        auto LostFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using LostFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IContentLink, &impl::abi_t<Windows::UI::Xaml::Documents::IContentLink>::remove_LostFocus>;
        LostFocus_revoker LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto LostFocus(winrt::event_token const& token) const noexcept;
        auto Focus(Windows::UI::Xaml::FocusState const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLink>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLink<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLinkInvokedEventArgs
    {
        [[nodiscard]] auto ContentLinkInfo() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLinkInvokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLinkProvider
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLinkProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLinkProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLinkProviderCollection
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLinkProviderCollection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLinkProviderCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLinkProviderFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLinkProviderFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLinkProviderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IContentLinkStatics
    {
        [[nodiscard]] auto BackgroundProperty() const;
        [[nodiscard]] auto CursorProperty() const;
        [[nodiscard]] auto XYFocusLeftProperty() const;
        [[nodiscard]] auto XYFocusRightProperty() const;
        [[nodiscard]] auto XYFocusUpProperty() const;
        [[nodiscard]] auto XYFocusDownProperty() const;
        [[nodiscard]] auto ElementSoundModeProperty() const;
        [[nodiscard]] auto FocusStateProperty() const;
        [[nodiscard]] auto XYFocusUpNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusDownNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusRightNavigationStrategyProperty() const;
        [[nodiscard]] auto IsTabStopProperty() const;
        [[nodiscard]] auto TabIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IContentLinkStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IContentLinkStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IGlyphs
    {
        [[nodiscard]] auto UnicodeString() const;
        auto UnicodeString(param::hstring const& value) const;
        [[nodiscard]] auto Indices() const;
        auto Indices(param::hstring const& value) const;
        [[nodiscard]] auto FontUri() const;
        auto FontUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto StyleSimulations() const;
        auto StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations const& value) const;
        [[nodiscard]] auto FontRenderingEmSize() const;
        auto FontRenderingEmSize(double value) const;
        [[nodiscard]] auto OriginX() const;
        auto OriginX(double value) const;
        [[nodiscard]] auto OriginY() const;
        auto OriginY(double value) const;
        [[nodiscard]] auto Fill() const;
        auto Fill(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IGlyphs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IGlyphs2
    {
        [[nodiscard]] auto IsColorFontEnabled() const;
        auto IsColorFontEnabled(bool value) const;
        [[nodiscard]] auto ColorFontPaletteIndex() const;
        auto ColorFontPaletteIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IGlyphs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IGlyphsStatics
    {
        [[nodiscard]] auto UnicodeStringProperty() const;
        [[nodiscard]] auto IndicesProperty() const;
        [[nodiscard]] auto FontUriProperty() const;
        [[nodiscard]] auto StyleSimulationsProperty() const;
        [[nodiscard]] auto FontRenderingEmSizeProperty() const;
        [[nodiscard]] auto OriginXProperty() const;
        [[nodiscard]] auto OriginYProperty() const;
        [[nodiscard]] auto FillProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IGlyphsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IGlyphsStatics2
    {
        [[nodiscard]] auto IsColorFontEnabledProperty() const;
        [[nodiscard]] auto ColorFontPaletteIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IGlyphsStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlink
    {
        [[nodiscard]] auto NavigateUri() const;
        auto NavigateUri(Windows::Foundation::Uri const& value) const;
        auto Click(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& handler) const;
        using Click_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IHyperlink, &impl::abi_t<Windows::UI::Xaml::Documents::IHyperlink>::remove_Click>;
        Click_revoker Click(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& handler) const;
        auto Click(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlink2
    {
        [[nodiscard]] auto UnderlineStyle() const;
        auto UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlink3
    {
        [[nodiscard]] auto XYFocusLeft() const;
        auto XYFocusLeft(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusRight() const;
        auto XYFocusRight(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusUp() const;
        auto XYFocusUp(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto XYFocusDown() const;
        auto XYFocusDown(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto ElementSoundMode() const;
        auto ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlink4
    {
        [[nodiscard]] auto FocusState() const;
        [[nodiscard]] auto XYFocusUpNavigationStrategy() const;
        auto XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusDownNavigationStrategy() const;
        auto XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategy() const;
        auto XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusRightNavigationStrategy() const;
        auto XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        auto GotFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IHyperlink4, &impl::abi_t<Windows::UI::Xaml::Documents::IHyperlink4>::remove_GotFocus>;
        GotFocus_revoker GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto GotFocus(winrt::event_token const& token) const noexcept;
        auto LostFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using LostFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::IHyperlink4, &impl::abi_t<Windows::UI::Xaml::Documents::IHyperlink4>::remove_LostFocus>;
        LostFocus_revoker LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto LostFocus(winrt::event_token const& token) const noexcept;
        auto Focus(Windows::UI::Xaml::FocusState const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlink5
    {
        [[nodiscard]] auto IsTabStop() const;
        auto IsTabStop(bool value) const;
        [[nodiscard]] auto TabIndex() const;
        auto TabIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics
    {
        [[nodiscard]] auto NavigateUriProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics2
    {
        [[nodiscard]] auto UnderlineStyleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3
    {
        [[nodiscard]] auto XYFocusLeftProperty() const;
        [[nodiscard]] auto XYFocusRightProperty() const;
        [[nodiscard]] auto XYFocusUpProperty() const;
        [[nodiscard]] auto XYFocusDownProperty() const;
        [[nodiscard]] auto ElementSoundModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4
    {
        [[nodiscard]] auto FocusStateProperty() const;
        [[nodiscard]] auto XYFocusUpNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusDownNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusRightNavigationStrategyProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics5
    {
        [[nodiscard]] auto IsTabStopProperty() const;
        [[nodiscard]] auto TabIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IInline
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IInline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IInlineFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IInlineFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInlineFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IInlineUIContainer
    {
        [[nodiscard]] auto Child() const;
        auto Child(Windows::UI::Xaml::UIElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IInlineUIContainer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInlineUIContainer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IItalic
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IItalic>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IItalic<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ILineBreak
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ILineBreak>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ILineBreak<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IParagraph
    {
        [[nodiscard]] auto Inlines() const;
        [[nodiscard]] auto TextIndent() const;
        auto TextIndent(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IParagraph>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IParagraph<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IParagraphStatics
    {
        [[nodiscard]] auto TextIndentProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IParagraphStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IParagraphStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IPlaceContentLinkProvider
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IPlaceContentLinkProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IPlaceContentLinkProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IRun
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto FlowDirection() const;
        auto FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IRun>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IRun<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IRunStatics
    {
        [[nodiscard]] auto FlowDirectionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IRunStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IRunStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ISpan
    {
        [[nodiscard]] auto Inlines() const;
        auto Inlines(Windows::UI::Xaml::Documents::InlineCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ISpan>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ISpan<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ISpanFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ISpanFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ISpanFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElement
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto FontSize() const;
        auto FontSize(double value) const;
        [[nodiscard]] auto FontFamily() const;
        auto FontFamily(Windows::UI::Xaml::Media::FontFamily const& value) const;
        [[nodiscard]] auto FontWeight() const;
        auto FontWeight(Windows::UI::Text::FontWeight const& value) const;
        [[nodiscard]] auto FontStyle() const;
        auto FontStyle(Windows::UI::Text::FontStyle const& value) const;
        [[nodiscard]] auto FontStretch() const;
        auto FontStretch(Windows::UI::Text::FontStretch const& value) const;
        [[nodiscard]] auto CharacterSpacing() const;
        auto CharacterSpacing(int32_t value) const;
        [[nodiscard]] auto Foreground() const;
        auto Foreground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Language() const;
        auto Language(param::hstring const& value) const;
        [[nodiscard]] auto ContentStart() const;
        [[nodiscard]] auto ContentEnd() const;
        [[nodiscard]] auto ElementStart() const;
        [[nodiscard]] auto ElementEnd() const;
        auto FindName(param::hstring const& name) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElement>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElement2
    {
        [[nodiscard]] auto IsTextScaleFactorEnabled() const;
        auto IsTextScaleFactorEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElement2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElement3
    {
        [[nodiscard]] auto AllowFocusOnInteraction() const;
        auto AllowFocusOnInteraction(bool value) const;
        [[nodiscard]] auto AccessKey() const;
        auto AccessKey(param::hstring const& value) const;
        [[nodiscard]] auto ExitDisplayModeOnAccessKeyInvoked() const;
        auto ExitDisplayModeOnAccessKeyInvoked(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElement3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElement4
    {
        [[nodiscard]] auto TextDecorations() const;
        auto TextDecorations(Windows::UI::Text::TextDecorations const& value) const;
        [[nodiscard]] auto IsAccessKeyScope() const;
        auto IsAccessKeyScope(bool value) const;
        [[nodiscard]] auto AccessKeyScopeOwner() const;
        auto AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto KeyTipPlacementMode() const;
        auto KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const;
        [[nodiscard]] auto KeyTipHorizontalOffset() const;
        auto KeyTipHorizontalOffset(double value) const;
        [[nodiscard]] auto KeyTipVerticalOffset() const;
        auto KeyTipVerticalOffset(double value) const;
        auto AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& handler) const;
        using AccessKeyDisplayRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::ITextElement4, &impl::abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyDisplayRequested>;
        AccessKeyDisplayRequested_revoker AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& handler) const;
        auto AccessKeyDisplayRequested(winrt::event_token const& token) const noexcept;
        auto AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& handler) const;
        using AccessKeyDisplayDismissed_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::ITextElement4, &impl::abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyDisplayDismissed>;
        AccessKeyDisplayDismissed_revoker AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& handler) const;
        auto AccessKeyDisplayDismissed(winrt::event_token const& token) const noexcept;
        auto AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& handler) const;
        using AccessKeyInvoked_revoker = impl::event_revoker<Windows::UI::Xaml::Documents::ITextElement4, &impl::abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyInvoked>;
        AccessKeyInvoked_revoker AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& handler) const;
        auto AccessKeyInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElement4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElement5
    {
        [[nodiscard]] auto XamlRoot() const;
        auto XamlRoot(Windows::UI::Xaml::XamlRoot const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElement5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementOverrides
    {
        auto OnDisconnectVisualChildren() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementStatics
    {
        [[nodiscard]] auto FontSizeProperty() const;
        [[nodiscard]] auto FontFamilyProperty() const;
        [[nodiscard]] auto FontWeightProperty() const;
        [[nodiscard]] auto FontStyleProperty() const;
        [[nodiscard]] auto FontStretchProperty() const;
        [[nodiscard]] auto CharacterSpacingProperty() const;
        [[nodiscard]] auto ForegroundProperty() const;
        [[nodiscard]] auto LanguageProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementStatics2
    {
        [[nodiscard]] auto IsTextScaleFactorEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementStatics3
    {
        [[nodiscard]] auto AllowFocusOnInteractionProperty() const;
        [[nodiscard]] auto AccessKeyProperty() const;
        [[nodiscard]] auto ExitDisplayModeOnAccessKeyInvokedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextElementStatics4
    {
        [[nodiscard]] auto TextDecorationsProperty() const;
        [[nodiscard]] auto IsAccessKeyScopeProperty() const;
        [[nodiscard]] auto AccessKeyScopeOwnerProperty() const;
        [[nodiscard]] auto KeyTipPlacementModeProperty() const;
        [[nodiscard]] auto KeyTipHorizontalOffsetProperty() const;
        [[nodiscard]] auto KeyTipVerticalOffsetProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextHighlighter
    {
        [[nodiscard]] auto Ranges() const;
        [[nodiscard]] auto Foreground() const;
        auto Foreground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Background() const;
        auto Background(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextHighlighterBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextHighlighterFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextHighlighterStatics
    {
        [[nodiscard]] auto ForegroundProperty() const;
        [[nodiscard]] auto BackgroundProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITextPointer
    {
        [[nodiscard]] auto Parent() const;
        [[nodiscard]] auto VisualParent() const;
        [[nodiscard]] auto LogicalDirection() const;
        [[nodiscard]] auto Offset() const;
        auto GetCharacterRect(Windows::UI::Xaml::Documents::LogicalDirection const& direction) const;
        auto GetPositionAtOffset(int32_t offset, Windows::UI::Xaml::Documents::LogicalDirection const& direction) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITextPointer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextPointer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITypography
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITypography>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITypography<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_ITypographyStatics
    {
        [[nodiscard]] auto AnnotationAlternatesProperty() const;
        auto GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
        [[nodiscard]] auto EastAsianExpertFormsProperty() const;
        auto GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto EastAsianLanguageProperty() const;
        auto GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value) const;
        [[nodiscard]] auto EastAsianWidthsProperty() const;
        auto GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value) const;
        [[nodiscard]] auto StandardLigaturesProperty() const;
        auto GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto ContextualLigaturesProperty() const;
        auto GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto DiscretionaryLigaturesProperty() const;
        auto GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto HistoricalLigaturesProperty() const;
        auto GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StandardSwashesProperty() const;
        auto GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
        [[nodiscard]] auto ContextualSwashesProperty() const;
        auto GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
        [[nodiscard]] auto ContextualAlternatesProperty() const;
        auto GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticAlternatesProperty() const;
        auto GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
        [[nodiscard]] auto StylisticSet1Property() const;
        auto GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet2Property() const;
        auto GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet3Property() const;
        auto GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet4Property() const;
        auto GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet5Property() const;
        auto GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet6Property() const;
        auto GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet7Property() const;
        auto GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet8Property() const;
        auto GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet9Property() const;
        auto GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet10Property() const;
        auto GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet11Property() const;
        auto GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet12Property() const;
        auto GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet13Property() const;
        auto GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet14Property() const;
        auto GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet15Property() const;
        auto GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet16Property() const;
        auto GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet17Property() const;
        auto GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet18Property() const;
        auto GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet19Property() const;
        auto GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto StylisticSet20Property() const;
        auto GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto CapitalsProperty() const;
        auto GetCapitals(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value) const;
        [[nodiscard]] auto CapitalSpacingProperty() const;
        auto GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto KerningProperty() const;
        auto GetKerning(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto CaseSensitiveFormsProperty() const;
        auto GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto HistoricalFormsProperty() const;
        auto GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto FractionProperty() const;
        auto GetFraction(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value) const;
        [[nodiscard]] auto NumeralStyleProperty() const;
        auto GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value) const;
        [[nodiscard]] auto NumeralAlignmentProperty() const;
        auto GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value) const;
        [[nodiscard]] auto SlashedZeroProperty() const;
        auto GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto MathematicalGreekProperty() const;
        auto GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
        [[nodiscard]] auto VariantsProperty() const;
        auto GetVariants(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Documents::ITypographyStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Documents_IUnderline
    {
    };
    template <> struct consume<Windows::UI::Xaml::Documents::IUnderline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Documents_IUnderline<D>;
    };
    struct struct_Windows_UI_Xaml_Documents_TextRange
    {
        int32_t StartIndex;
        int32_t Length;
    };
    template <> struct abi<Windows::UI::Xaml::Documents::TextRange>
    {
        using type = struct_Windows_UI_Xaml_Documents_TextRange;
    };
}
#endif
