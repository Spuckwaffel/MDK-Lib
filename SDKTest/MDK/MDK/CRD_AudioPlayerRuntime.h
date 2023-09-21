
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
	DMember(float)                                     StereoSpreadScaleFactor                                     ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     FadeInDuration                                              ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSyncPlayerAudio                                            ___ OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bRestartAudioOnPlay                                         ___ OFFSET(get<bool>, {0xAD, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetListener)        CanBeHeardBy                                                ___ OFFSET(get<T>, {0xAE, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetLocation)        PlayLocation                                                ___ OFFSET(get<T>, {0xAF, 1, 0, 0})
	CMember(EAutoplayOptions)                          AutoplayOptions                                             ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(UFortMinigameProgressComponent*)           FortMinigameProgressComponent                               ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UCreativeProxyManagerComponent*)           CreativeProxyManager                                        ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UCreativeRegisteredPlayersManagerComponent*) CreativeRegisteredPlayersManagerComponent                 ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, UAudioComponent*>)  PlayerAudioComponents                                       ___ OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(ACreativeAudioPlayerReplicationProxy*)     ClientCachedProxy                                           ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(USoundBase*)                               LastSoundPlayed                                             ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FCreativeAudioPlayerData)                  ServerInstigatorData                                        ___ OFFSET(get<T>, {0x138, 64, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bAudioLoaded                                                ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FCreativeAudioPlayerData)                  CachedInstigatorData                                        ___ OFFSET(get<T>, {0x1A8, 64, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  RegisteredPlayerIds                                         ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  NonRegisteredPlayerIds                                      ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
	CMember(EAutoplayOptions)                          CurrentAutoplayState                                        ___ OFFSET(get<T>, {0x208, 1, 0, 0})
};

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
/// Size: 0x0040 (0x000298 - 0x0002D8)
class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FCreativeAudioPlayerData)                  InstigatorData                                              ___ OFFSET(get<T>, {0x298, 64, 0, 0})
};

/// Struct /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCreativeAudioPlayerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FUniqueNetIdRepl)                          NetId                                                       ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	CMember(APawn*)                                    Pawn                                                        ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ServerAudioStartTime                                        ___ OFFSET(get<float>, {0x38, 4, 0, 0})
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

