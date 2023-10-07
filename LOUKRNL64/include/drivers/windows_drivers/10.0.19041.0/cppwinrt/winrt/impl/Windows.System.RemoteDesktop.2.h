// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_RemoteDesktop_2_H
#define WINRT_Windows_System_RemoteDesktop_2_H
#include "winrt/impl/Windows.System.RemoteDesktop.1.h"
namespace winrt::Windows::System::RemoteDesktop
{
    struct InteractiveSession
    {
        InteractiveSession() = delete;
        [[nodiscard]] static auto IsRemote();
    };
}
#endif
