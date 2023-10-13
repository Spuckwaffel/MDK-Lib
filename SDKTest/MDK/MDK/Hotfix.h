
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x03A8 (0x000028 - 0x0003D0)
class UOnlineHotfixManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FString)                                   OssName                                                     OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FString)                                   HotfixManagerClassName                                      OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FString)                                   DebugPrefix                                                 OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	CMember(TArray<UObject*>)                          AssetsHotfixedFromIniFiles                                  OFFSET(get<T>, {0x3C0, 16, 0, 0})


	/// Functions
	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess
	// void StartHotfixProcess();                                                                                               // [0x2638d70] Native|Public|BlueprintCallable 
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x0258 (0x000028 - 0x000280)
class UUpdateManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	DMember(float)                                     HotfixCheckCompleteDelay                                    OFFSET(get<float>, {0x1F0, 4, 0, 0})
	DMember(float)                                     UpdateCheckCompleteDelay                                    OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     HotfixAvailabilityCheckCompleteDelay                        OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     UpdateCheckAvailabilityCompleteDelay                        OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(int32_t)                                   AppSuspendedUpdateCheckTimeSeconds                          OFFSET(get<int32_t>, {0x200, 4, 0, 0})
	DMember(bool)                                      bPlatformEnvironmentDetected                                OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(bool)                                      bInitialUpdateFinished                                      OFFSET(get<bool>, {0x211, 1, 0, 0})
	DMember(bool)                                      bCheckHotfixAvailabilityOnly                                OFFSET(get<bool>, {0x212, 1, 0, 0})
	CMember(EUpdateState)                              CurrentUpdateState                                          OFFSET(get<T>, {0x213, 1, 0, 0})
	DMember(int32_t)                                   WorstNumFilesPendingLoadViewed                              OFFSET(get<int32_t>, {0x214, 4, 0, 0})
	CMember(EPatchCheckResult)                         LastPatchCheckResult                                        OFFSET(get<T>, {0x218, 1, 0, 0})
	CMember(EHotfixResult)                             LastHotfixResult                                            OFFSET(get<T>, {0x219, 1, 0, 0})
	SMember(FDateTime)                                 LastUpdateCheck                                             OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	CMember(EUpdateCompletionStatus)                   LastCompletionResult                                        OFFSET(get<T>, {0x258, 2, 0, 0})
	CMember(UEnum*)                                    UpdateStateEnum                                             OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(UEnum*)                                    UpdateCompletionEnum                                        OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x06
enum EHotfixResult : uint8_t
{
	EHotfixResult__Failed0                                                           = 0,
	EHotfixResult__Success1                                                          = 1,
	EHotfixResult__SuccessNoChange2                                                  = 2,
	EHotfixResult__SuccessNeedsReload3                                               = 3,
	EHotfixResult__SuccessNeedsRelaunch4                                             = 4,
	EHotfixResult__EHotfixResult_MAX5                                                = 5
};

/// Enum /Script/Hotfix.EPatchCheckResult
/// Size: 0x05
enum EPatchCheckResult : uint8_t
{
	EPatchCheckResult__NoPatchRequired0                                              = 0,
	EPatchCheckResult__PatchRequired1                                                = 1,
	EPatchCheckResult__NoLoggedInUser2                                               = 2,
	EPatchCheckResult__PatchCheckFailure3                                            = 3,
	EPatchCheckResult__EPatchCheckResult_MAX4                                        = 4
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x10
enum EUpdateCompletionStatus : uint8_t
{
	EUpdateCompletionStatus__UpdateUnknown0                                          = 0,
	EUpdateCompletionStatus__UpdateSuccess1                                          = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange2                                 = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload3                              = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch4                            = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch5                               = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck6                               = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck7                              = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn8                              = 8,
	EUpdateCompletionStatus__EUpdateCompletionStatus_MAX9                            = 9
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x09
enum EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle0                                                        = 0,
	EUpdateState__UpdatePending1                                                     = 1,
	EUpdateState__CheckingForPatch2                                                  = 2,
	EUpdateState__DetectingPlatformEnvironment3                                      = 3,
	EUpdateState__CheckingForHotfix4                                                 = 4,
	EUpdateState__WaitingOnInitialLoad5                                              = 5,
	EUpdateState__InitialLoadComplete6                                               = 6,
	EUpdateState__UpdateComplete7                                                    = 7,
	EUpdateState__EUpdateState_MAX8                                                  = 8
};

