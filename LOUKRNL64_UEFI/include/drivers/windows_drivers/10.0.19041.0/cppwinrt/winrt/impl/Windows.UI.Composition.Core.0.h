// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Core_0_H
#define WINRT_Windows_UI_Composition_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::UI::Composition
{
    struct Compositor;
}
namespace winrt::Windows::UI::Composition::Core
{
    struct ICompositorController;
    struct CompositorController;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::Core::ICompositorController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Core::CompositorController>
    {
        using type = class_category;
    };
    template <> struct name<Windows::UI::Composition::Core::ICompositorController>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Core.ICompositorController" };
    };
    template <> struct name<Windows::UI::Composition::Core::CompositorController>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Core.CompositorController" };
    };
    template <> struct guid_storage<Windows::UI::Composition::Core::ICompositorController>
    {
        static constexpr guid value{ 0x2D75F35A,0x70A7,0x4395,{ 0xBA,0x2D,0xCE,0xF0,0xB1,0x83,0x99,0xF9 } };
    };
    template <> struct default_interface<Windows::UI::Composition::Core::CompositorController>
    {
        using type = Windows::UI::Composition::Core::ICompositorController;
    };
    template <> struct abi<Windows::UI::Composition::Core::ICompositorController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compositor(void**) noexcept = 0;
            virtual int32_t __stdcall Commit() noexcept = 0;
            virtual int32_t __stdcall EnsurePreviousCommitCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_CommitNeeded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommitNeeded(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Core_ICompositorController
    {
        [[nodiscard]] auto Compositor() const;
        auto Commit() const;
        auto EnsurePreviousCommitCompletedAsync() const;
        auto CommitNeeded(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const;
        using CommitNeeded_revoker = impl::event_revoker<Windows::UI::Composition::Core::ICompositorController, &impl::abi_t<Windows::UI::Composition::Core::ICompositorController>::remove_CommitNeeded>;
        CommitNeeded_revoker CommitNeeded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const;
        auto CommitNeeded(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Composition::Core::ICompositorController>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Core_ICompositorController<D>;
    };
}
#endif
