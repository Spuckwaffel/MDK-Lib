
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Zipline_AttachedToPlayer                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Zipline_Magnet                                           ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Zipline_Pulley_SpeedLines                                 ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Zipline_Motor                                            ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UParticleSystem*)                          SpawnFX                                                     ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UParticleSystem*)                          DestroyFX                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UParticleSystem*)                          CollideDestroyVFX                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USoundBase*)                               SpawnSound                                                  ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USoundBase*)                               UnSpawnSound                                                ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          AttachedPlayer                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      HasHitAnotherPlayer                                         ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(double)                                    ZiplineChimeVisualUpdate                                    ___ OFFSET(get<double>, {0x300, 8, 0, 0})
	SMember(FTimerHandle)                              ChimeTimer                                                  ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FVector)                                   ZiplineDirection                                            ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	CMember(ABP_Athena_Environmental_ZipLine_Spline_C*) EnvZiplineSpline                                           ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(double)                                    SplineRotationUpdateSeconds                                 ___ OFFSET(get<double>, {0x330, 8, 0, 0})
	SMember(FTimerHandle)                              MotorUpdateTimer                                            ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(AFortAthenaZipline*)                       AttachedZipline                                             ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      debugOutput                                                 ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      IsReversingMomentum                                         ___ OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(bool)                                      bIsTravelingUphill                                          ___ OFFSET(get<bool>, {0x34A, 1, 0, 0})
	DMember(bool)                                      bIsTravelingDownhill                                        ___ OFFSET(get<bool>, {0x34B, 1, 0, 0})
	SMember(FGameplayTag)                              GCNTag_Travel                                               ___ OFFSET(get<T>, {0x34C, 4, 0, 0})
	CMember(USoundBase*)                               TravelSound                                                 ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FGameplayTag)                              GCNTag_HighSpeed                                            ___ OFFSET(get<T>, {0x358, 4, 0, 0})
	SMember(FGameplayTag)                              GCNTag_ZiplineBraking                                       ___ OFFSET(get<T>, {0x35C, 4, 0, 0})
	DMember(bool)                                      bLoopingDownhillGCN                                         ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DownhillTravelGE                                            ___ OFFSET(get<T>, {0x364, 8, 0, 0})
	DMember(bool)                                      UseMeshAttachment                                           ___ OFFSET(get<bool>, {0x36C, 1, 0, 0})
	SMember(FVector)                                   CurrentDesired_Zipline_Offset                               ___ OFFSET(get<T>, {0x370, 24, 0, 0})
	CMember(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C*) DynamicZiplineSpline                                   ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(USplineComponent*)                         NewVar                                                      ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
/// Size: 0x0048 (0x000398 - 0x0003E0)
class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NS_Zipline_Pulley_SpeedLines_Converted                      ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NS_Zipline_Speedline                                        ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(float)                                     Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE           ___ OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE           ___ OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Alpha                                                       ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501           ___ OFFSET(get<float>, {0x3C0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Spark__Direction_A812B2F04CB78DDF352B84A578861501           ___ OFFSET(get<T>, {0x3C4, 1, 0, 0})
	CMember(UTimelineComponent*)                       spark                                                       ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(double)                                    BeginLocation_z                                             ___ OFFSET(get<double>, {0x3D0, 8, 0, 0})
	DMember(double)                                    Location                                                    ___ OFFSET(get<double>, {0x3D8, 8, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x368, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x388, 176, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     ___ OFFSET(get<T>, {0x440, 2384, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0xD90, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0xDB0, 32, 0, 0})
};

