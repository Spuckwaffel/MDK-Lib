
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CustomizableObject.CustomizableInstancePrivateData
/// Size: 0x02A0 (0x000028 - 0x0002C8)
class UCustomizableInstancePrivateData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(TArray<FGeneratedMaterial>)                GeneratedMaterials                                          OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 GeneratedTextures                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TextureReuseCache                                           OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FCustomizableInstanceComponentData>) ComponentsData                                             OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ReferencedMaterials                                         OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    ClothingPhysicsAssets                                       OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<UClass*>)                           GatheredAnimBPs                                             OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AnimBPGameplayTags                                          OFFSET(get<T>, {0x220, 32, 0, 0})
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
/// Size: 0x0478 (0x000028 - 0x0004A0)
class UCustomizableObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TArray<FMutableRefSkeletalMeshData>)       ReferenceSkeletalMeshesData                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedMaterials                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ReferencedMaterialSlotNames                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedSkeletons                                         OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedPassThroughTextures                               OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMutableLODSettings)                       LODSettings                                                 OFFSET(get<T>, {0x78, 128, 0, 0})
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
	CMember(TArray<FMutableRefSocket>)                 SocketArray                                                 OFFSET(get<T>, {0x360, 16, 0, 0})
	CMember(TWeakObjectPtr<UMutableMaskOutCache*>)     MaskOutCache                                                OFFSET(get<T>, {0x370, 32, 0, 0})
	CMember(TMap<uint64_t, FMutableStreamableBlock>)   HashToStreamableBlock                                       OFFSET(get<T>, {0x390, 80, 0, 0})
	CMember(TArray<FString>)                           CustomizableObjectClassTags                                 OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(TArray<FString>)                           PopulationClassTags                                         OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TMap<FString, FParameterTags>)             CustomizableObjectParametersTags                            OFFSET(get<T>, {0x400, 80, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UMutableMaskOutCache*)                     MaskOutCache_HardRef                                        OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FGuid)                                     CompilationGuid                                             OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(UCustomizableObjectBulk*)                  BulkData                                                    OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObject.UnloadReferenceSkeletalMeshes
	// void UnloadReferenceSkeletalMeshes();                                                                                    // [0x65d3fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.UnloadMaskOutCache
	// void UnloadMaskOutCache();                                                                                               // [0x65d3fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.LoadReferenceSkeletalMeshesAsync
	// void LoadReferenceSkeletalMeshesAsync();                                                                                 // [0x65ccd08] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.LoadMaskOutCache
	// void LoadMaskOutCache();                                                                                                 // [0x65cccb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObject.IsParameterMultidimensional
	// bool IsParameterMultidimensional(FString InParameterName);                                                               // [0x65cbf4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.IsCompiled
	// bool IsCompiled();                                                                                                       // [0x65cb870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
	// FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex);                                                        // [0x65ca950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadata
	// FParameterUIData GetStateUIMetadata(FString StateName);                                                                  // [0x65ca268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterName
	// FString GetStateParameterName(FString StateName, int32_t ParameterIndex);                                                // [0x65c9b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterCount
	// int32_t GetStateParameterCount(FString StateName);                                                                       // [0x65c9444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateName
	// FString GetStateName(int32_t StateIndex);                                                                                // [0x65c93a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateCount
	// int32_t GetStateCount();                                                                                                 // [0x65c9380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
	// void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // [0x65c5c94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
	// FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex);                                                    // [0x65c4df8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadata
	// FParameterUIData GetParameterUIMetadata(FString ParamName);                                                              // [0x65c4710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterTypeByName
	// EMutableParameterType GetParameterTypeByName(FString Name);                                                              // [0x65c4060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterType
	// EMutableParameterType GetParameterType(int32_t ParamIndex);                                                              // [0x65c3fd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterName
	// FString GetParameterName(int32_t ParamIndex);                                                                            // [0x65c3f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterDescriptionCount
	// int32_t GetParameterDescriptionCount(FString ParamName);                                                                 // [0x65c38a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterCount
	// int32_t GetParameterCount();                                                                                             // [0x597e60c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterNumOptions
	// int32_t GetIntParameterNumOptions(int32_t ParamIndex);                                                                   // [0x65c2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
	// int32_t GetIntParameterDefaultValue(FString InParameterName);                                                            // [0x65c1c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
	// FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K);                                                   // [0x65c1ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
	// float GetFloatParameterDefaultValue(FString InParameterName);                                                            // [0x65c0728] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetComponentCount
	// int32_t GetComponentCount();                                                                                             // [0x65c06c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
	// FLinearColor GetColorParameterDefaultValue(FString InParameterName);                                                     // [0x65bf988] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
	// bool GetBoolParameterDefaultValue(FString InParameterName);                                                              // [0x65beb6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.FindParameter
	// int32_t FindParameter(FString Name);                                                                                     // [0x65bd570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.CreateInstance
	// UCustomizableObjectInstance* CreateInstance();                                                                           // [0x65bc07c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.DGGUI
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UDGGUI : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectInstance
/// Size: 0x0368 (0x000028 - 0x000390)
class UCustomizableObjectInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FMulticastInlineDelegate)                  BeginUpdateDelegate                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  UpdatedDelegate                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeginDestroyDelegate                                        OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<USkeletalMesh*>)                    SkeletalMeshes                                              OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   SkeletalMeshStatus                                          OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FCustomizableObjectInstanceDescriptor)     Descriptor                                                  OFFSET(get<T>, {0x158, 296, 0, 0})
	CMember(UCustomizableInstancePrivateData*)         PrivateData                                                 OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        OFFSET(get<T>, {0x338, 80, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x65d40d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);                                            // [0x65d4014] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
	// void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue);                               // [0x65d38ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOptionT
	// void SetTextureParameterSelectedOptionT(FString TextureParamName, UTexture2D* TextureValue, int32_t RangeIndex);         // [0x65d31e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
	// void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex);              // [0x65d24dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
	// void SetReplacePhysicsAssets(bool bReplaceEnabled);                                                                      // [0x65d2450] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues
	// void SetRandomValues();                                                                                                  // [0x65d2418] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue
	// void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // [0x65d1994] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject
	// void SetObject(UCustomizableObject* InObject);                                                                           // [0x65d1914] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
	// void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex);                   // [0x65d0c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
	// void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex);                      // [0x65d0504] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState
	// void SetCurrentState(FString StateName);                                                                                 // [0x65cfe54] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
	// void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue);                                  // [0x65cf764] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
	// void SetBuildParameterRelevancy(bool Value);                                                                             // [0x65cf6e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations
	// void SetBuildParameterDecorations(bool Value);                                                                           // [0x56acda8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
	// void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue);                                              // [0x65cf00c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
	// int32_t RemoveValueFromProjectorRange(FString ParamName);                                                                // [0x65ce924] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
	// int32_t RemoveValueFromIntRange(FString ParamName);                                                                      // [0x65ce268] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
	// int32_t RemoveValueFromFloatRange(FString ParamName);                                                                    // [0x65cdb5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
	// void RemoveMultilayerProjector(FName& ProjectorParamName);                                                               // [0x65cdacc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
	// void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // [0x65cd988] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
	// void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer);         // [0x65cd814] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
	// void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x65cd6e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
	// void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index);                                         // [0x65cd560] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
	// int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName);                                                         // [0x65cd480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
	// TArray<FName> MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName);                                            // [0x65cd37c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID);               // [0x65cd258] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
	// FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index);                         // [0x65cd0f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID);      // [0x65ccfd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
	// void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x65ccea4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
	// void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index);                                           // [0x65ccd1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
	// bool IsParamMultidimensional(FString ParamName);                                                                         // [0x65cb890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
	// bool IsParameterRelevant(FString ParamName);                                                                             // [0x65cc5fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
	// bool HasAnySkeletalMesh();                                                                                               // [0x65cb84c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters
	// bool HasAnyParameters();                                                                                                 // [0x65cb7fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters
	// TArray<FCustomizableObjectVectorParameterValue> GetVectorParameters();                                                   // [0x65cb7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
	// int32_t GetTextureValueRange(FString ParamName);                                                                         // [0x65cb10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
	// FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex);                                   // [0x65caa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters
	// TArray<FCustomizableObjectTextureParameterValue> GetTextureParameters();                                                 // [0x65cb0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
	// USkeletalMesh* GetSkeletalMesh(int32_t ComponentIndex);                                                                  // [0x65c92f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
	// int32_t GetProjectorValueRange(FString ParamName);                                                                       // [0x65c8c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue
	// void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // [0x65c8124] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp
	// FVector GetProjectorUp(FString ParamName, int32_t RangeIndex);                                                           // [0x65c7a30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale
	// FVector GetProjectorScale(FString ParamName, int32_t RangeIndex);                                                        // [0x65c733c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
	// FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex);                                                     // [0x65c6c48] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
	// ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex);                       // [0x65c6554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
	// TArray<FCustomizableObjectProjectorParameterValue> GetProjectorParameters();                                             // [0x65c6c2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
	// FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex);                                                    // [0x65c55a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
	// float GetProjectorAngle(FString ParamName, int32_t RangeIndex);                                                          // [0x65c4ec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetParameterDescription
	// UTexture2D* GetParameterDescription(FString ParamName, int32_t DescIndex);                                               // [0x65c31dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetNumComponents
	// int32_t GetNumComponents();                                                                                              // [0x65c31bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntValueRange
	// int32_t GetIntValueRange(FString ParamName);                                                                             // [0x65c2ae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
	// FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex);                                            // [0x65c23ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters
	// TArray<FCustomizableObjectIntParameterValue> GetIntParameters();                                                         // [0x65c2acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
	// int32_t GetFloatValueRange(FString ParamName);                                                                           // [0x65c14d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
	// float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex);                                       // [0x65c0ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters
	// TArray<FCustomizableObjectFloatParameterValue> GetFloatParameters();                                                     // [0x65c14b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
	// UCustomizableObject* GetCustomizableObject();                                                                            // [0x2fe0980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState
	// FString GetCurrentState();                                                                                               // [0x65c06e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
	// FLinearColor GetColorParameterSelectedOption(FString ColorParamName);                                                    // [0x65c0028] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
	// bool GetBuildParameterRelevancy();                                                                                       // [0x65bf970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations
	// bool GetBuildParameterDecorations();                                                                                     // [0x2a22dac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
	// bool GetBoolParameterSelectedOption(FString BoolParamName);                                                              // [0x65bf268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters
	// TArray<FCustomizableObjectBoolParameterValue> GetBoolParameters();                                                       // [0x65bf954] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP
	// UClass* GetAnimBP(int32_t ComponentIndex, FName& Slot);                                                                  // [0x65bea70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
	// FGameplayTagContainer GetAnimationGameplayTags();                                                                        // [0x65beb48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
	// void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate);                                            // [0x65be998] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
	// int32_t FindVectorParameterNameIndex(FString ParamName);                                                                 // [0x65be2dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
	// int32_t FindProjectorParameterNameIndex(FString ParamName);                                                              // [0x65bdc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
	// int32_t FindIntParameterNameIndex(FString ParamName);                                                                    // [0x65bceb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
	// int32_t FindFloatParameterNameIndex(FString ParamName);                                                                  // [0x65bc7f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
	// int32_t FindBoolParameterNameIndex(FString ParamName);                                                                   // [0x65bc13c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
	// bool CreateMultiLayerProjector(FName& ProjectorParamName);                                                               // [0x65bc0a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic
	// UCustomizableObjectInstance* CloneStatic(UObject* Outer);                                                                // [0x65bbfdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone
	// UCustomizableObjectInstance* Clone();                                                                                    // [0x65bbf8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
	// int32_t AddValueToProjectorRange(FString ParamName);                                                                     // [0x65bb8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
	// int32_t AddValueToIntRange(FString ParamName);                                                                           // [0x65bb214] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
	// int32_t AddValueToFloatRange(FString ParamName);                                                                         // [0x65bab1c] Final|Native|Public|BlueprintCallable 
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
	SMember(FCustomizableObjectExtensionData)          Data                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableSystemImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableSystemImageProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectSystem
/// Size: 0x0140 (0x000028 - 0x000168)
class UCustomizableObjectSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TArray<FPendingReleaseSkeletalMeshInfo>)   PendingReleaseSkeletalMesh                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FPendingReleaseMaterialsInfo>)      PendingReleaseMaterials                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UDefaultImageProvider*)                    DefaultImageProvider                                        OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   DefaultInstanceLODManagement                                OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   CurrentInstanceLODManagement                                OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<UTexture2D*>)                       ProtectedCachedTextures                                     OFFSET(get<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
	// void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);                                                        // [0x65f007c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTotalInstances
	// int32_t GetTotalInstances();                                                                                             // [0x65f0060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
	// int32_t GetTextureMemoryUsed();                                                                                          // [0x65f0044] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetPluginVersion
	// FString GetPluginVersion();                                                                                              // [0x65efff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
	// int32_t GetNumPendingInstances();                                                                                        // [0x65effdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumInstances
	// int32_t GetNumInstances();                                                                                               // [0x65effc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstance
	// UCustomizableObjectSystem* GetInstance();                                                                                // [0x65eff9c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
	// int32_t GetAverageBuildTime();                                                                                           // [0x65eff6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x65f017c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                     // [0x65f0100] Final|Native|Public|BlueprintCallable 
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
class FUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EUpdateResult)                             UpdateResult                                                OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedTexture
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeneratedTexture : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedMaterial
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeneratedMaterial : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGeneratedTexture>)                 Textures                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedPhysicsAssets
/// Size: 0x0040 (0x000000 - 0x000040)
class FReferencedPhysicsAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UPhysicsAsset*>)                    PhysicsAssetsToMerge                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    AdditionalPhysicsAssets                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedSkeletons
/// Size: 0x0028 (0x000000 - 0x000028)
class FReferencedSkeletons : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USkeleton*)                                Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<uint16_t>)                          SkeletonIds                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<USkeleton*>)                        SkeletonsToMerge                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableInstanceComponentData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FCustomizableInstanceComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TMap<FName, TWeakObjectPtr>)               AnimSlotToBP                                                OFFSET(get<T>, {0x8, 80, 0, 0})
	SMember(FReferencedSkeletons)                      Skeletons                                                   OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FReferencedPhysicsAssets)                  PhysicsAssets                                               OFFSET(get<T>, {0x80, 64, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimInstanceOverridePhysicsAsset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimBpGeneratedPhysicsAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAnimInstanceOverridePhysicsAsset>) AnimInstancePropertyIndexAndPhysicsAssets                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothConfigData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectClothConfigData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ClassPath                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ConfigName                                                  OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              ConfigBytes                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothingAssetData
/// Size: 0x0080 (0x000000 - 0x000080)
class FCustomizableObjectClothingAssetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FClothLODDataCommon>)               LodData                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ConfigsData                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   PhysicsAssetPath                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FGuid)                                     OriginalAssetGuid                                           OFFSET(get<T>, {0x6C, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectExtensionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizableObjectExtensionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectBoolParameterValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectBoolParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      ParameterValue                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIntParameterValue
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectIntParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ParameterValueName                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           ParameterRangeValueNames                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectFloatParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectFloatParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ParameterValue                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectTextureParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectTextureParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ParameterValue                                              OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectVectorParameterValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectVectorParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              ParameterValue                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjector
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectProjector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Direction                                                   OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Up                                                          OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 Scale                                                       OFFSET(get<T>, {0x24, 12, 0, 0})
	CMember(ECustomizableObjectProjectorType)          ProjectionType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectProjectorParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCustomizableObjectProjector)              Value                                                       OFFSET(get<T>, {0x10, 56, 0, 0})
	SMember(FString)                                   UID                                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjector>)      RangeValues                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableParamUIMetadata
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMutableParamUIMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ObjectFriendlyName                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UISectionName                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   UIOrder                                                     OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UIThumbnail                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<FString, FString>)                    ExtraInformation                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             ExtraAssets                                                 OFFSET(get<T>, {0x98, 80, 0, 0})
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.IntegerParameterUIData
/// Size: 0x0100 (0x000000 - 0x000100)
class FIntegerParameterUIData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(get<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterUIData
/// Size: 0x0170 (0x000000 - 0x000170)
class FParameterUIData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(get<T>, {0x10, 240, 0, 0})
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
class FFParameterOptionsTags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterTags
/// Size: 0x0060 (0x000000 - 0x000060)
class FParameterTags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FFParameterOptionsTags>)     ParameterOptions                                            OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.ProfileParameterDat
/// Size: 0x0070 (0x000000 - 0x000070)
class FProfileParameterDat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProfileName                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CompilationOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FCompilationOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bTextureCompression                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   OptimizationLevel                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseDiskCompilation                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelImageProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FMutableModelImageProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TextureParameterName                                        OFFSET(get<T>, {0x0, 16, 0, 0})
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
class FMutableModelParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FMutableModelParameterProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EMutableParameterType)                     Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FMutableModelParameterValue>)       PossibleValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MaskOutTexture
/// Size: 0x0018 (0x000000 - 0x000018)
class FMaskOutTexture : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<uint32_t>)                          Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAnimBpOverridePhysicsAssetsInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   AnimInstanceClass                                           OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            SourceAsset                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMorphTargetInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LodNum                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetVertexData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMorphTargetVertexData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector3f)                                 PositionDelta                                               OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 TangentZDelta                                               OFFSET(get<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   MorphIndex                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectMeshToMeshVertData : public MDKStruct
{ 
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
class FMutableSkinWeightProfileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      DefaultProfile                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int8_t)                                    DefaultProfileFromLODIndex                                  OFFSET(get<int8_t>, {0x5, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableStreamableBlock
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableStreamableBlock : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  FileIndex                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint64_t)                                  Offset                                                      OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
	DMember(uint32_t)                                  Size                                                        OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMutableRefLODInfo : public MDKStruct
{ 
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
class FMutableRefLODRenderData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsLODOptional                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bStreamedDataInlined                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMutableRefLODData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMutableRefLODInfo)                        LODInfo                                                     OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FMutableRefLODRenderData)                  RenderData                                                  OFFSET(get<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSocket
/// Size: 0x0058 (0x000000 - 0x000058)
class FMutableRefSocket : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  RelativeRotation                                            OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   RelativeScale                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bForceAlwaysAnimated                                        OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefSkeletalMeshSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnablePerPolyCollision                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DefaultUVChannelDensity                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefAssetUserData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UAssetUserData*)                           AssetUserData                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshData
/// Size: 0x0110 (0x000000 - 0x000110)
class FMutableRefSkeletalMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoftObjectPath)                           SkeletalMeshAssetPath                                       OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FMutableRefLODData>)                LodData                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 Sockets                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(get<T>, {0x40, 56, 0, 0})
	SMember(FMutableRefSkeletalMeshSettings)           Settings                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostProcessAnimInst                                         OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            ShadowPhysicsAsset                                          OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<FMutableRefAssetUserData>)          AssetUserData                                               OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableLODSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FMutableLODSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       MinQualityLevelLOD                                          OFFSET(get<T>, {0x8, 104, 0, 0})
	DMember(int32_t)                                   NumLODsInRoot                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   FirstLODAvailable                                           OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bLODStreamingEnabled                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(uint32_t)                                  NumLODsToStream                                             OFFSET(get<uint32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectIdPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Guid                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
/// Size: 0x0128 (0x000000 - 0x000128)
class FCustomizableObjectInstanceDescriptor : public MDKStruct
{ 
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
class FMultilayerProjector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersMapping                                        OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersOrder                                          OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FMultilayerProjectorLayer>)    DisableVirtualLayers                                        OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorLayer
/// Size: 0x0080 (0x000000 - 0x000080)
class FMultilayerProjectorLayer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/CustomizableObject.CustomizableObjectStreamedExtensionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectStreamedExtensionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UCustomizableObjectExtensionDataContainer*>) ContainerPath                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(UCustomizableObjectExtensionDataContainer*) Container                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseSkeletalMeshInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPendingReleaseSkeletalMeshInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    Timestamp                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseMaterialsInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FPendingReleaseMaterialsInfo : public MDKStruct
{ 
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

