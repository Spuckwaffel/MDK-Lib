
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

/// Class /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C
/// Size: 0x0010 (0x000990 - 0x0009A0)
class AGCNL_Irwin_Player_Prey_Nug_Float_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          FloatSound                                                  OFFSET(get<T>, {0x998, 8, 0, 0})
};



	/// Functions
	// Function /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float
	// void ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float(int32_t EntryPoint);                                              // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               SlideSound                                                  OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          SlidingSoundComponent                                       OFFSET(get<T>, {0x9A0, 8, 0, 0})
};



	/// Functions
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.ExecuteUbergraph_GCNL_Irwin_Slide
	// void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(USkeletalMeshComponent*)                   NewVar                                                      OFFSET(get<T>, {0x218, 8, 0, 0})
};



	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C.OnBurstNiagara
	// void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(USkeletalMeshComponent*)                   NewVar                                                      OFFSET(get<T>, {0x218, 8, 0, 0})
};



	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C.OnBurstNiagara
	// void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Default_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
/// Size: 0x0030 (0x000548 - 0x000578)
class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(APlayerController*)                        GCPlayerController                                          OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(USoundBase*)                               BoostSound                                                  OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudioComponent                                         OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(USoundBase*)                               BoostEndSound                                               OFFSET(get<T>, {0x570, 8, 0, 0})
};



	/// Functions
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic
	// void ExecuteBoostLogic();                                                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent
	// void BoostEndEvent();                                                                                                    // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent
	// void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint);                                                // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(AFortPlayerController*)                    FortPlayerController                                        OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UCameraShakeBase*)                         FOVFlare                                                    OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UCameraShakeBase*)                         ShakeNoise                                                  OFFSET(get<T>, {0x9A8, 8, 0, 0})
};



	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake
	// void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint);                                                // [0x1ebf994] Final|HasDefaults    
/// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
/// Size: 0x00D0 (0x000990 - 0x000A60)
class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2656;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               RidingSoundLoop                                             OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          RidingSoundLoopComp                                         OFFSET(get<T>, {0x9A0, 8, 0, 0})
	SMember(FTimerHandle)                              VelocityTimerHandle                                         OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(AActor*)                                   Player                                                      OFFSET(get<T>, {0x9B0, 8, 0, 0})
	DMember(double)                                    Speed                                                       OFFSET(get<double>, {0x9B8, 8, 0, 0})
	CMember(TEnumAsByte<EFortTeamAffiliation>)         TeamAffiliation                                             OFFSET(get<T>, {0x9C0, 1, 0, 0})
	SMember(FVector)                                   Previous                                                    OFFSET(get<T>, {0x9C8, 24, 0, 0})
	CMember(USoundBase*)                               Enemy_RidingSoundLoop                                       OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    As_Fort_Player_Pawn_Athena                                  OFFSET(get<T>, {0x9E8, 8, 0, 0})
	DMember(double)                                    JumpParamTarget                                             OFFSET(get<double>, {0x9F0, 8, 0, 0})
	DMember(double)                                    JumpValue                                                   OFFSET(get<double>, {0x9F8, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0xA00, 1, 0, 0})
	DMember(bool)                                      bCanResetJump                                               OFFSET(get<bool>, {0xA01, 1, 0, 0})
	CMember(UPawnMovementComponent*)                   CreatureMovementComponent                                   OFFSET(get<T>, {0xA08, 8, 0, 0})
	SMember(FTimerHandle)                              JumpResetTimerHandle                                        OFFSET(get<T>, {0xA10, 8, 0, 0})
	DMember(double)                                    JumpPitchInterpSpeed                                        OFFSET(get<double>, {0xA18, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      RidingCurveTable                                            OFFSET(get<T>, {0xA20, 16, 0, 0})
	DMember(double)                                    BoarSprintSpeed                                             OFFSET(get<double>, {0xA30, 8, 0, 0})
	DMember(double)                                    CurrentVelocity                                             OFFSET(get<double>, {0xA38, 8, 0, 0})
	DMember(double)                                    MaxNormalRunSpeed                                           OFFSET(get<double>, {0xA40, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  OFFSET(get<bool>, {0xA48, 1, 0, 0})
	DMember(double)                                    MaxSpeed                                                    OFFSET(get<double>, {0xA50, 8, 0, 0})
	DMember(double)                                    MaxSpeedClamped                                             OFFSET(get<double>, {0xA58, 8, 0, 0})
};



	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.CalculateVelocityParam
	// void CalculateVelocityParam();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingGCNLStarted
	// void PlayerRidingGCNLStarted();                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingDCNLEnded
	// void PlayerRidingDCNLEnded();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnJumpApex
	// void OnJumpApex();                                                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.SetUpRidableAudioEvents
	// void SetUpRidableAudioEvents();                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.StartLoopingAudio
	// void StartLoopingAudio();                                                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ExecuteUbergraph_GCNL_PlayerIsRiding
	// void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(USoundBase*)                               SpeedLinesAudio                                             OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          SpeedlinesAudioComp                                         OFFSET(get<T>, {0x9A0, 8, 0, 0})
};



	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnApplicationGeneric
	// void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.ExecuteUbergraph_GCNL_RidingSprint_SpeedLines
	// void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32_t EntryPoint);                                                  // [0x1ebf994] Final|HasDefaults    
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

/// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(get<T>, {0x998, 4, 0, 0})
	CMember(UFXSystemComponent*)                       MainNS                                                      OFFSET(get<T>, {0x9A0, 8, 0, 0})
};



	/// Functions
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7
	// void Added_7482F31A49360978B87F339D76FC2BB7();                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC
	// void Removed_AD34CCD44592FD2F05DB47BDF9413ACC();                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric
	// void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount
	// void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32_t EntryPoint);                         // [0x1ebf994] Final|HasDefaults    
/// Class /GrindRail/GameplayCues/GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Burst_LandOnRail_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FGameplayTag)                              JumpLand                                                    OFFSET(get<T>, {0x218, 4, 0, 0})
	SMember(FGameplayTag)                              StartLand                                                   OFFSET(get<T>, {0x21C, 4, 0, 0})
};



	/// Functions
	// Function /GrindRail/GameplayCues/GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C.OnBurstGeneric
	// void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
/// Class /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C
/// Size: 0x0091 (0x000B20 - 0x000BB1)
class AGCNL_Grinding_C : public AFortGameplayCueNotifyLoop_Grinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2993;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             FortSoundIndicator                                          OFFSET(get<T>, {0xB28, 8, 0, 0})
	DMember(float)                                     AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6      OFFSET(get<float>, {0xB30, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6      OFFSET(get<T>, {0xB34, 1, 0, 0})
	CMember(UTimelineComponent*)                       AlphaCurve                                                  OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(UFXSystemComponent*)                       GrindRailFX                                                 OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  Cached_Grinding_Component                                   OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(UAudioComponent*)                          GrindAudioLoop                                              OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(UAudioComponent*)                          GrindAudioStart                                             OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TEnumAsByte<ColorSelect>)                  ColorEnum                                                   OFFSET(get<T>, {0xB68, 1, 0, 0})
	CMember(AFortGrindRail*)                           GrindRail                                                   OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(ABuildingGameplayActor*)                   GrindingRail                                                OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(UAudioComponent*)                          JumpOffAudio                                                OFFSET(get<T>, {0xB80, 8, 0, 0})
	DMember(float)                                     NotRenderedDisableEffectsTime                               OFFSET(get<float>, {0xB88, 4, 0, 0})
	CMember(USoundBase*)                               StartLoopSound                                              OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(USoundBase*)                               LeanForwardSound                                            OFFSET(get<T>, {0xB98, 8, 0, 0})
	CMember(USoundBase*)                               JumpUpSound                                                 OFFSET(get<T>, {0xBA0, 8, 0, 0})
	CMember(UAudioComponent*)                          LeanForwardAudio                                            OFFSET(get<T>, {0xBA8, 8, 0, 0})
	DMember(bool)                                      bGrinding                                                   OFFSET(get<bool>, {0xBB0, 1, 0, 0})
};



	/// Functions
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.AllowAudio
	// void AllowAudio();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnJumpedOff
	// void OnJumpedOff();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.GrindAudioState
	// void GrindAudioState(bool Start);                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__FinishedFunc
	// void AlphaCurve__FinishedFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__UpdateFunc
	// void AlphaCurve__UpdateFunc();                                                                                           // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnFeetLanded
	// void OnFeetLanded();                                                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnGrindRailSprint
	// void OnGrindRailSprint(bool bNewIsSprinting);                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnGrindRailBoosterMode
	// void OnGrindRailBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnApplicationGeneric
	// void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.HandleGrindRailChanged
	// void HandleGrindRailChanged(AFortGrindRail* OldRail, AFortGrindRail* NewRail);                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnForwardChanged
	// void OnForwardChanged(bool bNewState);                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C.ExecuteUbergraph_GCNL_Grinding
	// void ExecuteUbergraph_GCNL_Grinding(int32_t EntryPoint);                                                                 // [0x1ebf994] Final|HasDefaults    
/// Class /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C
/// Size: 0x0018 (0x000990 - 0x0009A8)
class AGCNL_GrindSprinting_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudio                                                  OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostEndAudio                                               OFFSET(get<T>, {0x9A0, 8, 0, 0})
};



	/// Functions
	// Function /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C.ExecuteUbergraph_GCNL_GrindSprinting
	// void ExecuteUbergraph_GCNL_GrindSprinting(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
/// Class /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /GrindRail/GameplayCues/GCNL_GrindBoostSlow.GCNL_GrindBoostSlow_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GrindBoostSlow_C : public AFortGameplayCueNotify_Loop
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0xA48, 8, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Shown_On_Wearer_                           OFFSET(get<T>, {0xA50, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Range                                      OFFSET(get<T>, {0xA78, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Ping_Frequency                             OFFSET(get<T>, {0xAA0, 40, 0, 0})
	SMember(FTimerHandle)                              timer_handle                                                OFFSET(get<T>, {0xAC8, 8, 0, 0})
};



	/// Functions
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.AVIndicatorLoop
	// void AVIndicatorLoop();                                                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping
	// void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint);                                  // [0x1ebf994] Final|HasDefaults    
/// Class /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
/// Size: 0x0060 (0x000990 - 0x0009F0)
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0x998, 8, 0, 0})
	DMember(double)                                    MinCamShakeAmp                                              OFFSET(get<double>, {0x9A0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeAmp                                              OFFSET(get<double>, {0x9A8, 8, 0, 0})
	DMember(double)                                    MinCamShakeFreq                                             OFFSET(get<double>, {0x9B0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeFreq                                             OFFSET(get<double>, {0x9B8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       matineeCamShake                                             OFFSET(get<T>, {0x9C0, 8, 0, 0})
	SMember(FScalableFloat)                            MaxAscenderSpeed                                            OFFSET(get<T>, {0x9C8, 40, 0, 0})
};



	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnApplicationGeneric
	// void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.CameraShakeTimer
	// void CameraShakeTimer();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.ExecuteUbergraph_GCNL_Ascender_Ascent
	// void ExecuteUbergraph_GCNL_Ascender_Ascent(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
/// Class /GrindRail/GameplayCues/GCNL_GeneralAccelerationFeedback.GCNL_GeneralAccelerationFeedback_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GeneralAccelerationFeedback_C : public AFortGameplayCueNotify_Loop
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
	CMember(UMaterialInterface*)                       Decal_Material                                              OFFSET(get<T>, {0x218, 8, 0, 0})
};



	/// Functions
	// Function /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C.OnBurst
	// void OnBurst(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
/// Class /GrindRail/GameplayCues/GCNL_GrindBoostFast.GCNL_GrindBoostFast_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_GrindBoostFast_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

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

/// Class /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
/// Size: 0x0028 (0x000990 - 0x0009B8)
class AGCNL_Ascender_Descent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2488;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x990, 8, 0, 0})
	SMember(FTimerHandle)                              SoundVisualizerHandle                                       OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(AActor*)                                   My_Target                                                   OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UTexture*)                                 Override_Icon                                               OFFSET(get<T>, {0x9B0, 8, 0, 0})
};



	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.VisualizeAudio
	// void VisualizeAudio();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnRemovalGeneric
	// void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.ExecuteUbergraph_GCNL_Ascender_Descent
	// void ExecuteUbergraph_GCNL_Ascender_Descent(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
/// Class /MidMatchRadioTowerGameplay/GameplayCues/GCN_MMObj_RadioTower_NotificationSuccess.GCN_MMObj_RadioTower_NotificationSuccess_C
/// Size: 0x000C (0x000548 - 0x000554)
class AGCN_MMObj_RadioTower_NotificationSuccess_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1364;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x548, 8, 0, 0})
	SMember(FGameplayTag)                              SuccessNotificationTag                                      OFFSET(get<T>, {0x550, 4, 0, 0})
};



	/// Functions
	// Function /MidMatchRadioTowerGameplay/GameplayCues/GCN_MMObj_RadioTower_NotificationSuccess.GCN_MMObj_RadioTower_NotificationSuccess_C.OnBurstGeneric
	// void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /MidMatchRadioTowerGameplay/GameplayCues/GCN_MMObj_RadioTower_NotificationSuccess.GCN_MMObj_RadioTower_NotificationSuccess_C.ExecuteUbergraph_GCN_MMObj_RadioTower_NotificationSuccess
	// void ExecuteUbergraph_GCN_MMObj_RadioTower_NotificationSuccess(int32_t EntryPoint);                                      // [0x1ebf994] Final|HasDefaults    
/// Class /EmeraldGlass_D/GameplayCues/SereneYardCues/GCN_SereneYard_Spawn.GCN_SereneYard_Spawn_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_SereneYard_Spawn_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

