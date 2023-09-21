
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ControlRig
/// dependency: RigVM

/// Struct /Script/ControlRigSpline.ControlRigSplineImpl
/// Size: 0x0068 (0x000000 - 0x000068)
class FControlRigSplineImpl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRigSpline.ControlRigSpline
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigSpline : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_ControlRigSplineBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ESplineType)                               SplineMode                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bClosed                                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int32_t)                                   SamplesPerSegment                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     Compression                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ControlRigSplineFromTransforms : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ESplineType)                               SplineMode                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bClosed                                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int32_t)                                   SamplesPerSegment                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     Compression                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplinePoints
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetSplinePoints : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplineTransforms
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetSplineTransforms : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_PositionFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline2
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigUnit_TransformFromControlRigSpline2 : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_DrawControlRigSpline
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthControlRigSpline
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetLengthControlRigSpline : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetLengthAtParamControlRigSpline : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurve
/// Size: 0x01D0 (0x000160 - 0x000330)
class FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(get<T>, {0x1C8, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x1F0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x200, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(get<T>, {0x290, 152, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
/// Size: 0x01D0 (0x000160 - 0x000330)
class FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(get<T>, {0x1C8, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x1F0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x200, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(get<T>, {0x290, 152, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_SplineConstraint_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigUnit_SplineConstraint_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FTransform>)                        ItemTransforms                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_SplineConstraint
/// Size: 0x00B0 (0x000160 - 0x000210)
class FRigUnit_SplineConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x190, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1B0, 24, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FRigUnit_SplineConstraint_WorkData)        WorkData                                                    OFFSET(get<T>, {0x1D0, 56, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChain
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_ParameterAtPercentage
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Percentage                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Enum /Script/ControlRigSpline.ESplineType
/// Size: 0x03
enum ESplineType : uint8_t
{
	ESplineType__BSpline0                                                            = 0,
	ESplineType__Hermite1                                                            = 1,
	ESplineType__Max2                                                                = 2
};

