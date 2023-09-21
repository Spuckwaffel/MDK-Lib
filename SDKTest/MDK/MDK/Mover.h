
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
	CMember(UKinematicMoverComponent*)                 CharacterMotionComponent                                    ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

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
	SMember(FMulticastInlineDelegate)                  OnPreSimulationTick                                         ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationTick                                        ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationRollback                                    ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(UClass*)                                   BackendClass                                                ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            InitialAuxState                                             ___ OFFSET(get<T>, {0xE8, 64, 0, 0})
	CMember(TMap<FName, UBaseMovementMode*>)           MovementModes                                               ___ OFFSET(get<T>, {0x128, 80, 0, 0})
	SMember(FName)                                     StartingMovementMode                                        ___ OFFSET(get<T>, {0x178, 4, 0, 0})
	DMember(float)                                     HistoryTrackingSeconds                                      ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	CMember(USceneComponent*)                          UpdatedComponent                                            ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      UpdatedPrimitive                                            ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UMovementModeStateMachine*)                ModeFSM                                                     ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(UMoverBlackboard*)                         SimBlackboard                                               ___ OFFSET(get<T>, {0x260, 8, 0, 0})
};

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
	DMember(float)                                     AirControlPercentage                                        ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FallingDeceleration                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     OverTerminalSpeedFallingDeceleration                        ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TerminalMovementPlaneSpeed                                  ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     VerticalFallingDeceleration                                 ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TerminalVerticalSpeed                                       ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FVector)                                   GravityAcceleration                                         ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

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
	CMember(TMap<FName, UBaseMovementMode*>)           Modes                                                       ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenFallingMode
/// Size: 0x0020 (0x000060 - 0x000080)
class UPhysicsDrivenFallingMode : public UFallingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     TwistTorqueLimit                                            ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     FloorSweepRadius                                            ___ OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenWalkingMode
/// Size: 0x0030 (0x000030 - 0x000060)
class UPhysicsDrivenWalkingMode : public UWalkingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     RadialForceLimit                                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FrictionForceLimit                                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     TwistTorqueLimit                                            ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FloorSweepRadius                                            ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     CharacterRadius                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     GroundDamping                                               ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     FractionalVelocityToTarget                                  ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
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
	SMember(FMoverDataCollection)                      InputCollection                                             ___ OFFSET(get<T>, {0x0, 24, 0, 0})
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
	CMember(EMoveMixMode)                              MixMode                                                     ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     DurationMs                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartSimTimeMs                                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_AnimRootMotion
/// Size: 0x0010 (0x000018 - 0x000028)
class FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     StartingMontagePosition                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_LinearVelocity
/// Size: 0x0020 (0x000018 - 0x000038)
class FLayeredMove_LinearVelocity : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(char)                                      SettingsFlags                                               ___ OFFSET(get<char>, {0x30, 1, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_JumpImpulse
/// Size: 0x0008 (0x000018 - 0x000020)
class FLayeredMove_JumpImpulse : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     UpwardsSpeed                                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Teleport
/// Size: 0x0018 (0x000018 - 0x000030)
class FLayeredMove_Teleport : public FLayeredMoveBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.MovementModeTickEndState
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovementModeTickEndState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RemainingMs                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     NextModeName                                                ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverSyncState
/// Size: 0x0018 (0x000000 - 0x000018)
class FKinematicMoverSyncState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      SyncStateCollection                                         ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverAuxStateContext
/// Size: 0x0040 (0x000000 - 0x000040)
class FKinematicMoverAuxStateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   UpDir                                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     GravityScale                                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Deceleration                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Acceleration                                                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxWalkSlopeCosine                                          ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     JumpUpwardsSpeed                                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverTickStartData
/// Size: 0x0070 (0x000000 - 0x000070)
class FKinematicMoverTickStartData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FKinematicMoverInputCmdContext)            InputCmd                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FKinematicMoverSyncState)                  SyncState                                                   ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    ___ OFFSET(get<T>, {0x30, 64, 0, 0})
};

/// Struct /Script/Mover.KinematicMoverTickEndData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FKinematicMoverTickEndData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FKinematicMoverSyncState)                  SyncState                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    ___ OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FMovementModeTickEndState)                 MovementEndState                                            ___ OFFSET(get<T>, {0x58, 8, 0, 0})
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
	CMember(EMoveInputType)                            MoveInputType                                               ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   OrientationIntent                                           ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FName)                                     SuggestedMovementMode                                       ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bUsingMovementBase                                          ___ OFFSET(get<bool>, {0x5C, 1, 0, 0})
	CMember(UPrimitiveComponent*)                      MovementBase                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bIsJumpJustPressed                                          ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsJumpPressed                                              ___ OFFSET(get<bool>, {0x6D, 1, 0, 0})
};

/// Struct /Script/Mover.MoverDefaultSyncState
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FMoverDefaultSyncState : public FMoverDataStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Orientation                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FName)                                     MovementMode                                                ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(UPrimitiveComponent*)                      MovementBase                                                ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FVector)                                   MovementBasePos                                             ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FQuat)                                     MovementBaseQuat                                            ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	SMember(FLayeredMoveGroup)                         LayeredMoves                                                ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverInputs
/// Size: 0x0018 (0x000018 - 0x000030)
class FNetworkPhysicsMoverInputs : public FNetworkPhysicsDatas
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FKinematicMoverInputCmdContext)            InputCmdContext                                             ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverState
/// Size: 0x0058 (0x000018 - 0x000070)
class FNetworkPhysicsMoverState : public FNetworkPhysicsDatas
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FKinematicMoverSyncState)                  SyncStateContext                                            ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxStateContext                                             ___ OFFSET(get<T>, {0x30, 64, 0, 0})
};

/// Struct /Script/Mover.RelativeBaseInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FRelativeBaseInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UPrimitiveComponent*)                      MovementBase                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FVector)                                   ContactLocalPosition                                        ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/Mover.FloorCheckResult
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FFloorCheckResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bBlockingHit                                                ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bWalkableFloor                                              ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bLineTrace                                                  ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     LineDist                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FloorDist                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   ___ OFFSET(get<T>, {0x10, 224, 0, 0})
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
	CMember(EMoveInputType)                            MoveInputType                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    ___ OFFSET(get<T>, {0x68, 64, 0, 0})
	SMember(FVector)                                   GroundNormal                                                ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     DeltaSeconds                                                ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/Mover.FreeMoveParams
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFreeMoveParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EMoveInputType)                            MoveInputType                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FKinematicMoverAuxStateContext)            AuxState                                                    ___ OFFSET(get<T>, {0x68, 64, 0, 0})
	DMember(float)                                     DeltaSeconds                                                ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/Mover.ComputeVelocityParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FComputeVelocityParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DeltaSeconds                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   InitialVelocity                                             ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Acceleration                                                ___ OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/Mover.SimulationTickParams
/// Size: 0x0110 (0x000000 - 0x000110)
class FSimulationTickParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USceneComponent*)                          UpdatedComponent                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      UpdatedPrimitive                                            ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FKinematicMoverTickStartData)              StartState                                                  ___ OFFSET(get<T>, {0x10, 112, 0, 0})
	SMember(FMoverTimeStep)                            TimeStep                                                    ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FProposedMove)                             ProposedMove                                                ___ OFFSET(get<T>, {0x90, 128, 0, 0})
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

