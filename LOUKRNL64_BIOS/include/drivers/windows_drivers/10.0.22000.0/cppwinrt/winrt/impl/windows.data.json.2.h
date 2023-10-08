// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Json_2_H
#define WINRT_Windows_Data_Json_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Data.Json.1.h"
WINRT_EXPORT namespace winrt::Windows::Data::Json
{
    struct __declspec(empty_bases) JsonArray : Windows::Data::Json::IJsonArray,
        impl::require<JsonArray, Windows::Foundation::Collections::IIterable<Windows::Data::Json::IJsonValue>, Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue>, Windows::Foundation::IStringable>
    {
        JsonArray(std::nullptr_t) noexcept {}
        JsonArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Data::Json::IJsonArray(ptr, take_ownership_from_abi) {}
        JsonArray();
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result);
    };
    struct JsonError
    {
        JsonError() = delete;
        static auto GetJsonStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) JsonObject : Windows::Data::Json::IJsonObject,
        impl::require<JsonObject, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>>, Windows::Foundation::Collections::IMap<hstring, Windows::Data::Json::IJsonValue>, Windows::Data::Json::IJsonObjectWithDefaultValues, Windows::Foundation::IStringable>
    {
        JsonObject(std::nullptr_t) noexcept {}
        JsonObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Data::Json::IJsonObject(ptr, take_ownership_from_abi) {}
        JsonObject();
        using Windows::Data::Json::IJsonObject::GetNamedArray;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedArray;
        using Windows::Data::Json::IJsonObject::GetNamedBoolean;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedBoolean;
        using Windows::Data::Json::IJsonObject::GetNamedNumber;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedNumber;
        using Windows::Data::Json::IJsonObject::GetNamedObject;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedObject;
        using Windows::Data::Json::IJsonObject::GetNamedString;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedString;
        using Windows::Data::Json::IJsonObject::GetNamedValue;
        using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedValue;
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result);
    };
    struct __declspec(empty_bases) JsonValue : Windows::Data::Json::IJsonValue,
        impl::require<JsonValue, Windows::Foundation::IStringable>
    {
        JsonValue(std::nullptr_t) noexcept {}
        JsonValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Data::Json::IJsonValue(ptr, take_ownership_from_abi) {}
        static auto Parse(param::hstring const& input);
        static auto TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result);
        static auto CreateBooleanValue(bool input);
        static auto CreateNumberValue(double input);
        static auto CreateStringValue(param::hstring const& input);
        static auto CreateNullValue();
    };
}
#endif
