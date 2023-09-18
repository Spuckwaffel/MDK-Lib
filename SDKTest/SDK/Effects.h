/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Effects.

/// Struct /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/AnimCurveParameterPair.AnimCurveParameterPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FAnimCurveParameterPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     UserVariableName_5_C3E793D64B2060301331AC805C0B1026         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     AnimCurveName_6_457883094DB38A3EF423919EDE4D33C1            ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Game/Effects/Niagara/Blueprints/Struc_NiagaraParameters.Struc_NiagaraParameters
/// Size: 0x0044 (0x000000 - 0x000044)
class FStruc_NiagaraParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	CMember(TEnumAsByte<ENUM_NiagaraParameterSetup>)   ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666     ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FVector)                                   VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
	SMember(FName)                                     IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D    ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826   ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000388 - 0x000390)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Medium_Explosion_CameraShake.B_Medium_Explosion_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Medium_Explosion_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789           ___ OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789      ___ OFFSET(get<T>, {0x38C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_Camera_Shake_Pulse_Flash.BP_Camera_Shake_Pulse_Flash_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_Camera_Shake_Pulse_Flash_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C
/// Size: 0x0019 (0x000088 - 0x0000A1)
class UFN_TimedNiagaraNotify_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 161;

public:
	DMember(bool)                                      Print_Debug                                                 ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      is_Glider_Deploy_Notify                                     ___ OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(bool)                                      Set_in_Water_Niagara_Variable                               ___ OFFSET(get<bool>, {0x8A, 1, 0, 0})
	CMember(TArray<FAnimCurveParameterPair>)           AnimCurveParameterPair                                      ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      IsLargeBodyPawn                                             ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerShieldDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
/// Size: 0x03C0 (0x000440 - 0x000800)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Long_Range                                  ___ OFFSET(get<T>, {0x448, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Chest_Falloff                                               ___ OFFSET(get<T>, {0x4D0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Footsteps_Falloff                                           ___ OFFSET(get<T>, {0x558, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Mid_Range                                   ___ OFFSET(get<T>, {0x5E0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Melee                                       ___ OFFSET(get<T>, {0x668, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Glider_Falloff                                              ___ OFFSET(get<T>, {0x6F0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Plane_Falloff                                               ___ OFFSET(get<T>, {0x778, 136, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
/// Size: 0x00C0 (0x000308 - 0x0003C8)
class AWeakSpot_C : public ABuildingWeakSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ConnectTheDotsComponent                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleComponent                                           ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCapsuleComponent*)                        CollisionComponent                                          ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(float)                                     ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E ___ OFFSET(get<float>, {0x328, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E ___ OFFSET(get<T>, {0x32C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleDownParticleTL                                         ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(USoundBase*)                               SpawnSound                                                  ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FVector)                                   Particle_Location                                           ___ OFFSET(get<T>, {0x340, 24, 0, 0})
	CMember(TArray<USoundBase*>)                       Crack_sounds                                                ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(double)                                    ConnectTheDotsWidth                                         ___ OFFSET(get<double>, {0x368, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsDuration                                      ___ OFFSET(get<double>, {0x370, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsTimeoutFromPreviousHit                        ___ OFFSET(get<double>, {0x378, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsDurationScale                                 ___ OFFSET(get<double>, {0x380, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMaxDuration                                   ___ OFFSET(get<double>, {0x388, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsTileScale                                     ___ OFFSET(get<double>, {0x390, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMinLength                                     ___ OFFSET(get<double>, {0x398, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMaxLength                                     ___ OFFSET(get<double>, {0x3A0, 8, 0, 0})
	CMember(UParticleSystem*)                          DamageTemplate                                              ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UParticleSystem*)                          IdleTemplate                                                ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ConnectMID                                                  ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	SMember(FTimerHandle)                              HideMeshTimer                                               ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
/// Size: 0x0144 (0x000458 - 0x00059C)
class AB_Pickups_Parent_C : public AFortPickupsParent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1436;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7 ___ OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7 ___ OFFSET(get<float>, {0x46C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7 ___ OFFSET(get<T>, {0x470, 1, 0, 0})
	CMember(UTimelineComponent*)                       MobileSelectedTL                                            ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Static_Mesh_Pickup                                          ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Skeletal_Mesh_Pickup                                        ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      SkeletalOrStaticMeshAssetPrimitive                          ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(int32_t)                                   CurrentElementIndex                                         ___ OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	DMember(double)                                    Component_Radius__Scaled_                                   ___ OFFSET(get<double>, {0x4A0, 8, 0, 0})
	DMember(double)                                    Component_Radius_Multiplier                                 ___ OFFSET(get<double>, {0x4A8, 8, 0, 0})
	CMember(TArray<FLinearColor>)                      Outline_Rarity_Colors                                       ___ OFFSET(get<T>, {0x4B0, 16, 0, 0})
	DMember(double)                                    Component_Radius                                            ___ OFFSET(get<double>, {0x4C0, 8, 0, 0})
	CMember(UParticleSystem*)                          Picked_Up_Trail_PS_Old                                      ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(TArray<double>)                            Sparkle_Spawn_Rate__Picked_Up_                              ___ OFFSET(get<T>, {0x4D0, 16, 0, 0})
	CMember(TArray<double>)                            Lifetime__Picked_Up_                                        ___ OFFSET(get<T>, {0x4E0, 16, 0, 0})
	CMember(UForceFeedbackEffect*)                     PickupForceFeedback_Old                                     ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(bool)                                      HasUniqueMaterialIds                                        ___ OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	CMember(TArray<FLinearColor>)                      BackgroundRarityColors                                      ___ OFFSET(get<T>, {0x500, 16, 0, 0})
	DMember(double)                                    Random_Rotation                                             ___ OFFSET(get<double>, {0x510, 8, 0, 0})
	SMember(FVector)                                   MobileSelectedOffset                                        ___ OFFSET(get<T>, {0x518, 24, 0, 0})
	SMember(FVector)                                   MobileSelectedScale                                         ___ OFFSET(get<T>, {0x530, 24, 0, 0})
	CMember(UStaticMeshComponent*)                     MobileInteractIcon                                          ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	SMember(FVector)                                   MobileInteractIconLocation                                  ___ OFFSET(get<T>, {0x550, 24, 0, 0})
	SMember(FVector)                                   MobileInteractIconScale                                     ___ OFFSET(get<T>, {0x568, 24, 0, 0})
	CMember(UMaterialInterface*)                       MobileInteractionMaterial                                   ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(bool)                                      PickedUp                                                    ___ OFFSET(get<bool>, {0x588, 1, 0, 0})
	SMember(FLinearColor)                              MissionItemOutlineColor                                     ___ OFFSET(get<T>, {0x58C, 16, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
/// Size: 0x0184 (0x000290 - 0x000414)
class ADuplicateResOutMesh_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1044;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1 ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1 ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1 ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1 ___ OFFSET(get<T>, {0x2AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       CharacterSpawnInTimeline                                    ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Skeletal_Mesh_Duplicate                                     ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      Gun_True                                                    ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(double)                                    BoundsRadius                                                ___ OFFSET(get<double>, {0x2C8, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MIDArray                                                    ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FVector)                                   World_location_for_the_dissolve_location                    ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Current_MID                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(double)                                    Head_Space                                                  ___ OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    Leg_Space                                                   ___ OFFSET(get<double>, {0x308, 8, 0, 0})
	CMember(UPointLightComponent*)                     Spawn_Light                                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(double)                                    light_intensity                                             ___ OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(int32_t)                                   Number_of_Base_skeletal_mesh_materials                      ___ OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	DMember(double)                                    FirstPassComplete                                           ___ OFFSET(get<double>, {0x328, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           ExternalSkeletalMeshComponent                               ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FTransform)                                Box_Local_Transform                                         ___ OFFSET(get<T>, {0x340, 96, 0, 0})
	DMember(double)                                    Timeline_Play_Length                                        ___ OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      TeleportOut_                                                ___ OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(AActor*)                                   ExternalActor                                               ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           InternalSkeletalMeshComponents                              ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(int32_t)                                   CurrentMeshMidIndex                                         ___ OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   External_Base_Mesh_Component                                ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         ExternalMidArray                                            ___ OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   ExternalRootMeshComponent                                   ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ListOfMaterialsExemptFromReparenting                        ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Original_MIDs                                               ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	DMember(int32_t)                                   Increment_End                                               ___ OFFSET(get<int32_t>, {0x410, 4, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
/// Size: 0x003C (0x00059C - 0x0005D8)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BG_Dark                                                     ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BG                                                          ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     rarePickupFXMesh                                            ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLightComp                                               ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        rareAmbientEmitter                                          ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USoundBase*)                               Pickup_Sound                                                ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C
/// Size: 0x00B4 (0x000298 - 0x00034C)
class AFN_RadialForce_C : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 844;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UOperatorField*)                           DistanceFadMult                                             ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(URadialFalloff*)                           DistanceFalloff                                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWaveScalar*)                              DecayScalar                                                 ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UOperatorField*)                           DecayMult                                                   ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UWaveScalar*)                              RadialFalloffWave                                           ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UOperatorField*)                           RadialVecMultiplyRadialFallOff                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Wave_Period                                                 ___ OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    Force_Duration                                              ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    Radius                                                      ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    Magnitude                                                   ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(double)                                    PlayRate                                                    ___ OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    Scale                                                       ___ OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    Impact_Time                                                 ___ OFFSET(get<double>, {0x308, 8, 0, 0})
	DMember(double)                                    Period                                                      ___ OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(double)                                    WaveLength                                                  ___ OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(double)                                    Time_Decay                                                  ___ OFFSET(get<double>, {0x320, 8, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff_Type                                                ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(double)                                    Expansion                                                   ___ OFFSET(get<double>, {0x330, 8, 0, 0})
	DMember(double)                                    Impact_Radius                                               ___ OFFSET(get<double>, {0x338, 8, 0, 0})
	DMember(double)                                    Strength                                                    ___ OFFSET(get<double>, {0x340, 8, 0, 0})
	DMember(float)                                     DelayTime                                                   ___ OFFSET(get<float>, {0x348, 4, 0, 0})
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UAnimNotify_NiagaraNotify_SetBodyType_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TEnumAsByte<EFortCustomPartType>)          Part_Type                                                   ___ OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FString)                                   Skeletal_Mesh_User_Name                                     ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Small_Vertical_Jolt_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C
/// Size: 0x0010 (0x000078 - 0x000088)
class UAnimNotifyState_NiagaraNotify_SetParameters_C : public UAnimNotifyState_TimedNiagaraEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FStruc_NiagaraParameters>)          Parameter_Setup                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Enum /Game/Effects/Niagara/Blueprints/ENUM_NiagaraParameterSetup.ENUM_NiagaraParameterSetup
/// Size: 0x05
enum ENUM_NiagaraParameterSetup : uint8_t
{
	ENUM_NiagaraParameterSetup__NewEnumerator00                                      = 0,
	ENUM_NiagaraParameterSetup__NewEnumerator11                                      = 1,
	ENUM_NiagaraParameterSetup__NewEnumerator22                                      = 2,
	ENUM_NiagaraParameterSetup__NewEnumerator33                                      = 3,
	ENUM_NiagaraParameterSetup__ENUM_MAX4                                            = 4
};

