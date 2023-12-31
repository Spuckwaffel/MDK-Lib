
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CurveExpression.CurveExpressionsDataAsset
/// Size: 0x00F8 (0x000030 - 0x000128)
class UCurveExpressionsDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FName>)                             NamedConstants                                              OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesBase
/// Size: 0x00F0 (0x000010 - 0x000100)
class FAnimNode_RemapCurvesBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ERemapCurvesExpressionSource)              ExpressionSource                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FCurveExpressionList)                      ExpressionList                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(UCurveExpressionsDataAsset*)               CurveExpressionsDataAsset                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FName, FString>)                      CurveExpressions                                            OFFSET(get<T>, {0x40, 80, 0, 0})
	DMember(bool)                                      bExpressionsImmutable                                       OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(TArray<FName>)                             CachedConstantNames                                         OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/CurveExpression.CurveExpressionList
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurveExpressionList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   AssignmentExpressions                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurves
/// Size: 0x0000 (0x000100 - 0x000100)
class FAnimNode_RemapCurves : public FAnimNode_RemapCurvesBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesFromMesh
/// Size: 0x0078 (0x000100 - 0x000178)
class FAnimNode_RemapCurvesFromMesh : public FAnimNode_RemapCurvesBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x108, 1, 0, 0})
};

/// Enum /Script/CurveExpression.ERemapCurvesExpressionSource
/// Size: 0x04
enum ERemapCurvesExpressionSource : uint8_t
{
	ERemapCurvesExpressionSource__ExpressionList0                                    = 0,
	ERemapCurvesExpressionSource__DataAsset1                                         = 1,
	ERemapCurvesExpressionSource__ExpressionMap2                                     = 2,
	ERemapCurvesExpressionSource__ERemapCurvesExpressionSource_MAX3                  = 3
};

