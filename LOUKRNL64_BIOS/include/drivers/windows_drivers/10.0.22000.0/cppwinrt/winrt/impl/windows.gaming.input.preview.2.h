// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_2_H
#define WINRT_Windows_Gaming_Input_Preview_2_H
#include "winrt/impl/Windows.Gaming.Input.Custom.1.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview
{
    struct GameControllerProviderInfo
    {
        GameControllerProviderInfo() = delete;
        static auto GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static auto GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    };
}
#endif
