
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: IrwinRuntime

/// Class /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
/// Size: 0x0030 (0x0006F0 - 0x000720)
class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	DMember(bool)                                      bHighVelocity                                               OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bIsInterruptible                                            OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bLocoToIdle                                                 OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bIdleToLoco                                                 OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(bool)                                      bJumpStartToJumpLoop                                        OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bJumpLandToMovement                                         OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsRunning                                                  OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bIdleToFalling                                              OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bToppledOnGround                                            OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bTransitionToLand                                           OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(bool)                                      bTargetIsClose                                              OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(bool)                                      bIsToppled                                                  OFFSET(get<bool>, {0x701, 1, 0, 0})
	DMember(bool)                                      bIsLeaking                                                  OFFSET(get<bool>, {0x702, 1, 0, 0})
	DMember(float)                                     MinHighVelocityMagnitude                                    OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     MaxInterruptibleCurveValue                                  OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     LocoIdleTransitionThreshold                                 OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     RunSpeedThreshold                                           OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     JumpLandToMovementInterruptibleThreshold                    OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     MinTargetIsCloseDistance                                    OFFSET(get<float>, {0x718, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     OFFSET(getStruct<T>, {0x71C, 4, 0, 0})
};

/// Class /Script/LabradorRuntime.FortLabradorComponent_Telemetry
/// Size: 0x0020 (0x000108 - 0x000128)
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bWasAwake                                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FString)                                   InstigatorAwakeNetIDString                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	CMember(ELabradorDespawnReason)                    DespawnReason                                               OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     DamageReceivedFromPlayers                                   OFFSET(get<float>, {0x124, 4, 0, 0})


	/// Functions
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp
	// void OnWakeUp(AActor* GoalActor);                                                                                        // [0xa0d1294] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport
	// void OnTeleport();                                                                                                       // [0xa0d127c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged
	// void OnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa0d0dac] Final|Native|Private|HasDefaults 
};

/// Enum /Script/LabradorRuntime.ELabradorDespawnReason
/// Size: 0x07
enum ELabradorDespawnReason : uint8_t
{
	ELabradorDespawnReason__DeathByPlayer0                                           = 0,
	ELabradorDespawnReason__DeathByBot1                                              = 1,
	ELabradorDespawnReason__DeathByAIPawn2                                           = 2,
	ELabradorDespawnReason__DeathByStorm3                                            = 3,
	ELabradorDespawnReason__Teleport4                                                = 4,
	ELabradorDespawnReason__Unknown5                                                 = 5,
	ELabradorDespawnReason__ELabradorDespawnReason_MAX6                              = 6
};

