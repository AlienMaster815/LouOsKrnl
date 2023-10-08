// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Sensors_2_H
#define WINRT_Windows_Devices_Sensors_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Sensors.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors
{
    struct __declspec(empty_bases) Accelerometer : Windows::Devices::Sensors::IAccelerometer,
        impl::require<Accelerometer, Windows::Devices::Sensors::IAccelerometerDeviceId, Windows::Devices::Sensors::IAccelerometer2, Windows::Devices::Sensors::IAccelerometer3, Windows::Devices::Sensors::IAccelerometer4, Windows::Devices::Sensors::IAccelerometer5>
    {
        Accelerometer(std::nullptr_t) noexcept {}
        Accelerometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAccelerometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector(Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
    };
    struct __declspec(empty_bases) AccelerometerDataThreshold : Windows::Devices::Sensors::IAccelerometerDataThreshold
    {
        AccelerometerDataThreshold(std::nullptr_t) noexcept {}
        AccelerometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAccelerometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerReading : Windows::Devices::Sensors::IAccelerometerReading,
        impl::require<AccelerometerReading, Windows::Devices::Sensors::IAccelerometerReading2>
    {
        AccelerometerReading(std::nullptr_t) noexcept {}
        AccelerometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAccelerometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerReadingChangedEventArgs : Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs
    {
        AccelerometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        AccelerometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerShakenEventArgs : Windows::Devices::Sensors::IAccelerometerShakenEventArgs
    {
        AccelerometerShakenEventArgs(std::nullptr_t) noexcept {}
        AccelerometerShakenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAccelerometerShakenEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensor : Windows::Devices::Sensors::IActivitySensor
    {
        ActivitySensor(std::nullptr_t) noexcept {}
        ActivitySensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IActivitySensor(ptr, take_ownership_from_abi) {}
        static auto GetDefaultAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
        static auto GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
    };
    struct __declspec(empty_bases) ActivitySensorReading : Windows::Devices::Sensors::IActivitySensorReading
    {
        ActivitySensorReading(std::nullptr_t) noexcept {}
        ActivitySensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IActivitySensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorReadingChangeReport : Windows::Devices::Sensors::IActivitySensorReadingChangeReport
    {
        ActivitySensorReadingChangeReport(std::nullptr_t) noexcept {}
        ActivitySensorReadingChangeReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IActivitySensorReadingChangeReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorReadingChangedEventArgs : Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs
    {
        ActivitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        ActivitySensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorTriggerDetails : Windows::Devices::Sensors::IActivitySensorTriggerDetails
    {
        ActivitySensorTriggerDetails(std::nullptr_t) noexcept {}
        ActivitySensorTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IActivitySensorTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Altimeter : Windows::Devices::Sensors::IAltimeter,
        impl::require<Altimeter, Windows::Devices::Sensors::IAltimeter2>
    {
        Altimeter(std::nullptr_t) noexcept {}
        Altimeter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAltimeter(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) AltimeterReading : Windows::Devices::Sensors::IAltimeterReading,
        impl::require<AltimeterReading, Windows::Devices::Sensors::IAltimeterReading2>
    {
        AltimeterReading(std::nullptr_t) noexcept {}
        AltimeterReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAltimeterReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AltimeterReadingChangedEventArgs : Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs
    {
        AltimeterReadingChangedEventArgs(std::nullptr_t) noexcept {}
        AltimeterReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Barometer : Windows::Devices::Sensors::IBarometer,
        impl::require<Barometer, Windows::Devices::Sensors::IBarometer2, Windows::Devices::Sensors::IBarometer3>
    {
        Barometer(std::nullptr_t) noexcept {}
        Barometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IBarometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) BarometerDataThreshold : Windows::Devices::Sensors::IBarometerDataThreshold
    {
        BarometerDataThreshold(std::nullptr_t) noexcept {}
        BarometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IBarometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarometerReading : Windows::Devices::Sensors::IBarometerReading,
        impl::require<BarometerReading, Windows::Devices::Sensors::IBarometerReading2>
    {
        BarometerReading(std::nullptr_t) noexcept {}
        BarometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IBarometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarometerReadingChangedEventArgs : Windows::Devices::Sensors::IBarometerReadingChangedEventArgs
    {
        BarometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        BarometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IBarometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Compass : Windows::Devices::Sensors::ICompass,
        impl::require<Compass, Windows::Devices::Sensors::ICompassDeviceId, Windows::Devices::Sensors::ICompass2, Windows::Devices::Sensors::ICompass3, Windows::Devices::Sensors::ICompass4>
    {
        Compass(std::nullptr_t) noexcept {}
        Compass(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ICompass(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) CompassDataThreshold : Windows::Devices::Sensors::ICompassDataThreshold
    {
        CompassDataThreshold(std::nullptr_t) noexcept {}
        CompassDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ICompassDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompassReading : Windows::Devices::Sensors::ICompassReading,
        impl::require<CompassReading, Windows::Devices::Sensors::ICompassReadingHeadingAccuracy, Windows::Devices::Sensors::ICompassReading2>
    {
        CompassReading(std::nullptr_t) noexcept {}
        CompassReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ICompassReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompassReadingChangedEventArgs : Windows::Devices::Sensors::ICompassReadingChangedEventArgs
    {
        CompassReadingChangedEventArgs(std::nullptr_t) noexcept {}
        CompassReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ICompassReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Gyrometer : Windows::Devices::Sensors::IGyrometer,
        impl::require<Gyrometer, Windows::Devices::Sensors::IGyrometerDeviceId, Windows::Devices::Sensors::IGyrometer2, Windows::Devices::Sensors::IGyrometer3, Windows::Devices::Sensors::IGyrometer4>
    {
        Gyrometer(std::nullptr_t) noexcept {}
        Gyrometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IGyrometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) GyrometerDataThreshold : Windows::Devices::Sensors::IGyrometerDataThreshold
    {
        GyrometerDataThreshold(std::nullptr_t) noexcept {}
        GyrometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IGyrometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GyrometerReading : Windows::Devices::Sensors::IGyrometerReading,
        impl::require<GyrometerReading, Windows::Devices::Sensors::IGyrometerReading2>
    {
        GyrometerReading(std::nullptr_t) noexcept {}
        GyrometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IGyrometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GyrometerReadingChangedEventArgs : Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs
    {
        GyrometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        GyrometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HingeAngleReading : Windows::Devices::Sensors::IHingeAngleReading
    {
        HingeAngleReading(std::nullptr_t) noexcept {}
        HingeAngleReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IHingeAngleReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HingeAngleSensor : Windows::Devices::Sensors::IHingeAngleSensor
    {
        HingeAngleSensor(std::nullptr_t) noexcept {}
        HingeAngleSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IHingeAngleSensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto GetDefaultAsync();
        static auto GetRelatedToAdjacentPanelsAsync(param::hstring const& firstPanelId, param::hstring const& secondPanelId);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) HingeAngleSensorReadingChangedEventArgs : Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs
    {
        HingeAngleSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        HingeAngleSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Inclinometer : Windows::Devices::Sensors::IInclinometer,
        impl::require<Inclinometer, Windows::Devices::Sensors::IInclinometerDeviceId, Windows::Devices::Sensors::IInclinometer2, Windows::Devices::Sensors::IInclinometer3, Windows::Devices::Sensors::IInclinometer4>
    {
        Inclinometer(std::nullptr_t) noexcept {}
        Inclinometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IInclinometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefaultForRelativeReadings();
        static auto GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
        static auto GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) InclinometerDataThreshold : Windows::Devices::Sensors::IInclinometerDataThreshold
    {
        InclinometerDataThreshold(std::nullptr_t) noexcept {}
        InclinometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IInclinometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InclinometerReading : Windows::Devices::Sensors::IInclinometerReading,
        impl::require<InclinometerReading, Windows::Devices::Sensors::IInclinometerReadingYawAccuracy, Windows::Devices::Sensors::IInclinometerReading2>
    {
        InclinometerReading(std::nullptr_t) noexcept {}
        InclinometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IInclinometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InclinometerReadingChangedEventArgs : Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs
    {
        InclinometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        InclinometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensor : Windows::Devices::Sensors::ILightSensor,
        impl::require<LightSensor, Windows::Devices::Sensors::ILightSensorDeviceId, Windows::Devices::Sensors::ILightSensor2, Windows::Devices::Sensors::ILightSensor3>
    {
        LightSensor(std::nullptr_t) noexcept {}
        LightSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ILightSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) LightSensorDataThreshold : Windows::Devices::Sensors::ILightSensorDataThreshold
    {
        LightSensorDataThreshold(std::nullptr_t) noexcept {}
        LightSensorDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ILightSensorDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensorReading : Windows::Devices::Sensors::ILightSensorReading,
        impl::require<LightSensorReading, Windows::Devices::Sensors::ILightSensorReading2>
    {
        LightSensorReading(std::nullptr_t) noexcept {}
        LightSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ILightSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensorReadingChangedEventArgs : Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs
    {
        LightSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        LightSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Magnetometer : Windows::Devices::Sensors::IMagnetometer,
        impl::require<Magnetometer, Windows::Devices::Sensors::IMagnetometerDeviceId, Windows::Devices::Sensors::IMagnetometer2, Windows::Devices::Sensors::IMagnetometer3, Windows::Devices::Sensors::IMagnetometer4>
    {
        Magnetometer(std::nullptr_t) noexcept {}
        Magnetometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IMagnetometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) MagnetometerDataThreshold : Windows::Devices::Sensors::IMagnetometerDataThreshold
    {
        MagnetometerDataThreshold(std::nullptr_t) noexcept {}
        MagnetometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IMagnetometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MagnetometerReading : Windows::Devices::Sensors::IMagnetometerReading,
        impl::require<MagnetometerReading, Windows::Devices::Sensors::IMagnetometerReading2>
    {
        MagnetometerReading(std::nullptr_t) noexcept {}
        MagnetometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IMagnetometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MagnetometerReadingChangedEventArgs : Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs
    {
        MagnetometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        MagnetometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OrientationSensor : Windows::Devices::Sensors::IOrientationSensor,
        impl::require<OrientationSensor, Windows::Devices::Sensors::IOrientationSensorDeviceId, Windows::Devices::Sensors::IOrientationSensor2, Windows::Devices::Sensors::IOrientationSensor3>
    {
        OrientationSensor(std::nullptr_t) noexcept {}
        OrientationSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IOrientationSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefaultForRelativeReadings();
        static auto GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
        static auto GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
        static auto GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType);
        static auto GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) OrientationSensorReading : Windows::Devices::Sensors::IOrientationSensorReading,
        impl::require<OrientationSensorReading, Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy, Windows::Devices::Sensors::IOrientationSensorReading2>
    {
        OrientationSensorReading(std::nullptr_t) noexcept {}
        OrientationSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IOrientationSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OrientationSensorReadingChangedEventArgs : Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs
    {
        OrientationSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        OrientationSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Pedometer : Windows::Devices::Sensors::IPedometer,
        impl::require<Pedometer, Windows::Devices::Sensors::IPedometer2>
    {
        Pedometer(std::nullptr_t) noexcept {}
        Pedometer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IPedometer(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
        static auto GetDeviceSelector();
        static auto GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime);
        static auto GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration);
        static auto GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
    };
    struct __declspec(empty_bases) PedometerDataThreshold : Windows::Devices::Sensors::ISensorDataThreshold
    {
        PedometerDataThreshold(std::nullptr_t) noexcept {}
        PedometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISensorDataThreshold(ptr, take_ownership_from_abi) {}
        PedometerDataThreshold(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal);
    };
    struct __declspec(empty_bases) PedometerReading : Windows::Devices::Sensors::IPedometerReading
    {
        PedometerReading(std::nullptr_t) noexcept {}
        PedometerReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IPedometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PedometerReadingChangedEventArgs : Windows::Devices::Sensors::IPedometerReadingChangedEventArgs
    {
        PedometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        PedometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IPedometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensor : Windows::Devices::Sensors::IProximitySensor
    {
        ProximitySensor(std::nullptr_t) noexcept {}
        ProximitySensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IProximitySensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromId(param::hstring const& sensorId);
        static auto GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
    };
    struct __declspec(empty_bases) ProximitySensorDataThreshold : Windows::Devices::Sensors::ISensorDataThreshold
    {
        ProximitySensorDataThreshold(std::nullptr_t) noexcept {}
        ProximitySensorDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISensorDataThreshold(ptr, take_ownership_from_abi) {}
        explicit ProximitySensorDataThreshold(Windows::Devices::Sensors::ProximitySensor const& sensor);
    };
    struct __declspec(empty_bases) ProximitySensorDisplayOnOffController : Windows::Foundation::IClosable
    {
        ProximitySensorDisplayOnOffController(std::nullptr_t) noexcept {}
        ProximitySensorDisplayOnOffController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IClosable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensorReading : Windows::Devices::Sensors::IProximitySensorReading
    {
        ProximitySensorReading(std::nullptr_t) noexcept {}
        ProximitySensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IProximitySensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensorReadingChangedEventArgs : Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs
    {
        ProximitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        ProximitySensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorDataThresholdTriggerDetails : Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails
    {
        SensorDataThresholdTriggerDetails(std::nullptr_t) noexcept {}
        SensorDataThresholdTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorQuaternion : Windows::Devices::Sensors::ISensorQuaternion
    {
        SensorQuaternion(std::nullptr_t) noexcept {}
        SensorQuaternion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISensorQuaternion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorRotationMatrix : Windows::Devices::Sensors::ISensorRotationMatrix
    {
        SensorRotationMatrix(std::nullptr_t) noexcept {}
        SensorRotationMatrix(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISensorRotationMatrix(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SimpleOrientationSensor : Windows::Devices::Sensors::ISimpleOrientationSensor,
        impl::require<SimpleOrientationSensor, Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId, Windows::Devices::Sensors::ISimpleOrientationSensor2>
    {
        SimpleOrientationSensor(std::nullptr_t) noexcept {}
        SimpleOrientationSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISimpleOrientationSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) SimpleOrientationSensorOrientationChangedEventArgs : Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs
    {
        SimpleOrientationSensorOrientationChangedEventArgs(std::nullptr_t) noexcept {}
        SimpleOrientationSensorOrientationChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
