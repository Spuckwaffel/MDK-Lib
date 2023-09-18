/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AssembledMeshSystem.

/// Struct /Script/AssembledMeshSystem.AssembledMeshAttachmentRules
/// Size: 0x0050 (0x000000 - 0x000050)
class FAssembledMeshAttachmentRules : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     AttachSocketName                                            ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   AttachOffset                                                ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  AttachRotation                                              ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   AttachScale                                                 ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.BaseParamData
/// Size: 0x0010 (0x000000 - 0x000010)
class FBaseParamData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ParamName                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.IntParamData
/// Size: 0x0010 (0x000010 - 0x000020)
class FIntParamData : public FBaseParamData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FString>)                           ParamOptions                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.FloatParamData
/// Size: 0x0010 (0x000010 - 0x000020)
class FFloatParamData : public FBaseParamData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinFloatValue                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxFloatValue                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/AssembledMeshSystem.AssembledComponentReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FAssembledComponentReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USkeletalMeshComponent*)                   SkeletalMeshComponent                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UCustomizableSkeletalComponent*)           CustomizableComponent                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

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
	SMember(FGameplayTag)                              MeshSchemaTag                                               ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(TWeakObjectPtr<UCustomizableObjectInstance*>) CustomizableObjectInstance                               ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UCustomizableObject*>)      CustomizableObject                                          ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(TMap<FString, FString>)                    SelectedIntParams                                           ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, float>)                      SelectedFloatParams                                         ___ OFFSET(get<T>, {0xC8, 80, 0, 0})
	SMember(FAssembledMeshAttachmentRules)             AttachmentRules                                             ___ OFFSET(get<T>, {0x118, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimClass                                                   ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SoundLibraryTags                                            ___ OFFSET(get<T>, {0x188, 32, 0, 0})
};

/// Class /Script/AssembledMeshSystem.AssembledMeshUserComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UAssembledMeshUserComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<UAssembledMeshSchema*>)             MeshParts                                                   ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FAssembledComponentReferences>)     MeshPartComponents                                          ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bAssignMeshPartsOnBeginPlay                                 ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

