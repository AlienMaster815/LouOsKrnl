// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_UI_H
#define WINRT_Windows_Gaming_UI_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Gaming.UI.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_VisibilityChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged_revoker consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, VisibilityChanged_revoker>(this, VisibilityChanged(handler));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_VisibilityChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_IsInputRedirectedChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged_revoker consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, IsInputRedirectedChanged_revoker>(this, IsInputRedirectedChanged(handler));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_IsInputRedirectedChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::Visible() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_Visible(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirected() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_IsInputRedirected(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::AppId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_AppId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::AppDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_AppDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::SenderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_SenderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::Origin() const
    {
        Windows::Gaming::UI::GameChatMessageOrigin value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_Origin(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition() const
    {
        Windows::Gaming::UI::GameChatOverlayPosition value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlay)->get_DesiredPosition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlay)->put_DesiredPosition(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlay<D>::AddMessage(param::hstring const& sender, param::hstring const& message, Windows::Gaming::UI::GameChatMessageOrigin const& origin) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlay)->AddMessage(*(void**)(&sender), *(void**)(&message), static_cast<int32_t>(origin)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->add_MessageReceived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived_revoker consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MessageReceived_revoker>(this, MessageReceived(handler));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->remove_MessageReceived(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::SetDelayBeforeClosingAfterMessageReceived(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->SetDelayBeforeClosingAfterMessageReceived(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>::GetDefault() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameChatOverlayStatics)->GetDefault(&value));
        return Windows::Gaming::UI::GameChatOverlay{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs<D>::GameUIArgs() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameUIProviderActivatedEventArgs)->get_GameUIArgs(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs<D>::ReportCompleted(Windows::Foundation::Collections::ValueSet const& results) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::UI::IGameUIProviderActivatedEventArgs)->ReportCompleted(*(void**)(&results)));
    }
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameBarStatics> : produce_base<D, Windows::Gaming::UI::IGameBarStatics>
    {
        int32_t __stdcall add_VisibilityChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VisibilityChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VisibilityChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_IsInputRedirectedChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().IsInputRedirectedChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_IsInputRedirectedChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputRedirectedChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Visible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Visible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsInputRedirected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInputRedirected());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> : produce_base<D, Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>
    {
        int32_t __stdcall get_AppId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SenderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SenderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Origin(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::UI::GameChatMessageOrigin>(this->shim().Origin());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameChatOverlay> : produce_base<D, Windows::Gaming::UI::IGameChatOverlay>
    {
        int32_t __stdcall get_DesiredPosition(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::UI::GameChatOverlayPosition>(this->shim().DesiredPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredPosition(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPosition(*reinterpret_cast<Windows::Gaming::UI::GameChatOverlayPosition const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddMessage(void* sender, void* message, int32_t origin) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMessage(*reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<Windows::Gaming::UI::GameChatMessageOrigin const*>(&origin));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameChatOverlayMessageSource> : produce_base<D, Windows::Gaming::UI::IGameChatOverlayMessageSource>
    {
        int32_t __stdcall add_MessageReceived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MessageReceived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall SetDelayBeforeClosingAfterMessageReceived(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDelayBeforeClosingAfterMessageReceived(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameChatOverlayStatics> : produce_base<D, Windows::Gaming::UI::IGameChatOverlayStatics>
    {
        int32_t __stdcall GetDefault(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::UI::GameChatOverlay>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::UI::IGameUIProviderActivatedEventArgs> : produce_base<D, Windows::Gaming::UI::IGameUIProviderActivatedEventArgs>
    {
        int32_t __stdcall get_GameUIArgs(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().GameUIArgs());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportCompleted(void* results) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&results));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Gaming::UI
{
    inline auto GameBar::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.VisibilityChanged(handler); });
    }
    inline GameBar::VisibilityChanged_revoker GameBar::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
        return { f, f.VisibilityChanged(handler) };
    }
    inline auto GameBar::VisibilityChanged(winrt::event_token const& token)
    {
        impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.VisibilityChanged(token); });
    }
    inline auto GameBar::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.IsInputRedirectedChanged(handler); });
    }
    inline GameBar::IsInputRedirectedChanged_revoker GameBar::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
        return { f, f.IsInputRedirectedChanged(handler) };
    }
    inline auto GameBar::IsInputRedirectedChanged(winrt::event_token const& token)
    {
        impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.IsInputRedirectedChanged(token); });
    }
    inline auto GameBar::Visible()
    {
        return impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.Visible(); });
    }
    inline auto GameBar::IsInputRedirected()
    {
        return impl::call_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>([&](auto&& f) { return f.IsInputRedirected(); });
    }
    inline auto GameChatOverlay::GetDefault()
    {
        return impl::call_factory<GameChatOverlay, Windows::Gaming::UI::IGameChatOverlayStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline GameChatOverlayMessageSource::GameChatOverlayMessageSource() :
        GameChatOverlayMessageSource(impl::call_factory<GameChatOverlayMessageSource>([](auto&& f) { return f.template ActivateInstance<GameChatOverlayMessageSource>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Gaming::UI::IGameBarStatics> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameBarStatics> {};
    template<> struct hash<winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> {};
    template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlay> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameChatOverlay> {};
    template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource> {};
    template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> {};
    template<> struct hash<winrt::Windows::Gaming::UI::IGameUIProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::IGameUIProviderActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::Gaming::UI::GameBar> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::GameBar> {};
    template<> struct hash<winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs> {};
    template<> struct hash<winrt::Windows::Gaming::UI::GameChatOverlay> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::GameChatOverlay> {};
    template<> struct hash<winrt::Windows::Gaming::UI::GameChatOverlayMessageSource> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::GameChatOverlayMessageSource> {};
    template<> struct hash<winrt::Windows::Gaming::UI::GameUIProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Gaming::UI::GameUIProviderActivatedEventArgs> {};
}
#endif
