
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
	CMember(UControlRigShapeLibrary*)                  ShapeLibrary                                                OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TArray<FName>)                             ShapeNames                                                  OFFSET(get<T>, {0x108, 16, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeLibraryLink.SetShapeLibrary
	// void SetShapeLibrary(UControlRigShapeLibrary* InShapeLibrary);                                                           // [0x6de7714] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeLibraryLink.GetShapeLibrary
	// UControlRigShapeLibrary* GetShapeLibrary();                                                                              // [0x6d74778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x0358 (0x000028 - 0x000380)
class URigHierarchy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  ModifiedEventDynamic                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(uint16_t)                                  TopologyVersion                                             OFFSET(get<uint16_t>, {0x98, 2, 0, 0})
	DMember(uint16_t)                                  MetadataVersion                                             OFFSET(get<uint16_t>, {0x9A, 2, 0, 0})
	DMember(uint16_t)                                  MetadataTagVersion                                          OFFSET(get<uint16_t>, {0x9C, 2, 0, 0})
	DMember(bool)                                      bEnableDirtyPropagation                                     OFFSET(get<bool>, {0x9E, 1, 0, 0})
	DMember(int32_t)                                   TransformStackIndex                                         OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	CMember(URigHierarchyController*)                  HierarchyController                                         OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TMap<FRigElementKey, FRigElementKey>)      PreviousNameMap                                             OFFSET(get<T>, {0x208, 80, 0, 0})
	CMember(URigHierarchy*)                            HierarchyForCacheValidation                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex
	// void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);                                                    // [0x6de9904] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue
	// void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);                                                             // [0x6de967c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace
	// bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                    // [0x6de92e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToParent
	// bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);               // [0x6de8e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent
	// bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                 // [0x6de8ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SortKeys
	// TArray<FRigElementKey> SortKeys(TArray<FRigElementKey>& InKeys);                                                         // [0x6de89e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata
	// bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);                                    // [0x6de8640] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata
	// bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);                       // [0x6de8250] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata
	// bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);                              // [0x6de7e0c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata
	// bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);                 // [0x6de7a1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTag
	// bool SetTag(FRigElementKey InItem, FName InTag);                                                                         // [0x6de7794] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata
	// bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);                                  // [0x6de736c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata
	// bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);                     // [0x6de6fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata
	// bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);                      // [0x6de6c04] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	// bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);         // [0x6de6838] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata
	// bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);                                        // [0x6de6490] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata
	// bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);                           // [0x6de60c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint
	// void SetPose_ForBlueprint(FRigPose InPose);                                                                              // [0x6de5ef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray
	// bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // [0x6de5a0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeight
	// bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // [0x6de543c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata
	// bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);                                        // [0x6de50a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata
	// bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);                           // [0x6de4cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex
	// void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x6de461c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform
	// void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x6de3eb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata
	// bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);                          // [0x6de3b10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	// bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);             // [0x6de3744] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata
	// bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue);                                     // [0x6de33ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata
	// bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue);                        // [0x6de2fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex
	// void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x6de2924] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform
	// void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x6de21b8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata
	// bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);                                       // [0x6de1e24] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata
	// bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);                          // [0x6de1a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex
	// void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);                                       // [0x6de1938] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValue
	// void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);                                                // [0x6de15b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex
	// void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);                                              // [0x6de14f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility
	// void SetControlVisibility(FRigElementKey InKey, bool bVisibility);                                                       // [0x6de1260] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex
	// void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x6de0cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValue
	// void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x6de06ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	// void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);    // [0x6de0244] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform
	// void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);             // [0x6ddfd00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex
	// void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x6ddf7d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettings
	// void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x6ddf1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	// void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // [0x6ddefa8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator
	// void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InRotator, bool bInitial, bool bFixEulerFlips);          // [0x6ddeb64] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotationOrderByIndex
	// void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder);               // [0x6ddeaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotationOrder
	// void SetControlPreferredRotationOrder(FRigElementKey InKey, EEulerRotationOrder InRotationOrder);                        // [0x6dde810] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredEulerAnglesByIndex
	// void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // [0x6dde4f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredEulerAngles
	// void SetControlPreferredEulerAngles(FRigElementKey InKey, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // [0x6dddf34] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	// void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x6ddd898] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform
	// void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x6ddd12c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata
	// bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);                                         // [0x6ddcd94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata
	// bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);                            // [0x6ddc9ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent
	// void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);                            // [0x6ddc624] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x6ddc610] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial
	// void ResetPoseToInitial(ERigElementType InTypeFilter);                                                                   // [0x6ddc590] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues
	// void ResetCurveValues();                                                                                                 // [0x6ddc538] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Reset
	// void Reset();                                                                                                            // [0x6ddc524] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata
	// bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);                                                        // [0x6ddc29c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata
	// bool RemoveAllMetadata(FRigElementKey InItem);                                                                           // [0x6ddc134] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Num
	// int32_t Num();                                                                                                           // [0x315ad40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D
	// FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);                                                        // [0x6ddbd78] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector
	// FRigControlValue MakeControlValueFromVector(FVector InValue);                                                            // [0x6ddbf50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	// FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);                                        // [0x6ddbb84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform
	// FRigControlValue MakeControlValueFromTransform(FTransform InValue);                                                      // [0x6ddb944] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator
	// FRigControlValue MakeControlValueFromRotator(FRotator InValue);                                                          // [0x6ddb784] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt
	// FRigControlValue MakeControlValueFromInt(int32_t InValue);                                                               // [0x6ddb690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat
	// FRigControlValue MakeControlValueFromFloat(float InValue);                                                               // [0x6ddb598] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	// FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);                                            // [0x6ddb388] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool
	// FRigControlValue MakeControlValueFromBool(bool InValue);                                                                 // [0x6ddb27c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.IsValidIndex
	// bool IsValidIndex(int32_t InElementIndex);                                                                               // [0x6ddb1e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex
	// bool IsSelectedByIndex(int32_t InIndex);                                                                                 // [0x6ddb138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelected
	// bool IsSelected(FRigElementKey InKey);                                                                                   // [0x6ddafd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsProcedural
	// bool IsProcedural(FRigElementKey& InKey);                                                                                // [0x6ddaf24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsParentedTo
	// bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);                                                      // [0x6ddac98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex
	// bool IsCurveValueSetByIndex(int32_t InElementIndex);                                                                     // [0x6ddac0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet
	// bool IsCurveValueSet(FRigElementKey InKey);                                                                              // [0x6ddaa9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable
	// bool IsControllerAvailable();                                                                                            // [0x6ddaa84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.HasTag
	// bool HasTag(FRigElementKey InItem, FName InTag);                                                                         // [0x6dda7fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata
	// FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);                            // [0x6dda434] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue
	// FVector GetVectorFromControlValue(FRigControlValue InValue);                                                             // [0x6dda2b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata
	// TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                     // [0x6dda004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue
	// FVector2D GetVector2DFromControlValue(FRigControlValue InValue);                                                         // [0x6dd9e90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	// FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);                                         // [0x6dd9ca4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata
	// FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);                   // [0x6dd9820] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue
	// FTransform GetTransformFromControlValue(FRigControlValue InValue);                                                       // [0x6dd9604] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata
	// TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);                               // [0x6dd9358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTags
	// TArray<FName> GetTags(FRigElementKey InItem);                                                                            // [0x6dd91d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys
	// TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);                                                    // [0x6dd9134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata
	// FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);                         // [0x6dd8d6c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue
	// FRotator GetRotatorFromControlValue(FRigControlValue InValue);                                                           // [0x6dd8bd8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata
	// TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                   // [0x6dd8904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRootElementKeys
	// TArray<FRigElementKey> GetRootElementKeys();                                                                             // [0x6dd88a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys
	// TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);                                                                 // [0x6dd87f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata
	// FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);       // [0x6dd8450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	// TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);                       // [0x6dd8158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys
	// TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);                                                                 // [0x6dd80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata
	// FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);                                  // [0x6dd7cec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata
	// TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x6dd7a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent
	// FRigElementKey GetPreviousParent(FRigElementKey& InKey);                                                                 // [0x6dd7980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousName
	// FName GetPreviousName(FRigElementKey& InKey);                                                                            // [0x6dd78ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPose
	// FRigPose GetPose(bool bInitial, bool bIncludeTransientControls);                                                         // [0x6dd77e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray
	// TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);                                   // [0x6dd7294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeight
	// FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);                       // [0x6dd6ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex
	// FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x6dd6dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransform
	// FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x6dd6ad8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParents
	// TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);                                                // [0x6dd7534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents
	// int32_t GetNumberOfParents(FRigElementKey InKey);                                                                        // [0x6dd696c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNullKeys
	// TArray<FRigElementKey> GetNullKeys(bool bTraverse);                                                                      // [0x6dd68c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata
	// FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);                                  // [0x6dd6520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata
	// TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x6dd6274] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataType
	// ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);                                           // [0x6dd5fec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames
	// TArray<FName> GetMetadataNames(FRigElementKey InItem);                                                                   // [0x6dd5e6c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex
	// FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);                                              // [0x6dd5d58] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform
	// FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);                                                       // [0x6dd5a88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
	// int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey);                                                                // [0x6dd5918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	// FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                  // [0x6dd5804] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform
	// FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                           // [0x6dd5520] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata
	// FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);             // [0x6dd5174] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	// TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                           // [0x6dd4ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKeys
	// TArray<FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);                                                        // [0x6dd4d3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKey
	// FRigElementKey GetKey(int32_t InElementIndex);                                                                           // [0x6dd4cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue
	// int32_t GetIntFromControlValue(FRigControlValue InValue);                                                                // [0x6dd4b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata
	// int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue);                             // [0x6dd47b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata
	// TArray<int32_t> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x6dd450c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint
	// int32_t GetIndex_ForBlueprint(FRigElementKey InKey);                                                                     // [0x6dd43a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex
	// FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x6dd4294] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform
	// FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x6dd3fc4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	// FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                 // [0x6dd3eb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	// FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                          // [0x6dd3bcc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	// FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);                                // [0x6dd3ab8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	// FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);                                         // [0x6dd37e8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata
	// float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);                                 // [0x6dd3454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue
	// float GetFloatFromControlValue(FRigControlValue InValue);                                                                // [0x6dd32f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata
	// TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                        // [0x6dd304c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFirstParent
	// FRigElementKey GetFirstParent(FRigElementKey InKey);                                                                     // [0x6dd2eec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	// FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);                                             // [0x6dd2cf8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent
	// FRigElementKey GetDefaultParent(FRigElementKey InKey);                                                                   // [0x6dd2b98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex
	// float GetCurveValueByIndex(int32_t InElementIndex);                                                                      // [0x6dd2b08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValue
	// float GetCurveValue(FRigElementKey InKey);                                                                               // [0x6dd2998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys
	// TArray<FRigElementKey> GetCurveKeys();                                                                                   // [0x6dd2954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex
	// FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);                       // [0x6dd2794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValue
	// FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);                                // [0x6dd24a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	// FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);                                       // [0x6dd23d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator
	// FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);                                                // [0x6dd2118] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrderByIndex
	// EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings);            // [0x6dd2054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrder
	// EEulerRotationOrder GetControlPreferredEulerRotationOrder(FRigElementKey InKey, bool bFromSettings);                     // [0x6dd1db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerAnglesByIndex
	// FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder, bool bInitial); // [0x6dd1ca8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerAngles
	// FVector GetControlPreferredEulerAngles(FRigElementKey InKey, EEulerRotationOrder InRotationOrder, bool bInitial);        // [0x6dd18f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetController
	// URigHierarchyController* GetController(bool bCreateIfNeeded);                                                            // [0x6dd28c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetControlKeys
	// TArray<FRigElementKey> GetControlKeys(bool bTraverse);                                                                   // [0x6dd184c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetChildren
	// TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);                                               // [0x6dd159c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata
	// bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);                                    // [0x6dd1204] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata
	// TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                          // [0x6dd0f58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys
	// TArray<FRigElementKey> GetBoneKeys(bool bTraverse);                                                                      // [0x6dd0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	// TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);                                                          // [0x6dd0e08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	// FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x6dd0cb0] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	// FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey);                                                  // [0x6dd0bd0] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	// FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x6dd0a78] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.CopyPose
	// void CopyPose(URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // [0x6dd08d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy
	// void CopyHierarchy(URigHierarchy* InHierarchy);                                                                          // [0x6dd0854] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint
	// bool Contains_ForBlueprint(FRigElementKey InKey);                                                                        // [0x6dd06ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0028 (0x000058 - 0x000080)
class UTransformableControlHandle : public UTransformableHandle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  OFFSET(get<T>, {0x58, 32, 0, 0})
	SMember(FName)                                     ControlName                                                 OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x02D8 (0x000338 - 0x000610)
class UControlRig : public URigVMHost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(ERigExecutionType)                         ExecutionType                                               OFFSET(get<T>, {0x340, 1, 0, 0})
	SMember(FRigHierarchySettings)                     HierarchySettings                                           OFFSET(get<T>, {0x344, 4, 0, 0})
	CMember(TMap<FRigElementKey, FRigControlElementCustomization>) ControlCustomizations                           OFFSET(get<T>, {0x348, 80, 0, 0})
	CMember(URigHierarchy*)                            DynamicHierarchy                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ShapeLibraries                                              OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    ShapeLibraryNameMap                                         OFFSET(get<T>, {0x3B0, 80, 0, 0})
	CMember(UAnimationDataSourceRegistry*)             DataSourceRegistry                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FRigInfluenceMapPerEvent)                  Influences                                                  OFFSET(get<T>, {0x4B0, 96, 0, 0})
	CMember(UControlRig*)                              InteractionRig                                              OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UClass*)                                   InteractionRigClass                                         OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnControlSelected_BP                                        OFFSET(get<T>, {0x5F0, 1, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(UClass* InInteractionRigClass);                                                              // [0x6e1e7cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(UControlRig* InInteractionRig);                                                                   // [0x6e1e74c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SelectControl
	// void SelectControl(FName& InControlName, bool bSelect);                                                                  // [0x6e1c2a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestConstruction
	// void RequestConstruction();                                                                                              // [0x6e1c278] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	// void OnControlSelectedBP__DelegateSignature(UControlRig* Rig, FRigControlElement& Control, bool bSelected);              // [0x1ebf994] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/ControlRig.ControlRig.IsControlSelected
	// bool IsControlSelected(FName& InControlName);                                                                            // [0x6e1bc98] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// UClass* GetInteractionRigClass();                                                                                        // [0x6e1ba7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// UControlRig* GetInteractionRig();                                                                                        // [0x6e1ba64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHostingActor
	// AActor* GetHostingActor();                                                                                               // [0x6e1b804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHierarchy
	// URigHierarchy* GetHierarchy();                                                                                           // [0x278ab08] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.FindControlRigs
	// TArray<UControlRig*> FindControlRigs(UObject* Outer, UClass* OptionalClass);                                             // [0x6e1ab44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CurrentControlSelection
	// TArray<FName> CurrentControlSelection();                                                                                 // [0x6e1aa18] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle
	// UTransformableControlHandle* CreateTransformableControlHandle(UObject* Outer, FName& ControlName);                       // [0x6e1a948] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ClearControlSelection
	// bool ClearControlSelection();                                                                                            // [0x6e19c1c] Native|Public|BlueprintCallable 
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
	CMember(UClass*)                                   ControlRigClass                                             OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreInitializeDelegate                                     OFFSET(get<T>, {0x570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostInitializeDelegate                                    OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreConstructionDelegate                                   OFFSET(get<T>, {0x590, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostConstructionDelegate                                  OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreForwardsSolveDelegate                                  OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostForwardsSolveDelegate                                 OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) UserDefinedElements                                         OFFSET(get<T>, {0x5D0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) MappedElements                                              OFFSET(get<T>, {0x5E0, 16, 0, 0})
	DMember(bool)                                      bEnableLazyEvaluation                                       OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(float)                                     LazyEvaluationPositionThreshold                             OFFSET(get<float>, {0x5F4, 4, 0, 0})
	DMember(float)                                     LazyEvaluationRotationThreshold                             OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     LazyEvaluationScaleThreshold                                OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(bool)                                      bResetTransformBeforeTick                                   OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bResetInitialsBeforeConstruction                            OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(bool)                                      bUpdateRigOnTick                                            OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x603, 1, 0, 0})
	DMember(bool)                                      bDrawBones                                                  OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(bool)                                      bShowDebugDrawing                                           OFFSET(get<bool>, {0x605, 1, 0, 0})
	CMember(UControlRig*)                              ControlRig                                                  OFFSET(get<T>, {0x608, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                            // [0x6e1ed0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding
	// void SetObjectBinding(UObject* InObjectToBind);                                                                          // [0x6e1e928] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x6e1e84c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0x6e1e3f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x6e1df7c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0x6e1dc48] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0x6e1d8ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0x6e1d62c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0x6e1d36c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass
	// void SetControlRigClass(UClass* InControlRigClass);                                                                      // [0x6e1d2e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x6e1d024] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0x6e1ccc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0x6e1cbc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0x6e1cb04] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0x6e1ca04] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x6e1c474] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);                                            // [0x6e1c3dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	// void OnPreInitialize(UControlRigComponent* Component);                                                                   // [0x6e1bfe0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve
	// void OnPreForwardsSolve(UControlRigComponent* Component);                                                                // [0x6e1bf5c] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction
	// void OnPreConstruction(UControlRigComponent* Component);                                                                 // [0x6e1bed8] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(UControlRigComponent* Component);                                                                  // [0x6e1be54] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve
	// void OnPostForwardsSolve(UControlRigComponent* Component);                                                               // [0x599a2b4] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction
	// void OnPostConstruction(UControlRigComponent* Component);                                                                // [0x6e1bdd0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                       // [0x6e1bc84] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0x6e1bad4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0x6e1b950] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0x6e1b83c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0x6e1b5d8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0x6e1b540] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0x6e1b42c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0x6e1b32c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0x6e1b220] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// UControlRig* GetControlRig();                                                                                            // [0x6e1b1fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0x6e1b0fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0x6e1afe8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                                // [0x6e1aefc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                                // [0x6e1ae6c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                                  // [0x6e1ad80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0x6e1ac6c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x6e1ac40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0x6e1aa5c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                              // [0x6e19c44] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.CanExecute
	// bool CanExecute();                                                                                                       // [0x6e19be4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x6e18eb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x6e18e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0x6e18734] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);                                       // [0x6e18690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x00A8 (0x000290 - 0x000338)
class AControlRigControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(AActor*)                                   ActorToTrack                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UClass*)                                   ControlRigClass                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bRefreshOnTick                                              OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      bIsSelectable                                               OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride                                            OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FString)                                   ColorParameter                                              OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(USceneComponent*)                          ActorRootComponent                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  OFFSET(get<T>, {0x2D0, 32, 0, 0})
	CMember(TArray<FName>)                             ControlNames                                                OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<FTransform>)                        ShapeTransforms                                             OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Components                                                  OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Materials                                                   OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(get<T>, {0x330, 4, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor
	// void ResetControlActor();                                                                                                // [0x6e1c28c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                          // [0x6e1c250] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                            // [0x6e19c08] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x00B0 (0x000290 - 0x000340)
class AControlRigShapeActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(USceneComponent*)                          ActorRootComponent                                          OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(uint32_t)                                  ControlRigIndex                                             OFFSET(get<uint32_t>, {0x2A0, 4, 0, 0})
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  OFFSET(get<T>, {0x2A4, 8, 0, 0})
	SMember(FName)                                     ControlName                                                 OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FName)                                     ShapeName                                                   OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(get<T>, {0x2B4, 4, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x330, 1, 1, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x330, 1, 1, 1})


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                      // [0x6e1ea2c] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                                  // [0x6e1e9a8] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                        // [0x6e1def8] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0x6e1dde8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0x570e6d8] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                               // [0x5c35748] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered
	// bool IsHovered();                                                                                                        // [0x6e1bd60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x6e1bd38] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                         // [0x6e1b748] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0118 (0x000028 - 0x000140)
class UControlRigShapeLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FControlRigShapeDefinition)                DefaultShape                                                OFFSET(get<T>, {0x30, 160, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                DefaultMaterial                                             OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                XRayMaterial                                                OFFSET(get<T>, {0xF0, 32, 0, 0})
	SMember(FName)                                     MaterialColorParameter                                      OFFSET(get<T>, {0x110, 4, 0, 0})
	CMember(TArray<FControlRigShapeDefinition>)        Shapes                                                      OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigTestData
/// Size: 0x0120 (0x000028 - 0x000148)
class UControlRigTestData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FSoftObjectPath)                           ControlRigObjectPath                                        OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FControlRigTestDataFrame)                  Initial                                                     OFFSET(get<T>, {0x40, 144, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          InputFrames                                                 OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          OutputFrames                                                OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<int32_t>)                           FramesToSkip                                                OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(double)                                    Tolerance                                                   OFFSET(get<double>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigTestData.SetupReplay
	// bool SetupReplay(UControlRig* InControlRig, bool bGroundTruth);                                                          // [0x6e1eab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.ReleaseReplay
	// void ReleaseReplay();                                                                                                    // [0x6e1c264] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.Record
	// bool Record(UControlRig* InControlRig, double InRecordingDuration);                                                      // [0x6e1c064] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.IsReplaying
	// bool IsReplaying();                                                                                                      // [0x6e1bdac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.IsRecording
	// bool IsRecording();                                                                                                      // [0x6e1bd88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetTimeRange
	// FVector2D GetTimeRange(bool bInput);                                                                                     // [0x6e1bbe8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetPlaybackMode
	// EControlRigTestDataPlaybackMode GetPlaybackMode();                                                                       // [0x6e1ba94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetFrameIndexForTime
	// int32_t GetFrameIndexForTime(double InSeconds, bool bInput);                                                             // [0x6e1b67c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.CreateNewAsset
	// UControlRigTestData* CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName);                          // [0x6e19c58] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<UControlRigValidationPass*>)        Passes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
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
	CMember(TArray<bool>)                              IsControlActive                                             OFFSET(get<T>, {0x610, 16, 0, 0})
	CMember(EControlRigFKRigExecuteMode)               ApplyMode                                                   OFFSET(get<T>, {0x620, 1, 0, 0})
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x0078 (0x000028 - 0x0000A0)
class URigHierarchyController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bReportWarningsAndErrors                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<URigHierarchy*>)            Hierarchy                                                   OFFSET(get<T>, {0x2C, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.RigHierarchyController.SetSelection
	// bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);                                             // [0x6e91480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetParent
	// bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e90edc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy
	// void SetHierarchy(URigHierarchy* InHierarchy);                                                                           // [0x6e90e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName
	// FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e908b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings
	// bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);                          // [0x6e904c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.SelectElement
	// bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);                                            // [0x6e90130] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ReorderElement
	// bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand);               // [0x6e8fa28] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RenameElement
	// FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // [0x6e8f46c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveParent
	// bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8eec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveElement
	// bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);                                 // [0x6e8eb38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents
	// bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8e6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.MirrorElements
	// TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x6e8d8f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportFromText
	// TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x6e8d120] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportCurves
	// TArray<FRigElementKey> ImportCurves(USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8ced0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportBones
	// TArray<FRigElementKey> ImportBones(USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8cc4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy
	// URigHierarchy* GetHierarchy();                                                                                           // [0x6e8cc24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings
	// FRigControlSettings GetControlSettings(FRigElementKey InKey);                                                            // [0x6e8c96c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportToText
	// FString ExportToText(TArray<FRigElementKey> InKeys);                                                                     // [0x6e8c25c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText
	// FString ExportSelectionToText();                                                                                         // [0x6e8bbdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements
	// TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x6e8b9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.DeselectElement
	// bool DeselectElement(FRigElementKey InKey);                                                                              // [0x6e8b784] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ClearSelection
	// bool ClearSelection();                                                                                                   // [0x6e8b760] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody
	// FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8b0ac] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddParent
	// bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // [0x6e8ab08] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddNull
	// FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e8a460] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddCurve
	// FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);                         // [0x6e8a328] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint
	// FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e89c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddBone
	// FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e89458] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	// FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x6e88f10] Final|Native|Public|BlueprintCallable 
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
	CMember(TArray<UObject*>)                          Objects                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0278 (0x000158 - 0x0003D0)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(UControlRig*)                              ControlRig                                                  OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UClass*)                                   ControlRigClass                                             OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<bool>)                              ControlsMask                                                OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMovieSceneTransformMask)                  TransformMask                                               OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(get<T>, {0x1C8, 272, 0, 0})
	CMember(TMap<FName, FChannelMapInfo>)              ControlChannelMap                                           OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TArray<FEnumParameterNameAndCurve>)        EnumParameterNamesAndCurves                                 OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     IntegerParameterNamesAndCurves                              OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       SpaceChannels                                               OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       ConstraintsChannels                                         OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x00B8 (0x000098 - 0x000150)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UControlRig*)                              ControlRig                                                  OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UMovieSceneSection*)                       SectionToKey                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(TMap<FName, FControlRotationOrder>)        ControlsRotationOrder                                       OFFSET(get<T>, {0x100, 80, 0, 0})
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
	SMember(FControlRigControlPose)                    Pose                                                        OFFSET(get<T>, {0x28, 96, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls
	// void SelectControls(UControlRig* InControlRig, bool bDoMirror);                                                          // [0x6e90068] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose
	// void SavePose(UControlRig* InControlRig, bool bUseAll);                                                                  // [0x6e8ffa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName
	// void ReplaceControlName(FName& CurrentName, FName& NewName);                                                             // [0x6e8fec8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose
	// void PastePose(UControlRig* InControlRig, bool bDoKey, bool bDoMirror);                                                  // [0x6e8e4a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose
	// void GetCurrentPose(UControlRig* InControlRig, FControlRigControlPose& OutPose);                                         // [0x6e8cb08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames
	// TArray<FName> GetControlNames();                                                                                         // [0x6e8c924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	// bool DoesMirrorMatch(UControlRig* ControlRig, FName& ControlName);                                                       // [0x6e8b8f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UControlRigPoseMirrorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   RightSide                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   LeftSide                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigPoseProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FDirectoryPath>)                    RootSaveDirs                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(URigHierarchy*)                            Hierarchy                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Selection                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	// bool EnsureAtLeastOneRigElementSelected();                                                                               // [0x6e8bb68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               OFFSET(get<T>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	// TArray<FRigVMUserWorkflow> ProvideWorkflows(UObject* InSubject);                                                         // [0x6e8e5d4] Final|Native|Public  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bCheckControls                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bCheckBones                                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCheckCurves                                                OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     TranslationPrecision                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationPrecision                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ScalePrecision                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CurvePrecision                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     EventNameA                                                  OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     EventNameB                                                  OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigElementKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ERigElementType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FRigBaseElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   NameString                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   CreatedAtInstructionIndex                                   OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0xDC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x01E0 (0x0000E0 - 0x0002C0)
class FRigTransformElement : public FRigBaseElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        OFFSET(get<T>, {0xE0, 416, 0, 0})
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FRigCurrentAndInitialTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigLocalAndGlobalTransform)               Current                                                     OFFSET(get<T>, {0x0, 208, 0, 0})
	SMember(FRigLocalAndGlobalTransform)               Initial                                                     OFFSET(get<T>, {0xD0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FRigLocalAndGlobalTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigComputedTransform)                     Local                                                       OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FRigComputedTransform)                     Global                                                      OFFSET(get<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigComputedTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x0, 96, 0, 0})
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
	SMember(FRigControlSettings)                       Settings                                                    OFFSET(get<T>, {0x3C0, 432, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Offset                                                      OFFSET(get<T>, {0x570, 416, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Shape                                                       OFFSET(get<T>, {0x710, 416, 0, 0})
	SMember(FRigPreferredEulerAngles)                  PreferredEulerAngles                                        OFFSET(get<T>, {0x8B0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigPreferredEulerAngles : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Current                                                     OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Initial                                                     OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x01B0 (0x000000 - 0x0001B0)
class FRigControlSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(ERigControlAnimationType)                  AnimationType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TArray<FRigControlLimitEnabled>)           LimitEnabled                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                OFFSET(get<T>, {0x24, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                OFFSET(get<T>, {0xA8, 132, 0, 0})
	DMember(bool)                                      bShapeVisible                                               OFFSET(get<bool>, {0x12C, 1, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             OFFSET(get<T>, {0x12D, 1, 0, 0})
	SMember(FName)                                     ShapeName                                                   OFFSET(get<T>, {0x130, 4, 0, 0})
	SMember(FLinearColor)                              ShapeColor                                                  OFFSET(get<T>, {0x134, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         OFFSET(get<bool>, {0x144, 1, 0, 0})
	CMember(UEnum*)                                    ControlEnum                                                 OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FRigControlElementCustomization)           Customization                                               OFFSET(get<T>, {0x150, 32, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(bool)                                      bGroupWithParentControl                                     OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bRestrictSpaceSwitching                                     OFFSET(get<bool>, {0x191, 1, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(EEulerRotationOrder)                       PreferredRotationOrder                                      OFFSET(get<T>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bUsePreferredRotationOrder                                  OFFSET(get<bool>, {0x1A9, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigControlElementCustomization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigElementKey>)                    AvailableSpaces                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    RemovedSpaces                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	SMember(FRigControlValueStorage)                   FloatStorage                                                OFFSET(get<T>, {0x0, 132, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValueStorage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	DMember(float)                                     Float00                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Float01                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Float02                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Float03                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Float10                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Float11                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Float12                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Float13                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Float20                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Float21                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Float22                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Float23                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Float30                                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Float31                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Float32                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Float33                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Float001                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Float011                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Float021                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Float031                                                    OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Float101                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Float111                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Float121                                                    OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Float131                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Float201                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Float211                                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     Float221                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Float231                                                    OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Float301                                                    OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Float311                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Float321                                                    OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Float331                                                    OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigControlLimitEnabled : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bMinimum                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bMaximum                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigInfluenceMapPerEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigInfluenceMap>)                  Maps                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      EventToIndex                                                OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
class FRigInfluenceMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     EventName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FRigInfluenceEntry>)                Entries                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FRigElementKey, int32_t>)             KeyToIndex                                                  OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigInfluenceEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Source                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigHierarchySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ProceduralElementLimit                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0140 (0x000008 - 0x000148)
class FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bApplyBoneFilter                                            OFFSET(get<bool>, {0x9, 1, 0, 0})
	SMember(FInputBlendPose)                           BoneFilter                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(get<T>, {0x20, 272, 0, 0})
	SMember(FMovieSceneEvaluationOperand)              Operand                                                     OFFSET(get<T>, {0x130, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigTransformStackEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<ERigTransformStackEntryType>)  EntryType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FTransform)                                OldTransform                                                OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                NewTransform                                                OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(bool)                                      bAffectChildren                                             OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TArray<FString>)                           Callstack                                                   OFFSET(get<T>, {0xD8, 16, 0, 0})
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
	DMember(float)                                     Location                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
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
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
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
	SMember(FRigElementKey)                            Key                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FRigElementWeight>)                 ParentWeights                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        OFFSET(get<T>, {0x40, 416, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigHierarchyCopyPasteContent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigHierarchyCopyPasteContentPerElement>) Elements                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<ERigElementType>)                   Types                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Contents                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        LocalTransforms                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        GlobalTransforms                                            OFFSET(get<T>, {0x40, 16, 0, 0})
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
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
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
	SMember(FPoseLink)                                 Source                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bResetInputPoseToInitial                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bTransferInputPose                                          OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bTransferInputCurves                                        OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bTransferPoseInGlobalSpace                                  OFFSET(get<bool>, {0x6B, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    InputBonesToTransfer                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    OutputBonesToTransfer                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TWeakObjectPtr<UNodeMappingContainer*>)    NodeMappingContainer                                        OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FControlRigIOSettings)                     InputSettings                                               OFFSET(get<T>, {0x208, 2, 0, 0})
	SMember(FControlRigIOSettings)                     OutputSettings                                              OFFSET(get<T>, {0x20A, 2, 0, 0})
	DMember(bool)                                      bExecute                                                    OFFSET(get<bool>, {0x20C, 1, 0, 0})
	CMember(TArray<FControlRigAnimNodeEventName>)      EventQueue                                                  OFFSET(get<T>, {0x218, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0004 (0x000000 - 0x000004)
class FControlRigAnimNodeEventName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     EventName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRigIOSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUpdatePose                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUpdateCurves                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0230 (0x000230 - 0x000460)
class FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(UClass*)                                   ControlRigClass                                             OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UControlRig*)                              ControlRig                                                  OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x240, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x244, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x245, 1, 1, 0})
	DMember(bool)                                      bSetRefPoseFromSkeleton                                     OFFSET(get<bool>, {0x245, 1, 1, 1})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(get<T>, {0x248, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(get<T>, {0x250, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(get<T>, {0x298, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(get<T>, {0x29C, 48, 0, 0})
	CMember(TMap<FName, FName>)                        InputMapping                                                OFFSET(get<T>, {0x2D0, 80, 0, 0})
	CMember(TMap<FName, FName>)                        OutputMapping                                               OFFSET(get<T>, {0x320, 80, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x420, 4, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000230 - 0x000238)
class FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TWeakObjectPtr<UControlRig*>)              ControlRig                                                  OFFSET(get<T>, {0x230, 8, 0, 0})
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
	SMember(FSoftComponentReference)                   ComponentReference                                          OFFSET(get<T>, {0x0, 64, 0, 0})
	DMember(int32_t)                                   TransformIndex                                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FName)                                     TransformName                                               OFFSET(get<T>, {0x44, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(get<T>, {0x4C, 4, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(get<T>, {0x60, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(EControlRigComponentSpace)                 Space                                                       OFFSET(get<T>, {0xC4, 1, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(int32_t)                                   ElementIndex                                                OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedComponent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USceneComponent*)                          Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigComponentMappedBone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Source                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigComponentMappedCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Source                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(get<T>, {0x4, 4, 0, 0})
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
	SMember(FName)                                     ShapeName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              StaticMesh                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigTestDataVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     CPPType                                                     OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataFrame
/// Size: 0x0090 (0x000000 - 0x000090)
class FControlRigTestDataFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(double)                                    AbsoluteTime                                                OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    DeltaTime                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(TArray<FControlRigTestDataVariable>)       Variables                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FRigPoseElement>)                   Elements                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   HierarchyTopologyVersion                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PoseHash                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigPoseElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FCachedRigElement)                         Index                                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x80, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FCachedRigElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(int32_t)                                   ContainerVersion                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
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
	DMember(float)                                     TimeStep                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TimeLeftForStep                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
class FCRSimLinearSpring : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Equilibrium                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0040 (0x000000 - 0x000040)
class FCRSimPointConstraint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ECRSimConstraintType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   DataA                                                       OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   DataB                                                       OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
class FCRSimPointContainer : public FCRSimContainer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Springs                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCRSimPointConstraint>)             Constraints                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FRigVMSimPoint>)                    PreviousStep                                                OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0080 (0x000000 - 0x000080)
class FCRSimSoftCollision : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(ECRSimSoftCollisionType)                   ShapeType                                                   OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(float)                                     MinimumDistance                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaximumDistance                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      FalloffType                                                 OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bInverted                                                   OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0028 (0x000000 - 0x000028)
class FCRSimPointForce : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ECRSimPointForceType)                      ForceType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x0140 (0x000000 - 0x000140)
class FConstraintNodeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                RelativeParent                                              OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FConstraintOffset)                         ConstraintOffset                                            OFFSET(get<T>, {0x60, 192, 0, 0})
	SMember(FName)                                     LinkedNode                                                  OFFSET(get<T>, {0x120, 4, 0, 0})
	CMember(TArray<FTransformConstraint>)              Constraints                                                 OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
class FAnimationHierarchy : public FNodeHierarchyWithUserData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FConstraintNodeData>)               UserData                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x0150 (0x000010 - 0x000160)
class FRigBone : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     ParentName                                                  OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(get<T>, {0x80, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0xE0, 96, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(ERigBoneType)                              Type                                                        OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigBoneHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigBone>)                          Bones                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x0330 (0x000010 - 0x000340)
class FRigControl : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FName)                                     SpaceName                                                   OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SpaceIndex                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FRigControlValue)                          InitialValue                                                OFFSET(get<T>, {0x90, 132, 0, 0})
	SMember(FRigControlValue)                          Value                                                       OFFSET(get<T>, {0x114, 132, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(bool)                                      bAnimatable                                                 OFFSET(get<bool>, {0x19A, 1, 0, 0})
	DMember(bool)                                      bLimitTranslation                                           OFFSET(get<bool>, {0x19B, 1, 0, 0})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x19C, 1, 0, 0})
	DMember(bool)                                      bLimitScale                                                 OFFSET(get<bool>, {0x19D, 1, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x19E, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                OFFSET(get<T>, {0x1A0, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                OFFSET(get<T>, {0x224, 132, 0, 0})
	DMember(bool)                                      bGizmoEnabled                                               OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bGizmoVisible                                               OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	SMember(FName)                                     GizmoName                                                   OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FTransform)                                GizmoTransform                                              OFFSET(get<T>, {0x2B0, 96, 0, 0})
	SMember(FLinearColor)                              GizmoColor                                                  OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(UEnum*)                                    ControlEnum                                                 OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigControlHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigControl>)                       Controls                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000010 - 0x000018)
class FRigCurve : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigCurveContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigCurve>)                         Curves                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigHierarchyContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigBoneHierarchy)                         BoneHierarchy                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRigSpaceHierarchy)                        SpaceHierarchy                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigControlHierarchy)                      ControlHierarchy                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FRigCurveContainer)                        CurveContainer                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigSpaceHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigSpace>)                         Spaces                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x00D0 (0x000010 - 0x0000E0)
class FRigSpace : public FRigElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(ERigSpaceType)                             SpaceType                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x80, 96, 0, 0})
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
	CMember(TArray<FRigElementKey>)                    Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
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
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigBoolMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigBoolArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<bool>)                              Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigFloatMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigFloatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<float>)                             Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigInt32Metadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigInt32ArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<int32_t>)                           Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigNameMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Value                                                       OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigNameArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigVectorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigVectorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigRotatorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigRotatorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRotator>)                          Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0020 (0x000020 - 0x000040)
class FRigQuatMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigQuatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FQuat>)                             Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0060 (0x000020 - 0x000080)
class FRigTransformMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigTransformArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FTransform>)                        Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigLinearColorMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigLinearColorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FLinearColor>)                      Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigElementKeyMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Value                                                       OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigElementKeyArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRigElementKey>)                    Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigInfluenceEntryModifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
class FAnimNode_ControlRigInputPose : public FAnimNode_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
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
	CMember(UClass*)                                   ControlRigClass                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigSequenceObjectReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FControlRigSequenceObjectReference>) Array                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FControlRigSequenceObjectReferenceMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGuid>)                             BindingIds                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FControlRigSequenceObjectReferences>) References                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
class FEnumParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneByteChannel)                    ParameterCurve                                              OFFSET(get<T>, {0x8, 264, 0, 0})
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
class FIntegerParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 ParameterCurve                                              OFFSET(get<T>, {0x8, 256, 0, 0})
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (0x000000 - 0x000118)
class FSpaceControlNameAndChannel : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     ControlName                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneControlRigSpaceChannel)         SpaceCurve                                                  OFFSET(get<T>, {0x8, 272, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneControlRigSpaceBaseKey>) KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneControlRigSpaceBaseKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EMovieSceneControlRigSpaceType)            SpaceType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FRigElementKey)                            ControlRigElement                                           OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FChannelMapInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ControlIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalChannelIndex                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ParentControlIndex                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     ChannelTypeName                                             OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDoesHaveSpace                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(int32_t)                                   SpaceChannelIndex                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaskIndex                                                   OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CategoryIndex                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<uint32_t>)                          ConstraintsIndex                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0040 (0x000080 - 0x0000C0)
class FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FEnumParameterNameAndCurve>)        Enums                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     Integers                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       Spaces                                                      OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       Constraints                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRotationOrder
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRotationOrder : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOverrideSetting                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
class FControlRigSettingsPerPinBool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, bool>)                       Values                                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x0230 (0x000000 - 0x000230)
class FRigControlCopy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FRigControlValue)                          Value                                                       OFFSET(get<T>, {0x18, 132, 0, 0})
	SMember(FRigElementKey)                            ParentKey                                                   OFFSET(get<T>, {0x9C, 8, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(get<T>, {0xB0, 96, 0, 0})
	SMember(FTransform)                                ParentTransform                                             OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(get<T>, {0x1D0, 96, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (0x000000 - 0x000060)
class FControlRigControlPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigControlCopy>)                   CopyOfControls                                              OFFSET(get<T>, {0x0, 16, 0, 0})
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
	SMember(FVector)                                   Start                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Start                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Start                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ObjectTypes                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x0178 (0x000008 - 0x000180)
class FRigUnit_Control : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FEulerTransform)                           Transform                                                   OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                base                                                        OFFSET(get<T>, {0x50, 96, 0, 0})
	SMember(FTransform)                                InitTransform                                               OFFSET(get<T>, {0xB0, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(get<T>, {0x170, 9, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x179, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0060 (0x000180 - 0x0001E0)
class FRigUnit_Control_StaticMesh : public FRigUnit_Control
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FTransform)                                MeshTransform                                               OFFSET(get<T>, {0x180, 96, 0, 0})
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
	SMember(FString)                                   Namespace                                                   OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   Path                                                        OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   LibraryName                                                 OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      ReplaceExisting                                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      LogShapeLibraries                                           OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ShapeExists
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ShapeExists : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ShapeName                                                   OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x100, 96, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x180, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x100, 96, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x01E8 (0x000008 - 0x0001F0)
class FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x164, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x0258 (0x000008 - 0x000260)
class FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x160, 112, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x1D0, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1D4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1E4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   A                                                           OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x1A4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   A                                                           OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x1A4, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x184, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x184, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1D4, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x1D8, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1D4, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x1E4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x1E4, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_DebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x74, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x90, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x1DC, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1E0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x160, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x1C4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x1D8, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x1DC, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_DebugTransformArrayMutable_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        DrawTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00B0 (0x000160 - 0x000210)
class FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x170, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x174, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x18C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	SMember(FRigUnit_DebugTransformArrayMutable_WorkData) WorkData                                                 OFFSET(get<T>, {0x1F8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x184, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x198, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x19C, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x1B0, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x210, 1, 0, 0})
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
	DMember(int32_t)                                   NumberOfMeasurements                                        OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FString)                                   Prefix                                                      OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   MeasurementsLeft                                            OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(get<T>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x7C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigUnit_ConvertTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FTransform)                                Input                                                       OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FEulerTransform)                           Result                                                      OFFSET(get<T>, {0x70, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_ConvertEulerTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           Input                                                       OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ConvertRotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x20, 32, 0, 0})
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
	SMember(FQuat)                                     Input                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ConvertVectorToRotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Input                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Input                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ConvertRotationToVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ConvertQuaternionToVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_ToSwingAndTwist : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Swing                                                       OFFSET(get<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Twist                                                       OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_BinaryFloatOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Argument0                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Argument1                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
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
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     min                                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MapRange_Float : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinIn                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxIn                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinOut                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxOut                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_BinaryQuaternionOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Argument0                                                   OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Argument1                                                   OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x50, 32, 0, 0})
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
	SMember(FQuat)                                     Argument                                                    OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x30, 32, 0, 0})
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
	SMember(FQuat)                                     Argument                                                    OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_QuaternionToAngle : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Argument                                                    OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigUnit_BinaryTransformOp : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Argument0                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Argument1                                                   OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0xD0, 96, 0, 0})
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
	SMember(FVector)                                   Argument0                                                   OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(get<T>, {0x38, 24, 0, 0})
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
	SMember(FVector)                                   Argument0                                                   OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0090 (0x000000 - 0x000090)
class FAimTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   AlignVector                                                 OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_AimConstraint_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_AimConstraint : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     Joint                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(EAimMode)                                  AimMode                                                     OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(EAimMode)                                  UpMode                                                      OFFSET(get<T>, {0x165, 1, 0, 0})
	SMember(FVector)                                   AimVector                                                   OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(get<T>, {0x180, 24, 0, 0})
	CMember(TArray<FAimTarget>)                        AimTargets                                                  OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<FAimTarget>)                        UpTargets                                                   OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_WorkData)           WorkData                                                    OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_ApplyFK : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     Joint                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(get<T>, {0x1D0, 9, 0, 0})
	CMember(EApplyTransformMode)                       ApplyTransformMode                                          OFFSET(get<T>, {0x1D9, 1, 0, 0})
	CMember(ETransformSpaceMode)                       ApplyTransformSpace                                         OFFSET(get<T>, {0x1DA, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(get<T>, {0x1E0, 96, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(get<T>, {0x240, 4, 0, 0})
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FBlendTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x0, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_BlendTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                Source                                                      OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(TArray<FBlendTarget>)                      Targets                                                     OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x80, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00E0 (0x000160 - 0x000240)
class FRigUnit_GetJointTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     Joint                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(ETransformGetterType)                      Type                                                        OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(ETransformSpaceMode)                       TransformSpace                                              OFFSET(get<T>, {0x165, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(get<T>, {0x1D0, 4, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(get<T>, {0x1E0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0310 (0x000160 - 0x000470)
class FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FName)                                     StartJoint                                                  OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndJoint                                                    OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FVector)                                   PoleTarget                                                  OFFSET(get<T>, {0x168, 24, 0, 0})
	DMember(float)                                     Spin                                                        OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FTransform)                                EndEffector                                                 OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(float)                                     IKBlend                                                     OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FTransform)                                StartJointFKTransform                                       OFFSET(get<T>, {0x200, 96, 0, 0})
	SMember(FTransform)                                MidJointFKTransform                                         OFFSET(get<T>, {0x260, 96, 0, 0})
	SMember(FTransform)                                EndJointFKTransform                                         OFFSET(get<T>, {0x2C0, 96, 0, 0})
	DMember(float)                                     PreviousFKIKBlend                                           OFFSET(get<float>, {0x320, 4, 0, 0})
	SMember(FTransform)                                StartJointIKTransform                                       OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FTransform)                                MidJointIKTransform                                         OFFSET(get<T>, {0x390, 96, 0, 0})
	SMember(FTransform)                                EndJointIKTransform                                         OFFSET(get<T>, {0x3F0, 96, 0, 0})
	DMember(int32_t)                                   StartJointIndex                                             OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	DMember(int32_t)                                   MidJointIndex                                               OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   EndJointIndex                                               OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(float)                                     UpperLimbLength                                             OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(float)                                     LowerLimbLength                                             OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x464, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_DrawContainerGetInstruction : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0xC, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x164, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x164, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_BeginExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
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
	SMember(FRigElementKey)                            FirstItem                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Reverse                                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            FirstItem                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Reverse                                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PartialName                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PartialName                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x12, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Reversed                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0180 (0x000160 - 0x0002E0)
class FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FName)                                     BlockToRun                                                  OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x178, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x184, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(get<T>, {0x190, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FRigElementKeyCollection)                  Result                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
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
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(ERigSwitchParentMode)                      Mode                                                        OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x164, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x16C, 8, 0, 0})
	DMember(bool)                                      bMaintainGlobal                                             OFFSET(get<bool>, {0x174, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x168, 16, 0, 0})
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
	SMember(FName)                                     Namespace                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      bIncludeCurves                                              OFFSET(get<bool>, {0x164, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0010 (0x000160 - 0x000170)
class FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x16C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControl_Settings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     DisplayName                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_HierarchyAddControl_ShapeSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_HierarchyAddControl_ProxySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsProxy                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlFloat_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_LimitSettings) Limits                                                OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x30, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlElement
/// Size: 0x0070 (0x000180 - 0x0001F0)
class FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                OffsetTransform                                             OFFSET(get<T>, {0x180, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      OffsetSpace                                                 OFFSET(get<T>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x00D0 (0x0001F0 - 0x0002C0)
class FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_Settings) Settings                                                   OFFSET(get<T>, {0x1F0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlInteger_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_LimitSettings) Limits                                              OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x30, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x00D0 (0x0001F0 - 0x0002C0)
class FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_Settings) Settings                                                 OFFSET(get<T>, {0x1F0, 208, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_HierarchyAddControlVector2D_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FVector2D)                                 MinValue                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 MaxValue                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x00F0 (0x000010 - 0x000100)
class FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_LimitSettings) Limits                                             OFFSET(get<T>, {0x18, 48, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x50, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x0110 (0x0001F0 - 0x000300)
class FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_Settings) Settings                                                OFFSET(get<T>, {0x200, 256, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_HierarchyAddControlVector_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitZ                                                      OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FVector)                                   MinValue                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MaxValue                                                    OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
class FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsPosition                                                 OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_LimitSettings) Limits                                               OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x60, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x0120 (0x0001F0 - 0x000310)
class FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FVector)                                   InitialValue                                                OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_Settings) Settings                                                  OFFSET(get<T>, {0x200, 272, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_HierarchyAddControlRotator_LimitSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigControlLimitEnabled)                   LimitPitch                                                  OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitYaw                                                    OFFSET(get<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitRoll                                                   OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FRotator)                                  MinValue                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  MaxValue                                                    OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
class FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlRotator_LimitSettings) Limits                                              OFFSET(get<T>, {0x18, 64, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x60, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x0120 (0x0001F0 - 0x000310)
class FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FRotator)                                  InitialValue                                                OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FRigUnit_HierarchyAddControlRotator_Settings) Settings                                                 OFFSET(get<T>, {0x200, 272, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ERigVMTransformSpace)                      InitialSpace                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(get<T>, {0x20, 128, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x0130 (0x0001F0 - 0x000320)
class FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FTransform)                                InitialValue                                                OFFSET(get<T>, {0x1F0, 96, 0, 0})
	SMember(FRigUnit_HierarchyAddControlTransform_Settings) Settings                                               OFFSET(get<T>, {0x250, 208, 0, 0})
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
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0010 (0x000180 - 0x000190)
class FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   MinimumValue                                                OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   MaximumValue                                                OFFSET(get<int32_t>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0030 (0x000180 - 0x0001B0)
class FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FVector2D)                                 MinimumValue                                                OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FVector2D)                                 MaximumValue                                                OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x0040 (0x000180 - 0x0001C0)
class FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FVector)                                   InitialValue                                                OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   MinimumValue                                                OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FVector)                                   MaximumValue                                                OFFSET(get<T>, {0x1A8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x0040 (0x000180 - 0x0001C0)
class FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRotator)                                  InitialValue                                                OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FRotator)                                  MinimumValue                                                OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FRotator)                                  MaximumValue                                                OFFSET(get<T>, {0x1A8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   OFFSET(get<T>, {0x10, 128, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetShapeSettings
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   OFFSET(get<T>, {0x170, 128, 0, 0})
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
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeChild                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeChild                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Children                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedChildren                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeItem                                                OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Siblings                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIncludeItem                                                OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Siblings                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToGet                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToGet                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x160, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1D1, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToSet                                                  OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x160, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1D1, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToSet                                                  OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	DMember(bool)                                      IsEmpty                                                     OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0120 (0x000008 - 0x000128)
class FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FRigPose)                                  PoseA                                                       OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FRigPose)                                  PoseB                                                       OFFSET(get<T>, {0x78, 112, 0, 0})
	DMember(float)                                     PositionThreshold                                           OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RotationThreshold                                           OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     ScaleThreshold                                              OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     CurveThreshold                                              OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xF9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToCompare                                              OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      PosesAreEqual                                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsWithDelta                                              OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x90, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x79, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x8, 112, 0, 0})
	SMember(FName)                                     Curve                                                       OFFSET(get<T>, {0x78, 4, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              OFFSET(get<int32_t>, {0x88, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x02A0 (0x000160 - 0x000400)
class FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FName)                                     BlockToRun                                                  OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(get<T>, {0x168, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(get<T>, {0x1E0, 96, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x240, 96, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(get<T>, {0x2B0, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_InteractionExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_InverseExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_IsInteracting : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsInteracting                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsTranslating                                              OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bIsRotating                                                 OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bIsScaling                                                  OFFSET(get<bool>, {0xB, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
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
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      Exists                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemReplace : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FRigElementKey)                            Result                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemToName
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_ItemToName : public FRigUnit_ItemBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Value                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_PrepareForExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x0698 (0x000008 - 0x0006A0)
class FRigUnit_SequenceExecution : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x10, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 A                                                           OFFSET(get<T>, {0x160, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 B                                                           OFFSET(get<T>, {0x2B0, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 C                                                           OFFSET(get<T>, {0x400, 336, 0, 0})
	SMember(FControlRigExecuteContext)                 D                                                           OFFSET(get<T>, {0x550, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_AddBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPostMultiply                                               OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D5, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_Item : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemArray
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_ItemArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_BoneName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_SpaceName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ControlName : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_GetAnimationChannelBase : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Channel                                                     OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            CachedChannelKey                                            OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(int32_t)                                   CachedChannelHash                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
class FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0010 (0x000020 - 0x000030)
class FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
class FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0060 (0x000020 - 0x000080)
class FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x0150 (0x000020 - 0x000170)
class FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(get<T>, {0x20, 336, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x170, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x170, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0010 (0x000170 - 0x000180)
class FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0020 (0x000170 - 0x000190)
class FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0020 (0x000170 - 0x000190)
class FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x0060 (0x000170 - 0x0001D0)
class FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x70, 24, 0, 0})
	DMember(bool)                                      bFirstUpdate                                                OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetControlInitialTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetControlBool : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlFloat : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlInteger : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_GetControlVector2D : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Minimum                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlVector : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlRotator : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  Minimum                                                     OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Maximum                                                     OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x0148 (0x000008 - 0x000150)
class FRigUnit_GetControlTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Minimum                                                     OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Maximum                                                     OFFSET(get<T>, {0xD0, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x130, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetCurveValue : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Curve                                                       OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetInitialBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_GetRelativeBoneTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedSpace                                                 OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_GetRelativeTransformForItem : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x98, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetSpaceTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_GetTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x80, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformItemArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
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
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HasMetadata : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_FindItemsWithMetadata : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetMetadataTags : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMetadataTag : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_HasMetadataTag : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_HasMetadataTagArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     tag                                                         OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Inclusive                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndices                                               OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FRigElementKey)                            Subject                                                     OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      Switched                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(get<T>, {0x290, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FRigElementKey)                            Subject                                                     OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      Switched                                                    OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(get<T>, {0x290, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_ProjectTransformToNewParent : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigElementKey)                            OldParent                                                   OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      bOldParentInitial                                           OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FRigElementKey)                            NewParent                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bNewParentInitial                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedOldParent                                             OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedNewParent                                             OFFSET(get<T>, {0xC0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_PropagateTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bRecomputeGlobal                                            OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      bApplyToChildren                                            OFFSET(get<bool>, {0x169, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x16A, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SendEvent : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(ERigEvent)                                 Event                                                       OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x164, 8, 0, 0})
	DMember(float)                                     OffsetInSeconds                                             OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      bOnlyDuringInteraction                                      OFFSET(get<bool>, {0x171, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x231, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x238, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SetBoneRotation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(get<T>, {0x170, 32, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x190, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x198, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x1A0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_SetBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x240, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetBoneTranslation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x188, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlColor : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0xC, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlColor : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x164, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlDrivenList : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlDrivenList : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetControlOffset : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetShapeTransform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetShapeTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x1D0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetControlBool : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x164, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlBool_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetMultiControlBool : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FRigUnit_SetMultiControlBool_Entry>) Entries                                                    OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlFloat : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlFloat_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlFloat_Entry>) Entries                                                   OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlInteger : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x170, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_SetMultiControlInteger_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlInteger_Entry>) Entries                                                 OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlVector2D : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x178, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigUnit_SetMultiControlVector2D_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlVector2D_Entry>) Entries                                                OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetControlVector : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x188, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetControlRotator : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x188, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_SetMultiControlRotator_Entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_SetMultiControlRotator_Entry>) Entries                                                 OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetControlTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Control                                                     OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlVisibility : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_SetControlVisibility : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FString)                                   Pattern                                                     OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_SetCurveValue : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Curve                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00B0 (0x000160 - 0x000210)
class FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(get<T>, {0x1D8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(get<T>, {0x1F0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x200, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x0070 (0x000160 - 0x0001D0)
class FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x178, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x194, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x1B0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x170, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x180, 32, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(get<T>, {0x1C0, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     SpaceName                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x1D0, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(get<T>, {0x238, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetSpaceTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0090 (0x000160 - 0x0001F0)
class FRigUnit_SetTransform : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetTranslation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x170, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x18C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetRotation : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x170, 32, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x194, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x198, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_SetScale : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(get<T>, {0x170, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x18C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetTransformArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x171, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x18C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0040 (0x000160 - 0x0001A0)
class FRigUnit_SetTransformItemArray : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x171, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x18C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0020 (0x000160 - 0x000180)
class FRigUnit_UnsetCurveValue : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Curve                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_ToWorldSpace_Transform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                World                                                       OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_ToRigSpace_Transform : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Global                                                      OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ToWorldSpace_Location : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   World                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ToRigSpace_Location : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Global                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     World                                                       OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToRigSpace_Rotation : public FRigUnit
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Global                                                      OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_BoneHarmonics_BoneTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_Harmonics_TargetItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_BoneHarmonics_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   WaveTime                                                    OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigUnit_BoneHarmonics_BoneTarget>) Bones                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(get<T>, {0x1B8, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(get<T>, {0x1D0, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x1E8, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x1F0, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x1F4, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F5, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(get<T>, {0x1F8, 40, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigUnit_Harmonics_TargetItem>)     Targets                                                     OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(get<T>, {0x1B8, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(get<T>, {0x1D0, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x1E8, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x1F0, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x1F4, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(get<T>, {0x1F8, 40, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_ChainHarmonics_Reach : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   ReachTarget                                                 OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   ReachAxis                                                   OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     ReachMinimum                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ReachMaximum                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      ReachEase                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0078 (0x000000 - 0x000078)
class FRigUnit_ChainHarmonics_Wave : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigUnit_ChainHarmonics_Pendulum : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     PendulumStiffness                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   PendulumGravity                                             OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     PendulumBlend                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PendulumDrag                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     PendulumMinimum                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     PendulumMaximum                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      PendulumEase                                                OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   UnwindAxis                                                  OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     UnwindMinimum                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     UnwindMaximum                                               OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_ChainHarmonics_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Time                                                        OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             Ratio                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           LocalTip                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumTip                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumPosition                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumVelocity                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FVector>)                           HierarchyLine                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FVector>)                           VelocityLines                                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x02D0 (0x000160 - 0x000430)
class FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FName)                                     ChainRoot                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(get<T>, {0x180, 72, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(get<T>, {0x1C8, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(get<T>, {0x240, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(get<T>, {0x2C8, 88, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(get<T>, {0x390, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x02D0 (0x000160 - 0x000430)
class FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FRigElementKey)                            ChainRoot                                                   OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(get<T>, {0x180, 72, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(get<T>, {0x1C8, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(get<T>, {0x240, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(get<T>, {0x2C8, 88, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(get<T>, {0x330, 96, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(get<T>, {0x390, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_AimBone_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_AimItem_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_AimBone_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0218 (0x000008 - 0x000220)
class FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FTransform)                                InputTransform                                              OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(get<T>, {0x70, 72, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(get<T>, {0xB8, 72, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(get<T>, {0x110, 96, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(get<T>, {0x170, 112, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(get<T>, {0x1F8, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0150 (0x000160 - 0x0002B0)
class FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Primary                                                     OFFSET(get<T>, {0x168, 64, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Secondary                                                   OFFSET(get<T>, {0x1A8, 64, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1EC, 1, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(get<T>, {0x1F0, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneIndex                                             OFFSET(get<T>, {0x260, 24, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(get<T>, {0x278, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(get<T>, {0x290, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x2A8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0160 (0x000160 - 0x0002C0)
class FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(get<T>, {0x168, 72, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(get<T>, {0x1B0, 72, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1F8, 4, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(get<T>, {0x200, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(get<T>, {0x288, 24, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(get<T>, {0x2A0, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x2B8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_AimConstraint_WorldUp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_AimConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(get<T>, {0x0, 112, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0150 (0x000160 - 0x0002B0)
class FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	SMember(FVector)                                   AimAxis                                                     OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   UpAxis                                                      OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FRigUnit_AimConstraint_WorldUp)            WorldUp                                                     OFFSET(get<T>, {0x1A0, 40, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_AdvancedSettings)   AdvancedSettings                                            OFFSET(get<T>, {0x1E0, 128, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x260, 4, 0, 0})
	SMember(FCachedRigElement)                         WorldUpSpaceCache                                           OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(get<T>, {0x280, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x298, 16, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x2A8, 1, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x000C (0x000000 - 0x00000C)
class FConstraintParent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigUnit_CCDIK_RotationLimit : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_CCDIK_RotationLimitPerItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigUnit_CCDIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCCDIKChainLink>)                   Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           RotationLimitIndex                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             RotationLimitsPerItem                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimit>)      RotationLimits                                              OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x0100 (0x000160 - 0x000260)
class FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x1E0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(get<T>, {0x200, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_DistributeRotation_Rotation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_DistributeRotation_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(get<T>, {0x164, 4, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x178, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x180, 1, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(get<T>, {0x188, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigUnit_FABRIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFABRIKChainLink>)                  Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x00C0 (0x000160 - 0x000220)
class FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(get<T>, {0x170, 96, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_FitChainToCurve_Rotation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_FitChainToCurve_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              CurveColor                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              SegmentsColor                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_FitChainToCurve_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FVector>)                           ItemPositions                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FVector>)                           CurvePositions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             CurveSegments                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0210 (0x000160 - 0x000370)
class FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x168, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x1C8, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x1D4, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1D8, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1F0, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(get<T>, {0x208, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x240, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(get<T>, {0x2D0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0220 (0x000160 - 0x000380)
class FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(get<T>, {0x210, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x250, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(get<T>, {0x2E0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x0220 (0x000160 - 0x000380)
class FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(get<T>, {0x210, 24, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x250, 144, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(get<T>, {0x2E0, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_ModifyBoneTransforms_PerBone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_ModifyTransforms_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
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
	CMember(TArray<FRigUnit_ModifyBoneTransforms_PerBone>) BoneToModify                                            OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x17C, 1, 0, 0})
	SMember(FRigUnit_ModifyBoneTransforms_WorkData)    WorkData                                                    OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_ModifyTransforms_PerItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FRigUnit_ModifyTransforms_PerItem>) ItemToModify                                                OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x17C, 1, 0, 0})
	SMember(FRigUnit_ModifyTransforms_WorkData)        WorkData                                                    OFFSET(get<T>, {0x180, 16, 0, 0})
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
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(TArray<FRigUnit_MultiFABRIK_EndEffector>)  Effectors                                                   OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x17C, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FRigUnit_MultiFABRIK_WorkData)             WorkData                                                    OFFSET(get<T>, {0x188, 104, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_SlideChain_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FTransform>)                        BlendedTransforms                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(get<T>, {0x170, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x174, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(get<T>, {0x178, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x174, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(get<T>, {0x178, 72, 0, 0})
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (0x000000 - 0x000010)
class FRegionScaleFactors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PositiveWidth                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NegativeWidth                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PositiveHeight                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     NegativeHeight                                              OFFSET(get<float>, {0xC, 4, 0, 0})
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
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDraw2D                                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bDrawLocalAxes                                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     DebugScale                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DebugSegments                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x0190 (0x000160 - 0x0002F0)
class FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(float)                                     OutputParam                                                 OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FRigElementKey)                            DriverItem                                                  OFFSET(get<T>, {0x164, 8, 0, 0})
	SMember(FVector)                                   DriverAxis                                                  OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   RotationOffset                                              OFFSET(get<T>, {0x188, 24, 0, 0})
	DMember(float)                                     ActiveRegionSize                                            OFFSET(get<float>, {0x1A0, 4, 0, 0})
	SMember(FRegionScaleFactors)                       ActiveRegionScaleFactors                                    OFFSET(get<T>, {0x1A4, 16, 0, 0})
	DMember(float)                                     FalloffSize                                                 OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FRegionScaleFactors)                       FalloffRegionScaleFactors                                   OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(bool)                                      FlipWidthScaling                                            OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	DMember(bool)                                      FlipHeightScaling                                           OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	SMember(FRigElementKey)                            OptionalParentItem                                          OFFSET(get<T>, {0x1CC, 8, 0, 0})
	SMember(FSphericalPoseReaderDebugSettings)         Debug                                                       OFFSET(get<T>, {0x1D4, 16, 0, 0})
	SMember(FSphericalRegion)                          InnerRegion                                                 OFFSET(get<T>, {0x1E4, 20, 0, 0})
	SMember(FSphericalRegion)                          OuterRegion                                                 OFFSET(get<T>, {0x1F8, 20, 0, 0})
	SMember(FVector)                                   DriverNormal                                                OFFSET(get<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   Driver2D                                                    OFFSET(get<T>, {0x228, 24, 0, 0})
	SMember(FCachedRigElement)                         DriverCache                                                 OFFSET(get<T>, {0x240, 24, 0, 0})
	SMember(FCachedRigElement)                         OptionalParentCache                                         OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FTransform)                                LocalDriverTransformInit                                    OFFSET(get<T>, {0x270, 96, 0, 0})
	SMember(FVector)                                   CachedRotationOffset                                        OFFSET(get<T>, {0x2D0, 24, 0, 0})
	DMember(bool)                                      bCachedInitTransforms                                       OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_SpringIK_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FRigUnit_SpringIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FCachedRigElement>)                 CachedBones                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVector                                            OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(get<T>, {0x38, 120, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01B0 (0x000160 - 0x000310)
class FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(float)                                     HierarchyStrength                                           OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     EffectorStrength                                            OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     EffectorRatio                                               OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     RootStrength                                                OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     RootRatio                                                   OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x17C, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(get<T>, {0x180, 24, 0, 0})
	DMember(bool)                                      bFlipPolePlane                                              OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x199, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(get<T>, {0x19C, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1B8, 24, 0, 0})
	DMember(bool)                                      bLiveSimulation                                             OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1D9, 1, 0, 0})
	SMember(FRigUnit_SpringIK_DebugSettings)           DebugSettings                                               OFFSET(get<T>, {0x1E0, 128, 0, 0})
	SMember(FRigUnit_SpringIK_WorkData)                WorkData                                                    OFFSET(get<T>, {0x260, 176, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FConstraintTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x0, 96, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(get<T>, {0x65, 9, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_TransformConstraint_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ConstraintDataToTargets                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x164, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FName)                                     BaseBone                                                    OFFSET(get<T>, {0x1D0, 4, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(get<T>, {0x1F0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00F0 (0x000160 - 0x000250)
class FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x168, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FRigElementKey)                            BaseItem                                                    OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(get<T>, {0x1F0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_ParentConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0060 (0x000160 - 0x0001C0)
class FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(get<T>, {0x169, 9, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FRigUnit_ParentConstraint_AdvancedSettings) AdvancedSettings                                           OFFSET(get<T>, {0x188, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(get<T>, {0x190, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_RotationConstraint_AdvancedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         OFFSET(get<T>, {0x180, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x184, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         OFFSET(get<T>, {0x180, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0030 (0x000160 - 0x000190)
class FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0050 (0x000160 - 0x0001B0)
class FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(get<T>, {0x169, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_TwistBones_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             ItemRatios                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemTransforms                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(get<T>, {0x180, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(get<T>, {0x1A8, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0080 (0x000160 - 0x0001E0)
class FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(get<T>, {0x188, 24, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(get<T>, {0x1B0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigUnit_TwoBoneIKSimple_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x01C0 (0x000160 - 0x000320)
class FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FName)                                     BoneA                                                       OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     BoneB                                                       OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(get<T>, {0x170, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1E8, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x200, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(get<T>, {0x208, 24, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x220, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(get<T>, {0x224, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x240, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x250, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneAIndex                                            OFFSET(get<T>, {0x2C0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneBIndex                                            OFFSET(get<T>, {0x2D8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorBoneIndex                                     OFFSET(get<T>, {0x2F0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(get<T>, {0x308, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x01D0 (0x000160 - 0x000330)
class FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FRigElementKey)                            ItemA                                                       OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FRigElementKey)                            ItemB                                                       OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FRigElementKey)                            EffectorItem                                                OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(get<T>, {0x180, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x1F8, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(get<T>, {0x218, 24, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(FRigElementKey)                            PoleVectorSpace                                             OFFSET(get<T>, {0x234, 8, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x23C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     ItemALength                                                 OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     ItemBLength                                                 OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x254, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x260, 112, 0, 0})
	SMember(FCachedRigElement)                         CachedItemAIndex                                            OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedItemBIndex                                            OFFSET(get<T>, {0x2E8, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorItemIndex                                     OFFSET(get<T>, {0x300, 24, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(get<T>, {0x318, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Root                                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Effector                                                    OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVector)                                   Elbow                                                       OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FTransform)                                Root                                                        OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(get<T>, {0x90, 96, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(get<T>, {0x108, 24, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FTransform)                                Elbow                                                       OFFSET(get<T>, {0x140, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigUnit_PointSimulation_DebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawPointsAsSpheres                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_PointSimulation_BoneTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TranslationPoint                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   PrimaryAimPoint                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SecondaryAimPoint                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
class FRigUnit_PointSimulation_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(get<T>, {0x0, 120, 0, 0})
	CMember(TArray<FCachedRigElement>)                 BoneIndices                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0210 (0x000100 - 0x000310)
class FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Links                                                       OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x130, 16, 0, 0})
	DMember(float)                                     SimulatedStepsPerSecond                                     OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(ERigVMSimPointIntegrateType)               IntegratorType                                              OFFSET(get<T>, {0x144, 1, 0, 0})
	DMember(float)                                     VerletBlend                                                 OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(TArray<FRigUnit_PointSimulation_BoneTarget>) BoneTargets                                               OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   PrimaryAimAxis                                              OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FVector)                                   SecondaryAimAxis                                            OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FRigUnit_PointSimulation_DebugSettings)    DebugSettings                                               OFFSET(get<T>, {0x1A0, 128, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(get<T>, {0x220, 96, 0, 0})
	SMember(FRigUnit_PointSimulation_WorkData)         WorkData                                                    OFFSET(get<T>, {0x280, 136, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Current                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Target                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 OFFSET(get<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0090 (0x000008 - 0x000098)
class FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Current                                                     OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 OFFSET(get<T>, {0x60, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Target                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Force                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     Current                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Velocity                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SimulatedResult                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 OFFSET(get<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Force                                                       OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   Current                                                     OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(get<T>, {0x68, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   SimulatedResult                                             OFFSET(get<T>, {0x98, 24, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 OFFSET(get<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Torque                                                      OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FQuat)                                     Current                                                     OFFSET(get<T>, {0x60, 32, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x84, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(get<T>, {0x90, 32, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FQuat)                                     SimulatedResult                                             OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FQuaternionSpringState)                    SpringState                                                 OFFSET(get<T>, {0xF0, 64, 0, 0})
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

