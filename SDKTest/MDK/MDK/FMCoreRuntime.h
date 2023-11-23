
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/FMCoreRuntime.FMCoreDeveloperSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UFMCoreDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FDirectoryPath)                            AdditionalContentPath                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMCoreMusicFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FMCoreRuntime.FMCoreMusicManagerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UFMCoreMusicManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMulticastInlineDelegate)                  OnTempoChangedDelegate                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKeyChangedDelegate                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModeChangedDelegate                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimeSignatureChanged                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	CMember(EMusicKey)                                 StartingKey                                                 OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(EMusicKeyMode)                             StartingMode                                                OFFSET(get<T>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   StartingTempo                                               OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(int32_t)                                   StartingTimeSignatureNumerator                              OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   StartingTimeSignatureDenominator                            OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	CMember(EMusicKey)                                 CurrentKey                                                  OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(EMusicKeyMode)                             CurrentMode                                                 OFFSET(get<T>, {0xF1, 1, 0, 0})
	DMember(int32_t)                                   CurrentTempo                                                OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	SMember(FFMCoreTimeSignature)                      CurrentTimeSignature                                        OFFSET(getStruct<T>, {0xF8, 8, 0, 0})
	CMember(EMusicKey)                                 ServerKey                                                   OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(EMusicKeyMode)                             ServerMode                                                  OFFSET(get<T>, {0x101, 1, 0, 0})
	DMember(int32_t)                                   ServerTempo                                                 OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	SMember(FFMCoreTimeSignature)                      ServerTimeSignature                                         OFFSET(getStruct<T>, {0x108, 8, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTimeSignatureChange
	// void TriggerTimeSignatureChange(int32_t Numerator, int32_t Denominator);                                                 // [0xa38b884] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTempoChange
	// void TriggerTempoChange(int32_t BPM);                                                                                    // [0xa38b804] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                            // [0xa38b784] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                                  // [0xa38b704] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTimeSignatureChanged__DelegateSignature
	// void OnTimeSignatureChanged__DelegateSignature(FFMCoreTimeSignature TimeSignature);                                      // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTempoChanged__DelegateSignature
	// void OnTempoChanged__DelegateSignature(int32_t CurrentTempo);                                                            // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTimeSignatureChanged
	// void OnRep_ServerTimeSignatureChanged();                                                                                 // [0xa38ad88] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTempoChanged
	// void OnRep_ServerTempoChanged();                                                                                         // [0xa38ad54] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerModeChanged
	// void OnRep_ServerModeChanged();                                                                                          // [0xa38ad20] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerKeyChanged
	// void OnRep_ServerKeyChanged();                                                                                           // [0xa38acec] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnModeChanged__DelegateSignature
	// void OnModeChanged__DelegateSignature(EMusicKeyMode CurrentMode);                                                        // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnKeyChanged__DelegateSignature
	// void OnKeyChanged__DelegateSignature(EMusicKey CurrentKey);                                                              // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTimeSignature
	// FFMCoreTimeSignature GetCurrentTimeSignature();                                                                          // [0x56896d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0x7a63794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                       // [0x5a40f18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0x80541e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                              // [0xa389654] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFMPlayspaceScopedSystemComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnAddedToPlayspaceSystemManager                             OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent.OnAddedToPlayspaceSystemManager__DelegateSignature
	// void OnAddedToPlayspaceSystemManager__DelegateSignature(bool Success);                                                   // [0x101681c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFMPlayspaceScopedSystemManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<UClass*, UClass*>)                    VKClassRedirects                                            OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    UEFNNotableActors                                           OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.MulticastNewSystemCreated
	// void MulticastNewSystemCreated(AActor* PlayspaceActor, UClass* SystemClass, AActor* CreatedActor);                       // [0xa38abc8] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.GetOrCreateSystemForActorBP
	// void GetOrCreateSystemForActorBP(UClass* SystemClass, AActor* Requester, AActor*& OutActor, ESystemGetResult& OutWasValid); // [0xa389cf4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMCoreRuntime.FMUEFNResolver
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UFMUEFNResolver : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TSet<FString>)                             DownloadingLinkCodes                                        OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TSet<FString>)                             DownloadedLinkCodes                                         OFFSET(get<T>, {0x108, 80, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMUEFNResolver.ResolveAndLoadLinkCode
	// bool ResolveAndLoadLinkCode(FString LinkCode, AFortPlayerState* PlayerState);                                            // [0xa38adc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.IsDownloadInProgress
	// bool IsDownloadInProgress();                                                                                             // [0xa38aba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.HandleResolveComplete
	// void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray<FString>& PluginURLs);                                // [0xa38a4fc] Final|Native|Private|HasOutParms 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.HandleGameFeatureLoadComplete
	// void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode);                                                     // [0xa389ea8] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.GetInProgressDownloads
	// TSet<FString> GetInProgressDownloads();                                                                                  // [0xa389828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.GetFinishedDownloads
	// TSet<FString> GetFinishedDownloads();                                                                                    // [0xa38980c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FMCoreRuntime.FMCoreTimeSignature
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMCoreTimeSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Numerator                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Denominator                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FMCoreRuntime.FMPlayspaceSystemInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FFMPlayspaceSystemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Enum /Script/FMCoreRuntime.EMusicKeyMode
/// Size: 0x04
enum EMusicKeyMode : uint8_t
{
	EMusicKeyMode__Major0                                                            = 0,
	EMusicKeyMode__Minor1                                                            = 1,
	EMusicKeyMode__Num2                                                              = 2,
	EMusicKeyMode__EMusicKeyMode_MAX3                                                = 3
};

/// Enum /Script/FMCoreRuntime.EMusicKey
/// Size: 0x14
enum EMusicKey : uint8_t
{
	EMusicKey__C0                                                                    = 0,
	EMusicKey__Db1                                                                   = 1,
	EMusicKey__D2                                                                    = 2,
	EMusicKey__Eb3                                                                   = 3,
	EMusicKey__E4                                                                    = 4,
	EMusicKey__F5                                                                    = 5,
	EMusicKey__Gb6                                                                   = 6,
	EMusicKey__G7                                                                    = 7,
	EMusicKey__Ab8                                                                   = 8,
	EMusicKey__A9                                                                    = 9,
	EMusicKey__Bb10                                                                  = 10,
	EMusicKey__B11                                                                   = 11,
	EMusicKey__Num12                                                                 = 12,
	EMusicKey__EMusicKey_MAX13                                                       = 13
};

/// Enum /Script/FMCoreRuntime.ESystemGetResult
/// Size: 0x03
enum ESystemGetResult : uint8_t
{
	ESystemGetResult__Valid0                                                         = 0,
	ESystemGetResult__Invalid1                                                       = 1,
	ESystemGetResult__ESystemGetResult_MAX2                                          = 2
};

/// Enum /Script/FMCoreRuntime.EMusicInterval
/// Size: 0x14
enum EMusicInterval : uint8_t
{
	EMusicInterval__P10                                                              = 0,
	EMusicInterval__Min21                                                            = 1,
	EMusicInterval__Maj22                                                            = 2,
	EMusicInterval__Min33                                                            = 3,
	EMusicInterval__Maj34                                                            = 4,
	EMusicInterval__P45                                                              = 5,
	EMusicInterval__TT6                                                              = 6,
	EMusicInterval__P57                                                              = 7,
	EMusicInterval__Min68                                                            = 8,
	EMusicInterval__Maj69                                                            = 9,
	EMusicInterval__Min710                                                           = 10,
	EMusicInterval__Maj711                                                           = 11,
	EMusicInterval__Num12                                                            = 12,
	EMusicInterval__EMusicInterval_MAX13                                             = 13
};

/// Enum /Script/FMCoreRuntime.EHarmonicProgression
/// Size: 0x17
enum EHarmonicProgression : uint8_t
{
	EHarmonicProgression__NegI0                                                      = 0,
	EHarmonicProgression__NegII1                                                     = 1,
	EHarmonicProgression__NegIII2                                                    = 2,
	EHarmonicProgression__NegIV3                                                     = 3,
	EHarmonicProgression__NegV4                                                      = 4,
	EHarmonicProgression__NegVI5                                                     = 5,
	EHarmonicProgression__NegVII6                                                    = 6,
	EHarmonicProgression__I7                                                         = 7,
	EHarmonicProgression__II8                                                        = 8,
	EHarmonicProgression__III9                                                       = 9,
	EHarmonicProgression__IV10                                                       = 10,
	EHarmonicProgression__V11                                                        = 11,
	EHarmonicProgression__VI12                                                       = 12,
	EHarmonicProgression__VII13                                                      = 13,
	EHarmonicProgression__PlusI14                                                    = 14,
	EHarmonicProgression__Num15                                                      = 15,
	EHarmonicProgression__EHarmonicProgression_MAX16                                 = 16
};

