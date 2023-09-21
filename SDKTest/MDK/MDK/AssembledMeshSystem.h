
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/AssembledMeshSystem.AssembledMeshCoordinatorComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UAssembledMeshCoordinatorComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AssembledMeshSystem.AssembledMeshSchema
/// Size: 0x0178 (0x000030 - 0x0001A8)
class UAssembledMeshSchema : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FGameplayTag)                              MeshSchemaTag                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TWeakObjectPtr<UCustomizableObjectInstance*>) CustomizableObjectInstance                               OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UCustomizableObject*>)      CustomizableObject                                          OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(TMap<FString, FString>)                    SelectedIntParams                                           OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, float>)                      SelectedFloatParams                                         OFFSET(get<T>, {0xC8, 80, 0, 0})
	SMember(FAssembledMeshAttachmentRules)             AttachmentRules                                             OFFSET(getStruct<T>, {0x118, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimClass                                                   OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SoundLibraryTags                                            OFFSET(getStruct<T>, {0x188, 32, 0, 0})
};

/// Class /Script/AssembledMeshSystem.AssembledMeshUserComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UAssembledMeshUserComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<UAssembledMeshSchema*>)             MeshParts                                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FAssembledComponentReferences>)     MeshPartComponents                                          OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bAssignMeshPartsOnBeginPlay                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.SetMeshPart
	// void SetMeshPart(UAssembledMeshSchema* InMeshPart);                                                                      // [0x56ba1a4] Final|Native|Private|BlueprintCallable 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.OnRep_MeshParts
	// void OnRep_MeshParts();                                                                                                  // [0x65fec08] Final|Native|Private 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GetMeshPart
	// UAssembledMeshSchema* GetMeshPart();                                                                                     // [0x5cdc07c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GetAttachToComponent
	// USkeletalMeshComponent* GetAttachToComponent();                                                                          // [0x65feae8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GatherAndAssignAssembledMeshParts
	// void GatherAndAssignAssembledMeshParts();                                                                                // [0x1284298] Native|Public        
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.CustomizationCompleted
	// void CustomizationCompleted(int32_t PartIndex);                                                                          // [0x65fea68] Final|Native|Private 
};

/// Struct /Script/AssembledMeshSystem.AssembledMeshAttachmentRules
/// Size: 0x0050 (0x000000 - 0x000050)
class FAssembledMeshAttachmentRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   AttachOffset                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  AttachRotation                                              OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   AttachScale                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.BaseParamData
/// Size: 0x0010 (0x000000 - 0x000010)
class FBaseParamData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ParamName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.IntParamData
/// Size: 0x0010 (0x000010 - 0x000020)
class FIntParamData : public FBaseParamData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FString>)                           ParamOptions                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.FloatParamData
/// Size: 0x0010 (0x000010 - 0x000020)
class FFloatParamData : public FBaseParamData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinFloatValue                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxFloatValue                                               OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.AssembledComponentReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FAssembledComponentReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USkeletalMeshComponent*)                   SkeletalMeshComponent                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UCustomizableSkeletalComponent*)           CustomizableComponent                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

