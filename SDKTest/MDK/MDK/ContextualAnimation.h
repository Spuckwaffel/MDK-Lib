
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_EarlyOutContextualAnimWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ContextualAnimation.AnimNotifyState_IKWindow
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UAnimNotifyState_IKWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     ___ OFFSET(get<T>, {0x38, 48, 0, 0})
	SMember(FAlphaBlend)                               BlendOut                                                    ___ OFFSET(get<T>, {0x68, 48, 0, 0})
	DMember(bool)                                      bEnable                                                     ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ContextualAnimation.ContextualAnimManager
/// Size: 0x0068 (0x000028 - 0x000090)
class UContextualAnimManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TSet<UContextualAnimSceneActorComponent*>) SceneActorCompContainer                                     ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<UContextualAnimSceneInstance*>)     Instances                                                   ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
/// Size: 0x0120 (0x000570 - 0x000690)
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FMulticastInlineDelegate)                  OnJoinedSceneDelegate                                       ___ OFFSET(get<T>, {0x570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLeftSceneDelegate                                         ___ OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayMontageNotifyBeginDelegate                            ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bEnableDebug                                                ___ OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	SMember(FContextualAnimRepBindingsData)            RepBindings                                                 ___ OFFSET(get<T>, {0x5B0, 64, 0, 0})
	SMember(FContextualAnimRepLateJoinData)            RepLateJoinData                                             ___ OFFSET(get<T>, {0x5F0, 40, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionData                                           ___ OFFSET(get<T>, {0x618, 24, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionSingleActorData                                ___ OFFSET(get<T>, {0x630, 24, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    ___ OFFSET(get<T>, {0x648, 40, 0, 0})
	CMember(TArray<FContextualAnimIKTarget>)           IKTargets                                                   ___ OFFSET(get<T>, {0x670, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimRolesAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimRolesAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FContextualAnimRoleDefinition>)     Roles                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneAsset
/// Size: 0x0048 (0x000030 - 0x000078)
class UContextualAnimSceneAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UContextualAnimRolesAsset*)                RolesAsset                                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     PrimaryRole                                                 ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(TArray<FContextualAnimActorPreviewData>)   OverridePreviewData                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FContextualAnimSceneSection>)       Sections                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(UClass*)                                   SceneInstanceClass                                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bDisableCollisionBetweenActors                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bPrecomputeAlignmentTracks                                  ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneInstance
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UContextualAnimSceneInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionEndTimeReached                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSceneEnded                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorJoined                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorLeft                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    ___ OFFSET(get<T>, {0x90, 40, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion
/// Size: 0x0008 (0x000028 - 0x000030)
class UContextualAnimSelectionCriterion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EContextualAnimCriterionType)              Type                                                        ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
/// Size: 0x0000 (0x000030 - 0x000030)
class UContextualAnimSelectionCriterion_Blueprint : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FVector>)                           PolygonPoints                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionConeMode)          Mode                                                        ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HalfAngle                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Offset                                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionDistanceMode)      Mode                                                        ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimTransition
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimTransition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ContextualAnimation.ContextualAnimUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FContextualAnimWarpTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Role                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetName                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     TargetRotation                                              ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepData
/// Size: 0x0001 (0x000000 - 0x000001)
class FContextualAnimRepData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      RepCounter                                                  ___ OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepBindingsData
/// Size: 0x003F (0x000001 - 0x000040)
class FContextualAnimRepBindingsData : public FContextualAnimRepData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FContextualAnimSceneBindings)              Bindings                                                    ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindings
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimSceneBindings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FContextualAnimSceneBinding>)       Data                                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBinding
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimSceneBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FContextualAnimSceneBindingContext)        Context                                                     ___ OFFSET(get<T>, {0x0, 208, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindingContext
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FContextualAnimSceneBindingContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UContextualAnimSceneActorComponent*>) CachedSceneActorComp                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            CachedAnimInstance                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   CachedSkeletalMesh                                          ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepLateJoinData
/// Size: 0x0027 (0x000001 - 0x000028)
class FContextualAnimRepLateJoinData : public FContextualAnimRepData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Role                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepTransitionData
/// Size: 0x0017 (0x000001 - 0x000018)
class FContextualAnimRepTransitionData : public FContextualAnimRepData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      ID                                                          ___ OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      SectionIdx                                                  ___ OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      AnimSetIdx                                                  ___ OFFSET(get<char>, {0x3, 1, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSet
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FContextualAnimTrack>)              Tracks                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   WarpPoints                                                  ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(float)                                     RandomWeight                                                ___ OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimTrack
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimTrack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UAnimSequenceBase*)                        Animation                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AnimMaxStartTime                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bRequireFlyingMode                                          ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bOptional                                                   ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    AlignmentData                                               ___ OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    IKTargetData                                                ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(TArray<UContextualAnimSelectionCriterion*>) SelectionCriteria                                          ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FTransform)                                MeshToScene                                                 ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FName)                                     Role                                                        ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                ___ OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAlignmentTrackContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimAlignmentTrackContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FAnimSequenceTrackContainer)               Tracks                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     SampleInterval                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneSection
/// Size: 0x0078 (0x000000 - 0x000078)
class FContextualAnimSceneSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FContextualAnimSet>)                AnimSets                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FContextualAnimIKTargetDefContainer>) RoleToIKTargetDefsMap                                ___ OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TArray<FContextualAnimWarpPointDefinition>) WarpPointDefinitions                                       ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointDefinition
/// Size: 0x001C (0x000000 - 0x00001C)
class FContextualAnimWarpPointDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WarpTargetName                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimWarpPointDefinitionMode)    Mode                                                        ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FContextualAnimWarpPointCustomParams)      Params                                                      ___ OFFSET(get<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointCustomParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimWarpPointCustomParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Origin                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAlongClosestDistance                                       ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FName)                                     OtherRole                                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimIKTargetDefContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FContextualAnimIKTargetDefinition>) IKTargetDefs                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefinition
/// Size: 0x0014 (0x000000 - 0x000014)
class FContextualAnimIKTargetDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EContextualAnimIKTargetProvider)           Provider                                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     TargetRoleName                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     TargetBoneName                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimPoint
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Role                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimActorPreviewData
/// Size: 0x0088 (0x000000 - 0x000088)
class FContextualAnimActorPreviewData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Role                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimActorPreviewType)           Type                                                        ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewAnimInstance                                         ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              PreviewStaticMesh                                           ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimIKTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRoleDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimRoleDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsCharacter                                                ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FTransform)                                MeshToComponent                                             ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimWarpPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimStartSceneParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimStartSceneParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FName, FContextualAnimSceneBindingContext>) RoleToActorMap                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryResult
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimQueryResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                EntryTransform                                              ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                SyncTransform                                               ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(float)                                     AnimStartTime                                               ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimQueryParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Querier                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                QueryTransform                                              ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bComplexQuery                                               ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bFindAnimStartTime                                          ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Enum /Script/ContextualAnimation.EContextualAnimPointType
/// Size: 0x04
enum EContextualAnimPointType : uint8_t
{
	EContextualAnimPointType__FirstFrame0                                            = 0,
	EContextualAnimPointType__SyncFrame1                                             = 1,
	EContextualAnimPointType__LastFrame2                                             = 2,
	EContextualAnimPointType__EContextualAnimPointType_MAX3                          = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionToConsider
/// Size: 0x04
enum EContextualAnimCriterionToConsider : uint8_t
{
	EContextualAnimCriterionToConsider__All0                                         = 0,
	EContextualAnimCriterionToConsider__Spatial1                                     = 1,
	EContextualAnimCriterionToConsider__Other2                                       = 2,
	EContextualAnimCriterionToConsider__EContextualAnimCriterionToConsider_MAX3      = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimActorPreviewType
/// Size: 0x05
enum EContextualAnimActorPreviewType : uint8_t
{
	EContextualAnimActorPreviewType__SkeletalMesh0                                   = 0,
	EContextualAnimActorPreviewType__StaticMesh1                                     = 1,
	EContextualAnimActorPreviewType__Actor2                                          = 2,
	EContextualAnimActorPreviewType__None3                                           = 3,
	EContextualAnimActorPreviewType__EContextualAnimActorPreviewType_MAX4            = 4
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionType
/// Size: 0x03
enum EContextualAnimCriterionType : uint8_t
{
	EContextualAnimCriterionType__Spatial0                                           = 0,
	EContextualAnimCriterionType__Other1                                             = 1,
	EContextualAnimCriterionType__EContextualAnimCriterionType_MAX2                  = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionConeMode
/// Size: 0x03
enum EContextualAnimCriterionConeMode : uint8_t
{
	EContextualAnimCriterionConeMode__ToPrimary0                                     = 0,
	EContextualAnimCriterionConeMode__FromPrimary1                                   = 1,
	EContextualAnimCriterionConeMode__EContextualAnimCriterionConeMode_MAX2          = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionDistanceMode
/// Size: 0x03
enum EContextualAnimCriterionDistanceMode : uint8_t
{
	EContextualAnimCriterionDistanceMode__Distance_3D0                               = 0,
	EContextualAnimCriterionDistanceMode__Distance_2D1                               = 1,
	EContextualAnimCriterionDistanceMode__Distance_MAX2                              = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimJoinRule
/// Size: 0x03
enum EContextualAnimJoinRule : uint8_t
{
	EContextualAnimJoinRule__Default0                                                = 0,
	EContextualAnimJoinRule__Late1                                                   = 1,
	EContextualAnimJoinRule__EContextualAnimJoinRule_MAX2                            = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimIKTargetProvider
/// Size: 0x03
enum EContextualAnimIKTargetProvider : uint8_t
{
	EContextualAnimIKTargetProvider__Autogenerated0                                  = 0,
	EContextualAnimIKTargetProvider__Bone1                                           = 1,
	EContextualAnimIKTargetProvider__EContextualAnimIKTargetProvider_MAX2            = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimWarpPointDefinitionMode
/// Size: 0x04
enum EContextualAnimWarpPointDefinitionMode : uint8_t
{
	EContextualAnimWarpPointDefinitionMode__PrimaryActor0                            = 0,
	EContextualAnimWarpPointDefinitionMode__Socket1                                  = 1,
	EContextualAnimWarpPointDefinitionMode__Custom2                                  = 2,
	EContextualAnimWarpPointDefinitionMode__EContextualAnimWarpPointDefinitionMode_MAX3 = 3
};

