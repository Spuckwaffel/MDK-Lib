
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
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	SMember(FAlphaBlend)                               BlendOut                                                    OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x98, 1, 0, 0})
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
	CMember(TSet<UContextualAnimSceneActorComponent*>) SceneActorCompContainer                                     OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<UContextualAnimSceneInstance*>)     Instances                                                   OFFSET(get<T>, {0x80, 16, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor
	// bool TryStopSceneWithActor(AActor* Actor);                                                                               // [0x74b4d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded
	// void OnSceneInstanceEnded(UContextualAnimSceneInstance* SceneInstance);                                                  // [0x74b45a4] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimManager.IsActorInAnyScene
	// bool IsActorInAnyScene(AActor* Actor);                                                                                   // [0x74b3ee4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimManager.GetSceneWithActor
	// UContextualAnimSceneInstance* GetSceneWithActor(AActor* Actor);                                                          // [0x74b3e28] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimManager.GetContextualAnimManager
	// UContextualAnimManager* GetContextualAnimManager(UObject* WorldContextObject);                                           // [0x74b3a98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimManager.BP_TryStartScene
	// UContextualAnimSceneInstance* BP_TryStartScene(UContextualAnimSceneAsset* SceneAsset, FContextualAnimStartSceneParams& Params); // [0x74b2738] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
/// Size: 0x0120 (0x000570 - 0x000690)
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FMulticastInlineDelegate)                  OnJoinedSceneDelegate                                       OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLeftSceneDelegate                                         OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayMontageNotifyBeginDelegate                            OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bEnableDebug                                                OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	SMember(FContextualAnimRepBindingsData)            RepBindings                                                 OFFSET(getStruct<T>, {0x5B0, 64, 0, 0})
	SMember(FContextualAnimRepLateJoinData)            RepLateJoinData                                             OFFSET(getStruct<T>, {0x5F0, 40, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionData                                           OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionSingleActorData                                OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	CMember(TArray<FContextualAnimIKTarget>)           IKTargets                                                   OFFSET(get<T>, {0x670, 16, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
	// bool TransitionSingleActor(int32_t SectionIdx, int32_t AnimSetIdx);                                                      // [0x74b4cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
	// bool TransitionContextualAnimScene(FName SectionName);                                                                   // [0x74b4c34] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
	// bool StartContextualAnimScene(FContextualAnimSceneBindings& InBindings);                                                 // [0x74b4b7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
	// void ServerStartContextualAnimScene(FContextualAnimSceneBindings InBindings);                                            // [0x74b49d8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
	// void ServerEarlyOutContextualAnimScene();                                                                                // [0x74b498c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
	// void OnTickPose(USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion);               // [0x74b4638] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
	// void OnRep_TransitionData();                                                                                             // [0x74b4590] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
	// void OnRep_RepTransitionSingleActor();                                                                                   // [0x74b457c] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
	// void OnRep_LateJoinData();                                                                                               // [0x74b4568] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
	// void OnRep_Bindings();                                                                                                   // [0x74b4554] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
	// void OnPlayMontageNotifyBegin(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x74b4474] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
	// void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x74b4124] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
	// void OnLeftScene();                                                                                                      // [0x74b4110] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
	// void OnJoinedScene(FContextualAnimSceneBindings& InBindings);                                                            // [0x74b4064] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
	// bool LateJoinContextualAnimScene(AActor* Actor, FName Role);                                                             // [0x74b3fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
	// TArray<FContextualAnimIKTarget> GetIKTargets();                                                                          // [0x74b3c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
	// FContextualAnimIKTarget GetIKTargetByGoalName(FName GoalName);                                                           // [0x74b3ba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimRolesAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimRolesAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FContextualAnimRoleDefinition>)     Roles                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneAsset
/// Size: 0x0048 (0x000030 - 0x000078)
class UContextualAnimSceneAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UContextualAnimRolesAsset*)                RolesAsset                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     PrimaryRole                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TArray<FContextualAnimActorPreviewData>)   OverridePreviewData                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FContextualAnimSceneSection>)       Sections                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(UClass*)                                   SceneInstanceClass                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bDisableCollisionBetweenActors                              OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bPrecomputeAlignmentTracks                                  OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.Query
	// bool Query(FName Role, FContextualAnimQueryResult& OutResult, FContextualAnimQueryParams& QueryParams, FTransform& ToWorldTransform); // [0x74b4730] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetRoles
	// TArray<FName> GetRoles();                                                                                                // [0x74b3d28] Final|Native|Public|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria
	// void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<FContextualAnimPoint>& OutResult); // [0x74b313c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole
	// void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, TArray<FContextualAnimPoint>& OutResult); // [0x74b2968] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection
	// void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName WarpSectionName, float& OutStartTime, float& OutEndTime); // [0x74afa28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime
	// FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName TrackName, float Time); // [0x74af86c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToWarpPoint
	// FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, float Time); // [0x74af6d8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation
	// int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, UAnimSequenceBase* Animation);                                // [0x74af4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole
	// UAnimSequenceBase* BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, FName Role);                          // [0x74af5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneInstance
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UContextualAnimSceneInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionEndTimeReached                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSceneEnded                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorJoined                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorLeft                                                 OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x90, 40, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x74b4394] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x74b42b4] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut
	// void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x74b41ec] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole
	// AActor* GetActorByRole(FName Role);                                                                                      // [0x74b2884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion
/// Size: 0x0008 (0x000028 - 0x000030)
class UContextualAnimSelectionCriterion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EContextualAnimCriterionType)              Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
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
	CMember(TArray<FVector>)                           PolygonPoints                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionConeMode)          Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HalfAngle                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionDistanceMode)      Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
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
class FContextualAnimWarpTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     TargetRotation                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepData
/// Size: 0x0001 (0x000000 - 0x000001)
class FContextualAnimRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      RepCounter                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepBindingsData
/// Size: 0x003F (0x000001 - 0x000040)
class FContextualAnimRepBindingsData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindings
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimSceneBindings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FContextualAnimSceneBinding>)       Data                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBinding
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimSceneBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FContextualAnimSceneBindingContext)        Context                                                     OFFSET(getStruct<T>, {0x0, 208, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindingContext
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FContextualAnimSceneBindingContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UContextualAnimSceneActorComponent*>) CachedSceneActorComp                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            CachedAnimInstance                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   CachedSkeletalMesh                                          OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepLateJoinData
/// Size: 0x0027 (0x000001 - 0x000028)
class FContextualAnimRepLateJoinData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepTransitionData
/// Size: 0x0017 (0x000001 - 0x000018)
class FContextualAnimRepTransitionData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      SectionIdx                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      AnimSetIdx                                                  OFFSET(get<char>, {0x3, 1, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSet
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FContextualAnimTrack>)              Tracks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   WarpPoints                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(float)                                     RandomWeight                                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimTrack
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UAnimSequenceBase*)                        Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AnimMaxStartTime                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bRequireFlyingMode                                          OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bOptional                                                   OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    AlignmentData                                               OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    IKTargetData                                                OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<UContextualAnimSelectionCriterion*>) SelectionCriteria                                          OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FTransform)                                MeshToScene                                                 OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAlignmentTrackContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimAlignmentTrackContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FAnimSequenceTrackContainer)               Tracks                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     SampleInterval                                              OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneSection
/// Size: 0x0078 (0x000000 - 0x000078)
class FContextualAnimSceneSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FContextualAnimSet>)                AnimSets                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FContextualAnimIKTargetDefContainer>) RoleToIKTargetDefsMap                                OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TArray<FContextualAnimWarpPointDefinition>) WarpPointDefinitions                                       OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointDefinition
/// Size: 0x001C (0x000000 - 0x00001C)
class FContextualAnimWarpPointDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WarpTargetName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimWarpPointDefinitionMode)    Mode                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FContextualAnimWarpPointCustomParams)      Params                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointCustomParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimWarpPointCustomParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Origin                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAlongClosestDistance                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FName)                                     OtherRole                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimIKTargetDefContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FContextualAnimIKTargetDefinition>) IKTargetDefs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefinition
/// Size: 0x0014 (0x000000 - 0x000014)
class FContextualAnimIKTargetDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(EContextualAnimIKTargetProvider)           Provider                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     TargetRoleName                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     TargetBoneName                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimPoint
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimActorPreviewData
/// Size: 0x0088 (0x000000 - 0x000088)
class FContextualAnimActorPreviewData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimActorPreviewType)           Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewAnimInstance                                         OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              PreviewStaticMesh                                           OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimIKTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRoleDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimRoleDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsCharacter                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FTransform)                                MeshToComponent                                             OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimWarpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimStartSceneParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimStartSceneParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FName, FContextualAnimSceneBindingContext>) RoleToActorMap                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryResult
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                EntryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                SyncTransform                                               OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(float)                                     AnimStartTime                                               OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimQueryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Querier                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                QueryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bComplexQuery                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bFindAnimStartTime                                          OFFSET(get<bool>, {0x71, 1, 0, 0})
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

