
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/Constraints.ConstraintsActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AConstraintsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UConstraintsManager*)                      ConstraintsManager                                          OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Constraints.TickableConstraint
/// Size: 0x0048 (0x000028 - 0x000070)
class UTickableConstraint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FConstraintTickFunction)                   ConstraintTick                                              OFFSET(getStruct<T>, {0x28, 64, 0, 0})
	DMember(bool)                                      Active                                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/Constraints.ConstraintsManager
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstraintsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastSparseDelegate)                  OnConstraintAdded_BP                                        OFFSET(getStruct<T>, {0x28, 1, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnConstraintRemoved_BP                                      OFFSET(getStruct<T>, {0x29, 1, 0, 0})
	CMember(TArray<UTickableConstraint*>)              Constraints                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Constraints.ConstraintsScriptingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Constraints.TransformableHandle
/// Size: 0x0030 (0x000028 - 0x000058)
class UTransformableHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMovieSceneObjectBindingID)                ConstraintBindingID                                         OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/Constraints.TransformableComponentHandle
/// Size: 0x0010 (0x000058 - 0x000068)
class UTransformableComponentHandle : public UTransformableHandle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Class /Script/Constraints.TickableTransformConstraint
/// Size: 0x0020 (0x000070 - 0x000090)
class UTickableTransformConstraint : public UTickableConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UTransformableHandle*)                     ParentTRSHandle                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UTransformableHandle*)                     ChildTRSHandle                                              OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bDynamicOffset                                              OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(ETransformConstraintType)                  Type                                                        OFFSET(get<T>, {0x89, 1, 0, 0})
};

/// Class /Script/Constraints.TickableTranslationConstraint
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UTickableTranslationConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FVector)                                   OffsetTranslation                                           OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xB0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableRotationConstraint
/// Size: 0x0040 (0x000090 - 0x0000D0)
class UTickableRotationConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FQuat)                                     OffsetRotation                                              OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xC0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableScaleConstraint
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UTickableScaleConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FVector)                                   OffsetScale                                                 OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xB0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableParentConstraint
/// Size: 0x0080 (0x000090 - 0x000110)
class UTickableParentConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
	DMember(bool)                                      bScaling                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FTransformFilter)                          TransformFilter                                             OFFSET(getStruct<T>, {0x101, 9, 0, 0})
};

/// Class /Script/Constraints.TickableLookAtConstraint
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UTickableLookAtConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Struct /Script/Constraints.MovieSceneConstraintChannel
/// Size: 0x0000 (0x000100 - 0x000100)
class FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/Constraints.ConstraintAndActiveChannel
/// Size: 0x0128 (0x000000 - 0x000128)
class FConstraintAndActiveChannel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TWeakObjectPtr<UTickableConstraint*>)      Constraint                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FMovieSceneConstraintChannel)              ActiveChannel                                               OFFSET(getStruct<T>, {0x20, 256, 0, 0})
	CMember(UTickableConstraint*)                      ConstraintCopyToSpawn                                       OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/Constraints.ConstraintTickFunction
/// Size: 0x0018 (0x000028 - 0x000040)
class FConstraintTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/Constraints.EHandleEvent
/// Size: 0x04
enum EHandleEvent : uint8_t
{
	EHandleEvent__LocalTransformUpdated0                                             = 0,
	EHandleEvent__GlobalTransformUpdated1                                            = 1,
	EHandleEvent__ComponentUpdated2                                                  = 2,
	EHandleEvent__Max3                                                               = 3
};

