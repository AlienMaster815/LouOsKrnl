// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Accessibility_H
#define WINRT_Windows_UI_Accessibility_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Accessibility.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Rect) consume_Windows_UI_Accessibility_IScreenReaderPositionChangedEventArgs<D>::ScreenPositionInRawPixels() const
    {
        Windows::Foundation::Rect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs)->get_ScreenPositionInRawPixels(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Accessibility_IScreenReaderPositionChangedEventArgs<D>::IsReadingText() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs)->get_IsReadingText(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs) consume_Windows_UI_Accessibility_IScreenReaderService<D>::CurrentScreenReaderPosition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Accessibility::IScreenReaderService)->get_CurrentScreenReaderPosition(&value));
        return Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Accessibility_IScreenReaderService<D>::ScreenReaderPositionChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Accessibility::ScreenReaderService, Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Accessibility::IScreenReaderService)->add_ScreenReaderPositionChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Accessibility_IScreenReaderService<D>::ScreenReaderPositionChanged_revoker consume_Windows_UI_Accessibility_IScreenReaderService<D>::ScreenReaderPositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Accessibility::ScreenReaderService, Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ScreenReaderPositionChanged_revoker>(this, ScreenReaderPositionChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Accessibility_IScreenReaderService<D>::ScreenReaderPositionChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Accessibility::IScreenReaderService)->remove_ScreenReaderPositionChanged(impl::bind_in(token)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs> : produce_base<D, Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs>
    {
        int32_t __stdcall get_ScreenPositionInRawPixels(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ScreenPositionInRawPixels());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsReadingText(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadingText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Accessibility::IScreenReaderService> : produce_base<D, Windows::UI::Accessibility::IScreenReaderService>
    {
        int32_t __stdcall get_CurrentScreenReaderPosition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>(this->shim().CurrentScreenReaderPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ScreenReaderPositionChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ScreenReaderPositionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Accessibility::ScreenReaderService, Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ScreenReaderPositionChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenReaderPositionChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Accessibility
{
    inline ScreenReaderService::ScreenReaderService() :
        ScreenReaderService(impl::call_factory_cast<ScreenReaderService(*)(Windows::Foundation::IActivationFactory const&), ScreenReaderService>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ScreenReaderService>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Accessibility::IScreenReaderService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Accessibility::ScreenReaderService> : winrt::impl::hash_base {};
#endif
}
#endif
