
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DanceVolume.DanceSynchronizerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDanceSynchronizerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bShouldHalfOrDoubleTimeDances                               OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FDanceBeatInfo)                            BeatInfo                                                    OFFSET(get<T>, {0xA4, 8, 0, 0})
	CMember(EDanceBeatSyncMode)                        SyncMode                                                    OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(AFortPlayerPawn*)                          OwnerPlayerPawn                                             OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   OwnerMeshComponent                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   LeaderMeshComponent                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
};



	/// Functions
	// Function /Script/DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
	// void StopOwnerEmoteAudio();                                                                                              // [0x9a9e694] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetTempo
	// void SetTempo(float NewTempo);                                                                                           // [0x9a9e614] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
	// void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo);                                                                 // [0x9a9e580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
	// void SetBeatSyncMode(EDanceBeatSyncMode NewMode);                                                                        // [0x9a9e504] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
	// void OnRep_SyncMode();                                                                                                   // [0x9a9e4a4] Final|Native|Private 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
	// bool IsTempoSyncEnabled();                                                                                               // [0x9a9e488] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
	// USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                                 // [0x5e33928] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
	// AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                               // [0x826c3bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
	// float CalculateDanceMontagePlayRate(float CurrentTempo, UAnimMontage* Montage, FDanceBeatInfo& DanceBeatInfo);           // [0x9a9e1a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
/// Class /Script/DanceVolume.DanceVolumeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/DanceVolume.DanceBeatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDanceBeatInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LengthBeats                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartOffsetMs                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/DanceVolume.EDanceBeatSyncMode
/// Size: 0x04
enum EDanceBeatSyncMode : uint8_t
{
	EDanceBeatSyncMode__Off0                                                         = 0,
	EDanceBeatSyncMode__Tempo1                                                       = 1,
	EDanceBeatSyncMode__Music2                                                       = 2,
	EDanceBeatSyncMode__EDanceBeatSyncMode_MAX3                                      = 3
};

