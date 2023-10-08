// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Documents_2_H
#define WINRT_Windows_UI_Xaml_Documents_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Documents.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Documents
{
    struct TextRange
    {
        int32_t StartIndex;
        int32_t Length;
    };
    inline bool operator==(TextRange const& left, TextRange const& right) noexcept
    {
        return left.StartIndex == right.StartIndex && left.Length == right.Length;
    }
    inline bool operator!=(TextRange const& left, TextRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) Block : Windows::UI::Xaml::Documents::IBlock,
        impl::base<Block, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Block, Windows::UI::Xaml::Documents::IBlock2, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Block(std::nullptr_t) noexcept {}
        Block(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IBlock(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto MarginProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
    };
    struct __declspec(empty_bases) BlockCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>
    {
        BlockCollection(std::nullptr_t) noexcept {}
        BlockCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Bold : Windows::UI::Xaml::Documents::IBold,
        impl::base<Bold, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Bold, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Bold(std::nullptr_t) noexcept {}
        Bold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IBold(ptr, take_ownership_from_abi) {}
        Bold();
    };
    struct __declspec(empty_bases) ContactContentLinkProvider : Windows::UI::Xaml::Documents::IContactContentLinkProvider,
        impl::base<ContactContentLinkProvider, Windows::UI::Xaml::Documents::ContentLinkProvider, Windows::UI::Xaml::DependencyObject>,
        impl::require<ContactContentLinkProvider, Windows::UI::Xaml::Documents::IContentLinkProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ContactContentLinkProvider(std::nullptr_t) noexcept {}
        ContactContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IContactContentLinkProvider(ptr, take_ownership_from_abi) {}
        ContactContentLinkProvider();
    };
    struct __declspec(empty_bases) ContentLink : Windows::UI::Xaml::Documents::IContentLink,
        impl::base<ContentLink, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentLink, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ContentLink(std::nullptr_t) noexcept {}
        ContentLink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IContentLink(ptr, take_ownership_from_abi) {}
        ContentLink();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto CursorProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto TabIndexProperty();
    };
    struct __declspec(empty_bases) ContentLinkInvokedEventArgs : Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs
    {
        ContentLinkInvokedEventArgs(std::nullptr_t) noexcept {}
        ContentLinkInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentLinkProvider : Windows::UI::Xaml::Documents::IContentLinkProvider,
        impl::base<ContentLinkProvider, Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentLinkProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ContentLinkProvider(std::nullptr_t) noexcept {}
        ContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IContentLinkProvider(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentLinkProviderCollection : Windows::UI::Xaml::Documents::IContentLinkProviderCollection,
        impl::require<ContentLinkProviderCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Documents::ContentLinkProvider>, Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::ContentLinkProvider>>
    {
        ContentLinkProviderCollection(std::nullptr_t) noexcept {}
        ContentLinkProviderCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IContentLinkProviderCollection(ptr, take_ownership_from_abi) {}
        ContentLinkProviderCollection();
    };
    struct __declspec(empty_bases) Glyphs : Windows::UI::Xaml::Documents::IGlyphs,
        impl::base<Glyphs, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Glyphs, Windows::UI::Xaml::Documents::IGlyphs2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Glyphs(std::nullptr_t) noexcept {}
        Glyphs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IGlyphs(ptr, take_ownership_from_abi) {}
        Glyphs();
        [[nodiscard]] static auto UnicodeStringProperty();
        [[nodiscard]] static auto IndicesProperty();
        [[nodiscard]] static auto FontUriProperty();
        [[nodiscard]] static auto StyleSimulationsProperty();
        [[nodiscard]] static auto FontRenderingEmSizeProperty();
        [[nodiscard]] static auto OriginXProperty();
        [[nodiscard]] static auto OriginYProperty();
        [[nodiscard]] static auto FillProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto ColorFontPaletteIndexProperty();
    };
    struct __declspec(empty_bases) Hyperlink : Windows::UI::Xaml::Documents::IHyperlink,
        impl::base<Hyperlink, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Hyperlink, Windows::UI::Xaml::Documents::IHyperlink2, Windows::UI::Xaml::Documents::IHyperlink3, Windows::UI::Xaml::Documents::IHyperlink4, Windows::UI::Xaml::Documents::IHyperlink5, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Hyperlink(std::nullptr_t) noexcept {}
        Hyperlink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IHyperlink(ptr, take_ownership_from_abi) {}
        Hyperlink();
        [[nodiscard]] static auto NavigateUriProperty();
        [[nodiscard]] static auto UnderlineStyleProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto TabIndexProperty();
    };
    struct __declspec(empty_bases) HyperlinkClickEventArgs : Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs,
        impl::base<HyperlinkClickEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<HyperlinkClickEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        HyperlinkClickEventArgs(std::nullptr_t) noexcept {}
        HyperlinkClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Inline : Windows::UI::Xaml::Documents::IInline,
        impl::base<Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Inline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Inline(std::nullptr_t) noexcept {}
        Inline(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IInline(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InlineCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>
    {
        InlineCollection(std::nullptr_t) noexcept {}
        InlineCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InlineUIContainer : Windows::UI::Xaml::Documents::IInlineUIContainer,
        impl::base<InlineUIContainer, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<InlineUIContainer, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        InlineUIContainer(std::nullptr_t) noexcept {}
        InlineUIContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IInlineUIContainer(ptr, take_ownership_from_abi) {}
        InlineUIContainer();
    };
    struct __declspec(empty_bases) Italic : Windows::UI::Xaml::Documents::IItalic,
        impl::base<Italic, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Italic, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Italic(std::nullptr_t) noexcept {}
        Italic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IItalic(ptr, take_ownership_from_abi) {}
        Italic();
    };
    struct __declspec(empty_bases) LineBreak : Windows::UI::Xaml::Documents::ILineBreak,
        impl::base<LineBreak, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<LineBreak, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LineBreak(std::nullptr_t) noexcept {}
        LineBreak(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ILineBreak(ptr, take_ownership_from_abi) {}
        LineBreak();
    };
    struct __declspec(empty_bases) Paragraph : Windows::UI::Xaml::Documents::IParagraph,
        impl::base<Paragraph, Windows::UI::Xaml::Documents::Block, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Paragraph, Windows::UI::Xaml::Documents::IBlock, Windows::UI::Xaml::Documents::IBlock2, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Paragraph(std::nullptr_t) noexcept {}
        Paragraph(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IParagraph(ptr, take_ownership_from_abi) {}
        Paragraph();
        [[nodiscard]] static auto TextIndentProperty();
    };
    struct __declspec(empty_bases) PlaceContentLinkProvider : Windows::UI::Xaml::Documents::IPlaceContentLinkProvider,
        impl::base<PlaceContentLinkProvider, Windows::UI::Xaml::Documents::ContentLinkProvider, Windows::UI::Xaml::DependencyObject>,
        impl::require<PlaceContentLinkProvider, Windows::UI::Xaml::Documents::IContentLinkProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PlaceContentLinkProvider(std::nullptr_t) noexcept {}
        PlaceContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IPlaceContentLinkProvider(ptr, take_ownership_from_abi) {}
        PlaceContentLinkProvider();
    };
    struct __declspec(empty_bases) Run : Windows::UI::Xaml::Documents::IRun,
        impl::base<Run, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Run, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Run(std::nullptr_t) noexcept {}
        Run(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IRun(ptr, take_ownership_from_abi) {}
        Run();
        [[nodiscard]] static auto FlowDirectionProperty();
    };
    struct __declspec(empty_bases) Span : Windows::UI::Xaml::Documents::ISpan,
        impl::base<Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Span, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Span(std::nullptr_t) noexcept {}
        Span(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ISpan(ptr, take_ownership_from_abi) {}
        Span();
    };
    struct __declspec(empty_bases) TextElement : Windows::UI::Xaml::Documents::ITextElement,
        impl::base<TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<TextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TextElement(std::nullptr_t) noexcept {}
        TextElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ITextElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto LanguageProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto ExitDisplayModeOnAccessKeyInvokedProperty();
        [[nodiscard]] static auto TextDecorationsProperty();
        [[nodiscard]] static auto IsAccessKeyScopeProperty();
        [[nodiscard]] static auto AccessKeyScopeOwnerProperty();
        [[nodiscard]] static auto KeyTipPlacementModeProperty();
        [[nodiscard]] static auto KeyTipHorizontalOffsetProperty();
        [[nodiscard]] static auto KeyTipVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) TextHighlighter : Windows::UI::Xaml::Documents::ITextHighlighter
    {
        TextHighlighter(std::nullptr_t) noexcept {}
        TextHighlighter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ITextHighlighter(ptr, take_ownership_from_abi) {}
        TextHighlighter();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto BackgroundProperty();
    };
    struct __declspec(empty_bases) TextHighlighterBase : Windows::UI::Xaml::Documents::ITextHighlighterBase,
        impl::base<TextHighlighterBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<TextHighlighterBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TextHighlighterBase(std::nullptr_t) noexcept {}
        TextHighlighterBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ITextHighlighterBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextPointer : Windows::UI::Xaml::Documents::ITextPointer
    {
        TextPointer(std::nullptr_t) noexcept {}
        TextPointer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ITextPointer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Typography : Windows::UI::Xaml::Documents::ITypography
    {
        Typography(std::nullptr_t) noexcept {}
        Typography(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::ITypography(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AnnotationAlternatesProperty();
        static auto GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto EastAsianExpertFormsProperty();
        static auto GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto EastAsianLanguageProperty();
        static auto GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value);
        [[nodiscard]] static auto EastAsianWidthsProperty();
        static auto GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value);
        [[nodiscard]] static auto StandardLigaturesProperty();
        static auto GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto ContextualLigaturesProperty();
        static auto GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto DiscretionaryLigaturesProperty();
        static auto GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalLigaturesProperty();
        static auto GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StandardSwashesProperty();
        static auto GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualSwashesProperty();
        static auto GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualAlternatesProperty();
        static auto GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticAlternatesProperty();
        static auto GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto StylisticSet1Property();
        static auto GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet2Property();
        static auto GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet3Property();
        static auto GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet4Property();
        static auto GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet5Property();
        static auto GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet6Property();
        static auto GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet7Property();
        static auto GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet8Property();
        static auto GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet9Property();
        static auto GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet10Property();
        static auto GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet11Property();
        static auto GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet12Property();
        static auto GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet13Property();
        static auto GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet14Property();
        static auto GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet15Property();
        static auto GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet16Property();
        static auto GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet17Property();
        static auto GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet18Property();
        static auto GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet19Property();
        static auto GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet20Property();
        static auto GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CapitalsProperty();
        static auto GetCapitals(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value);
        [[nodiscard]] static auto CapitalSpacingProperty();
        static auto GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto KerningProperty();
        static auto GetKerning(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CaseSensitiveFormsProperty();
        static auto GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalFormsProperty();
        static auto GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto FractionProperty();
        static auto GetFraction(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value);
        [[nodiscard]] static auto NumeralStyleProperty();
        static auto GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value);
        [[nodiscard]] static auto NumeralAlignmentProperty();
        static auto GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value);
        [[nodiscard]] static auto SlashedZeroProperty();
        static auto GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto MathematicalGreekProperty();
        static auto GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto VariantsProperty();
        static auto GetVariants(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value);
    };
    struct __declspec(empty_bases) Underline : Windows::UI::Xaml::Documents::IUnderline,
        impl::base<Underline, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Underline, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElement5, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Underline(std::nullptr_t) noexcept {}
        Underline(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Documents::IUnderline(ptr, take_ownership_from_abi) {}
        Underline();
    };
    template <typename D>
    class ITextElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using ITextElementOverrides = winrt::Windows::UI::Xaml::Documents::ITextElementOverrides;
        WINRT_IMPL_AUTO(void) OnDisconnectVisualChildren() const;
    };
}
#endif
