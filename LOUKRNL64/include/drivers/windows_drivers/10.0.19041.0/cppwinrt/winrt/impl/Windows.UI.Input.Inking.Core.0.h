// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Core_0_H
#define WINRT_Windows_UI_Input_Inking_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::UI::Composition
{
    struct ContainerVisual;
}
namespace winrt::Windows::UI::Core
{
    struct PointerEventArgs;
}
namespace winrt::Windows::UI::Input::Inking
{
    struct InkDrawingAttributes;
    struct InkPoint;
    struct InkPresenter;
    struct InkStroke;
}
namespace winrt::Windows::UI::Input::Inking::Core
{
    enum class CoreWetStrokeDisposition : int32_t
    {
        Inking = 0,
        Completed = 1,
        Canceled = 2,
    };
    struct ICoreIncrementalInkStroke;
    struct ICoreIncrementalInkStrokeFactory;
    struct ICoreInkIndependentInputSource;
    struct ICoreInkIndependentInputSourceStatics;
    struct ICoreInkPresenterHost;
    struct ICoreWetStrokeUpdateEventArgs;
    struct ICoreWetStrokeUpdateSource;
    struct ICoreWetStrokeUpdateSourceStatics;
    struct CoreIncrementalInkStroke;
    struct CoreInkIndependentInputSource;
    struct CoreInkPresenterHost;
    struct CoreWetStrokeUpdateEventArgs;
    struct CoreWetStrokeUpdateSource;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreInkPresenterHost" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreInkPresenterHost" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource" };
    };
    template <> struct name<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Inking.Core.CoreWetStrokeDisposition" };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
    {
        static constexpr guid value{ 0xFDA015D3,0x9D66,0x4F7D,{ 0xA5,0x7F,0xCC,0x70,0xB9,0xCF,0xAA,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
    {
        static constexpr guid value{ 0xD7C59F46,0x8DA8,0x4F70,{ 0x97,0x51,0xE5,0x3B,0xB6,0xDF,0x45,0x96 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
    {
        static constexpr guid value{ 0x39B38DA9,0x7639,0x4499,{ 0xA5,0xB5,0x19,0x1D,0x00,0xE3,0x5B,0x16 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
    {
        static constexpr guid value{ 0x73E6011B,0x80C0,0x4DFB,{ 0x9B,0x66,0x10,0xBA,0x7F,0x3F,0x9C,0x84 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
    {
        static constexpr guid value{ 0x396E89E6,0x7D55,0x4617,{ 0x9E,0x58,0x68,0xC7,0x0C,0x91,0x69,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
    {
        static constexpr guid value{ 0xFB07D14C,0x3380,0x457A,{ 0xA9,0x87,0x99,0x13,0x57,0x89,0x6C,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
    {
        static constexpr guid value{ 0x1F718E22,0xEE52,0x4E00,{ 0x82,0x09,0x4C,0x3E,0x5B,0x21,0xA3,0xCC } };
    };
    template <> struct guid_storage<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
    {
        static constexpr guid value{ 0x3DAD9CBA,0x1D3D,0x46AE,{ 0xAB,0x9D,0x86,0x47,0x48,0x6C,0x6F,0x90 } };
    };
    template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>
    {
        using type = Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke;
    };
    template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>
    {
        using type = Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource;
    };
    template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreInkPresenterHost>
    {
        using type = Windows::UI::Input::Inking::Core::ICoreInkPresenterHost;
    };
    template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs>
    {
        using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>
    {
        using type = Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource;
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AppendInkPoints(void*, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CreateInkStroke(void**) noexcept = 0;
            virtual int32_t __stdcall get_DrawingAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointTransform(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, Windows::Foundation::Numerics::float3x2, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PointerEntering(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntering(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerHovering(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerHovering(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExiting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExiting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoving(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoving(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleasing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleasing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
            virtual int32_t __stdcall get_RootVisual(void**) noexcept = 0;
            virtual int32_t __stdcall put_RootVisual(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewInkPoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Disposition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Disposition(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_WetStrokeStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WetStrokeStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WetStrokeContinuing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WetStrokeContinuing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WetStrokeStopping(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WetStrokeStopping(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WetStrokeCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WetStrokeCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WetStrokeCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WetStrokeCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke
    {
        auto AppendInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints) const;
        auto CreateInkStroke() const;
        [[nodiscard]] auto DrawingAttributes() const;
        [[nodiscard]] auto PointTransform() const;
        [[nodiscard]] auto BoundingRect() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory
    {
        auto Create(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource
    {
        auto PointerEntering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerEntering_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerEntering>;
        PointerEntering_revoker PointerEntering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerEntering(winrt::event_token const& cookie) const noexcept;
        auto PointerHovering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerHovering_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerHovering>;
        PointerHovering_revoker PointerHovering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerHovering(winrt::event_token const& cookie) const noexcept;
        auto PointerExiting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerExiting_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerExiting>;
        PointerExiting_revoker PointerExiting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerExiting(winrt::event_token const& cookie) const noexcept;
        auto PointerPressing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerPressing_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerPressing>;
        PointerPressing_revoker PointerPressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerPressing(winrt::event_token const& cookie) const noexcept;
        auto PointerMoving(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerMoving_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerMoving>;
        PointerMoving_revoker PointerMoving(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerMoving(winrt::event_token const& cookie) const noexcept;
        auto PointerReleasing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerReleasing_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerReleasing>;
        PointerReleasing_revoker PointerReleasing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerReleasing(winrt::event_token const& cookie) const noexcept;
        auto PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerLost_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerLost>;
        PointerLost_revoker PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerLost(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics
    {
        auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost
    {
        [[nodiscard]] auto InkPresenter() const;
        [[nodiscard]] auto RootVisual() const;
        auto RootVisual(Windows::UI::Composition::ContainerVisual const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs
    {
        [[nodiscard]] auto NewInkPoints() const;
        [[nodiscard]] auto PointerId() const;
        [[nodiscard]] auto Disposition() const;
        auto Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource
    {
        auto WetStrokeStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        using WetStrokeStarting_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStarting>;
        WetStrokeStarting_revoker WetStrokeStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        auto WetStrokeStarting(winrt::event_token const& cookie) const noexcept;
        auto WetStrokeContinuing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        using WetStrokeContinuing_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeContinuing>;
        WetStrokeContinuing_revoker WetStrokeContinuing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        auto WetStrokeContinuing(winrt::event_token const& cookie) const noexcept;
        auto WetStrokeStopping(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        using WetStrokeStopping_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStopping>;
        WetStrokeStopping_revoker WetStrokeStopping(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        auto WetStrokeStopping(winrt::event_token const& cookie) const noexcept;
        auto WetStrokeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        using WetStrokeCompleted_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCompleted>;
        WetStrokeCompleted_revoker WetStrokeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        auto WetStrokeCompleted(winrt::event_token const& cookie) const noexcept;
        auto WetStrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        using WetStrokeCanceled_revoker = impl::event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource, &impl::abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCanceled>;
        WetStrokeCanceled_revoker WetStrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const;
        auto WetStrokeCanceled(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics
    {
        auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics<D>;
    };
}
#endif
