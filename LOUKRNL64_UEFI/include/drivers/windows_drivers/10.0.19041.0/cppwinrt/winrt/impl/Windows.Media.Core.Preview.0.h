// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_Preview_0_H
#define WINRT_Windows_Media_Core_Preview_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::Media
{
    enum class SoundLevel : int32_t;
}
namespace winrt::Windows::Media::Core::Preview
{
    struct ISoundLevelBrokerStatics;
    struct SoundLevelBroker;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Core::Preview::SoundLevelBroker>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        static constexpr auto & value{ L"Windows.Media.Core.Preview.ISoundLevelBrokerStatics" };
    };
    template <> struct name<Windows::Media::Core::Preview::SoundLevelBroker>
    {
        static constexpr auto & value{ L"Windows.Media.Core.Preview.SoundLevelBroker" };
    };
    template <> struct guid_storage<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        static constexpr guid value{ 0x6A633961,0xDBED,0x464C,{ 0xA0,0x9A,0x33,0x41,0x2F,0x5C,0xAA,0x3F } };
    };
    template <> struct abi<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SoundLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics
    {
        [[nodiscard]] auto SoundLevel() const;
        auto SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics, &impl::abi_t<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>::remove_SoundLevelChanged>;
        SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto SoundLevelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>;
    };
}
#endif
