// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Headers_2_H
#define WINRT_Windows_Web_Http_Headers_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Web.Http.Headers.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Headers
{
    struct __declspec(empty_bases) HttpCacheDirectiveHeaderValueCollection : Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection,
        impl::require<HttpCacheDirectiveHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpNameValueHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpCacheDirectiveHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpCacheDirectiveHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpChallengeHeaderValue : Windows::Web::Http::Headers::IHttpChallengeHeaderValue,
        impl::require<HttpChallengeHeaderValue, Windows::Foundation::IStringable>
    {
        HttpChallengeHeaderValue(std::nullptr_t) noexcept {}
        HttpChallengeHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpChallengeHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpChallengeHeaderValue(param::hstring const& scheme);
        HttpChallengeHeaderValue(param::hstring const& scheme, param::hstring const& token);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue);
    };
    struct __declspec(empty_bases) HttpChallengeHeaderValueCollection : Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection,
        impl::require<HttpChallengeHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpChallengeHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpChallengeHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpChallengeHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpChallengeHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpConnectionOptionHeaderValue : Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue,
        impl::require<HttpConnectionOptionHeaderValue, Windows::Foundation::IStringable>
    {
        HttpConnectionOptionHeaderValue(std::nullptr_t) noexcept {}
        HttpConnectionOptionHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpConnectionOptionHeaderValue(param::hstring const& token);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue);
    };
    struct __declspec(empty_bases) HttpConnectionOptionHeaderValueCollection : Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection,
        impl::require<HttpConnectionOptionHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpConnectionOptionHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpConnectionOptionHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpContentCodingHeaderValue : Windows::Web::Http::Headers::IHttpContentCodingHeaderValue,
        impl::require<HttpContentCodingHeaderValue, Windows::Foundation::IStringable>
    {
        HttpContentCodingHeaderValue(std::nullptr_t) noexcept {}
        HttpContentCodingHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentCodingHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpContentCodingHeaderValue(param::hstring const& contentCoding);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue);
    };
    struct __declspec(empty_bases) HttpContentCodingHeaderValueCollection : Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection,
        impl::require<HttpContentCodingHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpContentCodingHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpContentCodingHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpContentCodingWithQualityHeaderValue : Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue,
        impl::require<HttpContentCodingWithQualityHeaderValue, Windows::Foundation::IStringable>
    {
        HttpContentCodingWithQualityHeaderValue(std::nullptr_t) noexcept {}
        HttpContentCodingWithQualityHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding);
        HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding, double quality);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue);
    };
    struct __declspec(empty_bases) HttpContentCodingWithQualityHeaderValueCollection : Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection,
        impl::require<HttpContentCodingWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpContentCodingWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpContentCodingWithQualityHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpContentDispositionHeaderValue : Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue,
        impl::require<HttpContentDispositionHeaderValue, Windows::Foundation::IStringable>
    {
        HttpContentDispositionHeaderValue(std::nullptr_t) noexcept {}
        HttpContentDispositionHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpContentDispositionHeaderValue(param::hstring const& dispositionType);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue);
    };
    struct __declspec(empty_bases) HttpContentHeaderCollection : Windows::Web::Http::Headers::IHttpContentHeaderCollection,
        impl::require<HttpContentHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>, Windows::Foundation::IStringable>
    {
        HttpContentHeaderCollection(std::nullptr_t) noexcept {}
        HttpContentHeaderCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentHeaderCollection(ptr, take_ownership_from_abi) {}
        HttpContentHeaderCollection();
    };
    struct __declspec(empty_bases) HttpContentRangeHeaderValue : Windows::Web::Http::Headers::IHttpContentRangeHeaderValue,
        impl::require<HttpContentRangeHeaderValue, Windows::Foundation::IStringable>
    {
        HttpContentRangeHeaderValue(std::nullptr_t) noexcept {}
        HttpContentRangeHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpContentRangeHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpContentRangeHeaderValue(uint64_t length);
        HttpContentRangeHeaderValue(uint64_t from, uint64_t to);
        HttpContentRangeHeaderValue(uint64_t from, uint64_t to, uint64_t length);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue);
    };
    struct __declspec(empty_bases) HttpCookiePairHeaderValue : Windows::Web::Http::Headers::IHttpCookiePairHeaderValue,
        impl::require<HttpCookiePairHeaderValue, Windows::Foundation::IStringable>
    {
        HttpCookiePairHeaderValue(std::nullptr_t) noexcept {}
        HttpCookiePairHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpCookiePairHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpCookiePairHeaderValue(param::hstring const& name);
        HttpCookiePairHeaderValue(param::hstring const& name, param::hstring const& value);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue);
    };
    struct __declspec(empty_bases) HttpCookiePairHeaderValueCollection : Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection,
        impl::require<HttpCookiePairHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpCookiePairHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpCookiePairHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpCredentialsHeaderValue : Windows::Web::Http::Headers::IHttpCredentialsHeaderValue,
        impl::require<HttpCredentialsHeaderValue, Windows::Foundation::IStringable>
    {
        HttpCredentialsHeaderValue(std::nullptr_t) noexcept {}
        HttpCredentialsHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpCredentialsHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpCredentialsHeaderValue(param::hstring const& scheme);
        HttpCredentialsHeaderValue(param::hstring const& scheme, param::hstring const& token);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue);
    };
    struct __declspec(empty_bases) HttpDateOrDeltaHeaderValue : Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue,
        impl::require<HttpDateOrDeltaHeaderValue, Windows::Foundation::IStringable>
    {
        HttpDateOrDeltaHeaderValue(std::nullptr_t) noexcept {}
        HttpDateOrDeltaHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue(ptr, take_ownership_from_abi) {}
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue);
    };
    struct __declspec(empty_bases) HttpExpectationHeaderValue : Windows::Web::Http::Headers::IHttpExpectationHeaderValue,
        impl::require<HttpExpectationHeaderValue, Windows::Foundation::IStringable>
    {
        HttpExpectationHeaderValue(std::nullptr_t) noexcept {}
        HttpExpectationHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpExpectationHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpExpectationHeaderValue(param::hstring const& name);
        HttpExpectationHeaderValue(param::hstring const& name, param::hstring const& value);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue);
    };
    struct __declspec(empty_bases) HttpExpectationHeaderValueCollection : Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection,
        impl::require<HttpExpectationHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpExpectationHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpExpectationHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpExpectationHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpExpectationHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpLanguageHeaderValueCollection : Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection,
        impl::require<HttpLanguageHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Globalization::Language>, Windows::Foundation::Collections::IVector<Windows::Globalization::Language>, Windows::Foundation::IStringable>
    {
        HttpLanguageHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpLanguageHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpLanguageRangeWithQualityHeaderValue : Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue,
        impl::require<HttpLanguageRangeWithQualityHeaderValue, Windows::Foundation::IStringable>
    {
        HttpLanguageRangeWithQualityHeaderValue(std::nullptr_t) noexcept {}
        HttpLanguageRangeWithQualityHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange);
        HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange, double quality);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue);
    };
    struct __declspec(empty_bases) HttpLanguageRangeWithQualityHeaderValueCollection : Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection,
        impl::require<HttpLanguageRangeWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpLanguageRangeWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpLanguageRangeWithQualityHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpMediaTypeHeaderValue : Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue,
        impl::require<HttpMediaTypeHeaderValue, Windows::Foundation::IStringable>
    {
        HttpMediaTypeHeaderValue(std::nullptr_t) noexcept {}
        HttpMediaTypeHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpMediaTypeHeaderValue(param::hstring const& mediaType);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue);
    };
    struct __declspec(empty_bases) HttpMediaTypeWithQualityHeaderValue : Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue,
        impl::require<HttpMediaTypeWithQualityHeaderValue, Windows::Foundation::IStringable>
    {
        HttpMediaTypeWithQualityHeaderValue(std::nullptr_t) noexcept {}
        HttpMediaTypeWithQualityHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType);
        HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType, double quality);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue);
    };
    struct __declspec(empty_bases) HttpMediaTypeWithQualityHeaderValueCollection : Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection,
        impl::require<HttpMediaTypeWithQualityHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpMediaTypeWithQualityHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpMediaTypeWithQualityHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpMethodHeaderValueCollection : Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection,
        impl::require<HttpMethodHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::HttpMethod>, Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpMethod>, Windows::Foundation::IStringable>
    {
        HttpMethodHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpMethodHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpNameValueHeaderValue : Windows::Web::Http::Headers::IHttpNameValueHeaderValue,
        impl::require<HttpNameValueHeaderValue, Windows::Foundation::IStringable>
    {
        HttpNameValueHeaderValue(std::nullptr_t) noexcept {}
        HttpNameValueHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpNameValueHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpNameValueHeaderValue(param::hstring const& name);
        HttpNameValueHeaderValue(param::hstring const& name, param::hstring const& value);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue);
    };
    struct __declspec(empty_bases) HttpProductHeaderValue : Windows::Web::Http::Headers::IHttpProductHeaderValue,
        impl::require<HttpProductHeaderValue, Windows::Foundation::IStringable>
    {
        HttpProductHeaderValue(std::nullptr_t) noexcept {}
        HttpProductHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpProductHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpProductHeaderValue(param::hstring const& productName);
        HttpProductHeaderValue(param::hstring const& productName, param::hstring const& productVersion);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue);
    };
    struct __declspec(empty_bases) HttpProductInfoHeaderValue : Windows::Web::Http::Headers::IHttpProductInfoHeaderValue,
        impl::require<HttpProductInfoHeaderValue, Windows::Foundation::IStringable>
    {
        HttpProductInfoHeaderValue(std::nullptr_t) noexcept {}
        HttpProductInfoHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpProductInfoHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpProductInfoHeaderValue(param::hstring const& productComment);
        HttpProductInfoHeaderValue(param::hstring const& productName, param::hstring const& productVersion);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue);
    };
    struct __declspec(empty_bases) HttpProductInfoHeaderValueCollection : Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection,
        impl::require<HttpProductInfoHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpProductInfoHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpProductInfoHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpRequestHeaderCollection : Windows::Web::Http::Headers::IHttpRequestHeaderCollection,
        impl::require<HttpRequestHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>, Windows::Foundation::IStringable>
    {
        HttpRequestHeaderCollection(std::nullptr_t) noexcept {}
        HttpRequestHeaderCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpRequestHeaderCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpResponseHeaderCollection : Windows::Web::Http::Headers::IHttpResponseHeaderCollection,
        impl::require<HttpResponseHeaderCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>, Windows::Foundation::Collections::IMap<hstring, hstring>, Windows::Foundation::IStringable>
    {
        HttpResponseHeaderCollection(std::nullptr_t) noexcept {}
        HttpResponseHeaderCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpResponseHeaderCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpTransferCodingHeaderValue : Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue,
        impl::require<HttpTransferCodingHeaderValue, Windows::Foundation::IStringable>
    {
        HttpTransferCodingHeaderValue(std::nullptr_t) noexcept {}
        HttpTransferCodingHeaderValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue(ptr, take_ownership_from_abi) {}
        explicit HttpTransferCodingHeaderValue(param::hstring const& input);
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue);
    };
    struct __declspec(empty_bases) HttpTransferCodingHeaderValueCollection : Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection,
        impl::require<HttpTransferCodingHeaderValueCollection, Windows::Foundation::Collections::IIterable<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>, Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>, Windows::Foundation::IStringable>
    {
        HttpTransferCodingHeaderValueCollection(std::nullptr_t) noexcept {}
        HttpTransferCodingHeaderValueCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection(ptr, take_ownership_from_abi) {}
    };
}
#endif
