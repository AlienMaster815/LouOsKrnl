// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Core_2_H
#define WINRT_Windows_UI_Input_Inking_Core_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core
{
    struct __declspec(empty_bases) CoreIncrementalInkStroke : Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke
    {
        CoreIncrementalInkStroke(std::nullptr_t) noexcept {}
        CoreIncrementalInkStroke(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke(ptr, take_ownership_from_abi) {}
        CoreIncrementalInkStroke(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform);
    };
    struct __declspec(empty_bases) CoreInkIndependentInputSource : Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource,
        impl::require<CoreInkIndependentInputSource, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource2>
    {
        CoreInkIndependentInputSource(std::nullptr_t) noexcept {}
        CoreInkIndependentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
    };
    struct __declspec(empty_bases) CoreInkPresenterHost : Windows::UI::Input::Inking::Core::ICoreInkPresenterHost
    {
        CoreInkPresenterHost(std::nullptr_t) noexcept {}
        CoreInkPresenterHost(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreInkPresenterHost(ptr, take_ownership_from_abi) {}
        CoreInkPresenterHost();
    };
    struct __declspec(empty_bases) CoreWetStrokeUpdateEventArgs : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs
    {
        CoreWetStrokeUpdateEventArgs(std::nullptr_t) noexcept {}
        CoreWetStrokeUpdateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreWetStrokeUpdateSource : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource
    {
        CoreWetStrokeUpdateSource(std::nullptr_t) noexcept {}
        CoreWetStrokeUpdateSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
    };
}
#endif
