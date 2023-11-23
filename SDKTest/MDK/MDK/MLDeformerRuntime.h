
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: MLDeformerFramework

/// Class /Script/MLDeformerRuntime.FortMLDeformerComponent
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UFortMLDeformerComponent : public UMLDeformerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UMLDeformerAsset*)                         RequestedMLDeformerAsset                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UMeshDeformer*)                            RequestedMeshDeformerAsset                                  OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerGameFeatureData
/// Size: 0x0008 (0x0004A0 - 0x0004A8)
class UMLDeformerGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	DMember(bool)                                      bDisableWhenOwnerIsNotViewTarget                            OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	DMember(bool)                                      bShouldRampUpWeightWhenEnabled                              OFFSET(get<bool>, {0x4A1, 1, 0, 0})
	DMember(float)                                     WeightIncreasePerSecond                                     OFFSET(get<float>, {0x4A4, 4, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerAssetMapping
/// Size: 0x0130 (0x000030 - 0x000160)
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<TWeakObjectPtr>)                    CharacterItemDefinitionToMLDeformerAssetMappingKeys         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CharacterItemDefinitionToMLDeformerAssetMappingValues       OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CharacterPartToMLDeformerAssetMappingKeys                   OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CharacterPartToMLDeformerAssetMappingValues                 OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      MLDeformerToMeshDeformerAssetMap                            OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      CharacterItemDefinitionToMLDeformerAssetMap                 OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      CharacterPartToMLDeformerAssetMap                           OFFSET(get<T>, {0x110, 80, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerComponentManager
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UMLDeformerComponentManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

