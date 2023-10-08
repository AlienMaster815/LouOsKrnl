// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_0_H
#define WINRT_Windows_Management_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Management
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
    template <> struct category<Windows::Management::IMdmAlert>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::IMdmSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::IMdmSessionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::MdmAlert>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::MdmSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::MdmSessionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::MdmAlertDataType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::MdmAlertMark>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Management::MdmSessionState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Management::IMdmAlert>
    {
        static constexpr auto & value{ L"Windows.Management.IMdmAlert" };
    };
    template <> struct name<Windows::Management::IMdmSession>
    {
        static constexpr auto & value{ L"Windows.Management.IMdmSession" };
    };
    template <> struct name<Windows::Management::IMdmSessionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Management.IMdmSessionManagerStatics" };
    };
    template <> struct name<Windows::Management::MdmAlert>
    {
        static constexpr auto & value{ L"Windows.Management.MdmAlert" };
    };
    template <> struct name<Windows::Management::MdmSession>
    {
        static constexpr auto & value{ L"Windows.Management.MdmSession" };
    };
    template <> struct name<Windows::Management::MdmSessionManager>
    {
        static constexpr auto & value{ L"Windows.Management.MdmSessionManager" };
    };
    template <> struct name<Windows::Management::MdmAlertDataType>
    {
        static constexpr auto & value{ L"Windows.Management.MdmAlertDataType" };
    };
    template <> struct name<Windows::Management::MdmAlertMark>
    {
        static constexpr auto & value{ L"Windows.Management.MdmAlertMark" };
    };
    template <> struct name<Windows::Management::MdmSessionState>
    {
        static constexpr auto & value{ L"Windows.Management.MdmSessionState" };
    };
    template <> struct guid_storage<Windows::Management::IMdmAlert>
    {
        static constexpr guid value{ 0xB0FBC327,0x28C1,0x4B52,{ 0xA5,0x48,0xC5,0x80,0x7C,0xAF,0x70,0xB6 } };
    };
    template <> struct guid_storage<Windows::Management::IMdmSession>
    {
        static constexpr guid value{ 0xFE89314C,0x8F64,0x4797,{ 0xA9,0xD7,0x9D,0x88,0xF8,0x6A,0xE1,0x66 } };
    };
    template <> struct guid_storage<Windows::Management::IMdmSessionManagerStatics>
    {
        static constexpr guid value{ 0xCF4AD959,0xF745,0x4B79,{ 0x9B,0x5C,0xDE,0x0B,0xF8,0xEF,0xE4,0x4B } };
    };
    template <> struct default_interface<Windows::Management::MdmAlert>
    {
        using type = Windows::Management::IMdmAlert;
    };
    template <> struct default_interface<Windows::Management::MdmSession>
    {
        using type = Windows::Management::IMdmSession;
    };
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
        [[nodiscard]] auto Data() const;
        auto Data(param::hstring const& value) const;
        [[nodiscard]] auto Format() const;
        auto Format(Windows::Management::MdmAlertDataType const& value) const;
        [[nodiscard]] auto Mark() const;
        auto Mark(Windows::Management::MdmAlertMark const& value) const;
        [[nodiscard]] auto Source() const;
        auto Source(param::hstring const& value) const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Target() const;
        auto Target(param::hstring const& value) const;
        [[nodiscard]] auto Type() const;
        auto Type(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Management::IMdmAlert>
    {
        template <typename D> using type = consume_Windows_Management_IMdmAlert<D>;
    };
    template <typename D>
    struct consume_Windows_Management_IMdmSession
    {
        [[nodiscard]] auto Alerts() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto State() const;
        auto AttachAsync() const;
        auto Delete() const;
        auto StartAsync() const;
        auto StartAsync(param::async_iterable<Windows::Management::MdmAlert> const& alerts) const;
    };
    template <> struct consume<Windows::Management::IMdmSession>
    {
        template <typename D> using type = consume_Windows_Management_IMdmSession<D>;
    };
    template <typename D>
    struct consume_Windows_Management_IMdmSessionManagerStatics
    {
        [[nodiscard]] auto SessionIds() const;
        auto TryCreateSession() const;
        auto DeleteSessionById(param::hstring const& sessionId) const;
        auto GetSessionById(param::hstring const& sessionId) const;
    };
    template <> struct consume<Windows::Management::IMdmSessionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Management_IMdmSessionManagerStatics<D>;
    };
}
#endif
