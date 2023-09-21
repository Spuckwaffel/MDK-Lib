
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x0048 (0x000BB8 - 0x000C00)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
	CMember(ULevelSequence*)                           Sequence                                                    OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(AFortPlayerController*)                    InstigatingController                                       OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(char)                                      InstigatingTeam                                             OFFSET(get<char>, {0xBF0, 1, 0, 0})
	DMember(bool)                                      bLoopPlayback                                               OFFSET(get<bool>, {0xBF4, 1, 1, 0})
	DMember(bool)                                      bRestoreState                                               OFFSET(get<bool>, {0xBF4, 1, 1, 1})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xBF4, 1, 1, 2})
	CMember(EFortMinigameState)                        AutoPlayMinigameState                                       OFFSET(get<T>, {0xBF8, 1, 0, 0})
	CMember(ECinematicSequenceVisibility)              Visibility                                                  OFFSET(get<T>, {0xBF9, 1, 0, 0})
	DMember(bool)                                      bLevelSequenceActorAlwaysRelevant                           OFFSET(get<bool>, {0xBFA, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xBFC, 4, 0, 0})


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                             // [0x9a979e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(ULevelSequence* Sequence);                                                                              // [0x9a97968] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0x9a977e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                        // [0x9a978e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                    // [0x9a97868] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                             // [0x9a977d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                            // [0x9a977c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(ULevelSequencePlayer* Player);                                                          // [0x7c52cec] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0x9a977ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// UMovieSceneSequencePlayer* GetSequencePlayer();                                                                          // [0x9a9778c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0x9a97718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                                 // [0x9a97764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                              // [0x9a97740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x04
enum ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly0                                    = 0,
	ECinematicSequenceVisibility__InstigatingTeam1                                   = 1,
	ECinematicSequenceVisibility__Everyone2                                          = 2,
	ECinematicSequenceVisibility__ECinematicSequenceVisibility_MAX3                  = 3
};

