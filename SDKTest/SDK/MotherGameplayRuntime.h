/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MotherGameplayRuntime.

/// Struct /Script/MotherGameplayRuntime.GravyGoblinActivatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
class FGravyGoblinActivatable_Event : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsActivatable                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.GravyGoblinRotatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
class FGravyGoblinRotatable_Event : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsRotatable                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.GoopAudioMapRangeClamped
/// Size: 0x0020 (0x000000 - 0x000020)
class FGoopAudioMapRangeClamped : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 InRange                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 OutRange                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropData
/// Size: 0x0030 (0x000000 - 0x000030)
class FPaddleGingerPropData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     CategoryLabelText                                           ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   PropIndex                                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxPropCount                                                ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CategoryIndex                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCategoryCount                                            ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             Sender                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropActivatedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaddleGingerPropActivatedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bActivated                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(APlayerState*)                             Sender                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent
/// Size: 0x01C8 (0x0000A0 - 0x000268)
class UGravityGunTargetTrackingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FScalableFloat)                            AllowLargeObjects                                           ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            AllowMultipleGrabbers                                       ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            AllowVehicles                                               ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            AllowPickups                                                ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            AllowProjectiles                                            ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            AllowForay                                                  ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            AllowWhileInVehicle                                         ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FName)                                     GrabbedByGravityGunTagName                                  ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     InvalidTargetTags                                           ___ OFFSET(get<T>, {0x1C0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsPlayerTag                                           ___ OFFSET(get<T>, {0x1E0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsAlreadyGrabbedTag                                   ___ OFFSET(get<T>, {0x200, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsOwnVehicleTag                                       ___ OFFSET(get<T>, {0x220, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  FoundTargetDelegate                                         ___ OFFSET(get<T>, {0x240, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeactivateReticleDelegate                                   ___ OFFSET(get<T>, {0x250, 16, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.FortCabbageIglooVehicle
/// Size: 0x0000 (0x0026B0 - 0x0026B0)
class AFortCabbageIglooVehicle : public AFortOctopusVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9904;

public:
};

/// Class /Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
/// Size: 0x0170 (0x000440 - 0x0005B0)
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(AFortSphericalVehicle*)                    AsFortSphericalVehicle                                      ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(bool)                                      bIsOnGround                                                 ___ OFFSET(get<bool>, {0x440, 1, 0, 0})
	DMember(float)                                     RemappedPitch                                               ___ OFFSET(get<float>, {0x444, 4, 0, 0})
	DMember(float)                                     CurrentRoll                                                 ___ OFFSET(get<float>, {0x448, 4, 0, 0})
	DMember(float)                                     LockedRoll                                                  ___ OFFSET(get<float>, {0x44C, 4, 0, 0})
	DMember(bool)                                      bHeadShouldBend                                             ___ OFFSET(get<bool>, {0x450, 1, 0, 0})
	DMember(bool)                                      bFootShouldBend                                             ___ OFFSET(get<bool>, {0x451, 1, 0, 0})
	SMember(FVector)                                   BodyGroundOffset                                            ___ OFFSET(get<T>, {0x458, 24, 0, 0})
	SMember(FVector2D)                                 MinClampPitchInRange                                        ___ OFFSET(get<T>, {0x470, 16, 0, 0})
	SMember(FVector2D)                                 MinClampPitchOutRange                                       ___ OFFSET(get<T>, {0x480, 16, 0, 0})
	SMember(FVector2D)                                 MaxClampPitchInRange                                        ___ OFFSET(get<T>, {0x490, 16, 0, 0})
	SMember(FVector2D)                                 MaxClampPitchOutRange                                       ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(float)                                     HeadAlphaInterpSpeed                                        ___ OFFSET(get<float>, {0x4B0, 4, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
/// Size: 0x0040 (0x000990 - 0x0009D0)
class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	SMember(FName)                                     SpeedParamName                                              ___ OFFSET(get<T>, {0x990, 4, 0, 0})
	SMember(FName)                                     IsFallingParamName                                          ___ OFFSET(get<T>, {0x994, 4, 0, 0})
	SMember(FGoopAudioMapRangeClamped)                 SpeedMapRangeClamped                                        ___ OFFSET(get<T>, {0x998, 32, 0, 0})
	DMember(float)                                     InterpSpeed                                                 ___ OFFSET(get<float>, {0x9B8, 4, 0, 0})
	CMember(UAudioComponent*)                          LoopingAudioComponent                                       ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.PropGunFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
/// Size: 0x0088 (0x000990 - 0x000A18)
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	CMember(AFortPawn*)                                Pawn                                                        ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortWeaponFxComponent_ChargeAimLocation*) CachedAimLocationComponent                                  ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	SMember(FVector)                                   FoundEndPoint                                               ___ OFFSET(get<T>, {0x9A0, 24, 0, 0})
	SMember(FScalableFloat)                            MinHitDistance                                              ___ OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            HitObjectsLimit                                             ___ OFFSET(get<T>, {0x9E0, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                ___ OFFSET(get<T>, {0xA0C, 1, 0, 0})
};

