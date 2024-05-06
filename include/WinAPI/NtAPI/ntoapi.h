#ifndef NTOAPI_H
#define NTOAPI_H

/*

typedef struct {
  ULONG Granularity;
  ULONG Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;

typedef struct CM_Power_Data_s {
  ULONG              PD_Size;
  DEVICE_POWER_STATE PD_MostRecentPowerState;
  ULONG              PD_Capabilities;
  ULONG              PD_D1Latency;
  ULONG              PD_D2Latency;
  ULONG              PD_D3Latency;
  DEVICE_POWER_STATE PD_PowerStateMapping[POWER_SYSTEM_MAXIMUM];
  SYSTEM_POWER_STATE PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;

typedef struct _COUNTED_REASON_CONTEXT {
  ULONG Version;
  ULONG Flags;
  union {
    struct {
      UNICODE_STRING  ResourceFileName;
      USHORT          ResourceReasonId;
      ULONG           StringCount;
      PUNICODE_STRING ReasonStrings;
    } DUMMYSTRUCTNAME;
    UNICODE_STRING SimpleString;
  } DUMMYUNIONNAME;
} COUNTED_REASON_CONTEXT, *PCOUNTED_REASON_CONTEXT;

typedef enum _DEVICE_POWER_STATE {
  PowerDeviceUnspecified,
  PowerDeviceD0,
  PowerDeviceD1,
  PowerDeviceD2,
  PowerDeviceD3,
  PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef enum _MONITOR_DISPLAY_STATE {
  PowerMonitorOff,
  PowerMonitorOn,
  PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;

__kernel_entry NTSYSCALLAPI NTSTATUS NtPowerInformation(
  [in]            POWER_INFORMATION_LEVEL InformationLevel,
  [in, optional]  PVOID                   InputBuffer,
  [in]            ULONG                   InputBufferLength,
  [out, optional] PVOID                   OutputBuffer,
  [in]            ULONG                   OutputBufferLength
);

typedef enum {
  InternalWakeSourceDozeToHibernate,
  InternalWakeSourcePredictedUserPresence,
  InternalWakeSourceTimerOverride
} PO_INTERNAL_WAKE_SOURCE_TYPE, *PPO_INTERNAL_WAKE_SOURCE_TYPE;

typedef struct _PO_SPR_ACTIVE_SESSION_DATA {
  BOOLEAN Start;
  GUID    ActiveSessionGuid;
} PO_SPR_ACTIVE_SESSION_DATA, *PPO_SPR_ACTIVE_SESSION_DATA;

typedef enum  {
  PowerActionNone           = 0,
  PowerActionReserved       = ( PowerActionNone + 1 ),
  PowerActionSleep          = ( PowerActionReserved + 1 ),
  PowerActionHibernate      = ( PowerActionSleep + 1 ),
  PowerActionShutdown       = ( PowerActionHibernate + 1 ),
  PowerActionShutdownReset  = ( PowerActionShutdown + 1 ),
  PowerActionShutdownOff    = ( PowerActionShutdownReset + 1 ),
  PowerActionWarmEject      = ( PowerActionShutdownOff + 1 )
} POWER_ACTION, *PPOWER_ACTION;

typedef enum {
  SystemPowerPolicyAc,
  SystemPowerPolicyDc,
  VerifySystemPolicyAc,
  VerifySystemPolicyDc,
  SystemPowerCapabilities,
  SystemBatteryState,
  SystemPowerStateHandler,
  ProcessorStateHandler,
  SystemPowerPolicyCurrent,
  AdministratorPowerPolicy,
  SystemReserveHiberFile,
  ProcessorInformation,
  SystemPowerInformation,
  ProcessorStateHandler2,
  LastWakeTime,
  LastSleepTime,
  SystemExecutionState,
  SystemPowerStateNotifyHandler,
  ProcessorPowerPolicyAc,
  ProcessorPowerPolicyDc,
  VerifyProcessorPowerPolicyAc,
  VerifyProcessorPowerPolicyDc,
  ProcessorPowerPolicyCurrent,
  SystemPowerStateLogging,
  SystemPowerLoggingEntry,
  SetPowerSettingValue,
  NotifyUserPowerSetting,
  PowerInformationLevelUnused0,
  SystemMonitorHiberBootPowerOff,
  SystemVideoState,
  TraceApplicationPowerMessage,
  TraceApplicationPowerMessageEnd,
  ProcessorPerfStates,
  ProcessorIdleStates,
  ProcessorCap,
  SystemWakeSource,
  SystemHiberFileInformation,
  TraceServicePowerMessage,
  ProcessorLoad,
  PowerShutdownNotification,
  MonitorCapabilities,
  SessionPowerInit,
  SessionDisplayState,
  PowerRequestCreate,
  PowerRequestAction,
  GetPowerRequestList,
  ProcessorInformationEx,
  NotifyUserModeLegacyPowerEvent,
  GroupPark,
  ProcessorIdleDomains,
  WakeTimerList,
  SystemHiberFileSize,
  ProcessorIdleStatesHv,
  ProcessorPerfStatesHv,
  ProcessorPerfCapHv,
  ProcessorSetIdle,
  LogicalProcessorIdling,
  UserPresence,
  PowerSettingNotificationName,
  GetPowerSettingValue,
  IdleResiliency,
  SessionRITState,
  SessionConnectNotification,
  SessionPowerCleanup,
  SessionLockState,
  SystemHiberbootState,
  PlatformInformation,
  PdcInvocation,
  MonitorInvocation,
  FirmwareTableInformationRegistered,
  SetShutdownSelectedTime,
  SuspendResumeInvocation,
  PlmPowerRequestCreate,
  ScreenOff,
  CsDeviceNotification,
  PlatformRole,
  LastResumePerformance,
  DisplayBurst,
  ExitLatencySamplingPercentage,
  RegisterSpmPowerSettings,
  PlatformIdleStates,
  ProcessorIdleVeto,
  PlatformIdleVeto,
  SystemBatteryStatePrecise,
  ThermalEvent,
  PowerRequestActionInternal,
  BatteryDeviceState,
  PowerInformationInternal,
  ThermalStandby,
  SystemHiberFileType,
  PhysicalPowerButtonPress,
  QueryPotentialDripsConstraint,
  EnergyTrackerCreate,
  EnergyTrackerQuery,
  UpdateBlackBoxRecorder,
  SessionAllowExternalDmaDevices,
  SendSuspendResumeNotification,
  BlackBoxRecorderDirectAccessBuffer,
  PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;

typedef enum {
  MonitorRequestReasonUnknown,
  MonitorRequestReasonPowerButton,
  MonitorRequestReasonRemoteConnection,
  MonitorRequestReasonScMonitorpower,
  MonitorRequestReasonUserInput,
  MonitorRequestReasonAcDcDisplayBurst,
  MonitorRequestReasonUserDisplayBurst,
  MonitorRequestReasonPoSetSystemState,
  MonitorRequestReasonSetThreadExecutionState,
  MonitorRequestReasonFullWake,
  MonitorRequestReasonSessionUnlock,
  MonitorRequestReasonScreenOffRequest,
  MonitorRequestReasonIdleTimeout,
  MonitorRequestReasonPolicyChange,
  MonitorRequestReasonSleepButton,
  MonitorRequestReasonLid,
  MonitorRequestReasonBatteryCountChange,
  MonitorRequestReasonGracePeriod,
  MonitorRequestReasonPnP,
  MonitorRequestReasonDP,
  MonitorRequestReasonSxTransition,
  MonitorRequestReasonSystemIdle,
  MonitorRequestReasonNearProximity,
  MonitorRequestReasonThermalStandby,
  MonitorRequestReasonResumePdc,
  MonitorRequestReasonResumeS4,
  MonitorRequestReasonTerminal,
  MonitorRequestReasonPdcSignal,
  MonitorRequestReasonAcDcDisplayBurstSuppressed,
  MonitorRequestReasonSystemStateEntered,
  MonitorRequestReasonWinrt,
  MonitorRequestReasonUserInputKeyboard,
  MonitorRequestReasonUserInputMouse,
  MonitorRequestReasonUserInputTouchpad,
  MonitorRequestReasonUserInputPen,
  MonitorRequestReasonUserInputAccelerometer,
  MonitorRequestReasonUserInputHid,
  MonitorRequestReasonUserInputPoUserPresent,
  MonitorRequestReasonUserInputSessionSwitch,
  MonitorRequestReasonUserInputInitialization,
  MonitorRequestReasonPdcSignalWindowsMobilePwrNotif,
  MonitorRequestReasonPdcSignalWindowsMobileShell,
  MonitorRequestReasonPdcSignalHeyCortana,
  MonitorRequestReasonPdcSignalHolographicShell,
  MonitorRequestReasonPdcSignalFingerprint,
  MonitorRequestReasonDirectedDrips,
  MonitorRequestReasonDim,
  MonitorRequestReasonBuiltinPanel,
  MonitorRequestReasonDisplayRequiredUnDim,
  MonitorRequestReasonBatteryCountChangeSuppressed,
  MonitorRequestReasonResumeModernStandby,
  MonitorRequestReasonTerminalInit,
  MonitorRequestReasonPdcSignalSensorsHumanPresence,
  MonitorRequestReasonBatteryPreCritical,
  MonitorRequestReasonUserInputTouch,
  MonitorRequestReasonMax
} POWER_MONITOR_REQUEST_REASON;

typedef struct _POWER_PLATFORM_INFORMATION {
  BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;

typedef enum _POWER_REQUEST_TYPE {
  PowerRequestDisplayRequired,
  PowerRequestSystemRequired,
  PowerRequestAwayModeRequired,
  PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;

typedef struct _POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES {
  BOOLEAN IsAllowed;
} POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES, *PPOWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES;

typedef union _POWER_STATE {
  SYSTEM_POWER_STATE SystemState;
  DEVICE_POWER_STATE DeviceState;
} POWER_STATE, *PPOWER_STATE;

typedef enum _POWER_STATE_TYPE {
  SystemPowerState,
  DevicePowerState
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;


typedef enum _SYSTEM_POWER_STATE {
  PowerSystemUnspecified,
  PowerSystemWorking,
  PowerSystemSleeping1,
  PowerSystemSleeping2,
  PowerSystemSleeping3,
  PowerSystemHibernate,
  PowerSystemShutdown,
  PowerSystemMaximum
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT {
  union {
    struct {
      ULONG Reserved1 : 8;
      ULONG TargetSystemState : 4;
      ULONG EffectiveSystemState : 4;
      ULONG CurrentSystemState : 4;
      ULONG IgnoreHibernationPath : 1;
      ULONG PseudoTransition : 1;
      ULONG KernelSoftReboot : 1;
      ULONG DirectedDripsTransition : 1;
      ULONG Reserved2 : 8;
    } DUMMYSTRUCTNAME;
    ULONG ContextAsUlong;
  } DUMMYUNIONNAME;
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT;

*/

#endif