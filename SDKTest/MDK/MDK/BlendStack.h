
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BlendStack.BlendStackAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/BlendStack.BlendStackAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendStackAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/BlendStack.BlendStackAnimPlayer
/// Size: 0x0390 (0x000000 - 0x000390)
class FBlendStackAnimPlayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Struct /Script/BlendStack.BlendStack_SampleGraphPoseLink
/// Size: 0x0030 (0x000000 - 0x000030)
class FBlendStack_SampleGraphPoseLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   RootNodeIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack_Standalone
/// Size: 0x0038 (0x000038 - 0x000070)
class FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FBlendStack_SampleGraphPoseLink>)   SampleGraphPoseLinks                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   MaxActiveBlends                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack
/// Size: 0x0078 (0x000070 - 0x0000E8)
class FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(UAnimationAsset*)                          AnimationAsset                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bMirrored                                                   OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     RootBoneBlendTime                                           OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     MaxTimeBeforeFreezingInnerBlends                            OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     MaxAnimationDeltaTime                                       OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(UBlendProfile*)                            BlendProfile                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(UMirrorDataTable*)                         MirrorDataTable                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0xC9, 1, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStackInput
/// Size: 0x0018 (0x000010 - 0x000028)
class FAnimNode_BlendStackInput : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   SampleIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   BlendStackAllocationIndex                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOverridePlayRate                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
};

