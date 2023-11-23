
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x00B0 (0x000BB8 - 0x000C68)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3176;

public:
	CMember(ULevelSequence*)                           Sequence                                                    OFFSET(get<T>, {0xC08, 8, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(AFortPlayerController*)                    InstigatingController                                       OFFSET(get<T>, {0xC18, 8, 0, 0})
	DMember(char)                                      InstigatingTeam                                             OFFSET(get<char>, {0xC20, 1, 0, 0})
	DMember(bool)                                      bLoopPlayback                                               OFFSET(get<bool>, {0xC24, 1, 1, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xC24, 1, 1, 1})
	CMember(ECinematicSequenceEnabledOnPhase)          EnabledOnPhase                                              OFFSET(get<T>, {0xC28, 1, 0, 0})
	CMember(ECinematicSequenceVisibility)              Visibility                                                  OFFSET(get<T>, {0xC29, 1, 0, 0})
	DMember(bool)                                      bLevelSequenceActorAlwaysRelevant                           OFFSET(get<bool>, {0xC2A, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xC2C, 4, 0, 0})
	CMember(EMovieSceneCompletionModeOverride)         FinishCompletionStateOverride                               OFFSET(get<T>, {0xC30, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                             // [0xa356aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(ULevelSequence* Sequence);                                                                              // [0xa356a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0xa3568ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                        // [0xa3569ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                    // [0xa35696c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                             // [0xa3568d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                            // [0xa3568c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(ULevelSequencePlayer* Player);                                                          // [0x7af1c28] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0xa3568b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// UMovieSceneSequencePlayer* GetSequencePlayer();                                                                          // [0xa35688c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0xa356818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                                 // [0xa356864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                              // [0xa356840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
/// Size: 0x05
enum ECinematicSequenceEnabledOnPhase : uint8_t
{
	ECinematicSequenceEnabledOnPhase__Always0                                        = 0,
	ECinematicSequenceEnabledOnPhase__PreGameOnly1                                   = 1,
	ECinematicSequenceEnabledOnPhase__GameplayOnly2                                  = 2,
	ECinematicSequenceEnabledOnPhase__CreateOnly3                                    = 3,
	ECinematicSequenceEnabledOnPhase__ECinematicSequenceEnabledOnPhase_MAX4          = 4
};

