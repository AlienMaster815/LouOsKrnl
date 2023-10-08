// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_0_H
#define WINRT_Windows_Management_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Management
{
    enum class MdmAlertDataType : int32_t
    {
        String = 0,
        Base64 = 1,
        Boolean = 2,
        Integer = 3,
    };
    enum class MdmAlertMark : int32_t
    {
        None = 0,
        Fatal = 1,
        Critical = 2,
        Warning = 3,
        Informational = 4,
    };
    enum class MdmSessionState : int32_t
    {
        NotStarted = 0,
        Starting = 1,
        Connecting = 2,
        Communicating = 3,
        AlertStatusAvailable = 4,
        Retrying = 5,
        Completed = 6,
    };
    struct IMdmAlert;
    struct IMdmSession;
    struct IMdmSessionManagerStatics;
    struct MdmAlert;
    struct MdmSession;
    struct MdmSessionManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Management::IMdmAlert>{ using type = interface_category; };
    template <> struct category<Windows::Management::IMdmSession>{ using type = interface_category; };
    template <> struct category<Windows::Management::IMdmSessionManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Management::MdmAlert>{ using type = class_category; };
    template <> struct category<Windows::Management::MdmSession>{ using type = class_category; };
    template <> struct category<Windows::Management::MdmSessionManager>{ using type = class_category; };
    template <> struct category<Windows::Management::MdmAlertDataType>{ using type = enum_category; };
    template <> struct category<Windows::Management::MdmAlertMark>{ using type = enum_category; };
    template <> struct category<Windows::Management::MdmSessionState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Management::MdmAlert> = L"Windows.Management.MdmAlert";
    template <> inline constexpr auto& name_v<Windows::Management::MdmSession> = L"Windows.Management.MdmSession";
    template <> inline constexpr auto& name_v<Windows::Management::MdmSessionManager> = L"Windows.Management.MdmSessionManager";
    template <> inline constexpr auto& name_v<Windows::Management::MdmAlertDataType> = L"Windows.Management.MdmAlertDataType";
    template <> inline constexpr auto& name_v<Windows::Management::MdmAlertMark> = L"Windows.Management.MdmAlertMark";
    template <> inline constexpr auto& name_v<Windows::Management::MdmSessionState> = L"Windows.Management.MdmSessionState";
    template <> inline constexpr auto& name_v<Windows::Management::IMdmAlert> = L"Windows.Management.IMdmAlert";
    template <> inline constexpr auto& name_v<Windows::Management::IMdmSession> = L"Windows.Management.IMdmSession";
    template <> inline constexpr auto& name_v<Windows::Management::IMdmSessionManagerStatics> = L"Windows.Management.IMdmSessionManagerStatics";
    template <> inline constexpr guid guid_v<Windows::Management::IMdmAlert>{ 0xB0FBC327,0x28C1,0x4B52,{ 0xA5,0x48,0xC5,0x80,0x7C,0xAF,0x70,0xB6 } }; // B0FBC327-28C1-4B52-A548-C5807CAF70B6
    template <> inline constexpr guid guid_v<Windows::Management::IMdmSession>{ 0xFE89314C,0x8F64,0x4797,{ 0xA9,0xD7,0x9D,0x88,0xF8,0x6A,0xE1,0x66 } }; // FE89314C-8F64-4797-A9D7-9D88F86AE166
    template <> inline constexpr guid guid_v<Windows::Management::IMdmSessionManagerStatics>{ 0xCF4AD959,0xF745,0x4B79,{ 0x9B,0x5C,0xDE,0x0B,0xF8,0xEF,0xE4,0x4B } }; // CF4AD959-F745-4B79-9B5C-DE0BF8EFE44B
    template <> struct default_interface<Windows::Management::MdmAlert>{ using type = Windows::Management::IMdmAlert; };
    template <> struct default_interface<Windows::Management::MdmSession>{ using type = Windows::Management::IMdmSession; };
    template <> struct abi<Windows::Management::IMdmAlert>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Mark(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mark(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_Status(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall put_Target(void*) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall put_Type(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::IMdmSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Alerts(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall AttachAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Delete() noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartWithAlertsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::IMdmSessionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionIds(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateSession(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteSessionById(void*) noexcept = 0;
            virtual int32_t __stdcall GetSessionById(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_IMdmAlert
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Data() const;
        WINRT_IMPL_AUTO(void) Data(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Management::MdmAlertDataType) Format() const;
        WINRT_IMPL_AUTO(void) Format(Windows::Management::MdmAlertDataType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Management::MdmAlertMark) Mark() const;
        WINRT_IMPL_AUTO(void) Mark(Windows::Management::MdmAlertMark const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Source() const;
        WINRT_IMPL_AUTO(void) Source(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Target() const;
        WINRT_IMPL_AUTO(void) Target(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Type() const;
        WINRT_IMPL_AUTO(void) Type(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Management::IMdmAlert>
    {
        template <typename D> using type = consume_Windows_Management_IMdmAlert<D>;
    };
    template <typename D>
    struct consume_Windows_Management_IMdmSession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert>) Alerts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Management::MdmSessionState) State() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) AttachAsync() const;
        WINRT_IMPL_AUTO(void) Delete() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartAsync(param::async_iterable<Windows::Management::MdmAlert> const& alerts) const;
    };
    template <> struct consume<Windows::Management::IMdmSession>
    {
        template <typename D> using type = consume_Windows_Management_IMdmSession<D>;
    };
    template <typename D>
    struct consume_Windows_Management_IMdmSessionManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) SessionIds() const;
        WINRT_IMPL_AUTO(Windows::Management::MdmSession) TryCreateSession() const;
        WINRT_IMPL_AUTO(void) DeleteSessionById(param::hstring const& sessionId) const;
        WINRT_IMPL_AUTO(Windows::Management::MdmSession) GetSessionById(param::hstring const& sessionId) const;
    };
    template <> struct consume<Windows::Management::IMdmSessionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Management_IMdmSessionManagerStatics<D>;
    };
}
#endif