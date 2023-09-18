/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LabradorRuntime.

/// Class /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
/// Size: 0x0030 (0x0006E0 - 0x000710)
class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bHighVelocity                                               ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsInterruptible                                            ___ OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(bool)                                      bLocoToIdle                                                 ___ OFFSET(get<bool>, {0x6DA, 1, 0, 0})
	DMember(bool)                                      bIdleToLoco                                                 ___ OFFSET(get<bool>, {0x6DB, 1, 0, 0})
	DMember(bool)                                      bJumpStartToJumpLoop                                        ___ OFFSET(get<bool>, {0x6DC, 1, 0, 0})
	DMember(bool)                                      bJumpLandToMovement                                         ___ OFFSET(get<bool>, {0x6DD, 1, 0, 0})
	DMember(bool)                                      bIsRunning                                                  ___ OFFSET(get<bool>, {0x6DE, 1, 0, 0})
	DMember(bool)                                      bIdleToFalling                                              ___ OFFSET(get<bool>, {0x6DF, 1, 0, 0})
	DMember(bool)                                      bToppledOnGround                                            ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      bTransitionToLand                                           ___ OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	DMember(float)                                     TargetDistance                                              ___ OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(bool)                                      bTargetIsClose                                              ___ OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(bool)                                      bIsToppled                                                  ___ OFFSET(get<bool>, {0x6E9, 1, 0, 0})
	DMember(bool)                                      bIsLeaking                                                  ___ OFFSET(get<bool>, {0x6EA, 1, 0, 0})
	DMember(float)                                     MinHighVelocityMagnitude                                    ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     MaxInterruptibleCurveValue                                  ___ OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     LocoIdleTransitionThreshold                                 ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     RunSpeedThreshold                                           ___ OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     JumpLandToMovementInterruptibleThreshold                    ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     MinTargetIsCloseDistance                                    ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     ___ OFFSET(get<T>, {0x704, 4, 0, 0})
};

/// Class /Script/LabradorRuntime.FortLabradorComponent_Telemetry
/// Size: 0x0020 (0x000108 - 0x000128)
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bWasAwake                                                   ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FString)                                   InstigatorAwakeNetIDString                                  ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ELabradorDespawnReason)                    DespawnReason                                               ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     DamageReceivedFromPlayers                                   ___ OFFSET(get<float>, {0x124, 4, 0, 0})
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

