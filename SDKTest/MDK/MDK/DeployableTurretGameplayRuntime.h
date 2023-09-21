
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance
/// Size: 0x0040 (0x000350 - 0x000390)
class UDeployableTurretAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	DMember(bool)                                      bIsAttacking                                                OFFSET(get<bool>, {0x348, 1, 1, 0})
	DMember(bool)                                      bIsWindUp                                                   OFFSET(get<bool>, {0x348, 1, 1, 1})
	DMember(bool)                                      bIsTracking                                                 OFFSET(get<bool>, {0x348, 1, 1, 2})
	DMember(bool)                                      bIsWindDown                                                 OFFSET(get<bool>, {0x348, 1, 1, 3})
	DMember(bool)                                      bIsDeactivated                                              OFFSET(get<bool>, {0x348, 1, 1, 4})
	DMember(bool)                                      bIsScanning                                                 OFFSET(get<bool>, {0x348, 1, 1, 5})
	DMember(bool)                                      bIsAggro                                                    OFFSET(get<bool>, {0x348, 1, 1, 6})
	DMember(bool)                                      bFallAndDeployToDeactivated                                 OFFSET(get<bool>, {0x348, 1, 1, 7})
	DMember(bool)                                      bFallAndDeployToScan                                        OFFSET(get<bool>, {0x349, 1, 1, 0})
	DMember(bool)                                      bAggroToFire                                                OFFSET(get<bool>, {0x349, 1, 1, 1})
	DMember(bool)                                      bInterruptibleCurveOverThreshold                            OFFSET(get<bool>, {0x349, 1, 1, 2})
	DMember(bool)                                      bTurnEndCurveOverThreshold                                  OFFSET(get<bool>, {0x349, 1, 1, 3})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x34C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveThreshold                                 OFFSET(get<float>, {0x350, 4, 0, 0})
	SMember(FName)                                     TurnEndCurveName                                            OFFSET(getStruct<T>, {0x354, 4, 0, 0})
	DMember(float)                                     TurnEndCurveThreshold                                       OFFSET(get<float>, {0x358, 4, 0, 0})
	SMember(FRotator)                                  AimRotationInComponentSpace                                 OFFSET(getStruct<T>, {0x360, 24, 0, 0})
	SMember(FRotator)                                  SurfaceRotation                                             OFFSET(getStruct<T>, {0x378, 24, 0, 0})


	/// Functions
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance.SetNativeVariables
	// void SetNativeVariables(ABuildingGameplayActor* OwningTurretBGA, FDeployableTurretBPAnimData& AnimData);                 // [0x2278440] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeployableTurretLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/DeployableTurretGameplayRuntime.DeployableTurretBPAnimData
/// Size: 0x0028 (0x000000 - 0x000028)
class FDeployableTurretBPAnimData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRotator)                                  AimRotation                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     SurfaceRollDegrees                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SurfacePitchDegrees                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(EDeployableTurretState)                    State                                                       OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Enum /Script/DeployableTurretGameplayRuntime.EDeployableTurretState
/// Size: 0x09
enum EDeployableTurretState : uint8_t
{
	EDeployableTurretState__Collapsed0                                               = 0,
	EDeployableTurretState__Transforming1                                            = 1,
	EDeployableTurretState__Scanning2                                                = 2,
	EDeployableTurretState__Tracking3                                                = 3,
	EDeployableTurretState__Attacking4                                               = 4,
	EDeployableTurretState__Deactivated5                                             = 5,
	EDeployableTurretState__WindUp6                                                  = 6,
	EDeployableTurretState__WindDown7                                                = 7,
	EDeployableTurretState__EDeployableTurretState_MAX8                              = 8
};

