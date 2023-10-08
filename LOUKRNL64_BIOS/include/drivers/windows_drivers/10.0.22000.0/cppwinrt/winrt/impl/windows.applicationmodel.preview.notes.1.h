// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_Notes_1_H
#define WINRT_Windows_ApplicationModel_Preview_Notes_1_H
#include "winrt/impl/Windows.ApplicationModel.Preview.Notes.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes
{
    struct __declspec(empty_bases) INotePlacementChangedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotePlacementChangedPreviewEventArgs>
    {
        INotePlacementChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        INotePlacementChangedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INoteVisibilityChangedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INoteVisibilityChangedPreviewEventArgs>
    {
        INoteVisibilityChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        INoteVisibilityChangedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotesWindowManagerPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotesWindowManagerPreview>
    {
        INotesWindowManagerPreview(std::nullptr_t = nullptr) noexcept {}
        INotesWindowManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotesWindowManagerPreview2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotesWindowManagerPreview2>
    {
        INotesWindowManagerPreview2(std::nullptr_t = nullptr) noexcept {}
        INotesWindowManagerPreview2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotesWindowManagerPreviewShowNoteOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotesWindowManagerPreviewShowNoteOptions>
    {
        INotesWindowManagerPreviewShowNoteOptions(std::nullptr_t = nullptr) noexcept {}
        INotesWindowManagerPreviewShowNoteOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotesWindowManagerPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotesWindowManagerPreviewStatics>
    {
        INotesWindowManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        INotesWindowManagerPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
