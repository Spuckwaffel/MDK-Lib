/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DanceVolume.

/// Struct /Script/DanceVolume.DanceBeatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDanceBeatInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LengthBeats                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartOffsetMs                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/DanceVolume.DanceSynchronizerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDanceSynchronizerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bShouldHalfOrDoubleTimeDances                               ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FDanceBeatInfo)                            BeatInfo                                                    ___ OFFSET(get<T>, {0xA4, 8, 0, 0})
	CMember(EDanceBeatSyncMode)                        SyncMode                                                    ___ OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     Tempo                                                       ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(AFortPlayerPawn*)                          OwnerPlayerPawn                                             ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   OwnerMeshComponent                                          ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   LeaderMeshComponent                                         ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/DanceVolume.DanceVolumeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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

