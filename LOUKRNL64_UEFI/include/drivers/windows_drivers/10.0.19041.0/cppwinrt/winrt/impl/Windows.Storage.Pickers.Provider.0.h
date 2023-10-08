// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Pickers_Provider_0_H
#define WINRT_Windows_Storage_Pickers_Provider_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Pickers::Provider
{
    enum class AddFileResult : int32_t
    {
        Added = 0,
        AlreadyAdded = 1,
        NotAllowed = 2,
        Unavailable = 3,
    };
    enum class FileSelectionMode : int32_t
    {
        Single = 0,
        Multiple = 1,
    };
    enum class SetFileNameResult : int32_t
    {
        Succeeded = 0,
        NotAllowed = 1,
        Unavailable = 2,
    };
    struct IFileOpenPickerUI;
    struct IFileRemovedEventArgs;
    struct IFileSavePickerUI;
    struct IPickerClosingDeferral;
    struct IPickerClosingEventArgs;
    struct IPickerClosingOperation;
    struct ITargetFileRequest;
    struct ITargetFileRequestDeferral;
    struct ITargetFileRequestedEventArgs;
    struct FileOpenPickerUI;
    struct FileRemovedEventArgs;
    struct FileSavePickerUI;
    struct PickerClosingDeferral;
    struct PickerClosingEventArgs;
    struct PickerClosingOperation;
    struct TargetFileRequest;
    struct TargetFileRequestDeferral;
    struct TargetFileRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::FileOpenPickerUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::FileRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::FileSavePickerUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::PickerClosingDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::PickerClosingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::PickerClosingOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::TargetFileRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::AddFileResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::FileSelectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Pickers::Provider::SetFileNameResult>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IFileOpenPickerUI" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IFileRemovedEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IFileSavePickerUI" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IPickerClosingDeferral" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IPickerClosingEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.IPickerClosingOperation" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.ITargetFileRequest" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.ITargetFileRequestDeferral" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.ITargetFileRequestedEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::FileOpenPickerUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.FileOpenPickerUI" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::FileRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.FileRemovedEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::FileSavePickerUI>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.FileSavePickerUI" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::PickerClosingDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.PickerClosingDeferral" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::PickerClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.PickerClosingEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::PickerClosingOperation>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.PickerClosingOperation" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::TargetFileRequest>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.TargetFileRequest" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.TargetFileRequestDeferral" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::AddFileResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.AddFileResult" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::FileSelectionMode>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.FileSelectionMode" };
    };
    template <> struct name<Windows::Storage::Pickers::Provider::SetFileNameResult>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.Provider.SetFileNameResult" };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        static constexpr guid value{ 0xDDA45A10,0xF9D4,0x40C4,{ 0x8A,0xF5,0xC5,0xB6,0xB5,0xA6,0x1D,0x1D } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        static constexpr guid value{ 0x13043DA7,0x7FCA,0x4C2B,{ 0x9E,0xCA,0x68,0x90,0xF9,0xF0,0x01,0x85 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        static constexpr guid value{ 0x9656C1E7,0x3E56,0x43CC,{ 0x8A,0x39,0x33,0xC7,0x3D,0x9D,0x54,0x2B } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        static constexpr guid value{ 0x7AF7F71E,0x1A67,0x4A31,{ 0xAE,0x80,0xE9,0x07,0x70,0x8A,0x61,0x9B } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        static constexpr guid value{ 0x7E59F224,0xB332,0x4F12,{ 0x8B,0x9F,0xA8,0xC2,0xF0,0x6B,0x32,0xCD } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        static constexpr guid value{ 0x4CE9FB84,0xBEEE,0x4E39,{ 0xA7,0x73,0xFC,0x5F,0x0E,0xAE,0x32,0x8D } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        static constexpr guid value{ 0x42BD3355,0x7F88,0x478B,{ 0x8E,0x81,0x69,0x0B,0x20,0x34,0x06,0x78 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        static constexpr guid value{ 0x4AEE9D91,0xBF15,0x4DA9,{ 0x95,0xF6,0xF6,0xB7,0xD5,0x58,0x22,0x5B } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        static constexpr guid value{ 0xB163DBC1,0x1B51,0x4C89,{ 0xA5,0x91,0x0F,0xD4,0x0B,0x3C,0x57,0xC9 } };
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::FileOpenPickerUI>
    {
        using type = Windows::Storage::Pickers::Provider::IFileOpenPickerUI;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::FileRemovedEventArgs>
    {
        using type = Windows::Storage::Pickers::Provider::IFileRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::FileSavePickerUI>
    {
        using type = Windows::Storage::Pickers::Provider::IFileSavePickerUI;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::PickerClosingDeferral>
    {
        using type = Windows::Storage::Pickers::Provider::IPickerClosingDeferral;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::PickerClosingEventArgs>
    {
        using type = Windows::Storage::Pickers::Provider::IPickerClosingEventArgs;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::PickerClosingOperation>
    {
        using type = Windows::Storage::Pickers::Provider::IPickerClosingOperation;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::TargetFileRequest>
    {
        using type = Windows::Storage::Pickers::Provider::ITargetFileRequest;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>
    {
        using type = Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral;
    };
    template <> struct default_interface<Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>
    {
        using type = Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs;
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddFile(void*, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RemoveFile(void*) noexcept = 0;
            virtual int32_t __stdcall ContainsFile(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall CanAddFile(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_AllowedFileTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SettingsIdentifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall add_FileRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowedFileTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_SettingsIdentifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileName(void**) noexcept = 0;
            virtual int32_t __stdcall TrySetFileName(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_FileNameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileNameChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TargetFileRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetFileRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClosingOperation(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetFile(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetFile(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI
    {
        auto AddFile(param::hstring const& id, Windows::Storage::IStorageFile const& file) const;
        auto RemoveFile(param::hstring const& id) const;
        auto ContainsFile(param::hstring const& id) const;
        auto CanAddFile(Windows::Storage::IStorageFile const& file) const;
        [[nodiscard]] auto AllowedFileTypes() const;
        [[nodiscard]] auto SelectionMode() const;
        [[nodiscard]] auto SettingsIdentifier() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        auto FileRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const;
        using FileRemoved_revoker = impl::event_revoker<Windows::Storage::Pickers::Provider::IFileOpenPickerUI, &impl::abi_t<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>::remove_FileRemoved>;
        FileRemoved_revoker FileRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const;
        auto FileRemoved(winrt::event_token const& token) const noexcept;
        auto Closing(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const;
        using Closing_revoker = impl::event_revoker<Windows::Storage::Pickers::Provider::IFileOpenPickerUI, &impl::abi_t<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>::remove_Closing>;
        Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const;
        auto Closing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs
    {
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto AllowedFileTypes() const;
        [[nodiscard]] auto SettingsIdentifier() const;
        [[nodiscard]] auto FileName() const;
        auto TrySetFileName(param::hstring const& value) const;
        auto FileNameChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const;
        using FileNameChanged_revoker = impl::event_revoker<Windows::Storage::Pickers::Provider::IFileSavePickerUI, &impl::abi_t<Windows::Storage::Pickers::Provider::IFileSavePickerUI>::remove_FileNameChanged>;
        FileNameChanged_revoker FileNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const;
        auto FileNameChanged(winrt::event_token const& token) const noexcept;
        auto TargetFileRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const;
        using TargetFileRequested_revoker = impl::event_revoker<Windows::Storage::Pickers::Provider::IFileSavePickerUI, &impl::abi_t<Windows::Storage::Pickers::Provider::IFileSavePickerUI>::remove_TargetFileRequested>;
        TargetFileRequested_revoker TargetFileRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const;
        auto TargetFileRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IPickerClosingDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IPickerClosingDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs
    {
        [[nodiscard]] auto ClosingOperation() const;
        [[nodiscard]] auto IsCanceled() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation
    {
        auto GetDeferral() const;
        [[nodiscard]] auto Deadline() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_ITargetFileRequest
    {
        [[nodiscard]] auto TargetFile() const;
        auto TargetFile(Windows::Storage::IStorageFile const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs<D>;
    };
}
#endif
