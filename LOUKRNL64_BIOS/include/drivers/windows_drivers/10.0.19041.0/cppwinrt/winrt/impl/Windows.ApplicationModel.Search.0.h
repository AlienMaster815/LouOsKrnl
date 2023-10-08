// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Search_0_H
#define WINRT_Windows_ApplicationModel_Search_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::ApplicationModel::Search
{
    struct ILocalContentSuggestionSettings;
    struct ISearchPane;
    struct ISearchPaneQueryChangedEventArgs;
    struct ISearchPaneQueryLinguisticDetails;
    struct ISearchPaneQuerySubmittedEventArgs;
    struct ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
    struct ISearchPaneResultSuggestionChosenEventArgs;
    struct ISearchPaneStatics;
    struct ISearchPaneStaticsWithHideThisApplication;
    struct ISearchPaneSuggestionsRequest;
    struct ISearchPaneSuggestionsRequestDeferral;
    struct ISearchPaneSuggestionsRequestedEventArgs;
    struct ISearchPaneVisibilityChangedEventArgs;
    struct ISearchQueryLinguisticDetails;
    struct ISearchQueryLinguisticDetailsFactory;
    struct ISearchSuggestionCollection;
    struct ISearchSuggestionsRequest;
    struct ISearchSuggestionsRequestDeferral;
    struct LocalContentSuggestionSettings;
    struct SearchPane;
    struct SearchPaneQueryChangedEventArgs;
    struct SearchPaneQueryLinguisticDetails;
    struct SearchPaneQuerySubmittedEventArgs;
    struct SearchPaneResultSuggestionChosenEventArgs;
    struct SearchPaneSuggestionsRequest;
    struct SearchPaneSuggestionsRequestDeferral;
    struct SearchPaneSuggestionsRequestedEventArgs;
    struct SearchPaneVisibilityChangedEventArgs;
    struct SearchQueryLinguisticDetails;
    struct SearchSuggestionCollection;
    struct SearchSuggestionsRequest;
    struct SearchSuggestionsRequestDeferral;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPane>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPane>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPane>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPane" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQueryChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneResultSuggestionChosenEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneStaticsWithHideThisApplication" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneVisibilityChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionCollection" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPane>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPane" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQueryChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQuerySubmittedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneResultSuggestionChosenEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneVisibilityChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionCollection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionCollection" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        static constexpr guid value{ 0xEEAEB062,0x743D,0x456E,{ 0x84,0xA3,0x23,0xF0,0x6F,0x2D,0x15,0xD7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPane>
    {
        static constexpr guid value{ 0xFDACEC38,0x3700,0x4D73,{ 0x91,0xA1,0x2F,0x99,0x86,0x74,0x23,0x8A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        static constexpr guid value{ 0x3C064FE9,0x2351,0x4248,{ 0xA5,0x29,0x71,0x10,0xF4,0x64,0xA7,0x85 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        static constexpr guid value{ 0x82FB460E,0x0940,0x4B6D,{ 0xB8,0xD0,0x64,0x2B,0x30,0x98,0x9E,0x15 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        static constexpr guid value{ 0x143BA4FC,0xE9C5,0x4736,{ 0x91,0xB2,0xE8,0xEB,0x9C,0xB8,0x83,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        static constexpr guid value{ 0x460C92E5,0x4C32,0x4538,{ 0xA4,0xD4,0xB6,0xB4,0x40,0x0D,0x14,0x0F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        static constexpr guid value{ 0xC8316CC0,0xAED2,0x41E0,{ 0xBC,0xE0,0xC2,0x6C,0xA7,0x4F,0x85,0xEC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        static constexpr guid value{ 0x9572ADF1,0x8F1D,0x481F,{ 0xA1,0x5B,0xC6,0x16,0x55,0xF1,0x6A,0x0E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        static constexpr guid value{ 0x00732830,0x50F1,0x4D03,{ 0x99,0xAC,0xC6,0x64,0x4C,0x8E,0xD8,0xB5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        static constexpr guid value{ 0x81B10B1C,0xE561,0x4093,{ 0x9B,0x4D,0x2A,0xD4,0x82,0x79,0x4A,0x53 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        static constexpr guid value{ 0xA0D009F7,0x8748,0x4EE2,{ 0xAD,0x44,0xAF,0xA6,0xBE,0x99,0x7C,0x51 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        static constexpr guid value{ 0xC89B8A2F,0xAC56,0x4460,{ 0x8D,0x2F,0x80,0x02,0x3B,0xEC,0x4F,0xC5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        static constexpr guid value{ 0x3C4D3046,0xAC4B,0x49F2,{ 0x97,0xD6,0x02,0x0E,0x61,0x82,0xCB,0x9C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        static constexpr guid value{ 0x46A1205B,0x69C9,0x4745,{ 0xB7,0x2F,0xA8,0xA4,0xFC,0x8F,0x24,0xAE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        static constexpr guid value{ 0xCAC6C3B8,0x3C64,0x4DFD,{ 0xAD,0x9F,0x47,0x9E,0x4D,0x40,0x65,0xA4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        static constexpr guid value{ 0x323A8A4B,0xFBEA,0x4446,{ 0xAB,0xBC,0x3D,0xA7,0x91,0x5F,0xDD,0x3A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        static constexpr guid value{ 0x4E4E26A7,0x44E5,0x4039,{ 0x90,0x99,0x60,0x00,0xEA,0xD1,0xF0,0xC6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        static constexpr guid value{ 0xB71598A9,0xC065,0x456D,{ 0xA8,0x45,0x1E,0xCC,0xEC,0x5D,0xC2,0x8B } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>
    {
        using type = Windows::ApplicationModel::Search::ILocalContentSuggestionSettings;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPane>
    {
        using type = Windows::ApplicationModel::Search::ISearchPane;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>
    {
        using type = Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>
    {
        using type = Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionCollection>
    {
        using type = Windows::ApplicationModel::Search::ISearchSuggestionCollection;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequest>
    {
        using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>
    {
        using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral;
    };
    template <> struct abi<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Locations(void**) noexcept = 0;
            virtual int32_t __stdcall put_AqsFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_AqsFilter(void**) noexcept = 0;
            virtual int32_t __stdcall get_PropertiesToMatch(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_SearchHistoryEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SearchHistoryEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SearchHistoryContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_SearchHistoryContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderText(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderText(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall add_VisibilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QueryChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QueryChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SuggestionsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SuggestionsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuerySubmitted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuerySubmitted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResultSuggestionChosen(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResultSuggestionChosen(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetLocalContentSuggestionSettings(void*) noexcept = 0;
            virtual int32_t __stdcall ShowOverloadDefault() noexcept = 0;
            virtual int32_t __stdcall ShowOverloadWithQuery(void*) noexcept = 0;
            virtual int32_t __stdcall put_ShowOnKeyboardInput(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowOnKeyboardInput(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetQueryText(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_LinguisticDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LinguisticDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall HideThisApplication() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SearchSuggestionCollection(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestion(void*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestions(void*) noexcept = 0;
            virtual int32_t __stdcall AppendResultSuggestion(void*, void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall AppendSearchSeparator(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SearchSuggestionCollection(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings
    {
        auto Enabled(bool value) const;
        [[nodiscard]] auto Enabled() const;
        [[nodiscard]] auto Locations() const;
        auto AqsFilter(param::hstring const& value) const;
        [[nodiscard]] auto AqsFilter() const;
        [[nodiscard]] auto PropertiesToMatch() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPane
    {
        auto SearchHistoryEnabled(bool value) const;
        [[nodiscard]] auto SearchHistoryEnabled() const;
        auto SearchHistoryContext(param::hstring const& value) const;
        [[nodiscard]] auto SearchHistoryContext() const;
        auto PlaceholderText(param::hstring const& value) const;
        [[nodiscard]] auto PlaceholderText() const;
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto Visible() const;
        auto VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
        using VisibilityChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_VisibilityChanged>;
        VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
        auto VisibilityChanged(winrt::event_token const& token) const noexcept;
        auto QueryChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
        using QueryChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_QueryChanged>;
        QueryChanged_revoker QueryChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
        auto QueryChanged(winrt::event_token const& token) const noexcept;
        auto SuggestionsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
        using SuggestionsRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_SuggestionsRequested>;
        SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
        auto SuggestionsRequested(winrt::event_token const& token) const noexcept;
        auto QuerySubmitted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
        using QuerySubmitted_revoker = impl::event_revoker<Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_QuerySubmitted>;
        QuerySubmitted_revoker QuerySubmitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
        auto QuerySubmitted(winrt::event_token const& token) const noexcept;
        auto ResultSuggestionChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
        using ResultSuggestionChosen_revoker = impl::event_revoker<Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<Windows::ApplicationModel::Search::ISearchPane>::remove_ResultSuggestionChosen>;
        ResultSuggestionChosen_revoker ResultSuggestionChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Search::SearchPane, Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
        auto ResultSuggestionChosen(winrt::event_token const& token) const noexcept;
        auto SetLocalContentSuggestionSettings(Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const;
        auto Show() const;
        auto Show(param::hstring const& query) const;
        auto ShowOnKeyboardInput(bool value) const;
        [[nodiscard]] auto ShowOnKeyboardInput() const;
        auto TrySetQueryText(param::hstring const& query) const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPane>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPane<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs
    {
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto LinguisticDetails() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails
    {
        [[nodiscard]] auto QueryTextAlternatives() const;
        [[nodiscard]] auto QueryTextCompositionStart() const;
        [[nodiscard]] auto QueryTextCompositionLength() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs
    {
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails
    {
        [[nodiscard]] auto LinguisticDetails() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs
    {
        [[nodiscard]] auto Tag() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication
    {
        auto HideThisApplication() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest
    {
        [[nodiscard]] auto IsCanceled() const;
        [[nodiscard]] auto SearchSuggestionCollection() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs
    {
        [[nodiscard]] auto Visible() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails
    {
        [[nodiscard]] auto QueryTextAlternatives() const;
        [[nodiscard]] auto QueryTextCompositionStart() const;
        [[nodiscard]] auto QueryTextCompositionLength() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory
    {
        auto CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection
    {
        [[nodiscard]] auto Size() const;
        auto AppendQuerySuggestion(param::hstring const& text) const;
        auto AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const;
        auto AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const;
        auto AppendSearchSeparator(param::hstring const& label) const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest
    {
        [[nodiscard]] auto IsCanceled() const;
        [[nodiscard]] auto SearchSuggestionCollection() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>;
    };
}
#endif
