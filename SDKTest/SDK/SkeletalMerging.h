/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SkeletalMerging.

/// Struct /Script/SkeletalMerging.SkeletalMeshMergeParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FSkeletalMeshMergeParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSkelMeshMergeSectionMapping>)      MeshSectionMappings                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSkelMeshMergeMeshUVTransforms>)    UVTransformsPerMesh                                         ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<USkeletalMesh*>)                    MeshesToMerge                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   StripTopLODS                                                ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bNeedsCpuAccess                                             ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bSkeletonBefore                                             ___ OFFSET(get<bool>, {0x34, 1, 1, 1})
	CMember(USkeleton*)                                Skeleton                                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/SkeletalMerging.SkeletonMergeParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FSkeletonMergeParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<USkeleton*>)                        SkeletonsToMerge                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bMergeSockets                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bMergeVirtualBones                                          ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bMergeCurveNames                                            ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bMergeBlendProfiles                                         ___ OFFSET(get<bool>, {0x13, 1, 0, 0})
	DMember(bool)                                      bMergeAnimSlotGroups                                        ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bCheckSkeletonsCompatibility                                ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Class /Script/SkeletalMerging.SkeletalMergingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

