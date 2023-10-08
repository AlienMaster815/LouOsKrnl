// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_Preview_2_H
#define WINRT_Windows_Media_Core_Preview_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Core.Preview.1.h"
namespace winrt::Windows::Media::Core::Preview
{
    struct SoundLevelBroker
    {
        SoundLevelBroker() = delete;
        [[nodiscard]] static auto SoundLevel();
        static auto SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using SoundLevelChanged_revoker = impl::factory_event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics, &impl::abi_t<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>::remove_SoundLevelChanged>;
        static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto SoundLevelChanged(winrt::event_token const& token);
    };
}
#endif
