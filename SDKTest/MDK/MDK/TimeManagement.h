
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0000 (0x000028 - 0x000028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0008 (0x000028 - 0x000030)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAutoDetectFormat                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
/// Size: 0x0020 (0x000030 - 0x000050)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bShouldBlock                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bForceSingleFrameDeltaTime                                  OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0028 (0x000030 - 0x000058)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bUseGenlockToCount                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0008 (0x000028 - 0x000030)
class UTimeSynchronizationSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bUseForSynchronization                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   FrameOffset                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (0x000000 - 0x000018)
class FTimedDataChannelSampleTime : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimedDataInputEvaluationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DistanceToNewestSampleSeconds                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceToOldestSampleSeconds                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x06
enum EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode0                                = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode1                                   = 1,
	EFrameNumberDisplayFormats__Seconds2                                             = 2,
	EFrameNumberDisplayFormats__Frames3                                              = 3,
	EFrameNumberDisplayFormats__MAX_Count4                                           = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX5                      = 5
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x04
enum ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None0                                             = 0,
	ETimedDataInputEvaluationType__Timecode1                                         = 1,
	ETimedDataInputEvaluationType__PlatformTime2                                     = 2,
	ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX3                = 3
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x04
enum ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected0                                                 = 0,
	ETimedDataInputState__Unresponsive1                                              = 1,
	ETimedDataInputState__Disconnected2                                              = 2,
	ETimedDataInputState__ETimedDataInputState_MAX3                                  = 3
};

