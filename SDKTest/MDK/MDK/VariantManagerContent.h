
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UBlueprintGeneratedClass*)                 DirectorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<UVariantSet*>)                      VariantSets                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// UVariantSet* GetVariantSetByName(FString VariantSetName);                                                                // [0xa453448] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                                     // [0xa4533a8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x5c31240] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ALevelVariantSetsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FSoftObjectPath)                           LevelVariantSets                                            OFFSET(get<T>, {0x290, 24, 0, 0})
	CMember(TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*>) DirectorInstances                 OFFSET(get<T>, {0x2A8, 80, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0xa455544] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0xa45543c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(ULevelVariantSets* InVariantSets);                                                              // [0xa453e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                      // [0xa452ab8] Final|Native|Public|BlueprintCallable 
/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UPropertyValue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<Properties>)                        Properties                                                  OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           PropertyIndices                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCapturedPropSegment>)              CapturedPropSegments                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   FullDisplayString                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     PropertySetterName                                          OFFSET(get<T>, {0xC8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	DMember(bool)                                      bHasRecordedData                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(UClass*)                                   LeafPropertyClass                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<char>)                              ValueBytes                                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(EPropertyValueCategory)                    PropCategory                                                OFFSET(get<T>, {0x148, 1, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0x9765ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0xa452be4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0xa452a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueTransform : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueVisibility : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueColor : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueMaterial : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueOption : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueSoftObject : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASwitchActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(USceneComponent*)                          SceneComponent                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   LastSelectedOption                                          OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0xa453bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0x5b584e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0xa452b5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000028 - 0x000080)
class UVariant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FVariantDependency>)                Dependencies                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(TArray<UVariantObjectBinding*>)            ObjectBindings                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UTexture2D*)                               Thumbnail                                                   OFFSET(get<T>, {0x78, 8, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0xa455428] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0xa455310] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xa454558] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x2d79908] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xa453ed0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xa453d18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0xa453c30] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0xa453b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// UTexture2D* GetThumbnail();                                                                                              // [0x89011e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// UVariantSet* GetParent();                                                                                                // [0xa452b9c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x597e8bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0x8e11980] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xa452a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);                     // [0xa452838] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0xa4527a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// AActor* GetActor(int32_t ActorIndex);                                                                                    // [0xa4526e8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0xa452668] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0xa4525bc] Final|Native|Public|HasOutParms 
/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0060 (0x000028 - 0x000088)
class UVariantObjectBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   CachedActorLabel                                            OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPtr                                                   OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(TLazyObjectPtr<UObject*>)                  LazyObjectPtr                                               OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(TArray<UPropertyValue*>)                   CapturedProperties                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FFunctionCaller>)                   FunctionCallers                                             OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000028 - 0x000078)
class UVariantSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<UVariant*>)                         Variants                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(UTexture2D*)                               Thumbnail                                                   OFFSET(get<T>, {0x70, 8, 0, 0})
};



	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0xa45539c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xa454c34] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x2d79908] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xa454214] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xa453db4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// UVariant* GetVariantByName(FString VariantName);                                                                         // [0xa452cd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// UVariant* GetVariant(int32_t VariantIndex);                                                                              // [0xa452c30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// UTexture2D* GetThumbnail();                                                                                              // [0x59603a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// ULevelVariantSets* GetParent();                                                                                          // [0xa452bc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0xa452b48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xa452a58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0004 (0x000000 - 0x000004)
class FFunctionCaller : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
class FCapturedPropSegment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   PropertyName                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0048 (0x000000 - 0x000048)
class FVariantDependency : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UVariantSet*>)              VariantSet                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UVariant*>)                 Variant                                                     OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined0                                               = 0,
	EPropertyValueCategory__Generic1                                                 = 1,
	EPropertyValueCategory__RelativeLocation2                                        = 2,
	EPropertyValueCategory__RelativeRotation3                                        = 4,
	EPropertyValueCategory__RelativeScale3D4                                         = 8,
	EPropertyValueCategory__Visibility5                                              = 16,
	EPropertyValueCategory__Material6                                                = 32,
	EPropertyValueCategory__Color7                                                   = 64,
	EPropertyValueCategory__Option8                                                  = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX9                              = 129
};

