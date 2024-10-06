#ifdef __cplusplus
#include <LouDDK.h>
extern "C" {
#else 
#include <LouAPI.h>
#endif

#define ATAPI_CDB_LEN 12
#define ATA_MAX_QUEUE 32
#define SATA_PMP_GSCR_DWORDS 32
#define ATA_LOG_DEVSLP_SIZE 512
#define ATA_LOG_NCQ_SEND_RECV_SIZE 512
#define ATA_LOG_NCQ_NON_DATA_SIZE 64
#define ATA_SECT_SIZE 512
#define ATA_MAX_DEVICES 2

#define AC_ERR_OK 0
#define AC_ERR_DEV 1
#define AC_ERR_HSM (1 << 1)
#define AC_ERR_TIMEOUT (1 << 2)
#define AC_ERR_MEDIA (1 << 3)
#define AC_ERR_ATA_BUS (1 << 4)
#define AC_ERR_HOST_BUS (1 << 5)
#define AC_ERR_SYSTEM (1 << 6)
#define AC_ERR_INVALID (1 << 7) 
#define AC_ERR_OTHER (1 << 8)
#define AC_ERR_NODEV_HINT (1 << 9)
#define AC_ERR_NCQ (1 << 10)

#define ATA_LPM_UNKOWN 1
#define ATA_LPM_MAX_POWER 6
#define ATA_LPM_MED_POWER 5
#define ATA_LPM_MED_POWER_WITH_DIPM 4
#define ATA_LPM_MIN_POWER_WITH_PARTIAL 3
#define ATA_LPM_MIN_POWER 2 

#define SwitchOff 1
#define BlinkOn 2
#define BlinkOff 3

#define SDEV_CREATED 1
#define SDEV_RUNNING 2
#define SDEV_CANCEL 3
#define SDEV_DELETE 4
#define SDEV_QUEIESCE 5
#define SDEV_OFFLINE 6
#define SDEV_TRANSPORT_OFFLINE 7
#define SDEV_BLOCK 8
#define SDEV_CREATE_BLOCK 9

typedef uint32_t AtaLpmPolicy;
typedef uint32_t AtaCompletionErrors;
typedef uint32_t SwAvtivity;
typedef uint64_t BListFlags;
typedef uint32_t ScsiDeviceState;

#pragma pack(push,1)

typedef struct _ATA_TASKFILE{
    unsigned long Flags;
    uint8_t Protocol;
    uint8_t HobFeature;
    uint8_t HobNSect;
    uint8_t HobLbal;
    uint8_t HobLbam;
    uint8_t HobLbah;
    union {
        uint8_t Error;
        uint8_t Feature;
    };
    uint8_t NSect;
    uint8_t Lbal;
    uint8_t Lbam;
    uint8_t Lbah;
    uint8_t Device;
    union{
        uint8_t Status;
        uint8_t Command;
    };
    uint32_t Auxillery;
}ATA_TASKFILE, * PATA_TASKFILE;

typedef struct _BSG_DEVICE{
    void* Foo;
}BSG_DEVICE, * PBSG_DEVICE;

typedef struct _SCSI_DEVICE_HANDLER{
    void* Foo;
}SCSI_DEVICE_HANDLER, * PSCSI_DEVICE_HANDLER;

typedef struct _SCSI_TARGET{
    void* Foo;
}SCSI_TARGET, * PSCSI_TARGET;

typedef struct _SCSI_VPD{
    void* Foo;
}SCSI_VPD, * PSCSI_VPD;

typedef struct _SBITMAP{
    void* Foo;
}SBITMAP, * PSBITMAP;

typedef struct _REQUEST_QUEUE{
    void* Foo;
}REQUEST_QUEUE, * PREQUEST_QUEUE;

typedef struct _WAIT_QUEUE_HEAD{
    void* Foo;
}WAIT_QUEUE_HEAD, * PWAIT_QUEUE_HEAD;

typedef struct _COMPLETION{
    void* Foo;
}COMPLETION, * PCOMPLETION;

typedef struct _TIMER_LIST{
    void* Foo;
}TIMER_LIST, *PTIMER_LIST;

typedef struct ATA_BMDMA_PRD{
    void* Foo;
}ATA_BMDMA_PRD, * PATA_BMDMA_PRD;

typedef struct _ATA_IO_PORTS{
    void* Foo;
}ATA_IO_PORTS, * PATA_IO_PORTS;

typedef struct pm_message {
	int event;
} PmMessage;


typedef struct _ATA_EH_CONTEXT{
    void* Foo;
}ATA_EH_CONTEXT, * PATA_EH_CONTEXT;

typedef struct _ATA_EH_INFO{
    void* Foo;
}ATA_EH_INFO, * PATA_EH_INFO;

typedef struct _ATA_ERING{
    void* Foo;
}ATA_ERING, * PATA_ERING;

typedef struct _ATA_CDL{
    void* Foo;
} ATA_CDL, *PATA_CDL;

typedef struct _ATA_CPR_LOG{
    void* Foo;
}ATA_CPR_LOG, * PATA_CPR_LOG;

typedef struct _SCSI_DEVICE{
    struct _SCSI_HOST* Host;
    struct _REQUEST_QUEUE* RequestQueue;
    ListHeader Siblings;
    ListHeader SameTargetSibling;
    struct _SBITMAP BudgetMap;
    atomic_t DeviceBlocked;
    atomic_t Restarts;
    spinlock_t ListLock;
    ListHeader StarvedEntries;
    uint16_t QueueDepth;
    uint16_t MaxQueueDepth;
    uint16_t LastQueueFullDepth;
    uint16_t LastQueueFullCount;
    uint32_t LastQueueFullTime;
    uint32_t QueueRampUpPeriod;
    #define SCSI_DEFAULT_RAMP_UP_PERIOD	120 
    uint32_t LastQueueRampUp;
    uint32_t Id, Channel;
    uint64_t Lun;
    uint32_t Manufacturer;
    uint32_t SectorSize;
    void* HostData;
    uint8_t Type;
    char ScsiLevel;
    char InqPeriphialQuality;
    mutex_t InqMutex;
    uint8_t InqLength;
    uint8_t* Inq;
    const string Vendor;
    const string Model;
    const string Revision;
    #define SCSI_DEFAULT_VPD_LEN	255	/* default SCSI VPD page size (max) */
    struct _SCSI_VPD* VpdPg0;
    struct _SCSI_VPD* VpdPg83;
    struct _SCSI_VPD* VpdPg80;
    struct _SCSI_VPD* VpdPg89;
    struct _SCSI_VPD* VpdPgb0;
    struct _SCSI_VPD* VpdPgb1;
    struct _SCSI_VPD* VpdPgb2;
    struct _SCSI_VPD* VpdPgb7;
    struct _SCSI_TARGET* SDevTarget;
    BListFlags SDevBFLags;
    uint32_t EhTimeout;
    bool ManageSystemStartStop;
    bool ManageRntimeStartStop;
    bool ManageShutdown;
    bool ForceRuntimeStartOnSystemtart;
    bool Removable;
    bool Changed;
    bool Busy;
    bool Lockable;
    bool Borken;
    bool Disconnect;
    bool SoftReset;
    bool Sdtr;
    bool wdtr;
    bool Ppr;
    bool TaggedSupport;
    bool SimpleTags;
    bool WasReset;
    bool ExpectingCcUa;
    bool Use10ForRw;
    bool Use10ForMs;
    bool SetDbdForMs;
    bool ReadBeforeMs;
    bool NoReportOpcodes;
    bool NoWriteSame;
    bool Use16ForRw;
    bool Use16ForSync;
    bool SkipMsPage8;
    bool SkipMsPage3F;
    bool SkipVpfPages;
    bool TryVpdPages;
    bool Use192BytesFor3F;
    bool NoStartOnAdd;
    bool AllowRestart;
    bool StartStopPowerCondition;
    bool NoUldAttatch;
    bool SelectNotn;
    bool FixCapacity;
    bool GuessCapacity;
    bool RetryHwError;
    bool LastSectorBug;
    bool NoReadDiskInfo;
    bool NoReadCapacity16;
    bool TryRc10First;
    bool SecuritySupported;
    bool IsVisable;
    bool WceDefaultOn;
    bool NoDif;
    bool BrokenFua;
    bool LunInCdb;
    bool UnmapLimitForWs;
    bool RpmAutoSuspend;
    bool IgnoreMediaChange;
    bool SilenceSusspend;
    bool NoVpdSize;
    bool CdlSupported;
    bool CdlEnabled;
    uint32_t QueueStoped;
    bool OfflineAlready;
    atomic_t DiskEventsDisabledDepth;
    ListHeader EventList;
    PTHREAD_DATA Event;
    uint32_t MaxDevicesBlocked;
    #define SCSI_DEFAULT_DEVICE_BLOCKED	3
    atomic_t IoRequestCount;
	atomic_t IoDoneCount;
	atomic_t IoErrCount;
	atomic_t IoTmoCount;
    void* SDevGenev;
    void* SDev;
    PTHREAD_DATA RequeuedWork;
    struct _SCSI_DEVICE_HANDLER* Handler;
    void*                        HandlerData;
    size_t DmaDrainLength;
    void* DmaDrainBuffer;
    uint32_t SgTimeOut;
    uint32_t SgReservedSize;
    struct _BSG_DEVICE* BsgDevice;
    uint8_t AccessState;
    mutex_t StateMutex;
    ScsiDeviceState DevState;
    PTHREAD_DATA QueiescedBy;
    uint32_t SDevData[];
}SCSI_DEVICE, * PSCSI_DEVICE;

typedef struct _ATA_PORT_STATS{
    void* Foo;
}ATA_PORT_STATS, * PATA_PORT_STATS;

typedef struct _SCSI_HOST{
    void* Foo;
}SCSI_HOST, * PSCSI_HOST;

typedef struct _SCSI_COMMAND{
    void* Foo;
}SCSI_COMMAND, PSCSI_COMMAND;

typedef struct _SCATTER_GATHER{
    void* Foo;
}SCATTER_GATHER, * PSCATTER_GATHER;

typedef struct _ATA_QC_CB{
    void* Foo;
}ATA_QC_CB, * PATA_QC_CB;

typedef struct _ATA_QUEUED_COMMAND{
    struct _ATA_PORT* Port;
    struct _ATA_DEVICE* Dev;
    struct _SCSI_COMMAND* ScsiCommand;
    void (*ScsiDone)(struct _SCSI_COMMAND* ScsiCommand);
    struct _ATA_TASKFILE TaskFile;
    uint8_t Cdb[ATAPI_CDB_LEN]; 
    uint32_t Flags;
    uint32_t Tag;
    uint32_t HwTag;
    uint32_t NumElements;
    uint32_t OriginalElementNumber;
    int32_t DmaDirectory;
    uint32_t SectorSize;
    uint32_t ByteNum;
    uint32_t ExByte;
    uint32_t CurBytes;
    struct _SCATTER_GATHER SgEntry;
    struct _SCATTER_GATHER* Sg;
    struct _SCATTER_GATHER* CurSg;
    uint32_t CurSgOffset;
    uint32_t ErrorMask;
    struct _ATA_TASKFILE ReultTaskFile;
    struct _ATA_QC_CB CompleteFn;
    void* PrivateData;
    void* LLDTask;
}ATA_QUEUED_COMMAND, * PATA_QUEUED_COMMAND;

typedef struct _ATA_DEVICE{
    struct _ATA_LINK* Link;
    uint32_t DevNo;
    uint32_t Quirks;
    uint32_t Flags;
    struct _SCSI_DEVICE* SDev;
    void* PrivateData;
    void* TDev;
    uint64_t NumOfSectors;
    uint64_t NumOfNativeSectors;
    uint32_t Class;
    uint32_t UnParkDeadline;
    uint8_t PIoMode;
    uint8_t DmaMode;
    uint8_t XFerMode;
    uint32_t XFerShift;
    uint32_t MultiCount;
    uint32_t MaxSectors;
    uint32_t CdbLength;
    uint16_t Cylinders;
    uint16_t Heads;
    uint16_t Sectors;
    union{
        uint16_t Id[256];
        uint32_t Gscr[SATA_PMP_GSCR_DWORDS];
    };
    uint8_t DevSlpTiming[ATA_LOG_DEVSLP_SIZE];
    uint8_t NcqSendRecvCommands[ATA_LOG_NCQ_SEND_RECV_SIZE];
    uint8_t NcqNonDaaCommands[ATA_LOG_NCQ_NON_DATA_SIZE];
    uint32_t ZacZonedCap;
    uint32_t ZacZonesOptimalOpen;
    uint32_t ZacZonesOptimalNonSeq;
    uint32_t ZacZonesMaxOpen;
    struct _ATA_CPR_LOG* CprLog;
    struct _ATA_CDL* CDL;
    int SpdCount;
    struct _ATA_ERING ERing;
    uint8_t SectorBuffer[ATA_SECT_SIZE];
}ATA_DEVICE, * PATA_DEVICE;


typedef struct _ATA_LINK{
    struct _ATA_PORT* Port;
    int PMP;
    void* TDev;
    uint32_t ActiveTag;
    uint32_t SActive;
    uint32_t Flags;
    uint32_t SavedSControl;
    uint32_t HwSataSpeedLimit;
    uint32_t SataSpeed;
    AtaLpmPolicy LpmPolicy;
    struct _ATA_EH_INFO EhInfo;
    struct _ATA_EH_CONTEXT EhContext;
    struct _ATA_DEVICE Device[ATA_MAX_DEVICES];
    uint32_t LastLpmChange;
}ATA_LINK, * PATA_LINK;

typedef struct _ATA_PORT{
    void* PortMmio;
    struct _SCSI_HOST* ScsiHost;
    struct _ATA_PORT_OPERATION_TABLE* Operations;
    spinlock_t* Lock;
    uint32_t HFlags;
    uint32_t Flags;
    uint32_t PFlags;
    uint32_t PrintId;
    uint32_t PortNumber;

    //ATA SFF
    struct _ATA_IO_PORTS IoAddr;
    uint8_t Ctl;
    uint8_t LastCtl;
    struct _ATA_LINK* SffPIoTaskLink;
    PTHREAD SffPIoTask;

    //BMDMA
    struct ATA_BMDMA_PRD* BmDmaPrd;
    void* BmDmaPrdAddress;

    uint32_t PIoMask;
    uint32_t MwDmaMask;
    uint32_t UDmaMask;
    uint32_t Cbl;

    struct _ATA_QUEUED_COMMAND QCMD[ATA_MAX_QUEUE + 1];
    uint64_t QcActive;
    int32_t NrActiveLinks;

    struct _ATA_LINK Link;
    struct _ATA_LINK *SlaveLink;

    int NrPmpLink;
    struct _ATA_LINK* PmpLink;
    struct _ATA_LINK* ExeclLink;

    struct _ATA_PORT_STATS Stats;
    struct _ATA_HOST* Host;
    void* Dev;
    void* TDev;
    mutex_t ScsiScanMutex;
    PTHREAD HotPlugTask;
    PTHREAD ScsiRescanTask;
    uint32_t HsmTaskState;
    ListHeader EhDone;
    struct _WAIT_QUEUE_HEAD EhWaitQueueHead;
    int EhTries;
    struct _COMPLETION ParkReqPending;
    PmMessage PowrMessage;
    AtaLpmPolicy TargetLpmPolicy;
    struct _TIMER_LIST FastDrainTimer;
    uint32_t FastDrainCount;
    uint64_t Cookie;
    int EmMessageType;
    void* PrivateData;
    bool Dma;
    bool Ncq;
    bool Dma48;
}ATA_PORT, * PATA_PORT;

typedef struct _ATA_HOST{
    spinlock_t Lock;
    void* PDev;
    void* IoMap;
    uint32_t NumPorts;
    uint32_t NumTags;
    void* PrivateData;
    struct _ATA_PORT_OPERATION_TABLE* Operations;
    uint32_t Flags;
    mutex_t EhMutex;
    PTHREAD_DATA EhOwner;
    struct _ATA_PORT* SimplexClaimed;
    struct _ATA_PORT* Ports;
}ATA_HOST, * PATA_HOST;



typedef struct _ATA_PORT_OPERATION_TABLE{
    //Command Execution
    LOUSTATUS (*QcDefer)(PATA_QUEUED_COMMAND Qc);
    LOUSTATUS (*CheckAtapiDma)(PATA_QUEUED_COMMAND Qc);
    AtaCompletionErrors (*QcPrep)(PATA_QUEUED_COMMAND Qc);
    uint32_t (*QcIssue)(PATA_QUEUED_COMMAND Qc);
    void (*QcFillRtf)(PATA_QUEUED_COMMAND Qc);
    void (*QcNcqFillRtf)(PATA_PORT Port, uint64_t DoneMask);

    //Configurations And Exceptions
    LOUSTATUS (*CableDetect)(PATA_PORT Port);
    uint32_t (*ModeFilter)(PATA_DEVICE Dev, uint32_t XferMask);
    void (*SetPIoMode)(PATA_PORT Port, PATA_DEVICE Dev);
    void (*SetDmaMode)(PATA_PORT Port, PATA_DEVICE Dev);
    LOUSTATUS (*SetMode)(PATA_LINK Link, PATA_DEVICE* RFailedDevice);
    uint32_t (*IReadId)(PATA_DEVICE Dev, PATA_TASKFILE TaskFile, uint16_t Id);
    void (*DevConfig)(PATA_DEVICE Dev);
    void (*Freeze)(PATA_PORT Port);
    void (*Thaw)(PATA_PORT Port);
    //reset functions
    LOUSTATUS (*PreReset)(PATA_LINK Link, unsigned int* Class, unsigned long DedLine);
    LOUSTATUS (*SoftReset)(PATA_LINK Link, unsigned int* Class, unsigned long DedLine);
    LOUSTATUS (*HardRest)(PATA_LINK Link, unsigned int* Class, unsigned long Deadline);
    LOUSTATUS (*PostReset)(PATA_LINK Link, unsigned int* Class);
    LOUSTATUS (*PMPPreReset)(PATA_LINK Link, unsigned int* Class, unsigned long DedLine);
    LOUSTATUS (*PMPSoftReset)(PATA_LINK Link, unsigned int* Class, unsigned long DedLine);
    LOUSTATUS (*PMPHardReset)(PATA_LINK Link, unsigned int* Class, unsigned long DedLine);
    LOUSTATUS (*PMPPostReset)(PATA_LINK Link, unsigned int* Class);

    void (*ErrorHandler)(PATA_PORT Port);
    void (*LostInterrupt)(PATA_PORT Port);
    void (*PostInternalCommand)(PATA_QUEUED_COMMAND Qc);
    void (*SchedEh)(PATA_PORT Port);    
    void (*EndEh)(PATA_PORT Port);

    //optional Features
    LOUSTATUS (*ScrRead)(PATA_LINK Link, uint32_t ScReg, uint32_t* Value);
    LOUSTATUS (*ScrWrite)(PATA_LINK Link, uint32_t ScReg, uint32_t Value);
    void      (*PmpAttatch)(PATA_PORT Port);
    void      (*PmpDetatch)(PATA_PORT Port);
    LOUSTATUS (*SetLpm)(PATA_LINK Link, AtaLpmPolicy Policy, unsigned Hints);

    //Start, Stop, Resume
    LOUSTATUS (*PortSuspend)(PATA_PORT Port, PmMessage Mesage);
    LOUSTATUS (*PortResume)(PATA_PORT Port);
    LOUSTATUS (*PortStart)(PATA_PORT Port);
    void (*PortStop)(PATA_PORT Port);
    void (*HostStop)(PATA_HOST Host);

    //ATA SFF
    void (*SFFDevSelect)(PATA_PORT Port, uint32_t Device);
    void (*SFFSetDevCtl)(PATA_PORT Port, uint8_t Ctl);
    uint8_t (*SFFCheckAtatus)(PATA_PORT Port);
    uint8_t (*SFFCheckAltStatus)(PATA_PORT Port);
    void (*SFFTaskFileLoad)(PATA_PORT Port, PATA_TASKFILE TaskFile);
    void (*SFTaskFileRead)(PATA_PORT Port, PATA_TASKFILE TaskFile);
    void (*SFFExecCommand)(PATA_PORT Port, PATA_TASKFILE TaskFile);
    uint32_t (*SFFDataXFer)(PATA_QUEUED_COMMAND Qc, uint8_t* Buf, uint32_t BufLength, int Rw);
    void (*SFFIrqOn)(PATA_PORT Port);
    bool (*SFFIrqCheck)(PATA_PORT Port);
    void (*SFFIrqClear)(PATA_PORT Port);
    void (*SFFDraiunFifo)(PATA_QUEUED_COMMAND Qc);
    //BMDma
    void (*BMDmaSetup)(PATA_QUEUED_COMMAND Qc);
    void (*BMDmaStart)(PATA_QUEUED_COMMAND Qc);
    void (*BMDmaStop)(PATA_QUEUED_COMMAND Qc);
    uint8_t (*BMDmaStatus)(PATA_PORT Port);

    size_t (*EmShow)(PATA_PORT Port, string Buff);
    size_t (*EmStore)(PATA_PORT Port, string Message, size_t MesgSze);
    size_t (*SwActivityShow)(PATA_DEVICE Dev, string Value);
    size_t (*SwActivityStore)(PATA_DEVICE Dev, SwAvtivity Value);
    size_t (*TransmitLedMessage)(PATA_PORT Port, uint32_t State, size_t size);

    const struct _ATA_PORT_OPERATION_TABLE* Inheritance;

}ATA_PORT_OPERATIONS_TABLE, * PATA_PORT_OPERATIONS_TABLE;


#define ATA_FLAG_SATA (1 << 0)
#define ATA_FLAG_PIO_DMA (1 << 1) 
#define ATA_FLAG_ACPI_SATA (1 << 2)
#define ATA_FLAG_AN (1 << 3) 
#define ATA_FLAG_NO_DIPM (1 << 4)
#define ATA_FLAG_NCQ (1 << 5)
#define ATA_FLAG_FPDMA_AA (1 << 6) 
#define ATA_FLAG_FPDMA_AUX (1 << 7)
#define ATA_FLAG_PMP (1 << 8)
#define ATA_FLAG_EM (1 << 9)
#define ATA_FLAG_SW_ACTIVITY (1 << 10)
#define ATA_NO_HOST_PART (1 << 11)
#define ATA_HOST_NO_SSC (1 << 12)
#define ATA_HOST_NO_DEVSLP (1 << 13)
#define ATA_HOST_PARALLEL_SCAN (1 << 14)

#define ATA_PFLAG_EXTERNAL 1

PATA_PORT LouKeGetAtaStoragePortObject(uint8_t DriveNumber);


#define ATA_CMD_IDENTIFY 0xEC

//Command Library
#define ATA_NOP                                 0x00
#define ATA_CFA_REQUEST_EXTENDED_ERROR_CODE     0x03
#define ATA_DATA_SET_MANAGEMENT                 0x06
#define ATA_DATA_SET_MANAGEMENT_XL              0x07
#define ATA_DEVICE_RESET                        0x08
#define ATA_REQUEST_SENCE_DATA_EXT              0x0B
#define ATA_RECALIBRATE_SPEC2                   0x10
#define ATA_RECALIBRATE_SPEC3                   0x11
#define ATA_GET_PHYSICAL_ELEMENT_STATUS         0x12
#define ATA_READ_SECTOR                         0x20
#define ATA_READ_SECTOR_NO_RETR                 0x21
#define ATA_READ_LONG                           0x22
#define ATA_READ_LONG_NO_RETRY                  0x23
#define ATA_READ_LONG_SECTOR_EXT                0x24
#define ATA_READ_DMA_EXT                        0x25
#define ATA_READ_DMA_QUEUED_EXT                 0x26
#define ATA_READ_NATIVE_MAX_ADDRESS_EXT         0x27
#define ATA_READ_MULTIPLE_EXT_LEGACY            0x29
#define ATA_READ_STREAM_DMA_EXT                 0x2A
#define ATA_READ_STREAM_EXT                     0x2B
#define ATA_READ_LOG_EXT                        0x2F
#define ATA_WRITE_SECTOR                        0x30
#define ATA_WRITE_SECTOR_NO_RETRY               0x31
#define ATA_WRITE_LONG                          0x32
#define ATA_WRITE_LONG_NO_RETRY                 0x33
#define ATA_WRITE_SECTOR_EXT                    0x34
#define ATA_WRITE_DMA_EXT                       0x35
#define ATA_WRITE_DMA_QUEUED_EXT                0x36
#define ATA_SET_MAX_ADDRESS_EXT                 0x37
#define ATA_CFA_WRITE_SECTORS_WITHOUGHT_ERASE   0x38
#define ATA_WRITE_MULTIPLE_EXIT                 0x39
#define ATA_WRITE_STREAM_DMA_EXT                0x3A
#define ATA_WRITE_STREAM_EXT                    0x3B
#define ATA_WRITE_VERIFY                        0x3C
#define ATA_WRITE_DMA_FUA_EXT                   0x3D
#define ATA_WRITE_DMA_QUEUED_FUA_EXT            0x3E
#define ATA_WRITE_LOG_EXT                       0x3F
#define ATA_READ_VERIFY_SECTOR                  0x40
#define ATA_READ_VERIFY_SECTOR_NO_RETRY         0x41
#define ATA_READ_VERIFY_SECTOR_EXT              0x42
#define ATA_ZERO_EXT                            0x44
#define ATA_WRITE_UNCORECTABLE_EXT              0x45
#define ATA_READ_LOG_DMA_EXT                    0x47
#define ATA_ZAC_MANAGEMENT_IN                   0x4A
#define ATA_FORMAT_TRACK                        0x50
#define ATA_CONFIGURE_STREAM                    0x51
#define ATA_WRITE_LOG_DMA_EXT                   0x57
#define ATA_TRUSTED_NON_DATA                    0x5B
#define ATA_TRUSTED_RECIEVE                     0x5C
#define ATA_TRUSTED_RECIEVE_DMA                 0x5D
#define ATA_TRUSTED_SEND                        0x5E
#define ATA_TRUSTED_SEND_DMA                    0x5F
#define ATA_READ_FPDMA_QUEUED                   0x60
#define ATA_WRITE_FPDMA_QUEUED                  0x61
#define ATA_NCQ_NON_DAAT                        0x63
#define ATA_SEND_FPDMA_QUEUED                   0x64
#define ATA_RECIEVE_FPDMA_QUEUED                0x65
#define ATA_ACCESIBLE_MAX_ADDRESS_CONFIGURATION 0x78
#define ATA_EXECUTE_DEVICE_DIAGNOSTICS          0x90
#define ATA_INITIALIZE_DEVICE_PARAMETERS        0x91
#define ATA_STANDBY_IMMEDIATE_LEGACY            0x94
#define ATA_IDLE_IMMEDIATE_LEGACY               0x95
#define ATA_STANDBY_LEGACY                      0x96
#define ATA_IDLE_LEGACY                         0x97
#define ATA_CHECK_POWER_MODE_LEGACY             0x98
#define ATA_SLEEP_LEGACY                        0x99
#define ATA_ZAC_MANAGEMENT_OUT                  0x9F
#define ATA_PACKET                              0xA0
#define ATA_IDENTIFY_PACKET_DEVICE              0xA1
#define ATA_SERVICE                             0xA2
#define ATA_SMART                               0xB0
#define ATA_DEVICE_CONFIGURATION_OVERLAY        0xB1
#define ATA_SET_SECTOR_CONFIGURATION_EXT        0xB2
#define ATA_SANATIZE_DEVICE                     0xB4
#define ATA_NV_CAVHE                            0xB6
#define ATA_CFA_ERASE_SECTORS                   0xC0
#define ATA_READ_MULTIPLE_EXT                   0xC4
#define ATA_WRITE_MULTIPLE                      0xC5
#define ATA_SET_MULTIPLE_MODE                   0xC6
#define ATA_READ_DMA_QUEUED                     0xC7
#define ATA_READ_DMA                            0xC8
#define ATA_READ_DMA_NO_RETRY                   0xC9
#define ATA_WRITE_DMA                           0xCA
#define ATA_WRITE_DMA_NO_RETY                   0xCB
#define ATA_WRITE_DMA_QUEUED                    0xCC
#define ATA_CFA_WRITE_MULTIPLE_NO_ERASE         0xCD
#define ATA_WRITE_MULTIPLE_FUA_EXT              0xCE
#define ATA_CHECK_MEDIA_CARD_TYPE               0xD1
#define ATA_GET_MEDIA_STATUS                    0xDA
#define ATA_ACKNOWLEDGE_MEDIA_CHANGE            0xDB
#define ATA_BOOT_POST_BOOT                      0xDC
#define ATA_BOOT_PRE_BOOT                       0xDD
#define ATA_MEDIA_LOCK                          0xDE
#define ATA_MEDIA_UNLOCK                        0xDF
#define ATA_STANDBY_IMMEDIATE                   0xE0
#define ATA_IDLE_IMMEDIATE                      0xE1
#define ATA_STANDBY                             0xE2
#define ATA_IDLE                                0xE3
#define ATA_READ_BUFFER                         0xE4
#define ATA_CHECK_POWER_MODE                    0xE5
#define ATA_SLEEP                               0xE6
#define ATA_FLUSH_CACHE                         0xE7
#define ATA_WRITE_BUFFER                        0xE8
#define ATA_READ_BUFFER_DMA                     0xE9
#define ATA_FLUSH_CACHE_EXT                     0xEA
#define ATA_WRITE_BUFFER_DMA                    0xEB
#define ATA_IDENTIFY_DEVICE                     0xEC
#define ATA_MEDIA_EJECT                         0xED
#define ATA_IDENTIFY_DEVICE_DMA                 0xEE
#define ATA_SET_FEATURES                        0xEF

//Note Put Kernel Data Before this 
#ifdef __cplusplus
}
#endif

#ifdef _KERNEL_MODULE_
KERNEL_EXPORT PATA_HOST LouMallocAtaHost(P_PCI_DEVICE_OBJECT PDEV, PATA_PORT Port, int NPorts);

void AtaPortRegisterPortIo(
PATA_PORT Ap,
void* Mmio,
size_t Offset
);




#endif
#pragma pack(pop)