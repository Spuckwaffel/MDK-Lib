
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent
/// Size: 0x0170 (0x0000A0 - 0x000210)
class UCreativeAudioComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	DMember(float)                                     StereoSpreadScaleFactor                                     OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     FadeInDuration                                              OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSyncPlayerAudio                                            OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bRestartAudioOnPlay                                         OFFSET(get<bool>, {0xAD, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetListener)        CanBeHeardBy                                                OFFSET(get<T>, {0xAE, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetLocation)        PlayLocation                                                OFFSET(get<T>, {0xAF, 1, 0, 0})
	CMember(EAutoplayOptions)                          AutoplayOptions                                             OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(UFortMinigameProgressComponent*)           FortMinigameProgressComponent                               OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UCreativeProxyManagerComponent*)           CreativeProxyManager                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UCreativeRegisteredPlayersManagerComponent*) CreativeRegisteredPlayersManagerComponent                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, UAudioComponent*>)  PlayerAudioComponents                                       OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(ACreativeAudioPlayerReplicationProxy*)     ClientCachedProxy                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(USoundBase*)                               LastSoundPlayed                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FCreativeAudioPlayerData)                  ServerInstigatorData                                        OFFSET(getStruct<T>, {0x138, 64, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bAudioLoaded                                                OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FCreativeAudioPlayerData)                  CachedInstigatorData                                        OFFSET(getStruct<T>, {0x1A8, 64, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  RegisteredPlayerIds                                         OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  NonRegisteredPlayerIds                                      OFFSET(get<T>, {0x1F8, 16, 0, 0})
	CMember(EAutoplayOptions)                          CurrentAutoplayState                                        OFFSET(get<T>, {0x208, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
	// void StopAudio(AController* Player);                                                                                     // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.SetProperties
	// void SetProperties(TWeakObjectPtr<USoundBase*>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32_t NewCanBeHeardBy, int32_t NewPlayLocation, int32_t NewAutoplayOptions); // [0xa348de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
	// void RetryUpdateAutoplayStatusOnMinigameAdd(AFortMinigame* Minigame);                                                    // [0x551cb00] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
	// void RetryClientPlayAudio(FCreativeAudioPlayerData& InstigatorData);                                                     // [0xa348d10] Final|Native|Private|HasOutParms 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
	// void ResetDevice();                                                                                                      // [0xa348958] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
	// void PlayAudio(AController* Player);                                                                                     // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
	// void OnRep_ServerInstigatorData();                                                                                       // [0xa348c8c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
	// void OnRep_RegisteredPlayerIds();                                                                                        // [0xa348c78] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
	// void OnProxyDataChanged(ACreativePlayerReplicationProxy* ProxyData);                                                     // [0xa348bf8] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
	// void OnPlayerUnregistered(AFortPlayerState* PlayerState);                                                                // [0x5ea4560] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
	// void OnPlayerRemoved(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                       // [0xa34896c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
	// void OnPlayerRegistered(AFortPlayerState* PlayerState);                                                                  // [0x5cf078c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                         // [0x7790324] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                               // [0x7cf1260] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0x2b7b1c8] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0xa348958] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
	// void OnEnabledStateChanged(bool bIsEnabled);                                                                             // [0x550d6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
	// void OnAudioLoadComplete(FSoftObjectPath Audio);                                                                         // [0xa34827c] Final|Native|Private|HasDefaults 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                         // [0x64771e4] Final|Native|Private 
};

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
/// Size: 0x0040 (0x000298 - 0x0002D8)
class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FCreativeAudioPlayerData)                  InstigatorData                                              OFFSET(getStruct<T>, {0x298, 64, 0, 0})
};

/// Struct /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCreativeAudioPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FUniqueNetIdRepl)                          NetId                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(APawn*)                                    Pawn                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ServerAudioStartTime                                        OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetListener
/// Size: 0x06
enum ECreativeAudioPlayerTargetListener : uint8_t
{
	ECreativeAudioPlayerTargetListener__None0                                        = 0,
	ECreativeAudioPlayerTargetListener__Instigator1                                  = 1,
	ECreativeAudioPlayerTargetListener__RegisteredPlayers2                           = 2,
	ECreativeAudioPlayerTargetListener__NonRegisteredPlayers3                        = 4,
	ECreativeAudioPlayerTargetListener__Everyone4                                    = 6,
	ECreativeAudioPlayerTargetListener__ECreativeAudioPlayerTargetListener_MAX5      = 7
};

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetLocation
/// Size: 0x07
enum ECreativeAudioPlayerTargetLocation : uint8_t
{
	ECreativeAudioPlayerTargetLocation__None0                                        = 0,
	ECreativeAudioPlayerTargetLocation__Device1                                      = 1,
	ECreativeAudioPlayerTargetLocation__LocalPlayer2                                 = 2,
	ECreativeAudioPlayerTargetLocation__RegisteredPlayers3                           = 4,
	ECreativeAudioPlayerTargetLocation__InstigatingPlayer4                           = 8,
	ECreativeAudioPlayerTargetLocation__All5                                         = 15,
	ECreativeAudioPlayerTargetLocation__ECreativeAudioPlayerTargetLocation_MAX6      = 16
};

/// Enum /Script/CRD_AudioPlayerRuntime.EAutoplayOptions
/// Size: 0x08
enum EAutoplayOptions : uint8_t
{
	EAutoplayOptions__None0                                                          = 0,
	EAutoplayOptions__Create1                                                        = 1,
	EAutoplayOptions__WaitingForPlayer2                                              = 2,
	EAutoplayOptions__Countdown3                                                     = 4,
	EAutoplayOptions__Gameplay4                                                      = 8,
	EAutoplayOptions__RoundEnd5                                                      = 16,
	EAutoplayOptions__GameEnd6                                                       = 32,
	EAutoplayOptions__EAutoplayOptions_MAX7                                          = 33
};

