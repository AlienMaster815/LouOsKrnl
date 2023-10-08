// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Midi_1_H
#define WINRT_Windows_Devices_Midi_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Midi.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Midi
{
    struct __declspec(empty_bases) IMidiChannelPressureMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessage>,
        impl::require<Windows::Devices::Midi::IMidiChannelPressureMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiChannelPressureMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessageFactory>
    {
        IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiControlChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiControlChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiControlChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessageFactory>
    {
        IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiInPort :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPort>,
        impl::require<Windows::Devices::Midi::IMidiInPort, Windows::Foundation::IClosable>
    {
        IMidiInPort(std::nullptr_t = nullptr) noexcept {}
        IMidiInPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiInPortStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPortStatics>
    {
        IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiInPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessage>
    {
        IMidiMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiMessageReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessageReceivedEventArgs>
    {
        IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMidiMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiNoteOffMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessage>,
        impl::require<Windows::Devices::Midi::IMidiNoteOffMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiNoteOffMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessageFactory>
    {
        IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiNoteOnMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessage>,
        impl::require<Windows::Devices::Midi::IMidiNoteOnMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiNoteOnMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessageFactory>
    {
        IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiOutPort :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPort>,
        impl::require<Windows::Devices::Midi::IMidiOutPort, Windows::Foundation::IClosable>
    {
        IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiOutPortStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPortStatics>
    {
        IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiPitchBendChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiPitchBendChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessageFactory>
    {
        IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiPolyphonicKeyPressureMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessage>,
        impl::require<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiPolyphonicKeyPressureMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessageFactory>
    {
        IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiProgramChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiProgramChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiProgramChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessageFactory>
    {
        IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSongPositionPointerMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessage>,
        impl::require<Windows::Devices::Midi::IMidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSongPositionPointerMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessageFactory>
    {
        IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSongSelectMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessage>,
        impl::require<Windows::Devices::Midi::IMidiSongSelectMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSongSelectMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessageFactory>
    {
        IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSynthesizer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizer>,
        impl::require<Windows::Devices::Midi::IMidiSynthesizer, Windows::Foundation::IClosable, Windows::Devices::Midi::IMidiOutPort>
    {
        IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSynthesizerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizerStatics>
    {
        IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiSystemExclusiveMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSystemExclusiveMessageFactory>
    {
        IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSystemExclusiveMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiTimeCodeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessage>,
        impl::require<Windows::Devices::Midi::IMidiTimeCodeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMidiTimeCodeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessageFactory>
    {
        IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
