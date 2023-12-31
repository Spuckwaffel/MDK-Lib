
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CustomizableObject.CustomizableInstancePrivateData
/// Size: 0x02E0 (0x000028 - 0x000308)
class UCustomizableInstancePrivateData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<FGeneratedMaterial>)                GeneratedMaterials                                          OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 GeneratedTextures                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TextureReuseCache                                           OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FCustomizableInstanceComponentData>) ComponentsData                                             OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ReferencedMaterials                                         OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    ClothingPhysicsAssets                                       OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<UClass*>)                           GatheredAnimBPs                                             OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AnimBPGameplayTags                                          OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	CMember(TMap<UClass*, FAnimBpGeneratedPhysicsAssets>) AnimBpPhysicsAssets                                      OFFSET(get<T>, {0x240, 80, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableObjectExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableSystemImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableSystemImageProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.EditorImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditorImageProvider : public UCustomizableSystemImageProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagementBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableInstanceLODManagementBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagement
/// Size: 0x0058 (0x000028 - 0x000080)
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CustomizableObject.MutableMaskOutCache
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMutableMaskOutCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, FString>)                    Materials                                                   OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FString, FMaskOutTexture>)            Textures                                                    OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectBulk
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectBulk : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           BulkDataFileNames                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObject
/// Size: 0x04C8 (0x000028 - 0x0004F0)
class UCustomizableObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	CMember(TArray<FMutableRefSkeletalMeshData>)       ReferenceSkeletalMeshesData                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedMaterials                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ReferencedMaterialSlotNames                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedSkeletons                                         OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedPassThroughTextures                               OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMutableLODSettings)                       LODSettings                                                 OFFSET(getStruct<T>, {0x78, 128, 0, 0})
	CMember(TArray<FMutableModelImageProperties>)      ImageProperties                                             OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FMorphTargetInfo>)                  ContributingMorphTargetsInfo                                OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FMorphTargetVertexData>)            MorphTargetReconstructionData                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ClothSharedConfigsData                                     OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FCustomizableObjectClothingAssetData>) ContributingClothingAssetsData                           OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FCustomizableObjectMeshToMeshVertData>) ClothMeshToMeshVertData                                 OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FMutableSkinWeightProfileInfo>)     SkinWeightProfilesInfo                                      OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<FCustomizableObjectExtensionData>)  AlwaysLoadedExtensionData                                   OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStreamedExtensionData>) StreamedExtensionData                                OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(int32_t)                                   NumMeshComponentsInRoot                                     OFFSET(get<int32_t>, {0x188, 4, 0, 0})
	CMember(TArray<FMutableModelParameterProperties>)  ParameterProperties                                         OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           ParameterUIDataMap                                          OFFSET(get<T>, {0x200, 80, 0, 0})
	CMember(TArray<FName>)                             LowPriorityTextures                                         OFFSET(get<T>, {0x250, 16, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           StateUIDataMap                                              OFFSET(get<T>, {0x260, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             PhysicsAssetsMap                                            OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             AnimBPAssetsMap                                             OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TArray<FAnimBpOverridePhysicsAssetsInfo>)  AnimBpOverridePhysiscAssetsInfo                             OFFSET(get<T>, {0x350, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             AssetUserDataAssetsMap                                      OFFSET(get<T>, {0x360, 80, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 SocketArray                                                 OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(TWeakObjectPtr<UMutableMaskOutCache*>)     MaskOutCache                                                OFFSET(get<T>, {0x3C0, 32, 0, 0})
	CMember(TMap<uint64_t, FMutableStreamableBlock>)   HashToStreamableBlock                                       OFFSET(get<T>, {0x3E0, 80, 0, 0})
	CMember(TArray<FString>)                           CustomizableObjectClassTags                                 OFFSET(get<T>, {0x430, 16, 0, 0})
	CMember(TArray<FString>)                           PopulationClassTags                                         OFFSET(get<T>, {0x440, 16, 0, 0})
	CMember(TMap<FString, FParameterTags>)             CustomizableObjectParametersTags                            OFFSET(get<T>, {0x450, 80, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x4A0, 16, 0, 0})
	CMember(UMutableMaskOutCache*)                     MaskOutCache_HardRef                                        OFFSET(get<T>, {0x4C0, 8, 0, 0})
	SMember(FGuid)                                     CompilationGuid                                             OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	CMember(UCustomizableObjectBulk*)                  BulkData                                                    OFFSET(get<T>, {0x4D8, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObject.UnloadReferenceSkeletalMeshes
	// void UnloadReferenceSkeletalMeshes();                                                                                    // [0x65cf890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.UnloadMaskOutCache
	// void UnloadMaskOutCache();                                                                                               // [0x65cf878] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.LoadReferenceSkeletalMeshesAsync
	// void LoadReferenceSkeletalMeshesAsync();                                                                                 // [0x65c9680] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.LoadMaskOutCache
	// void LoadMaskOutCache();                                                                                                 // [0x65c9620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.IsParameterMultidimensional
	// bool IsParameterMultidimensional(FString InParameterName);                                                               // [0x65c8a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.IsCompiled
	// bool IsCompiled();                                                                                                       // [0x65c83c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
	// FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex);                                                        // [0x65c75e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadata
	// FParameterUIData GetStateUIMetadata(FString StateName);                                                                  // [0x65c6fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterName
	// FString GetStateParameterName(FString StateName, int32_t ParameterIndex);                                                // [0x65c6908] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterCount
	// int32_t GetStateParameterCount(FString StateName);                                                                       // [0x65c62bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateName
	// FString GetStateName(int32_t StateIndex);                                                                                // [0x65c6218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateCount
	// int32_t GetStateCount();                                                                                                 // [0x65c61f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
	// void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // [0x65c3018] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
	// FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex);                                                    // [0x65c22c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadata
	// FParameterUIData GetParameterUIMetadata(FString ParamName);                                                              // [0x65c1c84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterTypeByName
	// EMutableParameterType GetParameterTypeByName(FString Name);                                                              // [0x65c1670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterType
	// EMutableParameterType GetParameterType(int32_t ParamIndex);                                                              // [0x65c15e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterName
	// FString GetParameterName(int32_t ParamIndex);                                                                            // [0x65c1550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterDescriptionCount
	// int32_t GetParameterDescriptionCount(FString ParamName);                                                                 // [0x65c0f48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterCount
	// int32_t GetParameterCount();                                                                                             // [0x65c0914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterNumOptions
	// int32_t GetIntParameterNumOptions(int32_t ParamIndex);                                                                   // [0x65bfad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
	// int32_t GetIntParameterDefaultValue(FString InParameterName);                                                            // [0x65bf48c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
	// FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K);                                                   // [0x65bf3c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
	// float GetFloatParameterDefaultValue(FString InParameterName);                                                            // [0x65be120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetComponentCount
	// int32_t GetComponentCount();                                                                                             // [0x65be0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
	// FLinearColor GetColorParameterDefaultValue(FString InParameterName);                                                     // [0x65bd4d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
	// bool GetBoolParameterDefaultValue(FString InParameterName);                                                              // [0x65bc804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.FindParameter
	// int32_t FindParameter(FString Name);                                                                                     // [0x65bb3d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.CreateInstance
	// UCustomizableObjectInstance* CreateInstance();                                                                           // [0x65ba0b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.DGGUI
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UDGGUI : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectInstance
/// Size: 0x0300 (0x000028 - 0x000328)
class UCustomizableObjectInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FMulticastInlineDelegate)                  UpdatedDelegate                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeginDestroyDelegate                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<USkeletalMesh*>)                    SkeletalMeshes                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   SkeletalMeshStatus                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FCustomizableObjectInstanceDescriptor)     Descriptor                                                  OFFSET(getStruct<T>, {0x130, 296, 0, 0})
	CMember(UCustomizableInstancePrivateData*)         PrivateData                                                 OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x280, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        OFFSET(get<T>, {0x2D0, 80, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x65cf988] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);                                            // [0x65cf8c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
	// void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue);                               // [0x65cf240] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
	// void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex);              // [0x65ce698] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
	// void SetReplacePhysicsAssets(bool bReplaceEnabled);                                                                      // [0x65ce60c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues
	// void SetRandomValues();                                                                                                  // [0x65ce5d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue
	// void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // [0x65cdcd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject
	// void SetObject(UCustomizableObject* InObject);                                                                           // [0x65cdc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
	// void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex);                   // [0x65cd0a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
	// void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex);                      // [0x65cca40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState
	// void SetCurrentState(FString StateName);                                                                                 // [0x65cc42c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
	// void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue);                                  // [0x65cbde4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
	// void SetBuildParameterRelevancy(bool Value);                                                                             // [0x65cbd64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations
	// void SetBuildParameterDecorations(bool Value);                                                                           // [0x550d6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
	// void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue);                                              // [0x65cb730] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
	// int32_t RemoveValueFromProjectorRange(FString ParamName);                                                                // [0x65cb0d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
	// int32_t RemoveValueFromIntRange(FString ParamName);                                                                      // [0x65caab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
	// int32_t RemoveValueFromFloatRange(FString ParamName);                                                                    // [0x65ca454] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
	// void RemoveMultilayerProjector(FName& ProjectorParamName);                                                               // [0x65ca3c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
	// void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // [0x65ca280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
	// void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer);         // [0x65ca130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
	// void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x65ca004] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
	// void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index);                                         // [0x65c9ea4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
	// int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName);                                                         // [0x65c9dc4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
	// TArray<FName> MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName);                                            // [0x65c9cc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID);               // [0x65c9b9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
	// FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index);                         // [0x65c9a44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID);      // [0x65c9920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
	// void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x65c97f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
	// void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index);                                           // [0x65c9694] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
	// bool IsParamMultidimensional(FString ParamName);                                                                         // [0x65c83e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
	// bool IsParameterRelevant(FString ParamName);                                                                             // [0x65c9014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
	// bool HasAnySkeletalMesh();                                                                                               // [0x65c839c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters
	// bool HasAnyParameters();                                                                                                 // [0x65c834c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters
	// TArray<FCustomizableObjectVectorParameterValue> GetVectorParameters();                                                   // [0x65c8330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
	// int32_t GetTextureValueRange(FString ParamName);                                                                         // [0x65c7cf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
	// FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex);                                   // [0x65c76a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters
	// TArray<FCustomizableObjectTextureParameterValue> GetTextureParameters();                                                 // [0x65c7cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
	// USkeletalMesh* GetSkeletalMesh(int32_t ComponentIndex);                                                                  // [0x65c616c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
	// int32_t GetProjectorValueRange(FString ParamName);                                                                       // [0x65c5b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue
	// void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // [0x65c5180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp
	// FVector GetProjectorUp(FString ParamName, int32_t RangeIndex);                                                           // [0x65c4b30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale
	// FVector GetProjectorScale(FString ParamName, int32_t RangeIndex);                                                        // [0x65c44e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
	// FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex);                                                     // [0x65c3e90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
	// ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex);                       // [0x65c3840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
	// TArray<FCustomizableObjectProjectorParameterValue> GetProjectorParameters();                                             // [0x65c3e74] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
	// FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex);                                                    // [0x65c29c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
	// float GetProjectorAngle(FString ParamName, int32_t RangeIndex);                                                          // [0x65c2390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetParameterDescription
	// UTexture2D* GetParameterDescription(FString ParamName, int32_t DescIndex);                                               // [0x65c092c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetNumComponents
	// int32_t GetNumComponents();                                                                                              // [0x65c08f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetMergedAssetUserData
	// TSet<UAssetUserData*> GetMergedAssetUserData(int32_t ComponentIndex);                                                    // [0x65c07f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntValueRange
	// int32_t GetIntValueRange(FString ParamName);                                                                             // [0x65c01b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
	// FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex);                                            // [0x65bfb5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters
	// TArray<FCustomizableObjectIntParameterValue> GetIntParameters();                                                         // [0x65c0198] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
	// int32_t GetFloatValueRange(FString ParamName);                                                                           // [0x65bed8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
	// float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex);                                       // [0x65be738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters
	// TArray<FCustomizableObjectFloatParameterValue> GetFloatParameters();                                                     // [0x65bed70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
	// UCustomizableObject* GetCustomizableObject();                                                                            // [0x556d5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState
	// FString GetCurrentState();                                                                                               // [0x65be0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
	// FLinearColor GetColorParameterSelectedOption(FString ColorParamName);                                                    // [0x65bdac8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
	// bool GetBuildParameterRelevancy();                                                                                       // [0x65bd4b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations
	// bool GetBuildParameterDecorations();                                                                                     // [0x29d4b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
	// bool GetBoolParameterSelectedOption(FString BoolParamName);                                                              // [0x65bce54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters
	// TArray<FCustomizableObjectBoolParameterValue> GetBoolParameters();                                                       // [0x65bd49c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP
	// UClass* GetAnimBP(int32_t ComponentIndex, FName& Slot);                                                                  // [0x65bc704] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
	// FGameplayTagContainer GetAnimationGameplayTags();                                                                        // [0x65bc7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
	// void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate);                                            // [0x65bc62c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
	// int32_t FindVectorParameterNameIndex(FString ParamName);                                                                 // [0x65bc00c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
	// int32_t FindProjectorParameterNameIndex(FString ParamName);                                                              // [0x65bb9ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
	// int32_t FindIntParameterNameIndex(FString ParamName);                                                                    // [0x65badb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
	// int32_t FindFloatParameterNameIndex(FString ParamName);                                                                  // [0x65ba798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
	// int32_t FindBoolParameterNameIndex(FString ParamName);                                                                   // [0x65ba178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
	// bool CreateMultiLayerProjector(FName& ProjectorParamName);                                                               // [0x65ba0dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic
	// UCustomizableObjectInstance* CloneStatic(UObject* Outer);                                                                // [0x65ba018] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone
	// UCustomizableObjectInstance* Clone();                                                                                    // [0x65b9fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
	// int32_t AddValueToProjectorRange(FString ParamName);                                                                     // [0x65b99a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
	// int32_t AddValueToIntRange(FString ParamName);                                                                           // [0x65b9388] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
	// int32_t AddValueToFloatRange(FString ParamName);                                                                         // [0x65b8d2c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.MutableTextureMipDataProviderFactory
/// Size: 0x0028 (0x000028 - 0x000050)
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UCustomizableObjectInstance*)              CustomizableObjectInstance                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectExtensionDataContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectExtensionDataContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FCustomizableObjectExtensionData)          Data                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectSystem
/// Size: 0x0138 (0x000028 - 0x000160)
class UCustomizableObjectSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<FPendingReleaseSkeletalMeshInfo>)   PendingReleaseSkeletalMesh                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FPendingReleaseMaterialsInfo>)      PendingReleaseMaterials                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   DefaultInstanceLODManagement                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   CurrentInstanceLODManagement                                OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<UTexture2D*>)                       ProtectedCachedTextures                                     OFFSET(get<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
	// void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);                                                        // [0x65ecbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTotalInstances
	// int32_t GetTotalInstances();                                                                                             // [0x65ecba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
	// int32_t GetTextureMemoryUsed();                                                                                          // [0x65ecb88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetPluginVersion
	// FString GetPluginVersion();                                                                                              // [0x65ecb3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
	// int32_t GetNumPendingInstances();                                                                                        // [0x65ecb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumInstances
	// int32_t GetNumInstances();                                                                                               // [0x65ecb04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstanceChecked
	// UCustomizableObjectSystem* GetInstanceChecked();                                                                         // [0x65ecae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstance
	// UCustomizableObjectSystem* GetInstance();                                                                                // [0x65ecae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
	// int32_t GetAverageBuildTime();                                                                                           // [0x65ecab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CustomizableObject.CustomizableSkeletalComponent
/// Size: 0x0040 (0x0002A0 - 0x0002E0)
class UCustomizableSkeletalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	DMember(float)                                     SkippedLastRenderTime                                       OFFSET(get<float>, {0x2A4, 4, 0, 0})
	CMember(UCustomizableObjectInstance*)              CustomizableObjectInstance                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   ComponentIndex                                              OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x65eccc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                     // [0x65ecc44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.CustomizableSkeletalMeshActor
/// Size: 0x0028 (0x000310 - 0x000338)
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<UCustomizableSkeletalComponent*>)   CustomizableSkeletalComponents                              OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMeshComponents                                      OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UCustomizableSkeletalComponent*)           CustomizableSkeletalComponent                               OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/CustomizableObject.DefaultImageProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UDefaultImageProvider : public UCustomizableSystemImageProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UTexture2D*>)                  Textures                                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.UpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EUpdateResult)                             UpdateResult                                                OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedTexture
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeneratedTexture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeneratedMaterial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMaterialInterface*)                       MaterialInterface                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 Textures                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedPhysicsAssets
/// Size: 0x0040 (0x000000 - 0x000040)
class FReferencedPhysicsAssets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UPhysicsAsset*>)                    PhysicsAssetsToMerge                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    AdditionalPhysicsAssets                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedSkeletons
/// Size: 0x0028 (0x000000 - 0x000028)
class FReferencedSkeletons : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USkeleton*)                                Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<uint16_t>)                          SkeletonIds                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<USkeleton*>)                        SkeletonsToMerge                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableInstanceComponentData
/// Size: 0x0180 (0x000000 - 0x000180)
class FCustomizableInstanceComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TMap<FName, TWeakObjectPtr>)               AnimSlotToBP                                                OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TSet<UAssetUserData*>)                     AssetUserDataArray                                          OFFSET(get<T>, {0x58, 80, 0, 0})
	SMember(FReferencedSkeletons)                      Skeletons                                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FReferencedPhysicsAssets)                  PhysicsAssets                                               OFFSET(getStruct<T>, {0x120, 64, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimInstanceOverridePhysicsAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimBpGeneratedPhysicsAssets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAnimInstanceOverridePhysicsAsset>) AnimInstancePropertyIndexAndPhysicsAssets                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothConfigData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectClothConfigData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ClassPath                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ConfigName                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              ConfigBytes                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothingAssetData
/// Size: 0x0080 (0x000000 - 0x000080)
class FCustomizableObjectClothingAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FClothLODDataCommon>)               LODData                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ConfigsData                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   PhysicsAssetPath                                            OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FGuid)                                     OriginalAssetGuid                                           OFFSET(getStruct<T>, {0x6C, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectExtensionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizableObjectExtensionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          Data                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectBoolParameterValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectBoolParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      ParameterValue                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIntParameterValue
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectIntParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ParameterValueName                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           ParameterRangeValueNames                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectFloatParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectFloatParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ParameterValue                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectTextureParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectTextureParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ParameterValue                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectVectorParameterValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectVectorParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              ParameterValue                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjector
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectProjector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Direction                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Up                                                          OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 Scale                                                       OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	CMember(ECustomizableObjectProjectorType)          ProjectionType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectProjectorParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCustomizableObjectProjector)              Value                                                       OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjector>)      RangeValues                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableParamUIMetadata
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMutableParamUIMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ObjectFriendlyName                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UISectionName                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   UIOrder                                                     OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UIThumbnail                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<FString, FString>)                    ExtraInformation                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             ExtraAssets                                                 OFFSET(get<T>, {0x98, 80, 0, 0})
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.IntegerParameterUIData
/// Size: 0x0100 (0x000000 - 0x000100)
class FIntegerParameterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterUIData
/// Size: 0x0170 (0x000000 - 0x000170)
class FParameterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	CMember(EMutableParameterType)                     Type                                                        OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(TArray<FIntegerParameterUIData>)           ArrayIntegerParameterOption                                 OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(ECustomizableObjectGroupType)              IntegerParameterGroupType                                   OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(ETextureCompressionStrategy)               TextureCompressionStrategy                                  OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bLiveUpdateMode                                             OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bReuseInstanceTextures                                      OFFSET(get<bool>, {0x11B, 1, 0, 0})
	CMember(TMap<FString, FString>)                    ForcedParameterValues                                       OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.FParameterOptionsTags
/// Size: 0x0010 (0x000000 - 0x000010)
class FFParameterOptionsTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterTags
/// Size: 0x0060 (0x000000 - 0x000060)
class FParameterTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FFParameterOptionsTags>)     ParameterOptions                                            OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.ProfileParameterDat
/// Size: 0x0070 (0x000000 - 0x000070)
class FProfileParameterDat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProfileName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CompilationOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FCompilationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bTextureCompression                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ECustomizableObjectTextureCompression)     TextureCompression                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   OptimizationLevel                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseDiskCompilation                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelImageProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FMutableModelImageProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TextureParameterName                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                Filter                                                      OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      SRGB                                                        OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      FlipGreenChannel                                            OFFSET(get<bool>, {0x14, 1, 1, 1})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TEnumAsByte<TextureGroup>)                 LODGroup                                                    OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    OFFSET(get<T>, {0x1D, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    OFFSET(get<T>, {0x1E, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableModelParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FMutableModelParameterProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EMutableParameterType)                     Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FMutableModelParameterValue>)       PossibleValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MaskOutTexture
/// Size: 0x0018 (0x000000 - 0x000018)
class FMaskOutTexture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<uint32_t>)                          Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAnimBpOverridePhysicsAssetsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   AnimInstanceClass                                           OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            SourceAsset                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMorphTargetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LodNum                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetVertexData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMorphTargetVertexData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector3f)                                 PositionDelta                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 TangentZDelta                                               OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   MorphIndex                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectMeshToMeshVertData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     PositionBaryCoordsAndDist                                   OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     NormalBaryCoordsAndDist                                     OFFSET(get<float>, {0x10, 16, 0, 0})
	DMember(float)                                     TangentBaryCoordsAndDist                                    OFFSET(get<float>, {0x20, 16, 0, 0})
	DMember(uint16_t)                                  SourceMeshVertIndices                                       OFFSET(get<uint16_t>, {0x30, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   SourceAssetIndex                                            OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   SourceAssetLodIndex                                         OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableSkinWeightProfileInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableSkinWeightProfileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      DefaultProfile                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int8_t)                                    DefaultProfileFromLODIndex                                  OFFSET(get<int8_t>, {0x5, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableStreamableBlock
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableStreamableBlock : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  FileIndex                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint64_t)                                  Offset                                                      OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
	DMember(uint32_t)                                  Size                                                        OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMutableRefLODInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ScreenSize                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LODHysteresis                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSupportUniformlyDistributedSampling                        OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowCPUAccess                                             OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODRenderData
/// Size: 0x0002 (0x000000 - 0x000002)
class FMutableRefLODRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsLODOptional                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bStreamedDataInlined                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMutableRefLODData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMutableRefLODInfo)                        LODInfo                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMutableRefLODRenderData)                  RenderData                                                  OFFSET(getStruct<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSocket
/// Size: 0x0058 (0x000000 - 0x000058)
class FMutableRefSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  RelativeRotation                                            OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   RelativeScale                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bForceAlwaysAnimated                                        OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefSkeletalMeshSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnablePerPolyCollision                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DefaultUVChannelDensity                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefAssetUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UAssetUserData*)                           AssetUserData                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshData
/// Size: 0x0110 (0x000000 - 0x000110)
class FMutableRefSkeletalMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoftObjectPath)                           SkeletalMeshAssetPath                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TArray<FMutableRefLODData>)                LODData                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 Sockets                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x40, 56, 0, 0})
	SMember(FMutableRefSkeletalMeshSettings)           Settings                                                    OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostProcessAnimInst                                         OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            ShadowPhysicsAsset                                          OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<FMutableRefAssetUserData>)          AssetUserData                                               OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableLODSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FMutableLODSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       MinQualityLevelLOD                                          OFFSET(getStruct<T>, {0x8, 104, 0, 0})
	DMember(int32_t)                                   NumLODsInRoot                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   FirstLODAvailable                                           OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bLODStreamingEnabled                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(uint32_t)                                  NumLODsToStream                                             OFFSET(get<uint32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectIdPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Guid                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
/// Size: 0x0128 (0x000000 - 0x000128)
class FCustomizableObjectInstanceDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UCustomizableObject*)                      CustomizableObject                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        OFFSET(get<T>, {0xD8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjector
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FMultilayerProjector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersMapping                                        OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersOrder                                          OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FMultilayerProjectorLayer>)    DisableVirtualLayers                                        OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorLayer
/// Size: 0x0080 (0x000000 - 0x000080)
class FMultilayerProjectorLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/CustomizableObject.CustomizableObjectStreamedExtensionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectStreamedExtensionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UCustomizableObjectExtensionDataContainer*>) ContainerPath                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(UCustomizableObjectExtensionDataContainer*) Container                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseSkeletalMeshInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPendingReleaseSkeletalMeshInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    Timestamp                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseMaterialsInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FPendingReleaseMaterialsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<UMaterialInterface*>)               Materials                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TicksUntilRelease                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorVirtualLayer
/// Size: 0x0008 (0x000080 - 0x000088)
class FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/CustomizableObject.EUpdateResult
/// Size: 0x06
enum EUpdateResult : uint8_t
{
	EUpdateResult__Success0                                                          = 0,
	EUpdateResult__Error1                                                            = 1,
	EUpdateResult__ErrorOptimized2                                                   = 2,
	EUpdateResult__ErrorReplaced3                                                    = 3,
	EUpdateResult__ErrorDiscarded4                                                   = 4,
	EUpdateResult__EUpdateResult_MAX5                                                = 5
};

/// Enum /Script/CustomizableObject.EMutableParameterType
/// Size: 0x08
enum EMutableParameterType : uint8_t
{
	EMutableParameterType__None0                                                     = 0,
	EMutableParameterType__Bool1                                                     = 1,
	EMutableParameterType__Int2                                                      = 2,
	EMutableParameterType__Float3                                                    = 3,
	EMutableParameterType__Color4                                                    = 4,
	EMutableParameterType__Projector5                                                = 5,
	EMutableParameterType__Texture6                                                  = 6,
	EMutableParameterType__EMutableParameterType_MAX7                                = 7
};

/// Enum /Script/CustomizableObject.ECustomizableObjectGroupType
/// Size: 0x05
enum ECustomizableObjectGroupType : uint8_t
{
	ECustomizableObjectGroupType__COGT_TOGGLE0                                       = 0,
	ECustomizableObjectGroupType__COGT_ALL1                                          = 1,
	ECustomizableObjectGroupType__COGT_ONE2                                          = 2,
	ECustomizableObjectGroupType__COGT_ONE_OR_NONE3                                  = 3,
	ECustomizableObjectGroupType__COGT_MAX4                                          = 4
};

/// Enum /Script/CustomizableObject.EMutableCompileMeshType
/// Size: 0x06
enum EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full0                                                   = 0,
	EMutableCompileMeshType__Local1                                                  = 1,
	EMutableCompileMeshType__LocalAndChildren2                                       = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren3                                = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren4                               = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX5                            = 5
};

/// Enum /Script/CustomizableObject.ECustomizableObjectProjectorType
/// Size: 0x04
enum ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar0                                        = 0,
	ECustomizableObjectProjectorType__Cylindrical1                                   = 1,
	ECustomizableObjectProjectorType__Wrapping2                                      = 2,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX3          = 3
};

/// Enum /Script/CustomizableObject.ECustomizableObjectRelevancy
/// Size: 0x03
enum ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All0                                               = 0,
	ECustomizableObjectRelevancy__ClientOnly1                                        = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX2                  = 2
};

/// Enum /Script/CustomizableObject.ECustomizableObjectNumBoneInfluences
/// Size: 0x04
enum ECustomizableObjectNumBoneInfluences : uint8_t
{
	ECustomizableObjectNumBoneInfluences__Four0                                      = 4,
	ECustomizableObjectNumBoneInfluences__Eight1                                     = 8,
	ECustomizableObjectNumBoneInfluences__Twelve2                                    = 12,
	ECustomizableObjectNumBoneInfluences__ECustomizableObjectNumBoneInfluences_MAX3  = 13
};

/// Enum /Script/CustomizableObject.ECustomizableObjectTextureCompression
/// Size: 0x04
enum ECustomizableObjectTextureCompression : uint8_t
{
	ECustomizableObjectTextureCompression__None0                                     = 0,
	ECustomizableObjectTextureCompression__Fast1                                     = 1,
	ECustomizableObjectTextureCompression__HighQuality2                              = 2,
	ECustomizableObjectTextureCompression__ECustomizableObjectTextureCompression_MAX3 = 3
};

/// Enum /Script/CustomizableObject.ECustomizableObjectCompilationState
/// Size: 0x05
enum ECustomizableObjectCompilationState : uint8_t
{
	ECustomizableObjectCompilationState__None0                                       = 0,
	ECustomizableObjectCompilationState__InProgress1                                 = 1,
	ECustomizableObjectCompilationState__Completed2                                  = 2,
	ECustomizableObjectCompilationState__Failed3                                     = 3,
	ECustomizableObjectCompilationState__ECustomizableObjectCompilationState_MAX4    = 4
};

