// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_2_H
#define WINRT_Windows_UI_Input_Preview_2_H
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.Input.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview
{
    struct InputActivationListenerPreview
    {
        InputActivationListenerPreview() = delete;
        static auto CreateForApplicationWindow(Windows::UI::WindowManagement::AppWindow const& window);
    };
}
#endif
