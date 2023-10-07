// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Preview_2_H
#define WINRT_Windows_UI_Input_Inking_Preview_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Preview
{
    struct __declspec(empty_bases) PalmRejectionDelayZonePreview : Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview,
        impl::require<PalmRejectionDelayZonePreview, Windows::Foundation::IClosable>
    {
        PalmRejectionDelayZonePreview(std::nullptr_t) noexcept {}
        PalmRejectionDelayZonePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview(ptr, take_ownership_from_abi) {}
        static auto CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect);
        static auto CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect, Windows::UI::Composition::Visual const& viewportVisual, Windows::Foundation::Rect const& viewportRect);
    };
}
#endif
