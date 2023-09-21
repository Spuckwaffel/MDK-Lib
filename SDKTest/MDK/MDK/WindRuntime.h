
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: FortniteGame
/// dependency: NetCore

/// Class /Script/WindRuntime.FortPlayerWindTunnelAnimInstance
/// Size: 0x0000 (0x0015D0 - 0x0015D0)
class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
};

/// Class /Script/WindRuntime.WindCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UWindCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   InflateEffectClass                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UClass*)                                   DeflateEffectClass                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   MinBalloonsOnPlayer                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxBalloonsOnPlayer                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
	// void ReleaseBalloonOnSelf(int32_t NumBalloons);                                                                          // [0x5cc6328] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
	// Function /Script/WindRuntime.WindCheatManager.InflateBalloonOnSelf
	// void InflateBalloonOnSelf(int32_t NumBalloons);                                                                          // [0x5cc6328] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
};

/// Class /Script/WindRuntime.WindField
/// Size: 0x0108 (0x000298 - 0x0003A0)
class AWindField : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     StopTime                                                    OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     StrengthMultiplier                                          OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x2AC, 1, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindField.SetActive
	// void SetActive(bool bInIsActive);                                                                                        // [0x9ec2b34] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveIgnoredActor
	// void RemoveIgnoredActor(AActor* Actor);                                                                                  // [0x9ec2a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveCollider
	// void RemoveCollider(UShapeComponent* ShapeComponent);                                                                    // [0x9ec28e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.OnEndOverlap
	// void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x9ec27a8] Native|Protected     
	// Function /Script/WindRuntime.WindField.OnBeginOverlap
	// void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x9ec25b8] Native|Protected|HasOutParms 
	// Function /Script/WindRuntime.WindField.AddIgnoredActor
	// void AddIgnoredActor(AActor* Actor);                                                                                     // [0x9ec1f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.AddCollider
	// void AddCollider(UShapeComponent* ShapeComponent);                                                                       // [0x9ec1e88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WindRuntime.LinearWindField
/// Size: 0x0090 (0x0003A0 - 0x000430)
class ALinearWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(get<T>, {0x3A0, 24, 0, 0})
	DMember(float)                                     FieldStrength                                               OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     ForceStrength                                               OFFSET(get<float>, {0x3BC, 4, 0, 0})
	SMember(FName)                                     PawnForceName                                               OFFSET(get<T>, {0x3C0, 4, 0, 0})
	DMember(float)                                     PawnForceStrength                                           OFFSET(get<float>, {0x3C4, 4, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Script/WindRuntime.RadialWindField
/// Size: 0x0150 (0x0003A0 - 0x0004F0)
class ARadialWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FScalableFloat)                            FieldRadius                                                 OFFSET(get<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldStrength                                               OFFSET(get<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceRadius                                                 OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            ForceStrength                                               OFFSET(get<T>, {0x418, 40, 0, 0})
	CMember(UCurveFloat*)                              ForceStrengthDistanceFalloff                                OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     PawnForceName                                               OFFSET(get<T>, {0x448, 4, 0, 0})
	SMember(FScalableFloat)                            PawnForceStrength                                           OFFSET(get<T>, {0x450, 40, 0, 0})
	CMember(UCurveFloat*)                              PawnForceStrengthDistanceFalloff                            OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      bPawnForceIsPush                                            OFFSET(get<bool>, {0x480, 1, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               OFFSET(get<T>, {0x498, 8, 0, 0})
};

/// Class /Script/WindRuntime.WindSplineComponent
/// Size: 0x0DF0 (0x000670 - 0x001460)
class UWindSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5216;

public:
	SMember(FScalableFloat)                            DisableSafeZonePhaseIndex                                   OFFSET(get<T>, {0x688, 40, 0, 0})
	CMember(UStaticMesh*)                              StaticMesh                                                  OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UStaticMesh*)                              StartStaticMesh                                             OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UStaticMesh*)                              EndStaticMesh                                               OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             OFFSET(get<T>, {0x6C8, 1, 0, 0})
	SMember(FScalableFloat)                            MeshRollVariance                                            OFFSET(get<T>, {0x6D0, 40, 0, 0})
	SMember(FName)                                     ActiveSectionStartMaterialParamName                         OFFSET(get<T>, {0x6F8, 4, 0, 0})
	SMember(FName)                                     ActiveSectionEndMaterialParamName                           OFFSET(get<T>, {0x6FC, 4, 0, 0})
	SMember(FScalableFloat)                            TargetingRefreshRate                                        OFFSET(get<T>, {0x700, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingRadius                                             OFFSET(get<T>, {0x728, 40, 0, 0})
	CMember(TArray<TEnumAsByte>)                       TargetObjectTypes                                           OFFSET(get<T>, {0x750, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TargetTagQuery                                              OFFSET(get<T>, {0x760, 72, 0, 0})
	SMember(FGameplayTagQuery)                         BlockageTagQuery                                            OFFSET(get<T>, {0x7A8, 72, 0, 0})
	SMember(FScalableFloat)                            BlockageSubdivisions                                        OFFSET(get<T>, {0x7F0, 40, 0, 0})
	CMember(TArray<FWindSplineTargetEffects>)          TargetEffects                                               OFFSET(get<T>, {0x818, 16, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FScalableFloat>) ObjectTypeToMaxTargetCount                               OFFSET(get<T>, {0x828, 80, 0, 0})
	SMember(FScalableFloat)                            MaxTargetCountReachedExpelDuration                          OFFSET(get<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            SkydivingLandingAngle                                       OFFSET(get<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 OFFSET(get<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               OFFSET(get<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceFallOffStartDistance                            OFFSET(get<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceMagnitude                                       OFFSET(get<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitude                                       OFFSET(get<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceDistanceFallOffExponent                         OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadius                                      OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAcceleration                          OFFSET(get<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDeceleration                          OFFSET(get<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusSpeedThreshold                        OFFSET(get<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusSpeedThreshold                        OFFSET(get<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxReductionFromSteering                         OFFSET(get<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxMultiplierWhenSteering                        OFFSET(get<T>, {0xAA8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxSteerAngle                                    OFFSET(get<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityThreshold                             OFFSET(get<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityMinValue                              OFFSET(get<T>, {0xB20, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceAccelerationPower                  OFFSET(get<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceDecelerationPower                  OFFSET(get<T>, {0xB70, 40, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, FWindSplineForceModifiers>) SizeForceModifiers                               OFFSET(get<T>, {0xB98, 80, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FWindSplineForceModifiers>) ObjectTypeForceModifiers                      OFFSET(get<T>, {0xBE8, 80, 0, 0})
	CMember(TArray<FWindSplineTagBasedForceModifiers>) QueryBasedForceModifiers                                    OFFSET(get<T>, {0xC38, 16, 0, 0})
	SMember(FGameplayTagQuery)                         PawnSkydivingTimeLimitQuery                                 OFFSET(get<T>, {0xC48, 72, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingTimeLimit                                      OFFSET(get<T>, {0xC90, 40, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingMinDistanceAboveGround                         OFFSET(get<T>, {0xCB8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoWakeUpPhysicsObjects                                    OFFSET(get<T>, {0xCE0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMagnitudeBase                                          OFFSET(get<T>, {0xD08, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMinMagnitudeAfterFalloff                               OFFSET(get<T>, {0xD30, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMaxMagnitudeAfterFalloff                               OFFSET(get<T>, {0xD58, 40, 0, 0})
	CMember(UClass*)                                   PlayerWindAnimationLayer                                    OFFSET(get<T>, {0xD80, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineDisabled                                        OFFSET(get<T>, {0xD88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineEnabled                                         OFFSET(get<T>, {0xD98, 16, 0, 0})
	SMember(FWindSplineTargetData)                     TargetData                                                  OFFSET(get<T>, {0xDA8, 440, 0, 0})
	SMember(FWindSplineBlockageArray)                  Blockages                                                   OFFSET(get<T>, {0xF60, 280, 0, 0})
	CMember(UFieldSystemComponent*)                    FieldSystemComponent                                        OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(UUniformVector*)                           UniformVector                                               OFFSET(get<T>, {0x1080, 8, 0, 0})
	CMember(UBoxFalloff*)                              BoxFalloff                                                  OFFSET(get<T>, {0x1088, 8, 0, 0})
	CMember(UOperatorField*)                           BoxOperatorField                                            OFFSET(get<T>, {0x1090, 8, 0, 0})
	CMember(TArray<FWindSplineMeshData>)               MeshDataArray                                               OFFSET(get<T>, {0x1098, 16, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               FXComponents                                                OFFSET(get<T>, {0x10A8, 16, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                                 // [0x311d58c] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_Blockages
	// void OnRep_Blockages();                                                                                                  // [0x311d58c] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.GetWindDataAtLocation
	// void GetWindDataAtLocation(FVector& InTargetLocation, FVector& OutDirection, float& OutAttenuation);                     // [0x9ec23c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetTargetingRadius
	// float GetTargetingRadius();                                                                                              // [0x9ec2394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetClosestActiveLocations
	// void GetClosestActiveLocations(FVector& InTargetLocation, bool& bIsClosestPointActive, FVector& ClosestPointOnSpline, TArray<FVector>& ClosestActiveLocations); // [0x9ec213c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.Enable
	// void Enable();                                                                                                           // [0x9ec20e8] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.Disable
	// void Disable();                                                                                                          // [0x9ec20d4] Final|Native|Protected 
};

/// Struct /Script/WindRuntime.RootMotionSource_ConstantWindForce
/// Size: 0x0020 (0x0000E0 - 0x000100)
class FRootMotionSource_ConstantWindForce : public FRootMotionSource
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector)                                   Force                                                       OFFSET(get<T>, {0xD8, 24, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncInPersistent
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPhysicsWindSplineAsyncInPersistent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
class FPhysicsWindSplineAsyncOutContinuous : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/WindRuntime.WindSplineTargetDatum
/// Size: 0x001C (0x00000C - 0x000028)
class FWindSplineTargetDatum : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetData
/// Size: 0x00B0 (0x000108 - 0x0001B8)
class FWindSplineTargetData : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TArray<FWindSplineTargetDatum>)            Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineForceModifiers
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FWindSplineForceModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            ForwardForceMagnitudeMultiplier                             OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitudeMultiplier                             OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAccelerationMultiplier                OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDecelerationMultiplier                OFFSET(get<T>, {0x78, 40, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTagBasedForceModifiers
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FWindSplineTagBasedForceModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagQuery)                         Query                                                       OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FWindSplineForceModifiers)                 Modifier                                                    OFFSET(get<T>, {0x48, 160, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWindSplineTargetEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         Filter                                                      OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTag)                              Cue                                                         OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffects                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageID
/// Size: 0x0004 (0x000000 - 0x000004)
class FWindSplineBlockageID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineSubDivBlockage
/// Size: 0x0008 (0x000000 - 0x000008)
class FWindSplineSubDivBlockage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SubDivIdx                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     StartSectionLength                                          OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockage
/// Size: 0x0024 (0x00000C - 0x000030)
class FWindSplineBlockage : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FWindSplineBlockageID)                     ID                                                          OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(TArray<FWindSplineSubDivBlockage>)         SubDivBlockages                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     ActivationTime                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DeactivationTime                                            OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FWindSplineBlockageArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FWindSplineBlockage>)               Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineMeshData
/// Size: 0x0018 (0x000000 - 0x000018)
class FWindSplineMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<UMaterialInstanceDynamic*>)         MeshMaterials                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

