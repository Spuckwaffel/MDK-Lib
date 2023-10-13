
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Spectating/RelevancyZoneIndicator.RelevancyZoneIndicator_C
/// Size: 0x0000 (0x000478 - 0x000478)
class ARelevancyZoneIndicator_C : public AFortRelevancyZoneIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
};

/// Class /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C
/// Size: 0x004C (0x000448 - 0x000494)
class ABP_HoverDronePawn_C : public AHoverDronePawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1172;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x448, 8, 0, 0})
	DMember(bool)                                      WindAudioEnabled                                            OFFSET(get<bool>, {0x450, 1, 0, 0})
	CMember(UAudioComponent*)                          AltitudeWindAudioComp                                       OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(float)                                     WindAudioAltMin                                             OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(float)                                     WindAudioAltMax                                             OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(float)                                     WindAudioVolMin                                             OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     WindAudioVolMax                                             OFFSET(get<float>, {0x46C, 4, 0, 0})
	CMember(USoundBase*)                               SoundWindMovementLoop                                       OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(USoundBase*)                               SoundWindAltitudeLoop                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(float)                                     CurrentAltitudeWindVolume                                   OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x484, 4, 0, 0})
	CMember(UAudioComponent*)                          MovementWindAudioComp                                       OFFSET(get<T>, {0x488, 8, 0, 0})
	DMember(float)                                     CurrentMovementWindVolume                                   OFFSET(get<float>, {0x490, 4, 0, 0})


	/// Functions
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude
	// void GetWindVolumeFromAltitude(float Altitude, float& Volume);                                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled
	// void SetWindAudioEnabled(bool Enabled);                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed
	// void ReceivePossessed(AController* NewController);                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed
	// void ReceiveUnpossessed(AController* OldController);                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio
	// void Update Wind Audio();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn
	// void ExecuteUbergraph_BP_HoverDronePawn(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Spectating/BP_ArenaCamPawn.BP_ArenaCamPawn_C
/// Size: 0x0000 (0x000450 - 0x000450)
class ABP_ArenaCamPawn_C : public AArenaCamPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Class /Game/Spectating/BP_SpectatorPawn.BP_SpectatorPawn_C
/// Size: 0x0000 (0x000430 - 0x000430)
class ABP_SpectatorPawn_C : public AFortReplaySpectatorPawnBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Game/Spectating/BP_SpectatorPC.BP_SpectatorPC_C
/// Size: 0x0008 (0x002A40 - 0x002A48)
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 10824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A40, 8, 0, 0})


	/// Functions
	// Function /Game/Spectating/BP_SpectatorPC.BP_SpectatorPC_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_SpectatorPC.BP_SpectatorPC_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Spectating/BP_SpectatorPC.BP_SpectatorPC_C.ExecuteUbergraph_BP_SpectatorPC
	// void ExecuteUbergraph_BP_SpectatorPC(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
/// Size: 0x00A8 (0x002B30 - 0x002BD8)
class ABP_ReplayPC_Athena_C : public AFortReplaySpectatorAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11224;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B30, 8, 0, 0})
	CMember(TMap<float, USoundMix*>)                   PlaybackRateMap                                             OFFSET(get<T>, {0x2B38, 80, 0, 0})
	DMember(float)                                     CurrentPlayRate                                             OFFSET(get<float>, {0x2B88, 4, 0, 0})
	DMember(bool)                                      bIsFast                                                     OFFSET(get<bool>, {0x2B8C, 1, 0, 0})
	CMember(UAudioComponent*)                          SpeedupLoop                                                 OFFSET(get<T>, {0x2B90, 8, 0, 0})
	CMember(UAudioComponent*)                          SlowdownLoop                                                OFFSET(get<T>, {0x2B98, 8, 0, 0})
	DMember(bool)                                      bIsHudVisible                                               OFFSET(get<bool>, {0x2BA0, 1, 0, 0})
	CMember(UAudioComponent*)                          ZoomOutLoop                                                 OFFSET(get<T>, {0x2BA8, 8, 0, 0})
	CMember(UAudioComponent*)                          ZoomInLoop                                                  OFFSET(get<T>, {0x2BB0, 8, 0, 0})
	DMember(bool)                                      bIsSkydivingAudioEnabled                                    OFFSET(get<bool>, {0x2BB8, 1, 0, 0})
	DMember(bool)                                      bIsTargetParachuting                                        OFFSET(get<bool>, {0x2BB9, 1, 0, 0})
	DMember(bool)                                      bIsTargetSkydiving                                          OFFSET(get<bool>, {0x2BBA, 1, 0, 0})
	CMember(UAudioComponent*)                          SkydivingAudioLoop                                          OFFSET(get<T>, {0x2BC0, 8, 0, 0})
	DMember(bool)                                      bIsPaused                                                   OFFSET(get<bool>, {0x2BC8, 1, 0, 0})
	CMember(USoundBase*)                               CurrentSkydivingSound                                       OFFSET(get<T>, {0x2BD0, 8, 0, 0})


	/// Functions
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera
	// void IsGameplayCamera(bool& IsGameplayCamera);                                                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled
	// void SetSkydivingAudioEnabled(bool Enabled);                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound
	// USoundBase* GetSkydivingSound();                                                                                         // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier
	// void OnNotifyNewPlaybackMultiplier(float NewMultiplier);                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Slowdown / Speedup Loops
	// void Handle Slowdown / Speedup Loops(float Playback Multiplier);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged
	// void OnReplayHudVisibilityChanged(EHudVisibilityState IsVisible);                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd
	// void OnZoomOutEnd();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin
	// void OnZoomOutBegin();                                                                                                   // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd
	// void OnZoomInEnd();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin
	// void OnZoomInBegin();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed
	// void On Pause State Changed(bool bPaused);                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State
	// void Handle Parachute Audio State();                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update
	// void Looping Audio Update();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Spectating/BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena
	// void ExecuteUbergraph_BP_ReplayPC_Athena(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

