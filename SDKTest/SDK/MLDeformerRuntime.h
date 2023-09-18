/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MLDeformerRuntime.

/// Class /Script/MLDeformerRuntime.FortMLDeformerComponent
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UFortMLDeformerComponent : public UMLDeformerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(UMLDeformerAsset*)                         RequestedMLDeformerAsset                                    ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UMeshDeformer*)                            RequestedMeshDeformerAsset                                  ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerGameFeatureData
/// Size: 0x0008 (0x000498 - 0x0004A0)
class UMLDeformerGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	DMember(bool)                                      bDisableWhenOwnerIsNotViewTarget                            ___ OFFSET(get<bool>, {0x498, 1, 0, 0})
	DMember(bool)                                      bShouldRampUpWeightWhenEnabled                              ___ OFFSET(get<bool>, {0x499, 1, 0, 0})
	DMember(float)                                     WeightIncreasePerSecond                                     ___ OFFSET(get<float>, {0x49C, 4, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerAssetMapping
/// Size: 0x00F0 (0x000030 - 0x000120)
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      CharacterItemDefinitionToMLDeformerAssetMap                 ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      CharacterPartToMLDeformerAssetMap                           ___ OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      MLDeformerToMeshDeformerAssetMap                            ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Class /Script/MLDeformerRuntime.MLDeformerComponentManager
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UMLDeformerComponentManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

