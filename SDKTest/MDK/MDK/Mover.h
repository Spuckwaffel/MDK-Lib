
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetworkPrediction

/// Class /Script/Mover.MoverBackendLiaisonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverBackendLiaisonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.MoverBasePawn
/// Size: 0x0010 (0x000318 - 0x000328)
class AMoverBasePawn : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UKinematicMoverComponent*)                 CharacterMotionComponent                                    OFFSET(get<T>, {0x318, 8, 0, 0})
};



	/// Functions
	// Function /Script/Mover.MoverBasePawn.OnProduceInputInBlueprint
	// FKinematicMoverInputCmdContext OnProduceInputInBlueprint(float DeltaMs, FKinematicMoverInputCmdContext InputCmd);        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.MoverBasePawn.GetMoverComponent
	// UKinematicMoverComponent* GetMoverComponent();                                                                           // [0x74d1288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/Mover.MoverBlackboard
/// Size: 0x0050 (0x000028 - 0x000078)
class UMoverBlackboard : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/Mover.MoverDataModelBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.MoverNetworkPhysicsLiaisonComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/Mover.MoverNetworkPredictionLiaisonComponent
/// Size: 0x0010 (0x000290 - 0x0002A0)
class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Script/Mover.MoverDataCollectionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.PhysicsCharacterMovementModeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsCharacterMovementModeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.KinematicMoverComponent
/// Size: 0x01D8 (0x0000A0 - 0x000278)
class UKinematicMoverComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FMulticastInlineDelegate)                  OnPreSimulationTick                                         OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationTick                                        OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationRollback                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(UClass*)                                   BackendClass                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            InitialAuxState                                             OFFSET(get<T>, {0xE8, 64, 0, 0})
	CMember(TMap<FName, UBaseMovementMode*>)           MovementModes                                               OFFSET(get<T>, {0x128, 80, 0, 0})
	SMember(FName)                                     StartingMovementMode                                        OFFSET(get<T>, {0x178, 4, 0, 0})
	DMember(float)                                     HistoryTrackingSeconds                                      OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	CMember(USceneComponent*)                          UpdatedComponent                                            OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      UpdatedPrimitive                                            OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UMovementModeStateMachine*)                ModeFSM                                                     OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(UMoverBlackboard*)                         SimBlackboard                                               OFFSET(get<T>, {0x260, 8, 0, 0})
};



	/// Functions
	// Function /Script/Mover.KinematicMoverComponent.SetHistoryTracking
	// void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);                                                   // [0x74d2b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.KinematicMoverComponent.PhysicsVolumeChanged
	// void PhysicsVolumeChanged(APhysicsVolume* NewVolume);                                                                    // [0x74d2ae8] Native|Protected     
	// Function /Script/Mover.KinematicMoverComponent.OnHistoryTrackingRollback
	// void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                        // [0x74d2838] Final|Native|Protected|HasOutParms 
	// Function /Script/Mover.KinematicMoverComponent.OnBeginOverlap
	// void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x74d24d0] Native|Public|HasOutParms 
	// Function /Script/Mover.KinematicMoverComponent.K2_QueueLayeredMove
	// void K2_QueueLayeredMove(int32_t& MoveAsRawData);                                                                        // [0x74d22d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.KinematicMoverComponent.IsOnGround
	// bool IsOnGround();                                                                                                       // [0x74d191c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.IsFalling
	// bool IsFalling();                                                                                                        // [0x15f1910] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.IsAirborne
	// bool IsAirborne();                                                                                                       // [0x74d15bc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.HasValidCachedState
	// bool HasValidCachedState();                                                                                              // [0x74d1518] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.HasValidCachedInputCmd
	// bool HasValidCachedInputCmd();                                                                                           // [0x6ddaa84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x74d1428] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetTargetOrientation
	// FRotator GetTargetOrientation();                                                                                         // [0x74d13f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetSyncState
	// FKinematicMoverSyncState GetSyncState();                                                                                 // [0x74d1394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetPastTrajectory
	// TArray<FTrajectorySampleInfo> GetPastTrajectory();                                                                       // [0x74d1358] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetMovementModeName
	// FName GetMovementModeName();                                                                                             // [0x74d125c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetMovementIntent
	// FVector GetMovementIntent();                                                                                             // [0x74d1224] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetMovementBaseBoneName
	// FName GetMovementBaseBoneName();                                                                                         // [0x74d0f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetMovementBase
	// UPrimitiveComponent* GetMovementBase();                                                                                  // [0x74d0eec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetLastInputCmd
	// FKinematicMoverInputCmdContext GetLastInputCmd();                                                                        // [0x74d0c68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.KinematicMoverComponent.GetFutureTrajectory
	// TArray<FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);                          // [0x74d0b8c] Final|Native|Public|BlueprintCallable|Const 
/// Class /Script/Mover.BaseMovementMode
/// Size: 0x0008 (0x000028 - 0x000030)
class UBaseMovementMode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.FallingMode
/// Size: 0x0030 (0x000030 - 0x000060)
class UFallingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     AirControlPercentage                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FallingDeceleration                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     OverTerminalSpeedFallingDeceleration                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TerminalMovementPlaneSpeed                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     VerticalFallingDeceleration                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TerminalVerticalSpeed                                       OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FVector)                                   GravityAcceleration                                         OFFSET(get<T>, {0x48, 24, 0, 0})
};



	/// Functions
	// Function /Script/Mover.FallingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FKinematicMoverTickEndData& OutputState);                           // [0x74d29c4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FallingMode.OnGenerateMove
	// void OnGenerateMove(FKinematicMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // [0x74d26c0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/Mover.FlyingMode
/// Size: 0x0000 (0x000030 - 0x000030)
class UFlyingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.WalkingMode
/// Size: 0x0000 (0x000030 - 0x000030)
class UWalkingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.MovementBaseUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementBaseUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.MovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.PlayMoverMontageCallbackProxy
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/Mover.NullMovementMode
/// Size: 0x0000 (0x000030 - 0x000030)
class UNullMovementMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.MovementModeStateMachine
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovementModeStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<FName, UBaseMovementMode*>)           Modes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenFallingMode
/// Size: 0x0020 (0x000060 - 0x000080)
class UPhysicsDrivenFallingMode : public UFallingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     FloorSweepRadius                                            OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenWalkingMode
/// Size: 0x0030 (0x000030 - 0x000060)
class UPhysicsDrivenWalkingMode : public UWalkingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     RadialForceLimit                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FrictionForceLimit                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FloorSweepRadius                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     CharacterRadius                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     GroundDamping                                               OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     FractionalVelocityToTarget                                  OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsMoverManager
/// Size: 0x0020 (0x000030 - 0x000050)
class UPhysicsMoverManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Mover.MoverTimeStep
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoverTimeStep : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/Mover.KinematicMoverInputCmdContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FKinematicMoverInputCmdContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      InputCollection                                             OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverDataCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Mover.LayeredMoveBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FLayeredMoveBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EMoveMixMode)                              MixMode                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     DurationMs                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartSimTimeMs                                              OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_AnimRootMotion
/// Size: 0x0010 (0x000018 - 0x000028)
class FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAnimMontage*)                             Montage                                                     OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     StartingMontagePosition                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_LinearVelocity
/// Size: 0x0020 (0x000018 - 0x000038)
class FLayeredMove_LinearVelocity : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(char)                                      SettingsFlags                                               OFFSET(get<char>, {0x30, 1, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_JumpImpulse
/// Size: 0x0008 (0x000018 - 0x000020)
class FLayeredMove_JumpImpulse : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     UpwardsSpeed                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Teleport
/// Size: 0x0018 (0x000018 - 0x000030)
class FLayeredMove_Teleport : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetLocation                                              OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.MovementModeTickEndState
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovementModeTickEndState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RemainingMs                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     NextModeName                                                OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverSyncState
/// Size: 0x0018 (0x000000 - 0x000018)
class FKinematicMoverSyncState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      SyncStateCollection                                         OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverAuxStateContext
/// Size: 0x0040 (0x000000 - 0x000040)
class FKinematicMoverAuxStateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   UpDir                                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxWalkSlopeCosine                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     JumpUpwardsSpeed                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverTickStartData
/// Size: 0x0070 (0x000000 - 0x000070)
class FKinematicMoverTickStartData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FKinematicMoverInputCmdContext)            InputCmd                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FKinematicMoverSyncState)                  SyncState                                                   OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    OFFSET(get<T>, {0x30, 64, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverTickEndData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FKinematicMoverTickEndData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FKinematicMoverSyncState)                  SyncState                                                   OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FMovementModeTickEndState)                 MovementEndState                                            OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/Mover.LayeredMoveGroup
/// Size: 0x0028 (0x000000 - 0x000028)
class FLayeredMoveGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Mover.MovementSubstep
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovementSubstep : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Mover.MovementRecord
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovementRecord : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/Mover.ProposedMove
/// Size: 0x0080 (0x000000 - 0x000080)
class FProposedMove : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/Mover.MoverDataStructBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FMoverDataStructBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Mover.KinematicDefaultInputs
/// Size: 0x0068 (0x000008 - 0x000070)
class FKinematicDefaultInputs : public FMoverDataStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   OrientationIntent                                           OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FName)                                     SuggestedMovementMode                                       OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bUsingMovementBase                                          OFFSET(get<bool>, {0x5C, 1, 0, 0})
	CMember(UPrimitiveComponent*)                      MovementBase                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bIsJumpJustPressed                                          OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsJumpPressed                                              OFFSET(get<bool>, {0x6D, 1, 0, 0})
};

/// Struct /Script/Mover.MoverDefaultSyncState
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FMoverDefaultSyncState : public FMoverDataStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Orientation                                                 OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FName)                                     MovementMode                                                OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(UPrimitiveComponent*)                      MovementBase                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FVector)                                   MovementBasePos                                             OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FQuat)                                     MovementBaseQuat                                            OFFSET(get<T>, {0xA0, 32, 0, 0})
	SMember(FLayeredMoveGroup)                         LayeredMoves                                                OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverInputs
/// Size: 0x0018 (0x000018 - 0x000030)
class FNetworkPhysicsMoverInputs : public FNetworkPhysicsDatas
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FKinematicMoverInputCmdContext)            InputCmdContext                                             OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverState
/// Size: 0x0058 (0x000018 - 0x000070)
class FNetworkPhysicsMoverState : public FNetworkPhysicsDatas
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FKinematicMoverSyncState)                  SyncStateContext                                            OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxStateContext                                             OFFSET(get<T>, {0x30, 64, 0, 0})
};

/// Struct /Script/Mover.RelativeBaseInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FRelativeBaseInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UPrimitiveComponent*)                      MovementBase                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FVector)                                   ContactLocalPosition                                        OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/Mover.FloorCheckResult
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FFloorCheckResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bBlockingHit                                                OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bWalkableFloor                                              OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bLineTrace                                                  OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     LineDist                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FloorDist                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(get<T>, {0x10, 224, 0, 0})
};

/// Struct /Script/Mover.TrajectorySampleInfo
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FTrajectorySampleInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Mover.GroundMoveParams
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGroundMoveParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    OFFSET(get<T>, {0x68, 64, 0, 0})
	SMember(FVector)                                   GroundNormal                                                OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/Mover.FreeMoveParams
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFreeMoveParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    OFFSET(get<T>, {0x68, 64, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/Mover.ComputeVelocityParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FComputeVelocityParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   InitialVelocity                                             OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/Mover.SimulationTickParams
/// Size: 0x0110 (0x000000 - 0x000110)
class FSimulationTickParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USceneComponent*)                          UpdatedComponent                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      UpdatedPrimitive                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FKinematicMoverTickStartData)              StartState                                                  OFFSET(get<T>, {0x10, 112, 0, 0})
	SMember(FMoverTimeStep)                            TimeStep                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FProposedMove)                             ProposedMove                                                OFFSET(get<T>, {0x90, 128, 0, 0})
};

/// Enum /Script/Mover.ELayeredMove_ConstantVelocitySettingsFlags
/// Size: 0x04
enum ELayeredMove_ConstantVelocitySettingsFlags : uint8_t
{
	ELayeredMove_ConstantVelocitySettingsFlags__NoFlags0                             = 0,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityStartRelative1               = 1,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityAlwaysRelative2              = 2,
	ELayeredMove_ConstantVelocitySettingsFlags__ELayeredMove_MAX3                    = 3
};

/// Enum /Script/Mover.EMoveMixMode
/// Size: 0x04
enum EMoveMixMode : uint8_t
{
	EMoveMixMode__AdditiveVelocity0                                                  = 0,
	EMoveMixMode__OverrideVelocity1                                                  = 1,
	EMoveMixMode__OverrideAll2                                                       = 2,
	EMoveMixMode__EMoveMixMode_MAX3                                                  = 3
};

/// Enum /Script/Mover.EMoveInputType
/// Size: 0x04
enum EMoveInputType : uint8_t
{
	EMoveInputType__Invalid0                                                         = 0,
	EMoveInputType__DirectionalIntent1                                               = 1,
	EMoveInputType__Velocity2                                                        = 2,
	EMoveInputType__EMoveInputType_MAX3                                              = 3
};

