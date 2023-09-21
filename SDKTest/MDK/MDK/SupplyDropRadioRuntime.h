
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
/// Size: 0x01E0 (0x000978 - 0x000B58)
class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	DMember(float)                                     MinimumMovingSpeedThresholdSq                               ___ OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     BalloonClosedGroundedFallSpeed                              ___ OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(bool)                                      bAutoOpen                                                   ___ OFFSET(get<bool>, {0x980, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ForceOpenActorTags                                          ___ OFFSET(get<T>, {0x988, 32, 0, 0})
	SMember(FGameplayTagQuery)                         IgnoreMovingCollisionWithActorTagQuery                      ___ OFFSET(get<T>, {0x9A8, 72, 0, 0})
	DMember(float)                                     InterpRateToBalloonOpenedFallSpeed                          ___ OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     DistanceFromOriginalSpawnLocForBalloonOpen                  ___ OFFSET(get<float>, {0x9F4, 4, 0, 0})
	CMember(ESupplyDropRadioBalloonState)              BalloonState                                                ___ OFFSET(get<T>, {0x9F8, 1, 0, 0})
	SMember(FHitResult)                                WaterHitResult                                              ___ OFFSET(get<T>, {0xA00, 224, 0, 0})
	DMember(bool)                                      bMoving                                                     ___ OFFSET(get<bool>, {0xAE0, 1, 0, 0})
	DMember(float)                                     FallSpeed                                                   ___ OFFSET(get<float>, {0xAE4, 4, 0, 0})
	DMember(float)                                     BalloonOpenedFallSpeed                                      ___ OFFSET(get<float>, {0xAE8, 4, 0, 0})
	DMember(float)                                     GravityMultiplier                                           ___ OFFSET(get<float>, {0xAEC, 4, 0, 0})
	SMember(FVector)                                   ServerLocation                                              ___ OFFSET(get<T>, {0xAF0, 24, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonDisabled        ___ OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonEnabled         ___ OFFSET(get<float>, {0xB0C, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0xB10, 24, 0, 0})
	SMember(FVector)                                   PreviousFrameVelocity                                       ___ OFFSET(get<T>, {0xB28, 24, 0, 0})
	SMember(FVector)                                   OriginalServerSpawnLocation                                 ___ OFFSET(get<T>, {0xB40, 24, 0, 0})
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortSupplyDropRadioAttachActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/SupplyDropRadioRuntime.ESupplyDropRadioBalloonState
/// Size: 0x05
enum ESupplyDropRadioBalloonState : uint8_t
{
	ESupplyDropRadioBalloonState__Invalid0                                           = 0,
	ESupplyDropRadioBalloonState__Closed1                                            = 1,
	ESupplyDropRadioBalloonState__Opened2                                            = 2,
	ESupplyDropRadioBalloonState__Destroyed3                                         = 3,
	ESupplyDropRadioBalloonState__ESupplyDropRadioBalloonState_MAX4                  = 4
};

