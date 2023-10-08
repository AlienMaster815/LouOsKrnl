// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Appointments_AppointmentsProvider_2_H
#define WINRT_Windows_ApplicationModel_Appointments_AppointmentsProvider_2_H
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider
{
    struct __declspec(empty_bases) AddAppointmentOperation : Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation
    {
        AddAppointmentOperation(std::nullptr_t) noexcept {}
        AddAppointmentOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation(ptr, take_ownership_from_abi) {}
    };
    struct AppointmentsProviderLaunchActionVerbs
    {
        AppointmentsProviderLaunchActionVerbs() = delete;
        [[nodiscard]] static auto AddAppointment();
        [[nodiscard]] static auto ReplaceAppointment();
        [[nodiscard]] static auto RemoveAppointment();
        [[nodiscard]] static auto ShowTimeFrame();
        [[nodiscard]] static auto ShowAppointmentDetails();
    };
    struct __declspec(empty_bases) RemoveAppointmentOperation : Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation
    {
        RemoveAppointmentOperation(std::nullptr_t) noexcept {}
        RemoveAppointmentOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ReplaceAppointmentOperation : Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation
    {
        ReplaceAppointmentOperation(std::nullptr_t) noexcept {}
        ReplaceAppointmentOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation(ptr, take_ownership_from_abi) {}
    };
}
#endif
