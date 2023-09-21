
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/InteractiveToolsFramework.AssetBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetBackedTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UGizmoBaseComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	DMember(float)                                     HoverSizeMultiplier                                         OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     PixelHitDistanceThreshold                                   OFFSET(get<float>, {0x57C, 4, 0, 0})
	CMember(UGizmoViewContext*)                        GizmoViewContext                                            OFFSET(get<T>, {0x588, 8, 0, 0})


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// void UpdateWorldLocalState(bool bWorldIn);                                                                               // [0xa3adf88] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// void UpdateHoverState(bool bHoveringIn);                                                                                 // [0xa3adcec] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandArguments
/// Size: 0x0008 (0x000028 - 0x000030)
class UInteractiveCommandArguments : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandResult
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveCommandResult : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveCommand : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveGizmoBuilder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolContextTransactionProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AInternalToolFrameworkActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	DMember(bool)                                      bIsSelectableInEditor                                       OFFSET(get<bool>, {0x290, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolFrameworkComponent : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolCameraFocusAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolCameraFocusAPI : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolNestedAcceptCancelAPI : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolExclusiveToolAPI : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolEditorGizmoAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolEditorGizmoAPI : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.MaterialProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMaterialProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionCommitter
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionCommitter : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseVec2ParameterSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0030 (0x000048 - 0x000078)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0x58, 32, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseFloatParameterSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x0148 (0x000048 - 0x000190)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(float)                                     Parameter                                                   OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0xF4, 8, 0, 0})
	SMember(FVector)                                   CurTranslationAxis                                          OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   CurTranslationOrigin                                        OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x130, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x01D8 (0x000048 - 0x000220)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	SMember(FVector)                                   CurTranslationOrigin                                        OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   CurTranslationNormal                                        OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   CurTranslationAxisX                                         OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FVector)                                   CurTranslationAxisY                                         OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x1C0, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x0148 (0x000048 - 0x000190)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0xF4, 8, 0, 0})
	SMember(FVector)                                   CurRotationAxis                                             OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   CurRotationOrigin                                           OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x130, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x0118 (0x000048 - 0x000160)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   CurScaleNormal                                              OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   CurScaleAxisX                                               OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   CurScaleAxisY                                               OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x100, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x00C8 (0x000048 - 0x000110)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bClampToZero                                                OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     Parameter                                                   OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	SMember(FVector)                                   CurScaleAxis                                                OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x0168 (0x000048 - 0x0001B0)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bUseEqualScaling                                            OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bClampToZero                                                OFFSET(get<bool>, {0xB5, 1, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FVector)                                   CurScaleNormal                                              OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   CurScaleAxisX                                               OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FVector)                                   CurScaleAxisY                                               OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x150, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.PhysicsDataSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsDataSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UPrimitiveComponentBackedTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.SkeletalMeshBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalMeshBackedTarget : public UAssetBackedTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.StaticMeshBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UStaticMeshBackedTarget : public UAssetBackedTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnyButtonInputBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x00C0 (0x000080 - 0x000140)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      bUpdateModifiersDuringDrag                                  OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0140 (0x000140 - 0x000280)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x0068 (0x000030 - 0x000098)
class UKeyAsModifierInputBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0068 (0x000030 - 0x000098)
class UMouseHoverBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/InteractiveToolsFramework.LocalMouseHoverBehavior
/// Size: 0x0148 (0x000098 - 0x0001E0)
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/InteractiveToolsFramework.MouseWheelInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      HitTestOnRelease                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior
/// Size: 0x00D0 (0x000130 - 0x000200)
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickOrDragInputBehavior
/// Size: 0x0100 (0x000080 - 0x000180)
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      bBeginDragIfClickTargetNotHit                               OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(float)                                     ClickDistanceThreshold                                      OFFSET(get<float>, {0x124, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SingleKeyCaptureBehavior
/// Size: 0x00E0 (0x000030 - 0x000110)
class USingleKeyCaptureBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/InteractiveToolsFramework.WidgetBaseBehavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBaseBehavior : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0010 (0x000028 - 0x000038)
class UInteractiveGizmo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UInputBehaviorSet*)                        InputBehaviors                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x0198 (0x000038 - 0x0001D0)
class UAxisAngleGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   AngleSource                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UClickDragInputBehavior*)                  MouseBehavior                                               OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FVector)                                   RotationOrigin                                              OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FVector)                                   RotationAxis                                                OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FVector)                                   RotationPlaneX                                              OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FVector)                                   RotationPlaneY                                              OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	DMember(float)                                     InteractionStartAngle                                       OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     InteractionCurAngle                                         OFFSET(get<float>, {0x1AC, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x0188 (0x000038 - 0x0001C0)
class UAxisPositionGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   ParameterSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UGizmoViewContext*)                        GizmoViewContext                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(UClickDragInputBehavior*)                  MouseBehavior                                               OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bEnableSignedAxis                                           OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x121, 1, 0, 0})
	SMember(FVector)                                   InteractionOrigin                                           OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   InteractionAxis                                             OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(float)                                     InteractionStartParameter                                   OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     InteractionCurParameter                                     OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     ParameterSign                                               OFFSET(get<float>, {0x190, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0038 (0x000028 - 0x000060)
class UGizmoConstantAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoConstantFrameAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   TangentX                                                    OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   TangentY                                                    OFFSET(getStruct<T>, {0x78, 24, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0028 (0x000028 - 0x000050)
class UGizmoWorldAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   AxisIndex                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGizmoComponentAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USceneComponent*)                          Component                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   AxisIndex                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bLocalAxes                                                  OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UBrushStampIndicator : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     BrushRadius                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     BrushFalloff                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FVector)                                   BrushPosition                                               OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   BrushNormal                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bDrawIndicatorLines                                         OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bDrawRadiusCircle                                           OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(int32_t)                                   SampleStepCount                                             OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bDepthTested                                                OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      bDrawSecondaryLines                                         OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(float)                                     SecondaryLineThickness                                      OFFSET(get<float>, {0x98, 4, 0, 0})
	SMember(FLinearColor)                              SecondaryLineColor                                          OFFSET(getStruct<T>, {0x9C, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      AttachedComponent                                           OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0000 (0x000298 - 0x000298)
class AGizmoActor : public AInternalToolFrameworkActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoActor
/// Size: 0x0088 (0x000298 - 0x000320)
class ACombinedTransformGizmoActor : public AGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UPrimitiveComponent*)                      TranslateX                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TranslateY                                                  OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TranslateZ                                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TranslateYZ                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TranslateXZ                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TranslateXY                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      RotateX                                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      RotateY                                                     OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      RotateZ                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      RotationSphere                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      UniformScale                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      AxisScaleX                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      AxisScaleY                                                  OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      AxisScaleZ                                                  OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      PlaneScaleYZ                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      PlaneScaleXZ                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      PlaneScaleXY                                                OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoBuilder
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmo
/// Size: 0x0368 (0x000038 - 0x0003A0)
class UCombinedTransformGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(UTransformProxy*)                          ActiveTarget                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bSnapToWorldGrid                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bGridSizeIsExplicit                                         OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FVector)                                   ExplicitGridSize                                            OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bRotationGridSizeIsExplicit                                 OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FRotator)                                  ExplicitRotationGridSize                                    OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bSnapToWorldRotGrid                                         OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bUseContextCoordinateSystem                                 OFFSET(get<bool>, {0x81, 1, 0, 0})
	CMember(EToolContextCoordinateSystem)              CurrentCoordinateSystem                                     OFFSET(get<T>, {0x84, 4, 0, 0})
	DMember(bool)                                      bUseContextGizmoMode                                        OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(EToolContextTransformGizmoMode)            ActiveGizmoMode                                             OFFSET(get<T>, {0x89, 1, 0, 0})
	CMember(TArray<UPrimitiveComponent*>)              ActiveComponents                                            OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<UInteractiveGizmo*>)                ActiveGizmos                                                OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(UGizmoConstantFrameAxisSource*)            CameraAxisSource                                            OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                AxisXSource                                                 OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                AxisYSource                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                AxisZSource                                                 OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                UnitAxisXSource                                             OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                UnitAxisYSource                                             OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                UnitAxisZSource                                             OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(UGizmoTransformChangeStateTarget*)         StateTarget                                                 OFFSET(get<T>, {0x258, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class UGizmoArrowComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	DMember(float)                                     Gap                                                         OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x5B8, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UGizmoBoxComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x5B0, 32, 0, 0})
	SMember(FVector)                                   Dimensions                                                  OFFSET(getStruct<T>, {0x5D0, 24, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x5E8, 4, 0, 0})
	DMember(bool)                                      bRemoveHiddenLines                                          OFFSET(get<bool>, {0x5EC, 1, 0, 0})
	DMember(bool)                                      bEnableAxisFlip                                             OFFSET(get<bool>, {0x5ED, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class UGizmoCircleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x5B8, 4, 0, 0})
	DMember(bool)                                      bViewAligned                                                OFFSET(get<bool>, {0x5BC, 1, 0, 0})
	DMember(bool)                                      bDrawFullCircle                                             OFFSET(get<bool>, {0x5BD, 1, 0, 0})
	DMember(bool)                                      bOnlyAllowFrontFacingHits                                   OFFSET(get<bool>, {0x5BE, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBase
/// Size: 0x00E0 (0x000028 - 0x000108)
class UGizmoElementBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnabledForPerspectiveProjection                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnabledForOrthographicProjection                           OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bEnabledForDefaultState                                     OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bEnabledForHoveringState                                    OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bEnabledForInteractingState                                 OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(uint32_t)                                  PartIdentifier                                              OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGizmoElementMeshRenderStateAttributes)    MeshRenderAttributes                                        OFFSET(getStruct<T>, {0x34, 96, 0, 0})
	CMember(EGizmoElementState)                        ElementState                                                OFFSET(get<T>, {0x94, 1, 0, 0})
	CMember(EGizmoElementInteractionState)             ElementInteractionState                                     OFFSET(get<T>, {0x98, 4, 0, 0})
	CMember(EGizmoElementViewDependentType)            ViewDependentType                                           OFFSET(get<T>, {0x9C, 4, 0, 0})
	SMember(FVector)                                   ViewDependentAxis                                           OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	DMember(float)                                     ViewDependentAngleTol                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     ViewDependentAxialMaxCosAngleTol                            OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     ViewDependentPlanarMinCosAngleTol                           OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(EGizmoElementViewAlignType)                ViewAlignType                                               OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FVector)                                   ViewAlignAxis                                               OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FVector)                                   ViewAlignNormal                                             OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	DMember(float)                                     ViewAlignAxialAngleTol                                      OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     ViewAlignAxialMaxCosAngleTol                                OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     PixelHitDistanceThreshold                                   OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementLineBase
/// Size: 0x0050 (0x000108 - 0x000158)
class UGizmoElementLineBase : public UGizmoElementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FGizmoElementLineRenderStateAttributes)    LineRenderAttributes                                        OFFSET(getStruct<T>, {0x108, 60, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bScreenSpaceLine                                            OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(float)                                     HoverLineThicknessMultiplier                                OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     InteractLineThicknessMultiplier                             OFFSET(get<float>, {0x150, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircleBase
/// Size: 0x0070 (0x000158 - 0x0001C8)
class UGizmoElementCircleBase : public UGizmoElementLineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FVector)                                   Axis0                                                       OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   Axis1                                                       OFFSET(getStruct<T>, {0x188, 24, 0, 0})
	DMember(double)                                    Radius                                                      OFFSET(get<double>, {0x1A0, 8, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 OFFSET(get<int32_t>, {0x1A8, 4, 0, 0})
	CMember(EGizmoElementPartialType)                  PartialType                                                 OFFSET(get<T>, {0x1AC, 4, 0, 0})
	DMember(double)                                    PartialStartAngle                                           OFFSET(get<double>, {0x1B0, 8, 0, 0})
	DMember(double)                                    PartialEndAngle                                             OFFSET(get<double>, {0x1B8, 8, 0, 0})
	DMember(double)                                    PartialViewDependentMaxCosTol                               OFFSET(get<double>, {0x1C0, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArc
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UGizmoElementArc : public UGizmoElementCircleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(double)                                    InnerRadius                                                 OFFSET(get<double>, {0x1C8, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArrow
/// Size: 0x0080 (0x000108 - 0x000188)
class UGizmoElementArrow : public UGizmoElementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(UGizmoElementCylinder*)                    CylinderElement                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UGizmoElementCone*)                        ConeElement                                                 OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UGizmoElementBox*)                         BoxElement                                                  OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   base                                                        OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   SideDirection                                               OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	DMember(float)                                     BodyLength                                                  OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     BodyRadius                                                  OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     HeadLength                                                  OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     HeadRadius                                                  OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	CMember(EGizmoElementArrowHeadType)                HeadType                                                    OFFSET(get<T>, {0x184, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBox
/// Size: 0x0060 (0x000108 - 0x000168)
class UGizmoElementBox : public UGizmoElementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FVector)                                   Dimensions                                                  OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FVector)                                   SideDirection                                               OFFSET(getStruct<T>, {0x150, 24, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircle
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UGizmoElementCircle : public UGizmoElementCircleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(bool)                                      bDrawMesh                                                   OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	DMember(bool)                                      bDrawLine                                                   OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	DMember(bool)                                      bHitMesh                                                    OFFSET(get<bool>, {0x1CA, 1, 0, 0})
	DMember(bool)                                      bHitLine                                                    OFFSET(get<bool>, {0x1CB, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCone
/// Size: 0x0040 (0x000108 - 0x000148)
class UGizmoElementCone : public UGizmoElementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x140, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCylinder
/// Size: 0x0040 (0x000108 - 0x000148)
class UGizmoElementCylinder : public UGizmoElementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FVector)                                   base                                                        OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x140, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementGroup
/// Size: 0x0018 (0x000158 - 0x000170)
class UGizmoElementGroup : public UGizmoElementLineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bConstantScale                                              OFFSET(get<bool>, {0x158, 1, 0, 0})
	DMember(bool)                                      bHitOwner                                                   OFFSET(get<bool>, {0x159, 1, 0, 0})
	CMember(TArray<UGizmoElementBase*>)                Elements                                                    OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitTarget
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoElementHitTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UGizmoElementBase*)                        GizmoElement                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UGizmoViewContext*)                        GizmoViewContext                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UTransformProxy*)                          GizmoTransformProxy                                         OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitMultiTarget
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoElementHitMultiTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UGizmoElementBase*)                        GizmoElement                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UGizmoViewContext*)                        GizmoViewContext                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UTransformProxy*)                          GizmoTransformProxy                                         OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementRectangle
/// Size: 0x0058 (0x000158 - 0x0001B0)
class UGizmoElementRectangle : public UGizmoElementLineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FVector)                                   UpDirection                                                 OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   SideDirection                                               OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	DMember(bool)                                      bDrawMesh                                                   OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bDrawLine                                                   OFFSET(get<bool>, {0x1A9, 1, 0, 0})
	DMember(bool)                                      bHitMesh                                                    OFFSET(get<bool>, {0x1AA, 1, 0, 0})
	DMember(bool)                                      bHitLine                                                    OFFSET(get<bool>, {0x1AB, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoElementTorus
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UGizmoElementTorus : public UGizmoElementCircleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(double)                                    InnerRadius                                                 OFFSET(get<double>, {0x1C8, 8, 0, 0})
	DMember(int32_t)                                   NumInnerSlices                                              OFFSET(get<int32_t>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bEndCaps                                                    OFFSET(get<bool>, {0x1D4, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoTransformSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoAxisSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoClickTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoClickMultiTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoClickMultiTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoRenderTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderMultiTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoRenderMultiTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoStateTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoFloatParameterSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoVec2ParameterSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x0040 (0x0005A0 - 0x0005E0)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	DMember(float)                                     HandleSize                                                  OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x5B4, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(bool)                                      bImageScale                                                 OFFSET(get<bool>, {0x5D4, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FVector)                                   DirectionX                                                  OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	SMember(FVector)                                   DirectionY                                                  OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	DMember(bool)                                      bOrientYAccordingToCamera                                   OFFSET(get<bool>, {0x5C8, 1, 0, 0})
	DMember(float)                                     OffsetX                                                     OFFSET(get<float>, {0x5CC, 4, 0, 0})
	DMember(float)                                     OffsetY                                                     OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(float)                                     LengthX                                                     OFFSET(get<float>, {0x5D4, 4, 0, 0})
	DMember(float)                                     LengthY                                                     OFFSET(get<float>, {0x5D8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x5DC, 4, 0, 0})
	DMember(char)                                      SegmentFlags                                                OFFSET(get<char>, {0x5E0, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoViewContext
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UGizmoViewContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGizmoLambdaHitTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x00D8 (0x000028 - 0x000100)
class UGizmoComponentHitTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UPrimitiveComponent*)                      Component                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x0018 (0x000298 - 0x0002B0)
class AIntervalGizmoActor : public AGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UGizmoLineHandleComponent*)                UpIntervalComponent                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UGizmoLineHandleComponent*)                DownIntervalComponent                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UGizmoLineHandleComponent*)                ForwardIntervalComponent                                    OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x01C8 (0x000038 - 0x000200)
class UIntervalGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(UGizmoTransformChangeStateTarget*)         StateTarget                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UTransformProxy*)                          TransformProxy                                              OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<UPrimitiveComponent*>)              ActiveComponents                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UInteractiveGizmo*>)                ActiveGizmos                                                OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UGizmoComponentAxisSource*)                AxisYSource                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UGizmoComponentAxisSource*)                AxisZSource                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0018 (0x000048 - 0x000060)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TScriptInterface<Class>)                   FloatParameterSource                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     MinParameter                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxParameter                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x0238 (0x000038 - 0x000270)
class UPlanePositionGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   ParameterSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UClickDragInputBehavior*)                  MouseBehavior                                               OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bEnableSignedAxis                                           OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bFlipX                                                      OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bFlipY                                                      OFFSET(get<bool>, {0x92, 1, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FVector)                                   InteractionOrigin                                           OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   InteractionNormal                                           OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   InteractionAxisX                                            OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FVector)                                   InteractionAxisY                                            OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FVector2D)                                 InteractionStartParameter                                   OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FVector2D)                                 InteractionCurParameter                                     OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FVector2D)                                 ParameterSigns                                              OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmoBuilder
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmo
/// Size: 0x00A0 (0x0003A0 - 0x000440)
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(UGizmoTransformChangeStateTarget*)         RepositionStateTarget                                       OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmo
/// Size: 0x00C8 (0x000038 - 0x000100)
class UScalableSphereGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(float)                                     HitErrorThreshold                                           OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FText)                                     TransactionDescription                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bIsHovering                                                 OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      bIsDragging                                                 OFFSET(get<bool>, {0xA5, 1, 0, 0})
	CMember(UTransformProxy*)                          ActiveTarget                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FVector)                                   ActiveAxis                                                  OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   DragStartWorldPosition                                      OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FVector)                                   DragCurrentPositionProjected                                OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	DMember(float)                                     InteractionStartParameter                                   OFFSET(get<float>, {0xF8, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0008 (0x000028 - 0x000030)
class UGizmoNilStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGizmoLambdaStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0038 (0x000028 - 0x000060)
class UGizmoObjectModifyStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TScriptInterface<Class>)                   TransactionManager                                          OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x0118 (0x000028 - 0x000140)
class UGizmoTransformChangeStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TScriptInterface<Class>)                   TransactionManager                                          OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoContextObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UCombinedTransformGizmoContextObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UTransformProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bRotatePerObject                                            OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bSetPivotMode                                               OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FTransform)                                SharedTransform                                             OFFSET(getStruct<T>, {0xF0, 96, 0, 0})
	SMember(FTransform)                                InitialSharedTransform                                      OFFSET(getStruct<T>, {0x150, 96, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseTransformSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(USceneComponent*)                          Component                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bModifyComponentOnTransform                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x0098 (0x000048 - 0x0000E0)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TScriptInterface<Class>)                   ChildTransformSource                                        OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0028 (0x000048 - 0x000070)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UTransformProxy*)                          Proxy                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
/// Size: 0x0020 (0x000048 - 0x000068)
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TScriptInterface<Class>)                   ScaledTransformSource                                       OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   UnscaledTransformSource                                     OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInteractiveToolPropertySet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FString, UInteractiveToolPropertySet*>) CachedPropertiesMap                                       OFFSET(get<T>, {0x38, 80, 0, 0})
	DMember(bool)                                      bIsPropertySetEnabled                                       OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     BrushSize                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSpecifyRadius                                              OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     BrushRadius                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BrushStrength                                               OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     BrushFalloffAmount                                          OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bShowStrength                                               OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bShowFalloff                                                OFFSET(get<bool>, {0xBD, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BrushAdjusterInputBehavior
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UBrushAdjusterInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UInteractiveTool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UInputBehaviorSet*)                        InputBehaviors                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<UObject*>)                          ToolPropertyObjects                                         OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class USingleSelectionTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UToolTarget*)                              Target                                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMeshSurfacePointTool : public USingleSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   TargetWorld                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x0178 (0x000108 - 0x000280)
class UBaseBrushTool : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(UBrushBaseProperties*)                     BrushProperties                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      bInBrushStroke                                              OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(float)                                     WorldToLocalScale                                           OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FBrushStampData)                           LastBrushStamp                                              OFFSET(getStruct<T>, {0x118, 288, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PropertyClass                                               OFFSET(get<T>, {0x248, 32, 0, 0})
	CMember(UBrushStampIndicator*)                     BrushStampIndicator                                         OFFSET(get<T>, {0x268, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolBuilder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UClickDragTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USingleClickTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/InteractiveToolsFramework.ContextObjectStore
/// Size: 0x0010 (0x000028 - 0x000038)
class UContextObjectStore : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UObject*>)                          ContextObjects                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputBehaviorSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBehaviorInfo>)                     Behaviors                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputBehaviorSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.LocalInputBehaviorSource
/// Size: 0x0048 (0x000028 - 0x000070)
class ULocalInputBehaviorSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0168 (0x000028 - 0x000190)
class UInputRouter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      bAutoInvalidateOnHover                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAutoInvalidateOnCapture                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(UInputBehaviorSet*)                        ActiveInputBehaviors                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0008 (0x000028 - 0x000030)
class UInteractionMechanic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UInteractiveGizmoManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FActiveGizmo>)                      ActiveGizmos                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<FString, UInteractiveGizmoBuilder*>)  GizmoBuilders                                               OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0170 (0x000028 - 0x000198)
class UInteractiveToolManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(UInteractiveTool*)                         ActiveLeftTool                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UInteractiveTool*)                         ActiveRightTool                                             OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TMap<FString, UInteractiveToolBuilder*>)   ToolBuilders                                                OFFSET(get<T>, {0xE8, 80, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x02F8 (0x000028 - 0x000320)
class UInteractiveToolsContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UInputRouter*)                             InputRouter                                                 OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UToolTargetManager*)                       TargetManager                                               OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UInteractiveToolManager*)                  ToolManager                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UInteractiveGizmoManager*)                 GizmoManager                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UContextObjectStore*)                      ContextObjectStore                                          OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ToolManagerClass                                            OFFSET(get<T>, {0x300, 32, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UMultiSelectionTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UToolTarget*>)                      Targets                                                     OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SceneSnappingManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneSnappingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0018 (0x000028 - 0x000040)
class USelectionSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0040 (0x000040 - 0x000080)
class UMeshSelectionSet : public USelectionSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<int32_t>)                           Vertices                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           Edges                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<int32_t>)                           Faces                                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<int32_t>)                           Groups                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ToolTargetManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UToolTargetManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UToolTargetFactory*>)               Factories                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ToolTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTarget
/// Size: 0x0010 (0x000028 - 0x000038)
class UPrimitiveComponentToolTarget : public UToolTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InteractiveToolsFramework.ToolTargetFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolTargetFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0020 (0x000000 - 0x000020)
class FGizmoVec2ParameterChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 CurrentValue                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementColorAttribute
/// Size: 0x0014 (0x000000 - 0x000014)
class FGizmoElementColorAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bHasValue                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bOverridesChildState                                        OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMaterialAttribute
/// Size: 0x000C (0x000000 - 0x00000C)
class FGizmoElementMaterialAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UMaterialInterface*>)       Value                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesChildState                                        OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
/// Size: 0x0060 (0x000000 - 0x000060)
class FGizmoElementMeshRenderStateAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGizmoElementMaterialAttribute)            Material                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FGizmoElementMaterialAttribute)            HoverMaterial                                               OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FGizmoElementMaterialAttribute)            InteractMaterial                                            OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FGizmoElementColorAttribute)               VertexColor                                                 OFFSET(getStruct<T>, {0x24, 20, 0, 0})
	SMember(FGizmoElementColorAttribute)               HoverVertexColor                                            OFFSET(getStruct<T>, {0x38, 20, 0, 0})
	SMember(FGizmoElementColorAttribute)               InteractVertexColor                                         OFFSET(getStruct<T>, {0x4C, 20, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
/// Size: 0x003C (0x000000 - 0x00003C)
class FGizmoElementLineRenderStateAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FGizmoElementColorAttribute)               LineColor                                                   OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FGizmoElementColorAttribute)               HoverLineColor                                              OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FGizmoElementColorAttribute)               InteractLineColor                                           OFFSET(getStruct<T>, {0x28, 20, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (0x000000 - 0x000008)
class FGizmoFloatParameterChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CurrentValue                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x0120 (0x000000 - 0x000120)
class FBrushStampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FBehaviorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UInputBehavior*)                           Behavior                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0040 (0x000000 - 0x000040)
class FInputRayHit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(double)                                    HitDepth                                                    OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bHasHitNormal                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   HitIdentifier                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  HitObject                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.InputDeviceRay
/// Size: 0x0048 (0x000000 - 0x000048)
class FInputDeviceRay : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRay)                                      WorldRay                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bHas2D                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FVector2D)                                 ScreenPosition                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (0x000000 - 0x000030)
class FActiveGizmo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UInteractiveGizmo*)                        Gizmo                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementState
/// Size: 0x05
enum EGizmoElementState : uint8_t
{
	EGizmoElementState__None0                                                        = 0,
	EGizmoElementState__Visible1                                                     = 2,
	EGizmoElementState__Hittable2                                                    = 4,
	EGizmoElementState__VisibleAndHittable3                                          = 6,
	EGizmoElementState__EGizmoElementState_MAX4                                      = 7
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementInteractionState
/// Size: 0x04
enum EGizmoElementInteractionState : uint8_t
{
	EGizmoElementInteractionState__None0                                             = 0,
	EGizmoElementInteractionState__Hovering1                                         = 1,
	EGizmoElementInteractionState__Interacting2                                      = 2,
	EGizmoElementInteractionState__EGizmoElementInteractionState_MAX3                = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewDependentType
/// Size: 0x04
enum EGizmoElementViewDependentType : uint8_t
{
	EGizmoElementViewDependentType__None0                                            = 0,
	EGizmoElementViewDependentType__Axis1                                            = 1,
	EGizmoElementViewDependentType__Plane2                                           = 2,
	EGizmoElementViewDependentType__EGizmoElementViewDependentType_MAX3              = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewAlignType
/// Size: 0x06
enum EGizmoElementViewAlignType : uint8_t
{
	EGizmoElementViewAlignType__None0                                                = 0,
	EGizmoElementViewAlignType__PointOnly1                                           = 1,
	EGizmoElementViewAlignType__PointEye2                                            = 2,
	EGizmoElementViewAlignType__PointScreen3                                         = 3,
	EGizmoElementViewAlignType__Axial4                                               = 4,
	EGizmoElementViewAlignType__EGizmoElementViewAlignType_MAX5                      = 5
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementPartialType
/// Size: 0x04
enum EGizmoElementPartialType : uint8_t
{
	EGizmoElementPartialType__None0                                                  = 0,
	EGizmoElementPartialType__Partial1                                               = 1,
	EGizmoElementPartialType__PartialViewDependent2                                  = 2,
	EGizmoElementPartialType__EGizmoElementPartialType_MAX3                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x02
enum EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial0                              = 1,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX1                = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x03
enum EToolContextCoordinateSystem : uint8_t
{
	EToolContextCoordinateSystem__World0                                             = 0,
	EToolContextCoordinateSystem__Local1                                             = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX2                  = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolContextTransformGizmoMode
/// Size: 0x06
enum EToolContextTransformGizmoMode : uint8_t
{
	EToolContextTransformGizmoMode__NoGizmo0                                         = 0,
	EToolContextTransformGizmoMode__Translation1                                     = 1,
	EToolContextTransformGizmoMode__Rotation2                                        = 2,
	EToolContextTransformGizmoMode__Scale3                                           = 3,
	EToolContextTransformGizmoMode__Combined4                                        = 8,
	EToolContextTransformGizmoMode__EToolContextTransformGizmoMode_MAX5              = 9
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x06
enum EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal0                                                     = 0,
	EToolMessageLevel__UserMessage1                                                  = 1,
	EToolMessageLevel__UserNotification2                                             = 2,
	EToolMessageLevel__UserWarning3                                                  = 3,
	EToolMessageLevel__UserError4                                                    = 4,
	EToolMessageLevel__EToolMessageLevel_MAX5                                        = 5
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x05
enum ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace0                                       = 0,
	ESelectedObjectsModificationType__Add1                                           = 1,
	ESelectedObjectsModificationType__Remove2                                        = 2,
	ESelectedObjectsModificationType__Clear3                                         = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX4          = 4
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x04
enum EViewInteractionState : uint8_t
{
	EViewInteractionState__None0                                                     = 0,
	EViewInteractionState__Hovered1                                                  = 1,
	EViewInteractionState__Focused2                                                  = 2,
	EViewInteractionState__EViewInteractionState_MAX3                                = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementArrowHeadType
/// Size: 0x03
enum EGizmoElementArrowHeadType : uint8_t
{
	EGizmoElementArrowHeadType__Cone0                                                = 0,
	EGizmoElementArrowHeadType__Cube1                                                = 1,
	EGizmoElementArrowHeadType__EGizmoElementArrowHeadType_MAX2                      = 2
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x06
enum EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None0                                                         = 0,
	EInputCaptureSide__Left1                                                         = 1,
	EInputCaptureSide__Right2                                                        = 2,
	EInputCaptureSide__Both3                                                         = 3,
	EInputCaptureSide__Any4                                                          = 99,
	EInputCaptureSide__EInputCaptureSide_MAX5                                        = 100
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x03
enum EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin0                                                 = 1,
	EInputCaptureRequestType__Ignore1                                                = 2,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX2                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x05
enum EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin0                                                       = 1,
	EInputCaptureState__Continue1                                                    = 2,
	EInputCaptureState__End2                                                         = 3,
	EInputCaptureState__Ignore3                                                      = 4,
	EInputCaptureState__EInputCaptureState_MAX4                                      = 5
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x09
enum EInputDevices : uint32_t
{
	EInputDevices__None0                                                             = 0,
	EInputDevices__Keyboard1                                                         = 1,
	EInputDevices__Mouse2                                                            = 2,
	EInputDevices__Gamepad3                                                          = 4,
	EInputDevices__OculusTouch4                                                      = 8,
	EInputDevices__HTCViveWands5                                                     = 16,
	EInputDevices__AnySpatialDevice6                                                 = 24,
	EInputDevices__TabletFingers7                                                    = 1024,
	EInputDevices__EInputDevices_MAX8                                                = 1025
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x26
enum ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None0                                                = 0,
	ETransformGizmoSubElements__TranslateAxisX1                                      = 2,
	ETransformGizmoSubElements__TranslateAxisY2                                      = 4,
	ETransformGizmoSubElements__TranslateAxisZ3                                      = 8,
	ETransformGizmoSubElements__TranslateAllAxes4                                    = 14,
	ETransformGizmoSubElements__TranslatePlaneXY5                                    = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ6                                    = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ7                                    = 64,
	ETransformGizmoSubElements__TranslateAllPlanes8                                  = 112,
	ETransformGizmoSubElements__RotateAxisX9                                         = 128,
	ETransformGizmoSubElements__RotateAxisY10                                        = 256,
	ETransformGizmoSubElements__RotateAxisZ11                                        = 512,
	ETransformGizmoSubElements__RotateAllAxes12                                      = 896,
	ETransformGizmoSubElements__ScaleAxisX13                                         = 1024,
	ETransformGizmoSubElements__ScaleAxisY14                                         = 2048,
	ETransformGizmoSubElements__ScaleAxisZ15                                         = 4096,
	ETransformGizmoSubElements__ScaleAllAxes16                                       = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ17                                       = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ18                                       = 16384,
	ETransformGizmoSubElements__ScalePlaneXY19                                       = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes20                                     = 57344,
	ETransformGizmoSubElements__ScaleUniform21                                       = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate22                            = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale23                        = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale24                           = 131070,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX25                     = 131071
};

/// Enum /Script/InteractiveToolsFramework.EToolShutdownType
/// Size: 0x04
enum EToolShutdownType : uint8_t
{
	EToolShutdownType__Completed0                                                    = 0,
	EToolShutdownType__Accept1                                                       = 1,
	EToolShutdownType__Cancel2                                                       = 2,
	EToolShutdownType__EToolShutdownType_MAX3                                        = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x04
enum EToolSide : uint8_t
{
	EToolSide__Left0                                                                 = 1,
	EToolSide__Mouse1                                                                = 1,
	EToolSide__Right2                                                                = 2,
	EToolSide__EToolSide_MAX3                                                        = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x04
enum EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking0                                       = 1,
	EToolChangeTrackingMode__UndoToExit1                                             = 2,
	EToolChangeTrackingMode__FullUndoRedo2                                           = 3,
	EToolChangeTrackingMode__EToolChangeTrackingMode_MAX3                            = 4
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x03
enum ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position0                                                   = 1,
	ESceneSnapQueryType__Rotation1                                                   = 2,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX2                                    = 3
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x06
enum ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None0                                                 = 0,
	ESceneSnapQueryTargetType__MeshVertex1                                           = 1,
	ESceneSnapQueryTargetType__MeshEdge2                                             = 2,
	ESceneSnapQueryTargetType__Grid3                                                 = 4,
	ESceneSnapQueryTargetType__All4                                                  = 7,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX5                        = 8
};

