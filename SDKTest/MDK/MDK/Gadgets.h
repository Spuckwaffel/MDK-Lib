
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
/// Size: 0x0108 (0x000290 - 0x000398)
class ABP_ZipLine_Athena_Harness_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Zipline_AttachedToPlayer                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Zipline_Magnet                                           OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Zipline_Pulley_SpeedLines                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Zipline_Motor                                            OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UParticleSystem*)                          SpawnFX                                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UParticleSystem*)                          DestroyFX                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UParticleSystem*)                          CollideDestroyVFX                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USoundBase*)                               SpawnSound                                                  OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USoundBase*)                               UnSpawnSound                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          AttachedPlayer                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      HasHitAnotherPlayer                                         OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(double)                                    ZiplineChimeVisualUpdate                                    OFFSET(get<double>, {0x300, 8, 0, 0})
	SMember(FTimerHandle)                              ChimeTimer                                                  OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	SMember(FVector)                                   ZiplineDirection                                            OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	CMember(ABP_Athena_Environmental_ZipLine_Spline_C*) EnvZiplineSpline                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(double)                                    SplineRotationUpdateSeconds                                 OFFSET(get<double>, {0x330, 8, 0, 0})
	SMember(FTimerHandle)                              MotorUpdateTimer                                            OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(AFortAthenaZipline*)                       AttachedZipline                                             OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      debugOutput                                                 OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      IsReversingMomentum                                         OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(bool)                                      bIsTravelingUphill                                          OFFSET(get<bool>, {0x34A, 1, 0, 0})
	DMember(bool)                                      bIsTravelingDownhill                                        OFFSET(get<bool>, {0x34B, 1, 0, 0})
	SMember(FGameplayTag)                              GCNTag_Travel                                               OFFSET(getStruct<T>, {0x34C, 4, 0, 0})
	CMember(USoundBase*)                               TravelSound                                                 OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FGameplayTag)                              GCNTag_HighSpeed                                            OFFSET(getStruct<T>, {0x358, 4, 0, 0})
	SMember(FGameplayTag)                              GCNTag_ZiplineBraking                                       OFFSET(getStruct<T>, {0x35C, 4, 0, 0})
	DMember(bool)                                      bLoopingDownhillGCN                                         OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DownhillTravelGE                                            OFFSET(getStruct<T>, {0x364, 8, 0, 0})
	DMember(bool)                                      UseMeshAttachment                                           OFFSET(get<bool>, {0x36C, 1, 0, 0})
	SMember(FVector)                                   CurrentDesired_Zipline_Offset                               OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	CMember(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C*) DynamicZiplineSpline                                   OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(USplineComponent*)                         NewVar                                                      OFFSET(get<T>, {0x390, 8, 0, 0})


	/// Functions
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer
	// void OnRep_AttachedPlayer();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams
	// void Update Audio and VFXParams();                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio
	// void Start Travel Audio();                                                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio
	// void Stop Travel Audio();                                                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied
	// void HandleOnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual
	// void Chime Visual();                                                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline
	// void OrientMotorForZipline(AFortAthenaZiplineBase* Zipline, FVector DesiredZiplineOffset);                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection
	// void RotateToZiplineDirection();                                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline
	// void UpdateMotorToSpline();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX
	// void UpdateParamsForAudioAndVFX();                                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN
	// void Cleanup On DownhillGCN();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation
	// void UpdateZiplineOffsetLocation();                                                                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToDynSpline
	// void UpdateMotorToDynSpline();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness
	// void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32_t EntryPoint);                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
/// Size: 0x0048 (0x000398 - 0x0003E0)
class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x398, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NS_Zipline_Pulley_SpeedLines_Converted                      OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NS_Zipline_Speedline                                        OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(float)                                     Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE           OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE           OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Alpha                                                       OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501           OFFSET(get<float>, {0x3C0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Spark__Direction_A812B2F04CB78DDF352B84A578861501           OFFSET(get<T>, {0x3C4, 1, 0, 0})
	CMember(UTimelineComponent*)                       spark                                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(double)                                    BeginLocation_z                                             OFFSET(get<double>, {0x3D0, 8, 0, 0})
	DMember(double)                                    Location                                                    OFFSET(get<double>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__FinishedFunc
	// void Spark__FinishedFunc();                                                                                              // [0x1ebf994] BlueprintEvent       
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__UpdateFunc
	// void Spark__UpdateFunc();                                                                                                // [0x1ebf994] BlueprintEvent       
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__FinishedFunc
	// void Alpha__FinishedFunc();                                                                                              // [0x1ebf994] BlueprintEvent       
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__UpdateFunc
	// void Alpha__UpdateFunc();                                                                                                // [0x1ebf994] BlueprintEvent       
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.UpdateZiplineFX
	// void UpdateZiplineFX();                                                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Update Begin Z
	// void Update Begin Z();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ResetBlue
	// void ResetBlue();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow
	// void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32_t EntryPoint);                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Gadgets/Assets/VinderTech_GliderChute/Glider_Bistro_Monster_Female/Scripts/VariantScript_Glider_BistroAstronaut_Style.VariantScript_Glider_BistroAstronaut_Style_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Glider_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
/// Size: 0x0A80 (0x000350 - 0x000DD0)
class UFringe_Plank_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3536;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x358, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x368, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x388, 176, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0x440, 2384, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xD90, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xDB0, 32, 0, 0})


	/// Functions
	// Function /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Gadgets/Assets/Fringe_Plank/Meshes/Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
	// void ExecuteUbergraph_Fringe_Plank_AnimBP(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

