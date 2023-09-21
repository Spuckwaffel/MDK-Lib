
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimationCore
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

/// Class /Script/ControlRig.ControlRigShapeLibraryLink
/// Size: 0x0018 (0x000100 - 0x000118)
class UControlRigShapeLibraryLink : public UNameSpacedUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UControlRigShapeLibrary*)                  ShapeLibrary                                                ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TArray<FName>)                             ShapeNames                                                  ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x0358 (0x000028 - 0x000380)
class URigHierarchy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  ModifiedEventDynamic                                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(uint16_t)                                  TopologyVersion                                             ___ OFFSET(get<uint16_t>, {0x98, 2, 0, 0})
	DMember(uint16_t)                                  MetadataVersion                                             ___ OFFSET(get<uint16_t>, {0x9A, 2, 0, 0})
	DMember(uint16_t)                                  MetadataTagVersion                                          ___ OFFSET(get<uint16_t>, {0x9C, 2, 0, 0})
	DMember(bool)                                      bEnableDirtyPropagation                                     ___ OFFSET(get<bool>, {0x9E, 1, 0, 0})
	DMember(int32_t)                                   TransformStackIndex                                         ___ OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	CMember(URigHierarchyController*)                  HierarchyController                                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TMap<FRigElementKey, FRigElementKey>)      PreviousNameMap                                             ___ OFFSET(get<T>, {0x208, 80, 0, 0})
	CMember(URigHierarchy*)                            HierarchyForCacheValidation                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0028 (0x000058 - 0x000080)
class UTransformableControlHandle : public UTransformableHandle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	SMember(FName)                                     ControlName                                                 ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x02D8 (0x000338 - 0x000610)
class UControlRig : public URigVMHost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(ERigExecutionType)                         ExecutionType                                               ___ OFFSET(get<T>, {0x340, 1, 0, 0})
	SMember(FRigHierarchySettings)                     HierarchySettings                                           ___ OFFSET(get<T>, {0x344, 4, 0, 0})
	CMember(TMap<FRigElementKey, FRigControlElementCustomization>) ControlCustomizations                           ___ OFFSET(get<T>, {0x348, 80, 0, 0})
	CMember(URigHierarchy*)                            DynamicHierarchy                                            ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ShapeLibraries                                              ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    ShapeLibraryNameMap                                         ___ OFFSET(get<T>, {0x3B0, 80, 0, 0})
	CMember(UAnimationDataSourceRegistry*)             DataSourceRegistry                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FRigInfluenceMapPerEvent)                  Influences                                                  ___ OFFSET(get<T>, {0x4B0, 96, 0, 0})
	CMember(UControlRig*)                              InteractionRig                                              ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UClass*)                                   InteractionRigClass                                         ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnControlSelected_BP                                        ___ OFFSET(get<T>, {0x5F0, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UControlRigAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000390 - 0x000390)
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0160 (0x000570 - 0x0006D0)
class UControlRigComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(UClass*)                                   ControlRigClass                                             ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreInitializeDelegate                                     ___ OFFSET(get<T>, {0x570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostInitializeDelegate                                    ___ OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreConstructionDelegate                                   ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostConstructionDelegate                                  ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreForwardsSolveDelegate                                  ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostForwardsSolveDelegate                                 ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) UserDefinedElements                                         ___ OFFSET(get<T>, {0x5D0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) MappedElements                                              ___ OFFSET(get<T>, {0x5E0, 16, 0, 0})
	DMember(bool)                                      bEnableLazyEvaluation                                       ___ OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(float)                                     LazyEvaluationPositionThreshold                             ___ OFFSET(get<float>, {0x5F4, 4, 0, 0})
	DMember(float)                                     LazyEvaluationRotationThreshold                             ___ OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     LazyEvaluationScaleThreshold                                ___ OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(bool)                                      bResetTransformBeforeTick                                   ___ OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bResetInitialsBeforeConstruction                            ___ OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(bool)                                      bUpdateRigOnTick                                            ___ OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             ___ OFFSET(get<bool>, {0x603, 1, 0, 0})
	DMember(bool)                                      bDrawBones                                                  ___ OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(bool)                                      bShowDebugDrawing                                           ___ OFFSET(get<bool>, {0x605, 1, 0, 0})
	CMember(UControlRig*)                              ControlRig                                                  ___ OFFSET(get<T>, {0x608, 8, 0, 0})
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x00A8 (0x000290 - 0x000338)
class AControlRigControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(AActor*)                                   ActorToTrack                                                ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UClass*)                                   ControlRigClass                                             ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bRefreshOnTick                                              ___ OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      bIsSelectable                                               ___ OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride                                            ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FString)                                   ColorParameter                                              ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(bool)                                      bCastShadows                                                ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(USceneComponent*)                          ActorRootComponent                                          ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  ___ OFFSET(get<T>, {0x2D0, 32, 0, 0})
	CMember(TArray<FName>)                             ControlNames                                                ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<FTransform>)                        ShapeTransforms                                             ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Components                                                  ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Materials                                                   ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FName)                                     ColorParameterName                                          ___ OFFSET(get<T>, {0x330, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x00B0 (0x000290 - 0x000340)
class AControlRigShapeActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(USceneComponent*)                          ActorRootComponent                                          ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(uint32_t)                                  ControlRigIndex                                             ___ OFFSET(get<uint32_t>, {0x2A0, 4, 0, 0})
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  ___ OFFSET(get<T>, {0x2A4, 8, 0, 0})
	SMember(FName)                                     ControlName                                                 ___ OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FName)                                     ShapeName                                                   ___ OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FName)                                     ColorParameterName                                          ___ OFFSET(get<T>, {0x2B4, 4, 0, 0})
	DMember(bool)                                      bSelected                                                   ___ OFFSET(get<bool>, {0x330, 1, 1, 0})
	DMember(bool)                                      bHovered                                                    ___ OFFSET(get<bool>, {0x330, 1, 1, 1})
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0118 (0x000028 - 0x000140)
class UControlRigShapeLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FControlRigShapeDefinition)                DefaultShape                                                ___ OFFSET(get<T>, {0x30, 160, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                DefaultMaterial                                             ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                XRayMaterial                                                ___ OFFSET(get<T>, {0xF0, 32, 0, 0})
	SMember(FName)                                     MaterialColorParameter                                      ___ OFFSET(get<T>, {0x110, 4, 0, 0})
	CMember(TArray<FControlRigShapeDefinition>)        Shapes                                                      ___ OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigTestData
/// Size: 0x0120 (0x000028 - 0x000148)
class UControlRigTestData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FSoftObjectPath)                           ControlRigObjectPath                                        ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FControlRigTestDataFrame)                  Initial                                                     ___ OFFSET(get<T>, {0x40, 144, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          InputFrames                                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          OutputFrames                                                ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<int32_t>)                           FramesToSkip                                                ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(double)                                    Tolerance                                                   ___ OFFSET(get<double>, {0x100, 8, 0, 0})
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<UControlRigValidationPass*>)        Passes                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000610 - 0x000620)
class UAdditiveControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0040 (0x000610 - 0x000650)
class UFKControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(TArray<bool>)                              IsControlActive                                             ___ OFFSET(get<T>, {0x610, 16, 0, 0})
	CMember(EControlRigFKRigExecuteMode)               ApplyMode                                                   ___ OFFSET(get<T>, {0x620, 1, 0, 0})
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x0078 (0x000028 - 0x0000A0)
class URigHierarchyController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bReportWarningsAndErrors                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<URigHierarchy*>)            Hierarchy                                                   ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UControlRigLayerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UObject*>)                          Objects                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0278 (0x000158 - 0x0003D0)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(UControlRig*)                              ControlRig                                                  ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UClass*)                                   ControlRigClass                                             ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<bool>)                              ControlsMask                                                ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMovieSceneTransformMask)                  TransformMask                                               ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      ___ OFFSET(get<T>, {0x1C8, 272, 0, 0})
	CMember(TMap<FName, FChannelMapInfo>)              ControlChannelMap                                           ___ OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TArray<FEnumParameterNameAndCurve>)        EnumParameterNamesAndCurves                                 ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     IntegerParameterNamesAndCurves                              ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       SpaceChannels                                               ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       ConstraintsChannels                                         ___ OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x00B8 (0x000098 - 0x000150)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UControlRig*)                              ControlRig                                                  ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UMovieSceneSection*)                       SectionToKey                                                ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(TMap<FName, FControlRotationOrder>)        ControlsRotationOrder                                       ___ OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UControlRigSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ControlRig.ControlRigEditorSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UControlRigEditorSettings : public URigVMEditorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ControlRig.ControlRigPoseAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UControlRigPoseAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FControlRigControlPose)                    Pose                                                        ___ OFFSET(get<T>, {0x28, 96, 0, 0})
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UControlRigPoseMirrorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   RightSide                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   LeftSide                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigPoseProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FDirectoryPath>)                    RootSaveDirs                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(URigHierarchy*)                            Hierarchy                                                   ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Selection                                                   ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bCheckControls                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bCheckBones                                                 ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCheckCurves                                                ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     TranslationPrecision                                        ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationPrecision                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ScalePrecision                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CurvePrecision                                              ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     EventNameA                                                  ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     EventNameB                                                  ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigElementKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ERigElementType)                           Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FRigBaseElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FRigElementKey)                            Key                                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   NameString                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   CreatedAtInstructionIndex                                   ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bSelected                                                   ___ OFFSET(get<bool>, {0xDC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x01E0 (0x0000E0 - 0x0002C0)
class FRigTransformElement : public FRigBaseElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        ___ OFFSET(get<T>, {0xE0, 416, 0, 0})
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FRigCurrentAndInitialTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigLocalAndGlobalTransform)               Current                                                     ___ OFFSET(get<T>, {0x0, 208, 0, 0})
	SMember(FRigLocalAndGlobalTransform)               Initial                                                     ___ OFFSET(get<T>, {0xD0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FRigLocalAndGlobalTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigComputedTransform)                     Local                                                       ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FRigComputedTransform)                     Global                                                      ___ OFFSET(get<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigComputedTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigMultiParentElement
/// Size: 0x0100 (0x0002C0 - 0x0003C0)
class FRigMultiParentElement : public FRigTransformElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Struct /Script/ControlRig.RigControlElement
/// Size: 0x0530 (0x0003C0 - 0x0008F0)
class FRigControlElement : public FRigMultiParentElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FRigControlSettings)                       Settings                                                    ___ OFFSET(get<T>, {0x3C0, 432, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Offset                                                      ___ OFFSET(get<T>, {0x570, 416, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Shape                                                       ___ OFFSET(get<T>, {0x710, 416, 0, 0})
	SMember(FRigPreferredEulerAngles)                  PreferredEulerAngles                                        ___ OFFSET(get<T>, {0x8B0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigPreferredEulerAngles : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Current                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Initial                                                     ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x01B0 (0x000000 - 0x0001B0)
class FRigControlSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(ERigControlAnimationType)                  AnimationType                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TArray<FRigControlLimitEnabled>)           LimitEnabled                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                ___ OFFSET(get<T>, {0x24, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                ___ OFFSET(get<T>, {0xA8, 132, 0, 0})
	DMember(bool)                                      bShapeVisible                                               ___ OFFSET(get<bool>, {0x12C, 1, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             ___ OFFSET(get<T>, {0x12D, 1, 0, 0})
	SMember(FName)                                     ShapeName                                                   ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	SMember(FLinearColor)                              ShapeColor                                                  ___ OFFSET(get<T>, {0x134, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         ___ OFFSET(get<bool>, {0x144, 1, 0, 0})
	CMember(UEnum*)                                    ControlEnum                                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FRigControlElementCustomization)           Customization                                               ___ OFFSET(get<T>, {0x150, 32, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(bool)                                      bGroupWithParentControl                                     ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bRestrictSpaceSwitching                                     ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(EEulerRotationOrder)                       PreferredRotationOrder                                      ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bUsePreferredRotationOrder                                  ___ OFFSET(get<bool>, {0x1A9, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigControlElementCustomization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigElementKey>)                    AvailableSpaces                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    RemovedSpaces                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	SMember(FRigControlValueStorage)                   FloatStorage                                                ___ OFFSET(get<T>, {0x0, 132, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValueStorage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	DMember(float)                                     Float00                                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Float01                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Float02                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Float03                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Float10                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Float11                                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Float12                                                     ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Float13                                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Float20                                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Float21                                                     ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Float22                                                     ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Float23                                                     ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Float30                                                     ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Float31                                                     ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Float32                                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Float33                                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Float001                                                    ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Float011                                                    ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Float021                                                    ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Float031                                                    ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Float101                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Float111                                                    ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Float121                                                    ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Float131                                                    ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Float201                                                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Float211                                                    ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     Float221                                                    ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Float231                                                    ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Float301                                                    ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Float311                                                    ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Float321                                                    ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Float331                                                    ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigControlLimitEnabled : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bMinimum                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bMaximum                                                    ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigInfluenceMapPerEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigInfluenceMap>)                  Maps                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      EventToIndex                                                ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
class FRigInfluenceMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     EventName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FRigInfluenceEntry>)                Entries                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FRigElementKey, int32_t>)             KeyToIndex                                                  ___ OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigInfluenceEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Source                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    AffectedList                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigHierarchySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ProceduralElementLimit                                      ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0140 (0x000008 - 0x000148)
class FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bAdditive                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bApplyBoneFilter                                            ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	SMember(FInputBlendPose)                           BoneFilter                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      ___ OFFSET(get<T>, {0x20, 272, 0, 0})
	SMember(FMovieSceneEvaluationOperand)              Operand                                                     ___ OFFSET(get<T>, {0x130, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigTransformStackEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRigElementKey)                            Key                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<ERigTransformStackEntryType>)  EntryType                                                   ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FTransform)                                OldTransform                                                ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                NewTransform                                                ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(bool)                                      bAffectChildren                                             ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TArray<FString>)                           Callstack                                                   ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSingleParentElement
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class FRigSingleParentElement : public FRigTransformElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Struct /Script/ControlRig.RigElementWeight
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigElementWeight : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Location                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Rotation                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigElementParentConstraint
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigElementParentConstraint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/ControlRig.RigBoneElement
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class FRigBoneElement : public FRigSingleParentElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Struct /Script/ControlRig.RigNullElement
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class FRigNullElement : public FRigMultiParentElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Struct /Script/ControlRig.RigCurveElement
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class FRigCurveElement : public FRigBaseElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Struct /Script/ControlRig.RigRigidBodySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigRigidBodySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigRigidBodyElement
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class FRigRigidBodyElement : public FRigSingleParentElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Struct /Script/ControlRig.RigReferenceElement
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class FRigReferenceElement : public FRigSingleParentElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
/// Size: 0x01E0 (0x000000 - 0x0001E0)
class FRigHierarchyCopyPasteContentPerElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKey)                            Key                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Content                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FRigElementWeight>)                 ParentWeights                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        ___ OFFSET(get<T>, {0x40, 416, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigHierarchyCopyPasteContent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigHierarchyCopyPasteContentPerElement>) Elements                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<ERigElementType>)                   Types                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Contents                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        LocalTransforms                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        GlobalTransforms                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0060 (0x0000F0 - 0x000150)
class FControlRigExecuteContext : public FRigVMExecuteContext
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_DebugBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnitMutable : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_DebugBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HighlevelBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FStructReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x01D8 (0x000058 - 0x000230)
class FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FPoseLink)                                 Source                                                      ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bResetInputPoseToInitial                                    ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bTransferInputPose                                          ___ OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bTransferInputCurves                                        ___ OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bTransferPoseInGlobalSpace                                  ___ OFFSET(get<bool>, {0x6B, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    InputBonesToTransfer                                        ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    OutputBonesToTransfer                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TWeakObjectPtr<UNodeMappingContainer*>)    NodeMappingContainer                                        ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FControlRigIOSettings)                     InputSettings                                               ___ OFFSET(get<T>, {0x208, 2, 0, 0})
	SMember(FControlRigIOSettings)                     OutputSettings                                              ___ OFFSET(get<T>, {0x20A, 2, 0, 0})
	DMember(bool)                                      bExecute                                                    ___ OFFSET(get<bool>, {0x20C, 1, 0, 0})
	CMember(TArray<FControlRigAnimNodeEventName>)      EventQueue                                                  ___ OFFSET(get<T>, {0x218, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0004 (0x000000 - 0x000004)
class FControlRigAnimNodeEventName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     EventName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRigIOSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUpdatePose                                                 ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUpdateCurves                                               ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0230 (0x000230 - 0x000460)
class FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(UClass*)                                   ControlRigClass                                             ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UControlRig*)                              ControlRig                                                  ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              ___ OFFSET(get<T>, {0x244, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           ___ OFFSET(get<bool>, {0x245, 1, 1, 0})
	DMember(bool)                                      bSetRefPoseFromSkeleton                                     ___ OFFSET(get<bool>, {0x245, 1, 1, 1})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              ___ OFFSET(get<T>, {0x248, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              ___ OFFSET(get<T>, {0x250, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              ___ OFFSET(get<T>, {0x298, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         ___ OFFSET(get<T>, {0x29C, 48, 0, 0})
	CMember(TMap<FName, FName>)                        InputMapping                                                ___ OFFSET(get<T>, {0x2D0, 80, 0, 0})
	CMember(TMap<FName, FName>)                        OutputMapping                                               ___ OFFSET(get<T>, {0x320, 80, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                ___ OFFSET(get<int32_t>, {0x420, 4, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000230 - 0x000238)
class FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  ___ OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A0 (0x000700 - 0x0007A0)
class FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FControlRigComponentMappedElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSoftComponentReference)                   ComponentReference                                          ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	DMember(int32_t)                                   TransformIndex                                              ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FName)                                     TransformName                                               ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FName)                                     ElementName                                                 ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FTransform)                                Offset                                                      ___ OFFSET(get<T>, {0x60, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(EControlRigComponentSpace)                 Space                                                       ___ OFFSET(get<T>, {0xC4, 1, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(int32_t)                                   ElementIndex                                                ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedComponent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USceneComponent*)                          Component                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ElementName                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   ___ OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigComponentMappedBone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Source                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Target                                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigComponentMappedCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Source                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Target                                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlShapeActorCreationParam
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FControlShapeActorCreationParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Struct /Script/ControlRig.ControlRigShapeDefinition
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FControlRigShapeDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ShapeName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              StaticMesh                                                  ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigTestDataVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     CPPType                                                     ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataFrame
/// Size: 0x0090 (0x000000 - 0x000090)
class FControlRigTestDataFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(double)                                    AbsoluteTime                                                ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    DeltaTime                                                   ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(TArray<FControlRigTestDataVariable>)       Variables                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FRigPoseElement>)                   Elements                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   HierarchyTopologyVersion                                    ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PoseHash                                                    ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigPoseElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FCachedRigElement)                         Index                                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FCachedRigElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Key                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  Index                                                       ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(int32_t)                                   ContainerVersion                                            ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
class FControlRigValidationContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FCRSimContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeStep                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AccumulatedTime                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TimeLeftForStep                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
class FCRSimLinearSpring : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SubjectA                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Coefficient                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Equilibrium                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0040 (0x000000 - 0x000040)
class FCRSimPointConstraint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ECRSimConstraintType)                      Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SubjectA                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   DataA                                                       ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   DataB                                                       ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
class FCRSimPointContainer : public FCRSimContainer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Springs                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCRSimPointConstraint>)             Constraints                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FRigVMSimPoint>)                    PreviousStep                                                ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0080 (0x000000 - 0x000080)
class FCRSimSoftCollision : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(ECRSimSoftCollisionType)                   ShapeType                                                   ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(float)                                     MinimumDistance                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaximumDistance                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      FalloffType                                                 ___ OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(float)                                     Coefficient                                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bInverted                                                   ___ OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0028 (0x000000 - 0x000028)
class FCRSimPointForce : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ECRSimPointForceType)                      ForceType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Coefficient                                                 ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x0140 (0x000000 - 0x000140)
class FConstraintNodeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                RelativeParent                                              ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FConstraintOffset)                         ConstraintOffset                                            ___ OFFSET(get<T>, {0x60, 192, 0, 0})
	SMember(FName)                                     LinkedNode                                                  ___ OFFSET(get<T>, {0x120, 4, 0, 0})
	CMember(TArray<FTransformConstraint>)              Constraints                                                 ___ OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
class FAnimationHierarchy : public FNodeHierarchyWithUserData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FConstraintNodeData>)               UserData                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x0150 (0x000010 - 0x000160)
class FRigBone : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     ParentName                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0xE0, 96, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(ERigBoneType)                              Type                                                        ___ OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigBoneHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigBone>)                          Bones                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x0330 (0x000010 - 0x000340)
class FRigControl : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(ERigControlType)                           ControlType                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     ParentName                                                  ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FName)                                     SpaceName                                                   ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SpaceIndex                                                  ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FRigControlValue)                          InitialValue                                                ___ OFFSET(get<T>, {0x90, 132, 0, 0})
	SMember(FRigControlValue)                          Value                                                       ___ OFFSET(get<T>, {0x114, 132, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    ___ OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(bool)                                      bAnimatable                                                 ___ OFFSET(get<bool>, {0x19A, 1, 0, 0})
	DMember(bool)                                      bLimitTranslation                                           ___ OFFSET(get<bool>, {0x19B, 1, 0, 0})
	DMember(bool)                                      bLimitRotation                                              ___ OFFSET(get<bool>, {0x19C, 1, 0, 0})
	DMember(bool)                                      bLimitScale                                                 ___ OFFSET(get<bool>, {0x19D, 1, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0x19E, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                ___ OFFSET(get<T>, {0x1A0, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                ___ OFFSET(get<T>, {0x224, 132, 0, 0})
	DMember(bool)                                      bGizmoEnabled                                               ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bGizmoVisible                                               ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	SMember(FName)                                     GizmoName                                                   ___ OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FTransform)                                GizmoTransform                                              ___ OFFSET(get<T>, {0x2B0, 96, 0, 0})
	SMember(FLinearColor)                              GizmoColor                                                  ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         ___ OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(UEnum*)                                    ControlEnum                                                 ___ OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigControlHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigControl>)                       Controls                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000010 - 0x000018)
class FRigCurve : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigCurveContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigCurve>)                         Curves                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigHierarchyContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigBoneHierarchy)                         BoneHierarchy                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRigSpaceHierarchy)                        SpaceHierarchy                                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigControlHierarchy)                      ControlHierarchy                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FRigCurveContainer)                        CurveContainer                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigSpaceHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigSpace>)                         Spaces                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x00D0 (0x000010 - 0x0000E0)
class FRigSpace : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(ERigSpaceType)                             SpaceType                                                   ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     ParentName                                                  ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x80, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigHierarchyRef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigControlModifiedContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigElementKeyCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    Keys                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigEventContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigBaseMetadata
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigBaseMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        ___ OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigBoolMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigBoolArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<bool>)                              Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigFloatMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigFloatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<float>)                             Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigInt32Metadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigInt32ArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<int32_t>)                           Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigNameMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Value                                                       ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigNameArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigVectorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigVectorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigRotatorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Value                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigRotatorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRotator>)                          Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0020 (0x000020 - 0x000040)
class FRigQuatMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigQuatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FQuat>)                             Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0060 (0x000020 - 0x000080)
class FRigTransformMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigTransformArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FTransform>)                        Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigLinearColorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLinearColor)                              Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigLinearColorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FLinearColor>)                      Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigElementKeyMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Value                                                       ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigElementKeyArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRigElementKey>)                    Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigInfluenceEntryModifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    AffectedList                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
class FAnimNode_ControlRigInputPose : public FAnimNode_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPoseLink)                                 InputPose                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x000700 - 0x0007A0)
class FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigSequenceObjectReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UClass*)                                   ControlRigClass                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigSequenceObjectReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FControlRigSequenceObjectReference>) Array                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FControlRigSequenceObjectReferenceMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGuid>)                             BindingIds                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FControlRigSequenceObjectReferences>) References                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
class FEnumParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneByteChannel)                    ParameterCurve                                              ___ OFFSET(get<T>, {0x8, 264, 0, 0})
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
class FIntegerParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 ParameterCurve                                              ___ OFFSET(get<T>, {0x8, 256, 0, 0})
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (0x000000 - 0x000118)
class FSpaceControlNameAndChannel : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     ControlName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneControlRigSpaceChannel)         SpaceCurve                                                  ___ OFFSET(get<T>, {0x8, 272, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneControlRigSpaceBaseKey>) KeyValues                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneControlRigSpaceBaseKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EMovieSceneControlRigSpaceType)            SpaceType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FRigElementKey)                            ControlRigElement                                           ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FChannelMapInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ControlIndex                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalChannelIndex                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ParentControlIndex                                          ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     ChannelTypeName                                             ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDoesHaveSpace                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(int32_t)                                   SpaceChannelIndex                                           ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaskIndex                                                   ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CategoryIndex                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<uint32_t>)                          ConstraintsIndex                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0040 (0x000080 - 0x0000C0)
class FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FEnumParameterNameAndCurve>)        Enums                                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     Integers                                                    ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       Spaces                                                      ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       Constraints                                                 ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRotationOrder
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRotationOrder : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOverrideSetting                                            ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
class FControlRigSettingsPerPinBool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, bool>)                       Values                                                      ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x0230 (0x000000 - 0x000230)
class FRigControlCopy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FRigControlValue)                          Value                                                       ___ OFFSET(get<T>, {0x18, 132, 0, 0})
	SMember(FRigElementKey)                            ParentKey                                                   ___ OFFSET(get<T>, {0x9C, 8, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             ___ OFFSET(get<T>, {0xB0, 96, 0, 0})
	SMember(FTransform)                                ParentTransform                                             ___ OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (0x000000 - 0x000060)
class FControlRigControlPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigControlCopy>)                   CopyOfControls                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigDispatchFactory
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatchFactory : public FRigVMDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ControlRig.RigDispatch_AnimAttributeBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigDispatch_GetAnimAttribute
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigDispatch_SetAnimAttribute
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigUnit_SphereTraceWorld : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Start                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bHit                                                        ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Start                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bHit                                                        ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Start                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ObjectTypes                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bHit                                                        ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   ___ OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x0178 (0x000008 - 0x000180)
class FRigUnit_Control : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FEulerTransform)                           Transform                                                   ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                base                                                        ___ OFFSET(get<T>, {0x50, 96, 0, 0})
	SMember(FTransform)                                InitTransform                                               ___ OFFSET(get<T>, {0xB0, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x170, 9, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x179, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0060 (0x000180 - 0x0001E0)
class FRigUnit_Control_StaticMesh : public FRigUnit_Control
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FTransform)                                MeshTransform                                               ___ OFFSET(get<T>, {0x180, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigDispatch_GetUserData
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatch_GetUserData : public FRigDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ControlRig.RigUnit_SetupShapeLibraryFromUserData
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetupShapeLibraryFromUserData : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FString)                                   Namespace                                                   ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   Path                                                        ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   LibraryName                                                 ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      ReplaceExisting                                             ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      LogShapeLibraries                                           ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ShapeExists
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ShapeExists : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ShapeName                                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	DMember(float)                                     MinimumU                                                    ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x180, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	DMember(float)                                     MinimumU                                                    ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x01E8 (0x000008 - 0x0001F0)
class FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x164, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x0258 (0x000008 - 0x000260)
class FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x160, 112, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1D4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1E4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x1A4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x1A4, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FVector>)                           Points                                                      ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x184, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FVector>)                           Points                                                      ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x184, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x1D8, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x1E4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x1E4, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_DebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x74, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x90, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x1DC, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x160, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x1C4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x1DC, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_DebugTransformArrayMutable_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        DrawTransforms                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00B0 (0x000160 - 0x000210)
class FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x174, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x18C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	SMember(FRigUnit_DebugTransformArrayMutable_WorkData) WorkData                                                 ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x184, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x19C, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   NumberOfMeasurements                                        ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FString)                                   Prefix                                                      ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     AccumulatedTime                                             ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   MeasurementsLeft                                            ___ OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x7C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigUnit_ConvertTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FTransform)                                Input                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FEulerTransform)                           Result                                                      ___ OFFSET(get<T>, {0x70, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_ConvertEulerTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           Input                                                       ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ConvertRotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Input                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000040 - 0x000040)
class FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ConvertQuaternion : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FRotator)                                  Result                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ConvertVectorToRotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Input                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Result                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Input                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ConvertRotationToVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Input                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ConvertQuaternionToVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_ToSwingAndTwist : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FQuat)                                     Input                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Swing                                                       ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Twist                                                       ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_BinaryFloatOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Argument0                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Argument1                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Clamp_Float : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     min                                                         ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     max                                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MapRange_Float : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinIn                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxIn                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinOut                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxOut                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_BinaryQuaternionOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Argument0                                                   ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Argument1                                                   ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_UnaryQuaternionOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Argument                                                    ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Argument                                                    ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_QuaternionToAngle : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Argument                                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigUnit_BinaryTransformOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Argument0                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Argument1                                                   ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x000130 - 0x000130)
class FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x000130 - 0x000130)
class FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_BinaryVectorOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Argument0                                                   ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Argument1                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_Distance_VectorVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Argument0                                                   ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Argument1                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0090 (0x000000 - 0x000090)
class FAimTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   AlignVector                                                 ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_AimConstraint_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_AimConstraint : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     Joint                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(EAimMode)                                  AimMode                                                     ___ OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(EAimMode)                                  UpMode                                                      ___ OFFSET(get<T>, {0x165, 1, 0, 0})
	SMember(FVector)                                   AimVector                                                   ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   UpVector                                                    ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	CMember(TArray<FAimTarget>)                        AimTargets                                                  ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<FAimTarget>)                        UpTargets                                                   ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_WorkData)           WorkData                                                    ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_ApplyFK : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     Joint                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x1D0, 9, 0, 0})
	CMember(EApplyTransformMode)                       ApplyTransformMode                                          ___ OFFSET(get<T>, {0x1D9, 1, 0, 0})
	CMember(ETransformSpaceMode)                       ApplyTransformSpace                                         ___ OFFSET(get<T>, {0x1DA, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
	SMember(FName)                                     BaseJoint                                                   ___ OFFSET(get<T>, {0x240, 4, 0, 0})
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FBlendTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_BlendTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                Source                                                      ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(TArray<FBlendTarget>)                      Targets                                                     ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x80, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00E0 (0x000160 - 0x000240)
class FRigUnit_GetJointTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     Joint                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(ETransformGetterType)                      Type                                                        ___ OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(ETransformSpaceMode)                       TransformSpace                                              ___ OFFSET(get<T>, {0x165, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FName)                                     BaseJoint                                                   ___ OFFSET(get<T>, {0x1D0, 4, 0, 0})
	SMember(FTransform)                                Output                                                      ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0310 (0x000160 - 0x000470)
class FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FName)                                     StartJoint                                                  ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndJoint                                                    ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FVector)                                   PoleTarget                                                  ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	DMember(float)                                     Spin                                                        ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FTransform)                                EndEffector                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(float)                                     IKBlend                                                     ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FTransform)                                StartJointFKTransform                                       ___ OFFSET(get<T>, {0x200, 96, 0, 0})
	SMember(FTransform)                                MidJointFKTransform                                         ___ OFFSET(get<T>, {0x260, 96, 0, 0})
	SMember(FTransform)                                EndJointFKTransform                                         ___ OFFSET(get<T>, {0x2C0, 96, 0, 0})
	DMember(float)                                     PreviousFKIKBlend                                           ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	SMember(FTransform)                                StartJointIKTransform                                       ___ OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FTransform)                                MidJointIKTransform                                         ___ OFFSET(get<T>, {0x390, 96, 0, 0})
	SMember(FTransform)                                EndJointIKTransform                                         ___ OFFSET(get<T>, {0x3F0, 96, 0, 0})
	DMember(int32_t)                                   StartJointIndex                                             ___ OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	DMember(int32_t)                                   MidJointIndex                                               ___ OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   EndJointIndex                                               ___ OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(float)                                     UpperLimbLength                                             ___ OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(float)                                     LowerLimbLength                                             ___ OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x464, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_DrawContainerGetInstruction : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     InstructionName                                             ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0xC, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     InstructionName                                             ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x164, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     InstructionName                                             ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x164, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     InstructionName                                             ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_BeginExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_CollectionBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            FirstItem                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Reverse                                                     ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            FirstItem                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Reverse                                                     ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PartialName                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PartialName                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                ___ OFFSET(get<T>, {0x12, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                ___ OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERigElementType)                           TypeToSearch                                                ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     New                                                         ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     New                                                         ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Reversed                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0180 (0x000160 - 0x0002E0)
class FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FName)                                     BlockToRun                                                  ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x184, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   ___ OFFSET(get<T>, {0x190, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FRigElementKeyCollection)                  Result                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_DynamicHierarchyBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_AddParent
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(ERigSwitchParentMode)                      Mode                                                        ___ OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x164, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x16C, 8, 0, 0})
	DMember(bool)                                      bMaintainGlobal                                             ___ OFFSET(get<bool>, {0x174, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     ___ OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyReset
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Namespace                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      bIncludeCurves                                              ___ OFFSET(get<bool>, {0x164, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bSuccess                                                    ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x16C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControl_Settings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_HierarchyAddControl_ShapeSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bVisible                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_HierarchyAddControl_ProxySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsProxy                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlFloat_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_LimitSettings) Limits                                                ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x30, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlElement
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                OffsetTransform                                             ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      OffsetSpace                                                 ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x00D0 (0x0001F0 - 0x0002C0)
class FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     InitialValue                                                ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_Settings) Settings                                                   ___ OFFSET(get<T>, {0x1F0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlInteger_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(int32_t)                                   MinValue                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_LimitSettings) Limits                                              ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x30, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x00D0 (0x0001F0 - 0x0002C0)
class FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(int32_t)                                   InitialValue                                                ___ OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_Settings) Settings                                                 ___ OFFSET(get<T>, {0x1F0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_HierarchyAddControlVector2D_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      ___ OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FVector2D)                                 MinValue                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 MaxValue                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x00F0 (0x000010 - 0x000100)
class FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_LimitSettings) Limits                                             ___ OFFSET(get<T>, {0x18, 48, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x50, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x0110 (0x0001F0 - 0x000300)
class FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FVector2D)                                 InitialValue                                                ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_Settings) Settings                                                ___ OFFSET(get<T>, {0x200, 256, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_HierarchyAddControlVector_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      ___ OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitZ                                                      ___ OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FVector)                                   MinValue                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MaxValue                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
class FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsPosition                                                 ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_LimitSettings) Limits                                               ___ OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x60, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x0120 (0x0001F0 - 0x000310)
class FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FVector)                                   InitialValue                                                ___ OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_Settings) Settings                                                  ___ OFFSET(get<T>, {0x200, 272, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_HierarchyAddControlRotator_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigControlLimitEnabled)                   LimitPitch                                                  ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitYaw                                                    ___ OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitRoll                                                   ___ OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FRotator)                                  MinValue                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  MaxValue                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
class FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlRotator_LimitSettings) Limits                                              ___ OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x60, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x0120 (0x0001F0 - 0x000310)
class FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FRotator)                                  InitialValue                                                ___ OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FRigUnit_HierarchyAddControlRotator_Settings) Settings                                                 ___ OFFSET(get<T>, {0x200, 272, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      ___ OFFSET(get<T>, {0x20, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x0130 (0x0001F0 - 0x000320)
class FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FTransform)                                InitialValue                                                ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	SMember(FRigUnit_HierarchyAddControlTransform_Settings) Settings                                               ___ OFFSET(get<T>, {0x250, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
/// Size: 0x0000 (0x000180 - 0x000180)
class FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
/// Size: 0x0010 (0x000180 - 0x000190)
class FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(float)                                     InitialValue                                                ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     MinimumValue                                                ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                ___ OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0010 (0x000180 - 0x000190)
class FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(int32_t)                                   InitialValue                                                ___ OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   MinimumValue                                                ___ OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   MaximumValue                                                ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0030 (0x000180 - 0x0001B0)
class FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector2D)                                 InitialValue                                                ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FVector2D)                                 MinimumValue                                                ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FVector2D)                                 MaximumValue                                                ___ OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x0040 (0x000180 - 0x0001C0)
class FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FVector)                                   InitialValue                                                ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   MinimumValue                                                ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FVector)                                   MaximumValue                                                ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x0040 (0x000180 - 0x0001C0)
class FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRotator)                                  InitialValue                                                ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FRotator)                                  MinimumValue                                                ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FRotator)                                  MaximumValue                                                ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   ___ OFFSET(get<T>, {0x10, 128, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetShapeSettings
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   ___ OFFSET(get<T>, {0x170, 128, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HierarchyBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeChild                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeChild                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Children                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedChildren                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeItem                                                ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Siblings                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeItem                                                ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Siblings                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToGet                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToGet                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x160, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1D1, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToSet                                                  ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x160, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1D1, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToSet                                                  ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	DMember(bool)                                      IsEmpty                                                     ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0120 (0x000008 - 0x000128)
class FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FRigPose)                                  PoseA                                                       ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FRigPose)                                  PoseB                                                       ___ OFFSET(get<T>, {0x78, 112, 0, 0})
	DMember(float)                                     PositionThreshold                                           ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RotationThreshold                                           ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     ScaleThreshold                                              ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     CurveThreshold                                              ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 ___ OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xF9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToCompare                                              ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      PosesAreEqual                                               ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsWithDelta                                              ___ OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      Valid                                                       ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x90, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      ___ OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              ___ OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      Valid                                                       ___ OFFSET(get<bool>, {0x79, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FName)                                     Curve                                                       ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	DMember(bool)                                      Valid                                                       ___ OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(float)                                     CurveValue                                                  ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      ___ OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x02A0 (0x000160 - 0x000400)
class FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FName)                                     BlockToRun                                                  ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigPose)                                  Pose                                                        ___ OFFSET(get<T>, {0x168, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             ___ OFFSET(get<T>, {0x1E0, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x240, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   ___ OFFSET(get<T>, {0x2B0, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_InteractionExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_InverseExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_IsInteracting : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsInteracting                                              ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsTranslating                                              ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bIsRotating                                                 ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bIsScaling                                                  ___ OFFSET(get<bool>, {0xB, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_ItemBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x000160 - 0x000160)
class FRigUnit_ItemBaseMutable : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ItemExists : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      Exists                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemReplace : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Old                                                         ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     New                                                         ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FRigElementKey)                            Result                                                      ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemToName
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_ItemToName : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Value                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Result                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_PrepareForExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x0698 (0x000008 - 0x0006A0)
class FRigUnit_SequenceExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 A                                                           ___ OFFSET(get<T>, {0x160, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 B                                                           ___ OFFSET(get<T>, {0x2B0, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 C                                                           ___ OFFSET(get<T>, {0x400, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 D                                                           ___ OFFSET(get<T>, {0x550, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_AddBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPostMultiply                                               ___ OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D5, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_Item : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemArray
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_ItemArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_BoneName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_SpaceName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ControlName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_GetAnimationChannelBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Channel                                                     ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            CachedChannelKey                                            ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(int32_t)                                   CachedChannelHash                                           ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector2D)                                 Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Value                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0060 (0x000020 - 0x000080)
class FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x0150 (0x000020 - 0x000170)
class FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              ___ OFFSET(get<T>, {0x20, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x170, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x170, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FVector2D)                                 Value                                                       ___ OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0020 (0x000170 - 0x000190)
class FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0020 (0x000170 - 0x000190)
class FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRotator)                                  Value                                                       ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x0060 (0x000170 - 0x0001D0)
class FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	DMember(bool)                                      bFirstUpdate                                                ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetControlInitialTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetControlBool : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlFloat : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlInteger : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_GetControlVector2D : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Minimum                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlRotator : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  Minimum                                                     ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Maximum                                                     ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x0148 (0x000008 - 0x000150)
class FRigUnit_GetControlTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Minimum                                                     ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Maximum                                                     ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x130, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetCurveValue : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Curve                                                       ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      Valid                                                       ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetInitialBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_GetRelativeBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedSpace                                                 ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_GetRelativeTransformForItem : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bChildInitial                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x98, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetSpaceTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_GetTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x80, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformItemArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigDispatch_MetadataBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class FRigDispatch_MetadataBase : public FRigDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigDispatch_GetMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigDispatch_SetMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadata
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RemoveMetadata : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(bool)                                      Removed                                                     ___ OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      Removed                                                     ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HasMetadata : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      Found                                                       ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_FindItemsWithMetadata : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetMetadataTags : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMetadataTag : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(bool)                                      Removed                                                     ___ OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HasMetadataTag : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      Found                                                       ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_HasMetadataTagArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      Found                                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Inclusive                                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndices                                               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FRigElementKey)                            Subject                                                     ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 ___ OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      Switched                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               ___ OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              ___ OFFSET(get<T>, {0x290, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FRigElementKey)                            Subject                                                     ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 ___ OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      Switched                                                    ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               ___ OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              ___ OFFSET(get<T>, {0x290, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_ProjectTransformToNewParent : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bChildInitial                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            OldParent                                                   ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      bOldParentInitial                                           ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FRigElementKey)                            NewParent                                                   ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bNewParentInitial                                           ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedOldParent                                             ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedNewParent                                             ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_PropagateTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bRecomputeGlobal                                            ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      bApplyToChildren                                            ___ OFFSET(get<bool>, {0x169, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  ___ OFFSET(get<bool>, {0x16A, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SendEvent : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(ERigEvent)                                 Event                                                       ___ OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x164, 8, 0, 0})
	DMember(float)                                     OffsetInSeconds                                             ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(bool)                                      bEnable                                                     ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      bOnlyDuringInteraction                                      ___ OFFSET(get<bool>, {0x171, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x231, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x238, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SetBoneRotation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x170, 32, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_SetBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x240, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetBoneTranslation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   Translation                                                 ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x188, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlColor : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0xC, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlColor : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x164, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlDrivenList : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlDrivenList : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetControlOffset : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Offset                                                      ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetShapeTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetShapeTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetControlBool : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   ___ OFFSET(get<bool>, {0x164, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlBool_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetMultiControlBool : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FRigUnit_SetMultiControlBool_Entry>) Entries                                                    ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlFloat : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlFloat_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlFloat_Entry>) Entries                                                   ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlInteger : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   Weight                                                      ___ OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                ___ OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlInteger_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlInteger_Entry>) Entries                                                 ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlVector2D : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigUnit_SetMultiControlVector2D_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlVector2D_Entry>) Entries                                                ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetControlVector : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x188, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetControlRotator : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x188, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_SetMultiControlRotator_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlRotator_Entry>) Entries                                                 ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetControlTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlVisibility : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlVisibility : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FString)                                   Pattern                                                     ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bVisible                                                    ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetCurveValue : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Curve                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            ___ OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00B0 (0x000160 - 0x000210)
class FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            ___ OFFSET(get<T>, {0x1F0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x200, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x194, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x180, 32, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                ___ OFFSET(get<T>, {0x1C0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     SpaceName                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            ___ OFFSET(get<T>, {0x238, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetSpaceTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetTranslation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x18C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetRotation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x170, 32, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x194, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x198, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetScale : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x18C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 ___ OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetTransformArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x171, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x18C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 ___ OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetTransformItemArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    ___ OFFSET(get<bool>, {0x171, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x18C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 ___ OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_UnsetCurveValue : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Curve                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            ___ OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_ToWorldSpace_Transform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                World                                                       ___ OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_ToRigSpace_Transform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Global                                                      ___ OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ToWorldSpace_Location : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   World                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ToRigSpace_Location : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Global                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     World                                                       ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToRigSpace_Rotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Global                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_BoneHarmonics_BoneTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_Harmonics_TargetItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_BoneHarmonics_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   WaveTime                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigUnit_BoneHarmonics_BoneTarget>) Bones                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  ___ OFFSET(get<T>, {0x1B8, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 ___ OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x1F4, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1F5, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigUnit_Harmonics_TargetItem>)     Targets                                                     ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  ___ OFFSET(get<T>, {0x1B8, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 ___ OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x1F4, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_ChainHarmonics_Reach : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   ReachTarget                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   ReachAxis                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     ReachMinimum                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ReachMaximum                                                ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      ReachEase                                                   ___ OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0078 (0x000000 - 0x000078)
class FRigUnit_ChainHarmonics_Wave : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     WaveMinimum                                                 ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigUnit_ChainHarmonics_Pendulum : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     PendulumStiffness                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   PendulumGravity                                             ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     PendulumBlend                                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PendulumDrag                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     PendulumMinimum                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     PendulumMaximum                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      PendulumEase                                                ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   UnwindAxis                                                  ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     UnwindMinimum                                               ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     UnwindMaximum                                               ___ OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_ChainHarmonics_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Time                                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 Items                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             Ratio                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           LocalTip                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumTip                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumPosition                                            ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumVelocity                                            ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FVector>)                           HierarchyLine                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FVector>)                           VelocityLines                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x02D0 (0x000160 - 0x000430)
class FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FName)                                     ChainRoot                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   Speed                                                       ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       ___ OFFSET(get<T>, {0x180, 72, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        ___ OFFSET(get<T>, {0x1C8, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   ___ OFFSET(get<T>, {0x240, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    ___ OFFSET(get<T>, {0x2C8, 88, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             ___ OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    ___ OFFSET(get<T>, {0x390, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x02D0 (0x000160 - 0x000430)
class FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FRigElementKey)                            ChainRoot                                                   ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FVector)                                   Speed                                                       ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       ___ OFFSET(get<T>, {0x180, 72, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        ___ OFFSET(get<T>, {0x1C8, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   ___ OFFSET(get<T>, {0x240, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    ___ OFFSET(get<T>, {0x2C8, 88, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             ___ OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    ___ OFFSET(get<T>, {0x390, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_AimBone_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_AimItem_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_AimBone_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0218 (0x000008 - 0x000220)
class FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FTransform)                                InputTransform                                              ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     ___ OFFSET(get<T>, {0x70, 72, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   ___ OFFSET(get<T>, {0xB8, 72, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               ___ OFFSET(get<T>, {0x170, 112, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0150 (0x000160 - 0x0002B0)
class FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Primary                                                     ___ OFFSET(get<T>, {0x168, 64, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Secondary                                                   ___ OFFSET(get<T>, {0x1A8, 64, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1EC, 1, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               ___ OFFSET(get<T>, {0x1F0, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneIndex                                             ___ OFFSET(get<T>, {0x260, 24, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          ___ OFFSET(get<T>, {0x278, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        ___ OFFSET(get<T>, {0x290, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0160 (0x000160 - 0x0002C0)
class FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     ___ OFFSET(get<T>, {0x168, 72, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   ___ OFFSET(get<T>, {0x1B0, 72, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               ___ OFFSET(get<T>, {0x200, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  ___ OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          ___ OFFSET(get<T>, {0x288, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_AimConstraint_WorldUp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       ___ OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_AimConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               ___ OFFSET(get<T>, {0x0, 112, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0150 (0x000160 - 0x0002B0)
class FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	SMember(FVector)                                   AimAxis                                                     ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   UpAxis                                                      ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FRigUnit_AimConstraint_WorldUp)            WorldUp                                                     ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_AdvancedSettings)   AdvancedSettings                                            ___ OFFSET(get<T>, {0x1E0, 128, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x260, 4, 0, 0})
	SMember(FCachedRigElement)                         WorldUpSpaceCache                                           ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  ___ OFFSET(get<T>, {0x280, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x000C (0x000000 - 0x00000C)
class FConstraintParent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_CCDIK_RotationLimit : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Limit                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_CCDIK_RotationLimitPerItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Limit                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigUnit_CCDIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCCDIKChainLink>)                   Chain                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           RotationLimitIndex                                          ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             RotationLimitsPerItem                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              ___ OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimit>)      RotationLimits                                              ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    ___ OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              ___ OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    ___ OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              ___ OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    ___ OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_DistributeRotation_Rotation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_DistributeRotation_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x178, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x180, 1, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    ___ OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    ___ OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    ___ OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigUnit_FABRIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFABRIKChainLink>)                  Chain                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    ___ OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       ___ OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    ___ OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       ___ OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    ___ OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       ___ OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_FitChainToCurve_Rotation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_FitChainToCurve_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              CurveColor                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              SegmentsColor                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_FitChainToCurve_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     ChainLength                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FVector>)                           ItemPositions                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FVector>)                           CurvePositions                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             CurveSegments                                               ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0210 (0x000160 - 0x000370)
class FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x168, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   ___ OFFSET(get<T>, {0x1C8, 1, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           ___ OFFSET(get<int32_t>, {0x1D4, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1F0, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          ___ OFFSET(get<T>, {0x208, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x240, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    ___ OFFSET(get<T>, {0x2D0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0220 (0x000160 - 0x000380)
class FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          ___ OFFSET(get<T>, {0x210, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x250, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    ___ OFFSET(get<T>, {0x2E0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x0220 (0x000160 - 0x000380)
class FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          ___ OFFSET(get<T>, {0x210, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            ___ OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x250, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    ___ OFFSET(get<T>, {0x2E0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_ModifyBoneTransforms_PerBone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_ModifyTransforms_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_ModifyBoneTransforms_PerBone>) BoneToModify                                            ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        ___ OFFSET(get<T>, {0x17C, 1, 0, 0})
	SMember(FRigUnit_ModifyBoneTransforms_WorkData)    WorkData                                                    ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_ModifyTransforms_PerItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_ModifyTransforms_PerItem>) ItemToModify                                                ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        ___ OFFSET(get<T>, {0x17C, 1, 0, 0})
	SMember(FRigUnit_ModifyTransforms_WorkData)        WorkData                                                    ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0068 (0x000000 - 0x000068)
class FRigUnit_MultiFABRIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_MultiFABRIK_EndEffector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     RootBone                                                    ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(TArray<FRigUnit_MultiFABRIK_EndEffector>)  Effectors                                                   ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x17C, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FRigUnit_MultiFABRIK_WorkData)             WorkData                                                    ___ OFFSET(get<T>, {0x188, 104, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_SlideChain_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     ChainLength                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FTransform>)                        BlendedTransforms                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(float)                                     SlideAmount                                                 ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x170, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x174, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x178, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x174, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x178, 72, 0, 0})
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (0x000000 - 0x000010)
class FRegionScaleFactors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PositiveWidth                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NegativeWidth                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PositiveHeight                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     NegativeHeight                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.SphericalRegion
/// Size: 0x0014 (0x000000 - 0x000014)
class FSphericalRegion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/ControlRig.SphericalPoseReaderDebugSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSphericalPoseReaderDebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDraw2D                                                     ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bDrawLocalAxes                                              ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     DebugScale                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DebugSegments                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     DebugThickness                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(float)                                     OutputParam                                                 ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FRigElementKey)                            DriverItem                                                  ___ OFFSET(get<T>, {0x164, 8, 0, 0})
	SMember(FVector)                                   DriverAxis                                                  ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   RotationOffset                                              ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	DMember(float)                                     ActiveRegionSize                                            ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FRegionScaleFactors)                       ActiveRegionScaleFactors                                    ___ OFFSET(get<T>, {0x1A4, 16, 0, 0})
	DMember(float)                                     FalloffSize                                                 ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FRegionScaleFactors)                       FalloffRegionScaleFactors                                   ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(bool)                                      FlipWidthScaling                                            ___ OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	DMember(bool)                                      FlipHeightScaling                                           ___ OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	SMember(FRigElementKey)                            OptionalParentItem                                          ___ OFFSET(get<T>, {0x1CC, 8, 0, 0})
	SMember(FSphericalPoseReaderDebugSettings)         Debug                                                       ___ OFFSET(get<T>, {0x1D4, 16, 0, 0})
	SMember(FSphericalRegion)                          InnerRegion                                                 ___ OFFSET(get<T>, {0x1E4, 20, 0, 0})
	SMember(FSphericalRegion)                          OuterRegion                                                 ___ OFFSET(get<T>, {0x1F8, 20, 0, 0})
	SMember(FVector)                                   DriverNormal                                                ___ OFFSET(get<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   Driver2D                                                    ___ OFFSET(get<T>, {0x228, 24, 0, 0})
	SMember(FCachedRigElement)                         DriverCache                                                 ___ OFFSET(get<T>, {0x240, 24, 0, 0})
	SMember(FCachedRigElement)                         OptionalParentCache                                         ___ OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FTransform)                                LocalDriverTransformInit                                    ___ OFFSET(get<T>, {0x270, 96, 0, 0})
	SMember(FVector)                                   CachedRotationOffset                                        ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	DMember(bool)                                      bCachedInitTransforms                                       ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_SpringIK_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FRigUnit_SpringIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FCachedRigElement>)                 CachedBones                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVector                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FCRSimPointContainer)                      Simulation                                                  ___ OFFSET(get<T>, {0x38, 120, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01B0 (0x000160 - 0x000310)
class FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(float)                                     HierarchyStrength                                           ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     EffectorStrength                                            ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     EffectorRatio                                               ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     RootStrength                                                ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     RootRatio                                                   ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Damping                                                     ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	DMember(bool)                                      bFlipPolePlane                                              ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              ___ OFFSET(get<T>, {0x199, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             ___ OFFSET(get<T>, {0x19C, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1B8, 24, 0, 0})
	DMember(bool)                                      bLiveSimulation                                             ___ OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  ___ OFFSET(get<int32_t>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1D9, 1, 0, 0})
	SMember(FRigUnit_SpringIK_DebugSettings)           DebugSettings                                               ___ OFFSET(get<T>, {0x1E0, 128, 0, 0})
	SMember(FRigUnit_SpringIK_WorkData)                WorkData                                                    ___ OFFSET(get<T>, {0x260, 176, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FConstraintTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x65, 9, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_TransformConstraint_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ConstraintDataToTargets                                     ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          ___ OFFSET(get<T>, {0x164, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FName)                                     BaseBone                                                    ___ OFFSET(get<T>, {0x1D0, 4, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       ___ OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FRigElementKey)                            BaseItem                                                    ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       ___ OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    ___ OFFSET(get<T>, {0x1F0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_ParentConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      ___ OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x169, 9, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FRigUnit_ParentConstraint_AdvancedSettings) AdvancedSettings                                           ___ OFFSET(get<T>, {0x188, 2, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_RotationConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      ___ OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         ___ OFFSET(get<T>, {0x180, 2, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x184, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         ___ OFFSET(get<T>, {0x180, 2, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      ___ OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_TwistBones_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             ItemRatios                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemTransforms                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     StartBone                                                   ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x1A8, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x1B0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_TwoBoneIKSimple_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x01C0 (0x000160 - 0x000320)
class FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FName)                                     BoneA                                                       ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     BoneB                                                       ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FTransform)                                Effector                                                    ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1E8, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         ___ OFFSET(get<float>, {0x200, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x208, 24, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             ___ OFFSET(get<T>, {0x224, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              ___ OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           ___ OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         ___ OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 ___ OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 ___ OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x250, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneAIndex                                            ___ OFFSET(get<T>, {0x2C0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneBIndex                                            ___ OFFSET(get<T>, {0x2D8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorBoneIndex                                     ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  ___ OFFSET(get<T>, {0x308, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x01D0 (0x000160 - 0x000330)
class FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FRigElementKey)                            ItemA                                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            ItemB                                                       ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FRigElementKey)                            EffectorItem                                                ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FTransform)                                Effector                                                    ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         ___ OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x218, 24, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(FRigElementKey)                            PoleVectorSpace                                             ___ OFFSET(get<T>, {0x234, 8, 0, 0})
	DMember(bool)                                      bEnableStretch                                              ___ OFFSET(get<bool>, {0x23C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         ___ OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     ItemALength                                                 ___ OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     ItemBLength                                                 ___ OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x254, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x260, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedItemAIndex                                            ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedItemBIndex                                            ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorItemIndex                                     ___ OFFSET(get<T>, {0x300, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  ___ OFFSET(get<T>, {0x318, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Root                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Effector                                                    ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bEnableStretch                                              ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVector)                                   Elbow                                                       ___ OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FTransform)                                Root                                                        ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FTransform)                                Effector                                                    ___ OFFSET(get<T>, {0x90, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              ___ OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FTransform)                                Elbow                                                       ___ OFFSET(get<T>, {0x140, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_PointSimulation_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawPointsAsSpheres                                        ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_PointSimulation_BoneTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TranslationPoint                                            ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   PrimaryAimPoint                                             ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SecondaryAimPoint                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
class FRigUnit_PointSimulation_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCRSimPointContainer)                      Simulation                                                  ___ OFFSET(get<T>, {0x0, 120, 0, 0})
	CMember(TArray<FCachedRigElement>)                 BoneIndices                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0210 (0x000100 - 0x000310)
class FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Links                                                       ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	DMember(float)                                     SimulatedStepsPerSecond                                     ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(ERigVMSimPointIntegrateType)               IntegratorType                                              ___ OFFSET(get<T>, {0x144, 1, 0, 0})
	DMember(float)                                     VerletBlend                                                 ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(TArray<FRigUnit_PointSimulation_BoneTarget>) BoneTargets                                               ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         ___ OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   PrimaryAimAxis                                              ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   SecondaryAimAxis                                            ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FRigUnit_PointSimulation_DebugSettings)    DebugSettings                                               ___ OFFSET(get<T>, {0x1A0, 128, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x220, 96, 0, 0})
	SMember(FRigUnit_PointSimulation_WorkData)         WorkData                                                    ___ OFFSET(get<T>, {0x280, 136, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Current                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Target                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 ___ OFFSET(get<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0090 (0x000008 - 0x000098)
class FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Current                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Stiffness                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 ___ OFFSET(get<T>, {0x60, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Target                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Force                                                       ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     Current                                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Velocity                                                    ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SimulatedResult                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 ___ OFFSET(get<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Force                                                       ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   Current                                                     ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   SimulatedResult                                             ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 ___ OFFSET(get<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Torque                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FQuat)                                     Current                                                     ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       ___ OFFSET(get<bool>, {0x84, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x90, 32, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FQuat)                                     SimulatedResult                                             ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FQuaternionSpringState)                    SpringState                                                 ___ OFFSET(get<T>, {0xF0, 64, 0, 0})
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x12
enum ERigElementType : uint8_t
{
	ERigElementType__None0                                                           = 0,
	ERigElementType__Bone1                                                           = 1,
	ERigElementType__Null2                                                           = 2,
	ERigElementType__Space3                                                          = 2,
	ERigElementType__Control4                                                        = 4,
	ERigElementType__Curve5                                                          = 8,
	ERigElementType__RigidBody6                                                      = 16,
	ERigElementType__Reference7                                                      = 32,
	ERigElementType__Last8                                                           = 64,
	ERigElementType__All9                                                            = 63,
	ERigElementType__ToResetAfterConstructionEvent10                                 = 13,
	ERigElementType__ERigElementType_MAX11                                           = 65
};

/// Enum /Script/ControlRig.ERigHierarchyNotification
/// Size: 0x16
enum ERigHierarchyNotification : uint8_t
{
	ERigHierarchyNotification__ElementAdded0                                         = 0,
	ERigHierarchyNotification__ElementRemoved1                                       = 1,
	ERigHierarchyNotification__ElementRenamed2                                       = 2,
	ERigHierarchyNotification__ElementSelected3                                      = 3,
	ERigHierarchyNotification__ElementDeselected4                                    = 4,
	ERigHierarchyNotification__ParentChanged5                                        = 5,
	ERigHierarchyNotification__HierarchyReset6                                       = 6,
	ERigHierarchyNotification__ControlSettingChanged7                                = 7,
	ERigHierarchyNotification__ControlVisibilityChanged8                             = 8,
	ERigHierarchyNotification__ControlDrivenListChanged9                             = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged10                        = 10,
	ERigHierarchyNotification__ParentWeightsChanged11                                = 11,
	ERigHierarchyNotification__InteractionBracketOpened12                            = 12,
	ERigHierarchyNotification__InteractionBracketClosed13                            = 13,
	ERigHierarchyNotification__ElementReordered14                                    = 14,
	ERigHierarchyNotification__Max15                                                 = 15
};

/// Enum /Script/ControlRig.ERigControlTransformChannel
/// Size: 0x10
enum ERigControlTransformChannel : uint8_t
{
	ERigControlTransformChannel__TranslationX0                                       = 0,
	ERigControlTransformChannel__TranslationY1                                       = 1,
	ERigControlTransformChannel__TranslationZ2                                       = 2,
	ERigControlTransformChannel__Pitch3                                              = 3,
	ERigControlTransformChannel__Yaw4                                                = 4,
	ERigControlTransformChannel__Roll5                                               = 5,
	ERigControlTransformChannel__ScaleX6                                             = 6,
	ERigControlTransformChannel__ScaleY7                                             = 7,
	ERigControlTransformChannel__ScaleZ8                                             = 8,
	ERigControlTransformChannel__ERigControlTransformChannel_MAX9                    = 9
};

/// Enum /Script/ControlRig.ERigControlVisibility
/// Size: 0x03
enum ERigControlVisibility : uint8_t
{
	ERigControlVisibility__UserDefined0                                              = 0,
	ERigControlVisibility__BasedOnSelection1                                         = 1,
	ERigControlVisibility__ERigControlVisibility_MAX2                                = 2
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x04
enum ERigControlAxis : uint8_t
{
	ERigControlAxis__X0                                                              = 0,
	ERigControlAxis__Y1                                                              = 1,
	ERigControlAxis__Z2                                                              = 2,
	ERigControlAxis__ERigControlAxis_MAX3                                            = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x11
enum ERigControlType : uint8_t
{
	ERigControlType__Bool0                                                           = 0,
	ERigControlType__Float1                                                          = 1,
	ERigControlType__Integer2                                                        = 2,
	ERigControlType__Vector2D3                                                       = 3,
	ERigControlType__Position4                                                       = 4,
	ERigControlType__Scale5                                                          = 5,
	ERigControlType__Rotator6                                                        = 6,
	ERigControlType__Transform7                                                      = 7,
	ERigControlType__TransformNoScale8                                               = 8,
	ERigControlType__EulerTransform9                                                 = 9,
	ERigControlType__ERigControlType_MAX10                                           = 10
};

/// Enum /Script/ControlRig.ERigControlAnimationType
/// Size: 0x05
enum ERigControlAnimationType : uint8_t
{
	ERigControlAnimationType__AnimationControl0                                      = 0,
	ERigControlAnimationType__AnimationChannel1                                      = 1,
	ERigControlAnimationType__ProxyControl2                                          = 2,
	ERigControlAnimationType__VisualCue3                                             = 3,
	ERigControlAnimationType__ERigControlAnimationType_MAX4                          = 4
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime0                                                      = 0,
	ERigExecutionType__Editing1                                                      = 1,
	ERigExecutionType__Max2                                                          = 2
};

/// Enum /Script/ControlRig.ERigTransformStackEntryType
/// Size: 0x05
enum ERigTransformStackEntryType : uint8_t
{
	TransformPose0                                                                   = 0,
	ControlOffset1                                                                   = 1,
	ControlShape2                                                                    = 2,
	CurveValue3                                                                      = 3,
	ERigTransformStackEntryType_MAX4                                                 = 4
};

/// Enum /Script/ControlRig.ERigTransformType
/// Size: 0x06
enum ERigTransformType : uint8_t
{
	ERigTransformType__InitialLocal0                                                 = 0,
	ERigTransformType__CurrentLocal1                                                 = 1,
	ERigTransformType__InitialGlobal2                                                = 2,
	ERigTransformType__CurrentGlobal3                                                = 3,
	ERigTransformType__NumTransformTypes4                                            = 4,
	ERigTransformType__ERigTransformType_MAX5                                        = 5
};

/// Enum /Script/ControlRig.EControlRigInteractionType
/// Size: 0x06
enum EControlRigInteractionType : uint8_t
{
	EControlRigInteractionType__None0                                                = 0,
	EControlRigInteractionType__Translate1                                           = 1,
	EControlRigInteractionType__Rotate2                                              = 2,
	EControlRigInteractionType__Scale3                                               = 4,
	EControlRigInteractionType__All4                                                 = 7,
	EControlRigInteractionType__EControlRigInteractionType_MAX5                      = 8
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x03
enum EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction0                                                = 0,
	EControlRigVectorKind__Location1                                                 = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX2                                = 2
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace0                                           = 0,
	EControlRigComponentSpace__ActorSpace1                                           = 1,
	EControlRigComponentSpace__ComponentSpace2                                       = 2,
	EControlRigComponentSpace__RigSpace3                                             = 3,
	EControlRigComponentSpace__LocalSpace4                                           = 4,
	EControlRigComponentSpace__Max5                                                  = 5
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x03
enum EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input0                                         = 0,
	EControlRigComponentMapDirection__Output1                                        = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX2          = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace0                                                 = 0,
	ETransformSpaceMode__GlobalSpace1                                                = 1,
	ETransformSpaceMode__BaseSpace2                                                  = 2,
	ETransformSpaceMode__BaseJoint3                                                  = 3,
	ETransformSpaceMode__Max4                                                        = 4
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial0                                                   = 0,
	ETransformGetterType__Current1                                                   = 1,
	ETransformGetterType__Max2                                                       = 2
};

/// Enum /Script/ControlRig.EControlRigTestDataPlaybackMode
/// Size: 0x04
enum EControlRigTestDataPlaybackMode : uint8_t
{
	EControlRigTestDataPlaybackMode__Live0                                           = 0,
	EControlRigTestDataPlaybackMode__ReplayInputs1                                   = 1,
	EControlRigTestDataPlaybackMode__GroundTruth2                                    = 2,
	EControlRigTestDataPlaybackMode__Max3                                            = 3
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x05
enum ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance0                                                  = 0,
	ECRSimConstraintType__DistanceFromA1                                             = 1,
	ECRSimConstraintType__DistanceFromB2                                             = 2,
	ECRSimConstraintType__Plane3                                                     = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX4                                  = 4
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x02
enum ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction0                                                 = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX1                                  = 1
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x04
enum ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane0                                                  = 0,
	ECRSimSoftCollisionType__Sphere1                                                 = 1,
	ECRSimSoftCollisionType__Cone2                                                   = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX3                            = 3
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x04
enum EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace0                                            = 0,
	EControlRigFKRigExecuteMode__Additive1                                           = 1,
	EControlRigFKRigExecuteMode__Direct2                                             = 2,
	EControlRigFKRigExecuteMode__Max3                                                = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x03
enum ERigBoneType : uint8_t
{
	ERigBoneType__Imported0                                                          = 0,
	ERigBoneType__User1                                                              = 1,
	ERigBoneType__ERigBoneType_MAX2                                                  = 2
};

/// Enum /Script/ControlRig.ERigMetadataType
/// Size: 0x22
enum ERigMetadataType : uint8_t
{
	ERigMetadataType__Bool0                                                          = 0,
	ERigMetadataType__BoolArray1                                                     = 1,
	ERigMetadataType__Float2                                                         = 2,
	ERigMetadataType__FloatArray3                                                    = 3,
	ERigMetadataType__Int324                                                         = 4,
	ERigMetadataType__Int32Array5                                                    = 5,
	ERigMetadataType__Name6                                                          = 6,
	ERigMetadataType__NameArray7                                                     = 7,
	ERigMetadataType__Vector8                                                        = 8,
	ERigMetadataType__VectorArray9                                                   = 9,
	ERigMetadataType__Rotator10                                                      = 10,
	ERigMetadataType__RotatorArray11                                                 = 11,
	ERigMetadataType__Quat12                                                         = 12,
	ERigMetadataType__QuatArray13                                                    = 13,
	ERigMetadataType__Transform14                                                    = 14,
	ERigMetadataType__TransformArray15                                               = 15,
	ERigMetadataType__LinearColor16                                                  = 16,
	ERigMetadataType__LinearColorArray17                                             = 17,
	ERigMetadataType__RigElementKey18                                                = 18,
	ERigMetadataType__RigElementKeyArray19                                           = 19,
	ERigMetadataType__Invalid20                                                      = 20,
	ERigMetadataType__ERigMetadataType_MAX21                                         = 21
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x05
enum ERigEvent : uint8_t
{
	ERigEvent__None0                                                                 = 0,
	ERigEvent__RequestAutoKey1                                                       = 1,
	ERigEvent__OpenUndoBracket2                                                      = 2,
	ERigEvent__CloseUndoBracket3                                                     = 3,
	ERigEvent__Max4                                                                  = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x04
enum EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare0                                                    = 0,
	EControlRigSetKey__Always1                                                       = 1,
	EControlRigSetKey__Never2                                                        = 2,
	EControlRigSetKey__EControlRigSetKey_MAX3                                        = 3
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x05
enum ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial0                                                   = 0,
	ERigControlValueType__Current1                                                   = 1,
	ERigControlValueType__Minimum2                                                   = 2,
	ERigControlValueType__Maximum3                                                   = 3,
	ERigControlValueType__ERigControlValueType_MAX4                                  = 4
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x05
enum ERigSpaceType : uint8_t
{
	ERigSpaceType__Global0                                                           = 0,
	ERigSpaceType__Bone1                                                             = 1,
	ERigSpaceType__Control2                                                          = 2,
	ERigSpaceType__Space3                                                            = 3,
	ERigSpaceType__ERigSpaceType_MAX4                                                = 4
};

/// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
/// Size: 0x04
enum EMovieSceneControlRigSpaceType : uint8_t
{
	EMovieSceneControlRigSpaceType__Parent0                                          = 0,
	EMovieSceneControlRigSpaceType__World1                                           = 1,
	EMovieSceneControlRigSpaceType__ControlRig2                                      = 2,
	EMovieSceneControlRigSpaceType__EMovieSceneControlRigSpaceType_MAX3              = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes0                                              = 0,
	EControlRigDrawHierarchyMode__Max1                                               = 1
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x03
enum EAimMode : uint8_t
{
	EAimMode__AimAtTarget0                                                           = 0,
	EAimMode__OrientToTarget1                                                        = 1,
	EAimMode__MAX2                                                                   = 2
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override0                                                   = 0,
	EApplyTransformMode__Additive1                                                   = 1,
	EApplyTransformMode__Max2                                                        = 2
};

/// Enum /Script/ControlRig.ERigSwitchParentMode
/// Size: 0x04
enum ERigSwitchParentMode : uint8_t
{
	ERigSwitchParentMode__World0                                                     = 0,
	ERigSwitchParentMode__DefaultParent1                                             = 1,
	ERigSwitchParentMode__ParentItem2                                                = 2,
	ERigSwitchParentMode__ERigSwitchParentMode_MAX3                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x03
enum EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front0                                                = 0,
	EControlRigCurveAlignment__Stretched1                                            = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX2                        = 2
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal0                                        = 0,
	EControlRigModifyBoneMode__OverrideGlobal1                                       = 1,
	EControlRigModifyBoneMode__AdditiveLocal2                                        = 2,
	EControlRigModifyBoneMode__AdditiveGlobal3                                       = 3,
	EControlRigModifyBoneMode__Max4                                                  = 4
};

/// Enum /Script/ControlRig.EConstraintInterpType
/// Size: 0x03
enum EConstraintInterpType : uint8_t
{
	EConstraintInterpType__Average0                                                  = 0,
	EConstraintInterpType__Shortest1                                                 = 1,
	EConstraintInterpType__Max2                                                      = 2
};

