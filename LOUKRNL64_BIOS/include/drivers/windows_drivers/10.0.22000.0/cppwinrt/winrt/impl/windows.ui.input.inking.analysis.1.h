// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Analysis_1_H
#define WINRT_Windows_UI_Input_Inking_Analysis_1_H
#include "winrt/impl/Windows.UI.Input.Inking.Analysis.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Analysis
{
    struct __declspec(empty_bases) IInkAnalysisInkBullet :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisInkBullet>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkBullet, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisInkBullet(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisInkBullet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisInkDrawing :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisInkDrawing>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkDrawing, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisInkDrawing(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisInkDrawing(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisInkWord :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisInkWord>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisInkWord, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisInkWord(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisInkWord(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisLine :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisLine>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisLine, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisLine(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisListItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisListItem>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisListItem, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisListItem(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisListItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisNode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisNode>
    {
        IInkAnalysisNode(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisParagraph :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisParagraph>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisParagraph, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisParagraph(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisParagraph(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisResult>
    {
        IInkAnalysisResult(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisRoot :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisRoot>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisRoot, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisRoot(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisRoot(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalysisWritingRegion :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalysisWritingRegion>,
        impl::require<Windows::UI::Input::Inking::Analysis::IInkAnalysisWritingRegion, Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        IInkAnalysisWritingRegion(std::nullptr_t = nullptr) noexcept {}
        IInkAnalysisWritingRegion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalyzer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalyzer>
    {
        IInkAnalyzer(std::nullptr_t = nullptr) noexcept {}
        IInkAnalyzer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkAnalyzerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkAnalyzerFactory>
    {
        IInkAnalyzerFactory(std::nullptr_t = nullptr) noexcept {}
        IInkAnalyzerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
