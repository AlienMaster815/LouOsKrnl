// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Desktop_2_H
#define WINRT_Windows_UI_Composition_Desktop_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Desktop.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Desktop
{
    struct __declspec(empty_bases) DesktopWindowTarget : Windows::UI::Composition::Desktop::IDesktopWindowTarget,
        impl::base<DesktopWindowTarget, Windows::UI::Composition::CompositionTarget, Windows::UI::Composition::CompositionObject>,
        impl::require<DesktopWindowTarget, Windows::UI::Composition::ICompositionTarget, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        DesktopWindowTarget(std::nullptr_t) noexcept {}
        DesktopWindowTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Desktop::IDesktopWindowTarget(ptr, take_ownership_from_abi) {}
    };
}
#endif
