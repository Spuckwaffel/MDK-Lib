
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GrindRailRuntime
/// dependency: VictoryCrownsRuntime

/// Class /EmeraldGlass_D/GameplayCues/SereneYardCues/GCN_SereneYard_Spawn.GCN_SereneYard_Spawn_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_SereneYard_Spawn_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /MidMatchRadioTowerGameplay/GameplayCues/GCN_MMObj_RadioTower_NotificationSuccess.GCN_MMObj_RadioTower_NotificationSuccess_C
/// Size: 0x000C (0x000548 - 0x000554)
class AGCN_MMObj_RadioTower_NotificationSuccess_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1364;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	SMember(FGameplayTag)                              SuccessNotificationTag                                      ___ OFFSET(get<T>, {0x550, 4, 0, 0})
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
/// Size: 0x0028 (0x000990 - 0x0009B8)
class AGCNL_Ascender_Descent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2488;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	SMember(FTimerHandle)                              SoundVisualizerHandle                                       ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(AActor*)                                   My_Target                                                   ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UTexture*)                                 Override_Icon                                               ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
};

/// Class /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /GrindRail/GameplayCues/GCN_Burst_PlayerImpact.GCN_Burst_PlayerImpact_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Burst_PlayerImpact_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /GrindRail/GameplayCues/GCNL_GrindBoostFast.GCNL_GrindBoostFast_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GrindBoostFast_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
};

/// Class /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Ascender_SpeedLines_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UMaterialInterface*)                       Decal_Material                                              ___ OFFSET(get<T>, {0x218, 8, 0, 0})
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
/// Size: 0x0060 (0x000990 - 0x0009F0)
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	DMember(double)                                    MinCamShakeAmp                                              ___ OFFSET(get<double>, {0x9A0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeAmp                                              ___ OFFSET(get<double>, {0x9A8, 8, 0, 0})
	DMember(double)                                    MinCamShakeFreq                                             ___ OFFSET(get<double>, {0x9B0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeFreq                                             ___ OFFSET(get<double>, {0x9B8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       matineeCamShake                                             ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
	SMember(FScalableFloat)                            MaxAscenderSpeed                                            ___ OFFSET(get<T>, {0x9C8, 40, 0, 0})
};

/// Class /GrindRail/GameplayCues/GCNL_GeneralAccelerationFeedback.GCNL_GeneralAccelerationFeedback_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GeneralAccelerationFeedback_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
};

/// Class /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
/// Size: 0x0088 (0x000A48 - 0x000AD0)
class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public AFortGameplayCueNotify_CrownWear
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA48, 8, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Shown_On_Wearer_                           ___ OFFSET(get<T>, {0xA50, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Range                                      ___ OFFSET(get<T>, {0xA78, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Ping_Frequency                             ___ OFFSET(get<T>, {0xAA0, 40, 0, 0})
	SMember(FTimerHandle)                              timer_handle                                                ___ OFFSET(get<T>, {0xAC8, 8, 0, 0})
};

/// Class /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C
/// Size: 0x0010 (0x000990 - 0x0009A0)
class AGCNL_Irwin_Player_Prey_Nug_Float_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          FloatSound                                                  ___ OFFSET(get<T>, {0x998, 8, 0, 0})
};

/// Class /GrindRail/GameplayCues/GCNL_GrindBoostSlow.GCNL_GrindBoostSlow_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GrindBoostSlow_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_LuredInterest.GCN_Irwin_PlayerInteraction_LuredInterest_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_PlayerInteraction_LuredInterest_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               SlideSound                                                  ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          SlidingSoundComponent                                       ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(USkeletalMeshComponent*)                   NewVar                                                      ___ OFFSET(get<T>, {0x218, 8, 0, 0})
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(USkeletalMeshComponent*)                   NewVar                                                      ___ OFFSET(get<T>, {0x218, 8, 0, 0})
};

/// Class /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_GrindSprinting_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudio                                                  ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostEndAudio                                               ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
};

/// Class /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C
/// Size: 0x0091 (0x000B20 - 0x000BB1)
class AGCNL_Grinding_C : public AFortGameplayCueNotifyLoop_Grinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2993;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             FortSoundIndicator                                          ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	DMember(float)                                     AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6      ___ OFFSET(get<float>, {0xB30, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6      ___ OFFSET(get<T>, {0xB34, 1, 0, 0})
	CMember(UTimelineComponent*)                       AlphaCurve                                                  ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(UFXSystemComponent*)                       GrindRailFX                                                 ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  Cached_Grinding_Component                                   ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(UAudioComponent*)                          GrindAudioLoop                                              ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(UAudioComponent*)                          GrindAudioStart                                             ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TEnumAsByte<ColorSelect>)                  ColorEnum                                                   ___ OFFSET(get<T>, {0xB68, 1, 0, 0})
	CMember(AFortGrindRail*)                           GrindRail                                                   ___ OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(ABuildingGameplayActor*)                   GrindingRail                                                ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(UAudioComponent*)                          JumpOffAudio                                                ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	DMember(float)                                     NotRenderedDisableEffectsTime                               ___ OFFSET(get<float>, {0xB88, 4, 0, 0})
	CMember(USoundBase*)                               StartLoopSound                                              ___ OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(USoundBase*)                               LeanForwardSound                                            ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
	CMember(USoundBase*)                               JumpUpSound                                                 ___ OFFSET(get<T>, {0xBA0, 8, 0, 0})
	CMember(UAudioComponent*)                          LeanForwardAudio                                            ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	DMember(bool)                                      bGrinding                                                   ___ OFFSET(get<bool>, {0xBB0, 1, 0, 0})
};

/// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
/// Size: 0x0030 (0x000548 - 0x000578)
class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(APlayerController*)                        GCPlayerController                                          ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(USoundBase*)                               BoostSound                                                  ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudioComponent                                         ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(USoundBase*)                               BoostEndSound                                               ___ OFFSET(get<T>, {0x570, 8, 0, 0})
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Default_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Boar.GCN_Riding_MountLanded_Boar_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Boar_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Default.GCN_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Default_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
/// Size: 0x0020 (0x000990 - 0x0009B0)
class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(AFortPlayerController*)                    FortPlayerController                                        ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UCameraShakeBase*)                         FOVFlare                                                    ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UCameraShakeBase*)                         ShakeNoise                                                  ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
};

/// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
/// Size: 0x00D0 (0x000990 - 0x000A60)
class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2656;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               RidingSoundLoop                                             ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          RidingSoundLoopComp                                         ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	SMember(FTimerHandle)                              VelocityTimerHandle                                         ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(AActor*)                                   Player                                                      ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	DMember(double)                                    Speed                                                       ___ OFFSET(get<double>, {0x9B8, 8, 0, 0})
	CMember(TEnumAsByte<EFortTeamAffiliation>)         TeamAffiliation                                             ___ OFFSET(get<T>, {0x9C0, 1, 0, 0})
	SMember(FVector)                                   Previous                                                    ___ OFFSET(get<T>, {0x9C8, 24, 0, 0})
	CMember(USoundBase*)                               Enemy_RidingSoundLoop                                       ___ OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    As_Fort_Player_Pawn_Athena                                  ___ OFFSET(get<T>, {0x9E8, 8, 0, 0})
	DMember(double)                                    JumpParamTarget                                             ___ OFFSET(get<double>, {0x9F0, 8, 0, 0})
	DMember(double)                                    JumpValue                                                   ___ OFFSET(get<double>, {0x9F8, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  ___ OFFSET(get<bool>, {0xA00, 1, 0, 0})
	DMember(bool)                                      bCanResetJump                                               ___ OFFSET(get<bool>, {0xA01, 1, 0, 0})
	CMember(UPawnMovementComponent*)                   CreatureMovementComponent                                   ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	SMember(FTimerHandle)                              JumpResetTimerHandle                                        ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
	DMember(double)                                    JumpPitchInterpSpeed                                        ___ OFFSET(get<double>, {0xA18, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      RidingCurveTable                                            ___ OFFSET(get<T>, {0xA20, 16, 0, 0})
	DMember(double)                                    BoarSprintSpeed                                             ___ OFFSET(get<double>, {0xA30, 8, 0, 0})
	DMember(double)                                    CurrentVelocity                                             ___ OFFSET(get<double>, {0xA38, 8, 0, 0})
	DMember(double)                                    MaxNormalRunSpeed                                           ___ OFFSET(get<double>, {0xA40, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  ___ OFFSET(get<bool>, {0xA48, 1, 0, 0})
	DMember(double)                                    MaxSpeed                                                    ___ OFFSET(get<double>, {0xA50, 8, 0, 0})
	DMember(double)                                    MaxSpeedClamped                                             ___ OFFSET(get<double>, {0xA58, 8, 0, 0})
};

/// Class /RidingContent/GameplayCues/GCN_Riding_JumpOnCreature.GCN_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_JumpOnCreature_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               SpeedLinesAudio                                             ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          SpeedlinesAudioComp                                         ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
};

/// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           ___ OFFSET(get<T>, {0x998, 4, 0, 0})
	CMember(UFXSystemComponent*)                       MainNS                                                      ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_BuildDestroyed.GCN_Riding_BoarSprintImpact_BuildDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_BuildDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_SprintImpact_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Pawn.GCN_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Pawn_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /GrindRail/GameplayCues/GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Burst_LandOnRail_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FGameplayTag)                              JumpLand                                                    ___ OFFSET(get<T>, {0x218, 4, 0, 0})
	SMember(FGameplayTag)                              StartLand                                                   ___ OFFSET(get<T>, {0x21C, 4, 0, 0})
};

